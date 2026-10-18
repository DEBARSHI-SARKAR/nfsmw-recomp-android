0081deee  PUSH EBP
0081deef  MOV EBP,ESP
0081def1  SUB ESP,0xc
0081def4  XOR EDX,EDX
0081def6  CMP byte ptr [0x009c2188],DL
0081defc  JNZ 0x0081df03
0081defe  PUSH -0xa
0081df00  POP EAX
0081df01  LEAVE
0081df02  RET
0081df03  MOV EAX,dword ptr [EBP + 0x8]
0081df06  MOV ECX,dword ptr [EAX*0x4 + 0x9c1f44]
0081df0d  CMP byte ptr [ECX + 0x62],DL
0081df10  PUSH ESI
0081df11  PUSH EDI
0081df12  JBE 0x0081df2e
0081df14  LEA EAX,[ECX + 0x34]
0081df17  MOVSX ESI,word ptr [ECX + 0x40]
0081df1b  MOVSX EDI,word ptr [EAX]
0081df1e  DEC ESI
0081df1f  CMP EDI,ESI
0081df21  JGE 0x0081df7d
0081df23  MOVZX ESI,byte ptr [ECX + 0x62]
0081df27  INC EDX
0081df28  INC EAX
0081df29  INC EAX
0081df2a  CMP EDX,ESI
0081df2c  JL 0x0081df17
0081df2e  MOVSX EAX,word ptr [ECX + 0x46]
0081df32  MOV ESI,dword ptr [EBP + 0xc]
0081df35  AND dword ptr [EBP + -0x8],0x0
0081df39  SHL EAX,0x5
0081df3c  LEA EAX,[EAX + ECX*0x1 + 0x7c]
0081df40  MOV EDX,dword ptr [EAX + 0x4]
0081df43  XOR EDX,dword ptr [ESI + 0x4]
0081df46  MOV EDI,0x7fffffff
0081df4b  AND EDX,EDI
0081df4d  XOR dword ptr [EAX + 0x4],EDX
0081df50  MOV EDX,dword ptr [EAX + 0x4]
0081df53  PUSH EBX
0081df54  MOV EBX,dword ptr [ESI + 0x4]
0081df57  SHR EBX,0x1f
0081df5a  AND EDX,EDI
0081df5c  SHL EBX,0x1f
0081df5f  OR EBX,EDX
0081df61  MOV dword ptr [EAX + 0x4],EBX
0081df64  MOV EDX,dword ptr [ECX + 0x4]
0081df67  MOV dword ptr [EAX],EDX
0081df69  CMP byte ptr [ECX + 0x62],0x0
0081df6d  JBE 0x0081dfad
0081df6f  LEA EBX,[ESI + 0xc]
0081df72  LEA EDX,[ECX + 0x34]
0081df75  ADD EAX,0x8
0081df78  MOV dword ptr [EBP + -0x4],EBX
0081df7b  JMP 0x0081df85
0081df7d  PUSH -0xd
0081df7f  POP EAX
0081df80  JMP 0x0081dfdd
0081df82  MOV EAX,dword ptr [EBP + -0xc]
0081df85  MOV EBX,dword ptr [EBP + -0x4]
0081df88  MOV EBX,dword ptr [EBX]
0081df8a  ADD dword ptr [EBP + -0x4],0x4
0081df8e  MOV dword ptr [EAX],EBX
0081df90  XOR EBX,EBX
0081df92  MOV BX,word ptr [EDX]
0081df95  ADD EAX,0x4
0081df98  MOV dword ptr [EBP + -0xc],EAX
0081df9b  INC EBX
0081df9c  INC dword ptr [EBP + -0x8]
0081df9f  MOV word ptr [EDX],BX
0081dfa2  MOVZX EAX,byte ptr [ECX + 0x62]
0081dfa6  INC EDX
0081dfa7  INC EDX
0081dfa8  CMP dword ptr [EBP + -0x8],EAX
0081dfab  JL 0x0081df82
0081dfad  MOV EAX,dword ptr [ESI + 0x4]
0081dfb0  MOV EDX,dword ptr [ECX + 0x48]
0081dfb3  AND EAX,EDI
0081dfb5  ADD EAX,EDX
0081dfb7  XOR EDX,EDX
0081dfb9  MOV dword ptr [ECX + 0x48],EAX
0081dfbc  MOV EAX,dword ptr [ECX + 0x4]
0081dfbf  ADD dword ptr [ECX + 0x4],0x1
0081dfc3  MOV DX,word ptr [ECX + 0x46]
0081dfc7  POP EBX
0081dfc8  INC EDX
0081dfc9  MOV word ptr [ECX + 0x46],DX
0081dfcd  MOV DX,word ptr [ECX + 0x40]
0081dfd1  CMP word ptr [ECX + 0x46],DX
0081dfd5  JL 0x0081dfdd
0081dfd7  MOV word ptr [ECX + 0x46],0x0
0081dfdd  POP EDI
0081dfde  POP ESI
0081dfdf  LEAVE
0081dfe0  RET
