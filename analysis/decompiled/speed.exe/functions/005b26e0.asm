005b26e0  MOV EAX,dword ptr [ESP + 0x4]
005b26e4  TEST EAX,EAX
005b26e6  JZ 0x005b2726
005b26e8  CMP EAX,dword ptr [ECX + 0x8]
005b26eb  JNZ 0x005b26f3
005b26ed  MOV EDX,dword ptr [EAX + 0x4]
005b26f0  MOV dword ptr [ECX + 0x8],EDX
005b26f3  CMP EAX,dword ptr [ECX + 0xc]
005b26f6  JNZ 0x005b26fe
005b26f8  MOV EDX,dword ptr [EAX + 0x8]
005b26fb  MOV dword ptr [ECX + 0xc],EDX
005b26fe  MOV ECX,dword ptr [EAX + 0x8]
005b2701  TEST ECX,ECX
005b2703  JZ 0x005b270b
005b2705  MOV EDX,dword ptr [EAX + 0x4]
005b2708  MOV dword ptr [ECX + 0x4],EDX
005b270b  MOV ECX,dword ptr [EAX + 0x4]
005b270e  TEST ECX,ECX
005b2710  JZ 0x005b2718
005b2712  MOV EDX,dword ptr [EAX + 0x8]
005b2715  MOV dword ptr [ECX + 0x8],EDX
005b2718  MOV ECX,0xabadcafe
005b271d  MOV dword ptr [EAX + 0x4],ECX
005b2720  MOV dword ptr [EAX + 0x8],ECX
005b2723  RET 0x4
005b2726  XOR EAX,EAX
005b2728  RET 0x4
