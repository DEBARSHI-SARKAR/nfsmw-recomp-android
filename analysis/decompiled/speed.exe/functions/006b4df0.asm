006b4df0  PUSH ECX
006b4df1  MOV EDX,dword ptr [ECX + 0x4]
006b4df4  MOV EAX,dword ptr [EDX + 0x4]
006b4df7  PUSH EBX
006b4df8  MOV BL,byte ptr [EAX + 0x15]
006b4dfb  TEST BL,BL
006b4dfd  PUSH ESI
006b4dfe  PUSH EDI
006b4dff  MOV EDI,dword ptr [ESP + 0x18]
006b4e03  JNZ 0x006b4e1c
006b4e05  MOV ESI,dword ptr [EDI]
006b4e07  CMP dword ptr [EAX + 0xc],ESI
006b4e0a  JNC 0x006b4e11
006b4e0c  MOV EAX,dword ptr [EAX + 0x8]
006b4e0f  JMP 0x006b4e15
006b4e11  MOV EDX,EAX
006b4e13  MOV EAX,dword ptr [EAX]
006b4e15  MOV BL,byte ptr [EAX + 0x15]
006b4e18  TEST BL,BL
006b4e1a  JZ 0x006b4e07
006b4e1c  MOV EAX,dword ptr [ECX + 0x4]
006b4e1f  CMP EDX,EAX
006b4e21  MOV dword ptr [ESP + 0x18],EDX
006b4e25  JZ 0x006b4e41
006b4e27  MOV ECX,dword ptr [EDI]
006b4e29  CMP ECX,dword ptr [EDX + 0xc]
006b4e2c  JC 0x006b4e41
006b4e2e  LEA EAX,[ESP + 0x18]
006b4e32  MOV EDX,dword ptr [EAX]
006b4e34  MOV EAX,dword ptr [ESP + 0x14]
006b4e38  POP EDI
006b4e39  POP ESI
006b4e3a  MOV dword ptr [EAX],EDX
006b4e3c  POP EBX
006b4e3d  POP ECX
006b4e3e  RET 0x8
006b4e41  MOV dword ptr [ESP + 0xc],EAX
006b4e45  LEA EAX,[ESP + 0xc]
006b4e49  MOV EDX,dword ptr [EAX]
006b4e4b  MOV EAX,dword ptr [ESP + 0x14]
006b4e4f  POP EDI
006b4e50  POP ESI
006b4e51  MOV dword ptr [EAX],EDX
006b4e53  POP EBX
006b4e54  POP ECX
006b4e55  RET 0x8
