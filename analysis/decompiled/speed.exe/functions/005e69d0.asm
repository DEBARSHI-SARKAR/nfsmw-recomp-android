005e69d0  PUSH 0x0
005e69d2  PUSH 0xc
005e69d4  MOV ECX,0x925b30
005e69d9  CALL 0x005d29d0
005e69de  TEST EAX,EAX
005e69e0  JZ 0x005e69f8
005e69e2  MOV ECX,dword ptr [ESP + 0x4]
005e69e6  MOV EDX,dword ptr [ESP + 0x8]
005e69ea  MOV dword ptr [EAX],ECX
005e69ec  MOV ECX,dword ptr [ESP + 0xc]
005e69f0  MOV dword ptr [EAX + 0x4],EDX
005e69f3  MOV EDX,dword ptr [ECX]
005e69f5  MOV dword ptr [EAX + 0x8],EDX
005e69f8  RET 0xc
