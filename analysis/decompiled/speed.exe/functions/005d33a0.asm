005d33a0  MOV EDX,dword ptr [ECX + 0x4]
005d33a3  MOV EAX,dword ptr [EDX]
005d33a5  MOV dword ptr [EDX],EDX
005d33a7  MOV EDX,dword ptr [ECX + 0x4]
005d33aa  MOV dword ptr [EDX + 0x4],EDX
005d33ad  CMP EAX,dword ptr [ECX + 0x4]
005d33b0  PUSH ESI
005d33b1  MOV dword ptr [ECX + 0x8],0x0
005d33b8  MOV ESI,dword ptr [0x00925b34]
005d33be  JZ 0x005d33d3
005d33c0  MOV EDX,dword ptr [EAX]
005d33c2  MOV dword ptr [EAX],ESI
005d33c4  MOV ESI,EAX
005d33c6  MOV dword ptr [0x00925b34],ESI
005d33cc  CMP EDX,dword ptr [ECX + 0x4]
005d33cf  MOV EAX,EDX
005d33d1  JNZ 0x005d33c0
005d33d3  MOV EAX,dword ptr [ECX + 0x4]
005d33d6  TEST EAX,EAX
005d33d8  JZ 0x005d33e1
005d33da  MOV dword ptr [EAX],ESI
005d33dc  MOV [0x00925b34],EAX
005d33e1  MOV dword ptr [ECX + 0x4],0x0
005d33e8  POP ESI
005d33e9  RET
