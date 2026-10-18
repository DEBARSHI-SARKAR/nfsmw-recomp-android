005fcde0  PUSH ESI
005fcde1  MOV ESI,ECX
005fcde3  MOV EAX,dword ptr [ESI + 0xc]
005fcde6  TEST EAX,EAX
005fcde8  JZ 0x005fcdfb
005fcdea  CMP dword ptr [EAX],0x0
005fcded  JNZ 0x005fcdfb
005fcdef  MOV ECX,dword ptr [0x0091e00c]
005fcdf5  PUSH EAX
005fcdf6  CALL 0x005fa780
005fcdfb  MOV EAX,dword ptr [ESI + 0x10]
005fcdfe  TEST EAX,EAX
005fce00  JZ 0x005fce13
005fce02  CMP dword ptr [EAX],0x0
005fce05  JNZ 0x005fce13
005fce07  MOV ECX,dword ptr [0x0091e00c]
005fce0d  PUSH EAX
005fce0e  CALL 0x005fa780
005fce13  MOV ECX,dword ptr [ESI + 0x8]
005fce16  PUSH 0x0
005fce18  PUSH 0xcbd7adf9
005fce1d  CALL 0x00454810
005fce22  TEST EAX,EAX
005fce24  POP ESI
005fce25  JNZ 0x005fce31
005fce27  PUSH 0x4
005fce29  CALL 0x006269b0
005fce2e  ADD ESP,0x4
005fce31  MOV EAX,dword ptr [EAX]
005fce33  RET
