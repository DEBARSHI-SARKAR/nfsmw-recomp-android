0040fbb0  MOV ECX,dword ptr [ESP + 0x4]
0040fbb4  MOV EDX,dword ptr [ESP + 0x8]
0040fbb8  CMP ECX,EDX
0040fbba  MOV EAX,dword ptr [ESP + 0xc]
0040fbbe  JZ 0x0040fbd4
0040fbc0  PUSH ESI
0040fbc1  TEST EAX,EAX
0040fbc3  JZ 0x0040fbc9
0040fbc5  MOV ESI,dword ptr [ECX]
0040fbc7  MOV dword ptr [EAX],ESI
0040fbc9  ADD ECX,0x4
0040fbcc  ADD EAX,0x4
0040fbcf  CMP ECX,EDX
0040fbd1  JNZ 0x0040fbc1
0040fbd3  POP ESI
0040fbd4  RET
