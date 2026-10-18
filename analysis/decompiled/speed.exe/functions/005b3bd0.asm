005b3bd0  MOV EAX,dword ptr [ESP + 0x4]
005b3bd4  TEST EAX,EAX
005b3bd6  JZ 0x005b3c18
005b3bd8  CMP EAX,dword ptr [ECX + 0x8]
005b3bdb  JNZ 0x005b3be3
005b3bdd  MOV EDX,dword ptr [EAX + 0x4]
005b3be0  MOV dword ptr [ECX + 0x8],EDX
005b3be3  CMP EAX,dword ptr [ECX + 0xc]
005b3be6  JNZ 0x005b3bee
005b3be8  MOV EDX,dword ptr [EAX + 0x8]
005b3beb  MOV dword ptr [ECX + 0xc],EDX
005b3bee  MOV EDX,dword ptr [EAX + 0x8]
005b3bf1  TEST EDX,EDX
005b3bf3  PUSH ESI
005b3bf4  JZ 0x005b3bfc
005b3bf6  MOV ESI,dword ptr [EAX + 0x4]
005b3bf9  MOV dword ptr [EDX + 0x4],ESI
005b3bfc  MOV EDX,dword ptr [EAX + 0x4]
005b3bff  TEST EDX,EDX
005b3c01  JZ 0x005b3c09
005b3c03  MOV ESI,dword ptr [EAX + 0x8]
005b3c06  MOV dword ptr [EDX + 0x8],ESI
005b3c09  MOV EDX,0xabadcafe
005b3c0e  MOV dword ptr [EAX + 0x4],EDX
005b3c11  MOV dword ptr [EAX + 0x8],EDX
005b3c14  DEC dword ptr [ECX + 0x4]
005b3c17  POP ESI
005b3c18  RET 0x4
