005b2580  MOV EAX,dword ptr [ESP + 0x4]
005b2584  CMP word ptr [EAX],0x6649
005b2589  JNZ 0x005b2594
005b258b  MOV ECX,dword ptr [ECX + 0xc]
005b258e  MOV EDX,dword ptr [EAX + 0x4]
005b2591  MOV dword ptr [ECX + 0x5c],EDX
005b2594  RET 0x4
