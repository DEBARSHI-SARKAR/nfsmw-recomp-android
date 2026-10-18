005dcca0  MOV ECX,dword ptr [ESP + 0x4]
005dcca4  SUB ESP,0xc
005dcca7  PUSH 0x0
005dcca9  PUSH 0x9f743a0e
005dccae  CALL 0x00454810
005dccb3  TEST EAX,EAX
005dccb5  JNZ 0x005dccc1
005dccb7  PUSH 0xc
005dccb9  CALL 0x006269b0
005dccbe  ADD ESP,0x4
005dccc1  FLD float ptr [EAX + 0x4]
005dccc4  MOV ECX,dword ptr [EAX + 0x8]
005dccc7  MOV EDX,dword ptr [EAX]
005dccc9  FCHS
005dcccb  MOV EAX,dword ptr [ESP + 0x14]
005dcccf  FSTP float ptr [ESP]
005dccd2  MOV dword ptr [ESP + 0x4],ECX
005dccd6  MOV ECX,dword ptr [ESP]
005dccd9  MOV dword ptr [ESP + 0x8],EDX
005dccdd  MOV EDX,dword ptr [ESP + 0x4]
005dcce1  MOV dword ptr [EAX],ECX
005dcce3  MOV ECX,dword ptr [ESP + 0x8]
005dcce7  MOV dword ptr [EAX + 0x4],EDX
005dccea  MOV dword ptr [EAX + 0x8],ECX
005dcced  ADD ESP,0xc
005dccf0  RET 0x8
