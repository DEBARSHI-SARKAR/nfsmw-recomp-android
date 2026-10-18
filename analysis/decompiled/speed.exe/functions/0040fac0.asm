0040fac0  MOV ECX,dword ptr [ESP + 0x4]
0040fac4  MOV EDX,dword ptr [ESP + 0x8]
0040fac8  CMP ECX,EDX
0040faca  MOV EAX,dword ptr [ESP + 0xc]
0040face  JZ 0x0040fae4
0040fad0  PUSH ESI
0040fad1  TEST EAX,EAX
0040fad3  JZ 0x0040fad9
0040fad5  MOV ESI,dword ptr [ECX]
0040fad7  MOV dword ptr [EAX],ESI
0040fad9  ADD ECX,0x4
0040fadc  ADD EAX,0x4
0040fadf  CMP ECX,EDX
0040fae1  JNZ 0x0040fad1
0040fae3  POP ESI
0040fae4  RET
