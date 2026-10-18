0083df40  MOV EDX,dword ptr [ESP + 0x8]
0083df44  MOV EAX,dword ptr [ESP + 0xc]
0083df48  MOV CL,byte ptr [EAX]
0083df4a  SUB ESP,0x8
0083df4d  PUSH EBP
0083df4e  PUSH EDI
0083df4f  DEC EDX
0083df50  XOR EBP,EBP
0083df52  XOR EDI,EDI
0083df54  TEST CL,CL
0083df56  MOV dword ptr [ESP + 0x18],EDX
0083df5a  JZ 0x0083dfd1
0083df5c  PUSH EBX
0083df5d  MOV BL,byte ptr [ESP + 0x24]
0083df61  PUSH ESI
0083df62  CMP EBP,dword ptr [ESP + 0x20]
0083df66  JGE 0x0083dfcf
0083df68  MOV ECX,dword ptr [ESP + 0x24]
0083df6c  ADD ECX,EDI
0083df6e  LEA ESI,[ESP + 0x10]
0083df72  CALL 0x0083db90
0083df77  MOV ECX,dword ptr [ESP + 0x2c]
0083df7b  MOV ESI,dword ptr [ECX + 0x4]
0083df7e  ADD EDI,EAX
0083df80  MOV EAX,dword ptr [ESP + 0x1c]
0083df84  MOV EDX,ECX
0083df86  ADD ECX,0x4
0083df89  ADD EAX,EBP
0083df8b  TEST ESI,ESI
0083df8d  MOV dword ptr [ESP + 0x14],EAX
0083df91  JZ 0x0083dfb8
0083df93  MOV SI,word ptr [ESP + 0x10]
0083df98  MOVZX EBX,SI
0083df9b  JMP 0x0083dfa0
0083dfa0  CMP EBX,dword ptr [EDX]
0083dfa2  JC 0x0083dfa8
0083dfa4  CMP EBX,dword ptr [ECX]
0083dfa6  JBE 0x0083dfe2
0083dfa8  ADD EDX,0xc
0083dfab  CMP dword ptr [EDX + 0x4],0x0
0083dfaf  LEA ECX,[EDX + 0x4]
0083dfb2  JNZ 0x0083dfa0
0083dfb4  MOV BL,byte ptr [ESP + 0x28]
0083dfb8  TEST BL,BL
0083dfba  JZ 0x0083dfbf
0083dfbc  MOV byte ptr [EAX],BL
0083dfbe  INC EAX
0083dfbf  SUB EAX,dword ptr [ESP + 0x14]
0083dfc3  ADD EBP,EAX
0083dfc5  MOV EAX,dword ptr [ESP + 0x24]
0083dfc9  CMP byte ptr [EDI + EAX*0x1],0x0
0083dfcd  JNZ 0x0083df62
0083dfcf  POP ESI
0083dfd0  POP EBX
0083dfd1  MOV ECX,dword ptr [ESP + 0x14]
0083dfd5  POP EDI
0083dfd6  MOV byte ptr [ECX + EBP*0x1],0x0
0083dfda  LEA EAX,[EBP + 0x1]
0083dfdd  POP EBP
0083dfde  ADD ESP,0x8
0083dfe1  RET
0083dfe2  SUB SI,word ptr [EDX]
0083dfe5  MOV EDX,dword ptr [EDX + 0x8]
0083dfe8  MOV BL,byte ptr [ESP + 0x28]
0083dfec  MOVZX ECX,SI
0083dfef  MOV CL,byte ptr [ECX + EDX*0x1]
0083dff2  CMP CL,0xff
0083dff5  JNZ 0x0083dffb
0083dff7  TEST BL,BL
0083dff9  JNZ 0x0083dfbc
0083dffb  MOV byte ptr [EAX],CL
0083dffd  JMP 0x0083dfbe
