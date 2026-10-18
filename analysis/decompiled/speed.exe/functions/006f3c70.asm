006f3c70  PUSH 0x0
006f3c72  PUSH 0x18
006f3c74  MOV ECX,0x925b30
006f3c79  CALL 0x005d29d0
006f3c7e  TEST EAX,EAX
006f3c80  JZ 0x006f3cb0
006f3c82  MOV ECX,dword ptr [ESP + 0x4]
006f3c86  MOV EDX,dword ptr [ESP + 0x8]
006f3c8a  MOV dword ptr [EAX],ECX
006f3c8c  MOV ECX,dword ptr [ESP + 0xc]
006f3c90  MOV dword ptr [EAX + 0x8],ECX
006f3c93  MOV ECX,dword ptr [ESP + 0x10]
006f3c97  MOV dword ptr [EAX + 0x4],EDX
006f3c9a  MOV EDX,dword ptr [ECX]
006f3c9c  MOV dword ptr [EAX + 0xc],EDX
006f3c9f  MOV ECX,dword ptr [ECX + 0x4]
006f3ca2  MOV DL,byte ptr [ESP + 0x14]
006f3ca6  MOV dword ptr [EAX + 0x10],ECX
006f3ca9  MOV byte ptr [EAX + 0x14],DL
006f3cac  MOV byte ptr [EAX + 0x15],0x0
006f3cb0  RET 0x14
