006b4e60  PUSH ECX
006b4e61  MOV EDX,dword ptr [ECX + 0x4]
006b4e64  MOV EAX,dword ptr [EDX + 0x4]
006b4e67  PUSH EBX
006b4e68  MOV BL,byte ptr [EAX + 0x15]
006b4e6b  TEST BL,BL
006b4e6d  PUSH ESI
006b4e6e  PUSH EDI
006b4e6f  MOV EDI,dword ptr [ESP + 0x18]
006b4e73  JNZ 0x006b4e8c
006b4e75  MOV ESI,dword ptr [EDI]
006b4e77  CMP dword ptr [EAX + 0xc],ESI
006b4e7a  JNC 0x006b4e81
006b4e7c  MOV EAX,dword ptr [EAX + 0x8]
006b4e7f  JMP 0x006b4e85
006b4e81  MOV EDX,EAX
006b4e83  MOV EAX,dword ptr [EAX]
006b4e85  MOV BL,byte ptr [EAX + 0x15]
006b4e88  TEST BL,BL
006b4e8a  JZ 0x006b4e77
006b4e8c  MOV EAX,dword ptr [ECX + 0x4]
006b4e8f  CMP EDX,EAX
006b4e91  MOV dword ptr [ESP + 0x18],EDX
006b4e95  JZ 0x006b4eb1
006b4e97  MOV ECX,dword ptr [EDI]
006b4e99  CMP ECX,dword ptr [EDX + 0xc]
006b4e9c  JC 0x006b4eb1
006b4e9e  LEA EAX,[ESP + 0x18]
006b4ea2  MOV EDX,dword ptr [EAX]
006b4ea4  MOV EAX,dword ptr [ESP + 0x14]
006b4ea8  POP EDI
006b4ea9  POP ESI
006b4eaa  MOV dword ptr [EAX],EDX
006b4eac  POP EBX
006b4ead  POP ECX
006b4eae  RET 0x8
006b4eb1  MOV dword ptr [ESP + 0xc],EAX
006b4eb5  LEA EAX,[ESP + 0xc]
006b4eb9  MOV EDX,dword ptr [EAX]
006b4ebb  MOV EAX,dword ptr [ESP + 0x14]
006b4ebf  POP EDI
006b4ec0  POP ESI
006b4ec1  MOV dword ptr [EAX],EDX
006b4ec3  POP EBX
006b4ec4  POP ECX
006b4ec5  RET 0x8
