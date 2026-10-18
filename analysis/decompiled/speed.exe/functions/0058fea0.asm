0058fea0  PUSH ECX
0058fea1  PUSH EBX
0058fea2  PUSH EBP
0058fea3  PUSH ESI
0058fea4  PUSH EDI
0058fea5  MOV ESI,ECX
0058fea7  CALL 0x0057fb50
0058feac  LEA ECX,[ESI + 0x24]
0058feaf  MOV dword ptr [ESP + 0x10],0xb
0058feb7  MOV BL,0x1
0058feb9  LEA ESP,[ESP]
0058fec0  LEA EDX,[ECX + 0x8]
0058fec3  MOV EBP,EDX
0058fec5  MOV byte ptr [ECX + -0x1],0x3
0058fec9  MOV byte ptr [ECX],BL
0058fecb  MOV byte ptr [ECX + 0x1],BL
0058fece  MOV byte ptr [ECX + 0x2],BL
0058fed1  MOV byte ptr [ECX + 0x3],BL
0058fed4  MOV byte ptr [ECX + 0x4],0x0
0058fed8  MOV byte ptr [ECX + -0x3],0x0
0058fedc  MOV byte ptr [ECX + -0x4],0x2
0058fee0  MOV byte ptr [ECX + -0x2],0x0
0058fee4  XOR EDI,EDI
0058fee6  MOV dword ptr [EBP],EDI
0058fee9  MOV dword ptr [EBP + 0x4],EDI
0058feec  MOV dword ptr [EDX],EAX
0058feee  MOV EDX,dword ptr [ESP + 0x10]
0058fef2  MOV byte ptr [ECX + 0x5],0x3
0058fef6  MOV dword ptr [ECX + 0xc],EAX
0058fef9  ADD ECX,0x18
0058fefc  DEC EDX
0058fefd  MOV dword ptr [ESP + 0x10],EDX
0058ff01  JNZ 0x0058fec0
0058ff03  MOV AL,byte ptr [ESI + 0x6b]
0058ff06  POP EDI
0058ff07  MOV byte ptr [ESI + 0x20],BL
0058ff0a  MOV byte ptr [ESI + 0x50],BL
0058ff0d  MOV byte ptr [ESI + 0x98],BL
0058ff13  MOV byte ptr [ESI + 0x80],BL
0058ff19  MOV byte ptr [ESI + 0x68],AL
0058ff1c  MOV byte ptr [ESI + 0x83],0x0
0058ff23  POP ESI
0058ff24  POP EBP
0058ff25  POP EBX
0058ff26  POP ECX
0058ff27  RET
