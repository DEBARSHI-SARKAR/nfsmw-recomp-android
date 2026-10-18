006b6510  SUB ESP,0xc
006b6513  MOV EAX,dword ptr [ECX + 0x18]
006b6516  MOV ECX,dword ptr [EAX]
006b6518  FLD float ptr [ECX + 0x2c]
006b651b  MOV EAX,dword ptr [ESP + 0x10]
006b651f  FST float ptr [ESP + 0x8]
006b6523  MOV EDX,EAX
006b6525  FST float ptr [ESP + 0x4]
006b6529  FSTP float ptr [ESP]
006b652c  MOV ECX,dword ptr [ESP]
006b652f  MOV dword ptr [EDX],ECX
006b6531  MOV ECX,dword ptr [ESP + 0x4]
006b6535  MOV dword ptr [EDX + 0x4],ECX
006b6538  MOV ECX,dword ptr [ESP + 0x8]
006b653c  MOV dword ptr [EDX + 0x8],ECX
006b653f  ADD ESP,0xc
006b6542  RET 0x4
