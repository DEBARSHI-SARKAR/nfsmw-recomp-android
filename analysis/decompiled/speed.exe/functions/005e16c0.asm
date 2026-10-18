005e16c0  MOV EAX,dword ptr [ECX]
005e16c2  MOV EAX,dword ptr [EAX + 0x24]
005e16c5  MOV dword ptr [ECX],EAX
005e16c7  CMP EAX,dword ptr [0x0091dff4]
005e16cd  JZ 0x005e16ea
005e16cf  NOP
005e16d0  MOV EDX,dword ptr [ECX]
005e16d2  MOVZX EAX,word ptr [EDX + 0x18]
005e16d6  TEST dword ptr [ECX + 0x4],EAX
005e16d9  JNZ 0x005e16f0
005e16db  MOV EDX,dword ptr [ECX]
005e16dd  MOV EAX,dword ptr [EDX + 0x24]
005e16e0  MOV dword ptr [ECX],EAX
005e16e2  CMP EAX,dword ptr [0x0091dff4]
005e16e8  JNZ 0x005e16d0
005e16ea  MOV dword ptr [ECX],0x0
005e16f0  RET
