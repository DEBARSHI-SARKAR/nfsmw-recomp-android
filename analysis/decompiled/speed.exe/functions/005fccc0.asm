005fccc0  PUSH ESI
005fccc1  MOV ESI,ECX
005fccc3  MOV EAX,dword ptr [ESI + 0xc]
005fccc6  TEST EAX,EAX
005fccc8  JZ 0x005fccdb
005fccca  CMP dword ptr [EAX],0x0
005fcccd  JNZ 0x005fccdb
005fcccf  MOV ECX,dword ptr [0x0091e00c]
005fccd5  PUSH EAX
005fccd6  CALL 0x005fa780
005fccdb  MOV EAX,dword ptr [ESI + 0x10]
005fccde  TEST EAX,EAX
005fcce0  JZ 0x005fccf3
005fcce2  CMP dword ptr [EAX],0x0
005fcce5  JNZ 0x005fccf3
005fcce7  MOV ECX,dword ptr [0x0091e00c]
005fcced  PUSH EAX
005fccee  CALL 0x005fa780
005fccf3  MOV ECX,dword ptr [ESI + 0x8]
005fccf6  PUSH 0x0
005fccf8  PUSH 0x9dff3c3d
005fccfd  CALL 0x00454810
005fcd02  TEST EAX,EAX
005fcd04  POP ESI
005fcd05  JNZ 0x005fcd11
005fcd07  PUSH 0x4
005fcd09  CALL 0x006269b0
005fcd0e  ADD ESP,0x4
005fcd11  FLD float ptr [EAX]
005fcd13  RET
