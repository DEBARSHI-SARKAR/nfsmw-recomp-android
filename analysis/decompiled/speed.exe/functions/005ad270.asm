005ad270  SUB ESP,0x10
005ad273  MOV EAX,dword ptr [ESP + 0x18]
005ad277  FLD float ptr [EAX]
005ad279  MOV ECX,dword ptr [ESP + 0x1c]
005ad27d  FSUB float ptr [ECX]
005ad27f  FSTP float ptr [ESP]
005ad282  MOV EDX,dword ptr [ESP]
005ad285  FLD float ptr [EAX + 0x4]
005ad288  FSUB float ptr [ECX + 0x4]
005ad28b  FSTP float ptr [ESP + 0x4]
005ad28f  FLD float ptr [EAX + 0x8]
005ad292  FSUB float ptr [ECX + 0x8]
005ad295  FSTP float ptr [ESP + 0x8]
005ad299  FLD float ptr [EAX + 0xc]
005ad29c  MOV EAX,dword ptr [ESP + 0x14]
005ad2a0  FSUB float ptr [ECX + 0xc]
005ad2a3  MOV ECX,EAX
005ad2a5  MOV dword ptr [ECX],EDX
005ad2a7  MOV EDX,dword ptr [ESP + 0x4]
005ad2ab  MOV dword ptr [ECX + 0x4],EDX
005ad2ae  FSTP float ptr [ESP + 0xc]
005ad2b2  MOV EDX,dword ptr [ESP + 0x8]
005ad2b6  MOV dword ptr [ECX + 0x8],EDX
005ad2b9  MOV EDX,dword ptr [ESP + 0xc]
005ad2bd  MOV dword ptr [ECX + 0xc],EDX
005ad2c0  ADD ESP,0x10
005ad2c3  RET
