005cdcc0  MOV ECX,dword ptr [ESP + 0x4]
005cdcc4  MOV EDX,dword ptr [ESP + 0x8]
005cdcc8  CMP ECX,EDX
005cdcca  MOV EAX,dword ptr [ESP + 0xc]
005cdcce  JZ 0x005cdcea
005cdcd0  PUSH ESI
005cdcd1  TEST EAX,EAX
005cdcd3  JZ 0x005cdcdf
005cdcd5  MOV ESI,dword ptr [ECX]
005cdcd7  MOV dword ptr [EAX],ESI
005cdcd9  MOV ESI,dword ptr [ECX + 0x4]
005cdcdc  MOV dword ptr [EAX + 0x4],ESI
005cdcdf  ADD ECX,0x8
005cdce2  ADD EAX,0x8
005cdce5  CMP ECX,EDX
005cdce7  JNZ 0x005cdcd1
005cdce9  POP ESI
005cdcea  RET
