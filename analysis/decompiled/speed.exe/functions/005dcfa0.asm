005dcfa0  MOV EAX,dword ptr [ESP + 0x4]
005dcfa4  PUSH EAX
005dcfa5  PUSH 0xbaf89280
005dcfaa  CALL 0x00454810
005dcfaf  TEST EAX,EAX
005dcfb1  JNZ 0x005dcfbd
005dcfb3  PUSH 0x4
005dcfb5  CALL 0x006269b0
005dcfba  ADD ESP,0x4
005dcfbd  MOV EAX,dword ptr [EAX]
005dcfbf  RET 0x4
