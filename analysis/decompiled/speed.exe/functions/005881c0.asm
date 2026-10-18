005881c0  MOV EDX,dword ptr [ESP + 0x8]
005881c4  MOV EAX,ECX
005881c6  MOV ECX,dword ptr [ESP + 0x4]
005881ca  MOV dword ptr [EAX + 0xc],ECX
005881cd  XOR CL,CL
005881cf  MOV dword ptr [EAX],0x89c22c
005881d5  MOV dword ptr [EAX + 0x10],EDX
005881d8  MOV byte ptr [EAX + 0x14],0x1
005881dc  MOV byte ptr [EAX + 0x15],CL
005881df  MOV byte ptr [EAX + 0x16],CL
005881e2  MOV byte ptr [EAX + 0x17],CL
005881e5  RET 0x8
