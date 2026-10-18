0065ec70  PUSH ECX
0065ec71  MOV EDX,dword ptr [ECX + 0x4]
0065ec74  MOV EAX,dword ptr [EDX + 0x4]
0065ec77  PUSH EBX
0065ec78  MOV BL,byte ptr [EAX + 0x1d]
0065ec7b  TEST BL,BL
0065ec7d  PUSH ESI
0065ec7e  PUSH EDI
0065ec7f  MOV EDI,dword ptr [ESP + 0x18]
0065ec83  JNZ 0x0065ec9c
0065ec85  MOV ESI,dword ptr [EDI]
0065ec87  CMP dword ptr [EAX + 0xc],ESI
0065ec8a  JNC 0x0065ec91
0065ec8c  MOV EAX,dword ptr [EAX + 0x8]
0065ec8f  JMP 0x0065ec95
0065ec91  MOV EDX,EAX
0065ec93  MOV EAX,dword ptr [EAX]
0065ec95  MOV BL,byte ptr [EAX + 0x1d]
0065ec98  TEST BL,BL
0065ec9a  JZ 0x0065ec87
0065ec9c  MOV EAX,dword ptr [ECX + 0x4]
0065ec9f  CMP EDX,EAX
0065eca1  MOV dword ptr [ESP + 0x18],EDX
0065eca5  JZ 0x0065ecc1
0065eca7  MOV ECX,dword ptr [EDI]
0065eca9  CMP ECX,dword ptr [EDX + 0xc]
0065ecac  JC 0x0065ecc1
0065ecae  LEA EAX,[ESP + 0x18]
0065ecb2  MOV EDX,dword ptr [EAX]
0065ecb4  MOV EAX,dword ptr [ESP + 0x14]
0065ecb8  POP EDI
0065ecb9  POP ESI
0065ecba  MOV dword ptr [EAX],EDX
0065ecbc  POP EBX
0065ecbd  POP ECX
0065ecbe  RET 0x8
0065ecc1  MOV dword ptr [ESP + 0xc],EAX
0065ecc5  LEA EAX,[ESP + 0xc]
0065ecc9  MOV EDX,dword ptr [EAX]
0065eccb  MOV EAX,dword ptr [ESP + 0x14]
0065eccf  POP EDI
0065ecd0  POP ESI
0065ecd1  MOV dword ptr [EAX],EDX
0065ecd3  POP EBX
0065ecd4  POP ECX
0065ecd5  RET 0x8
