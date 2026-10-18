006ea390  MOV EAX,dword ptr [ESP + 0x4]
006ea394  FLD float ptr [EAX + 0x4]
006ea397  MOV EDX,dword ptr [EAX]
006ea399  FLD float ptr [EAX + 0x8]
006ea39c  MOV dword ptr [ECX + 0x2b8],EDX
006ea3a2  MOV EDX,dword ptr [ESP + 0x8]
006ea3a6  FXCH
006ea3a8  FSTP float ptr [ECX + 0x2bc]
006ea3ae  PUSH ESI
006ea3af  MOVZX ESI,DX
006ea3b2  FSTP float ptr [ECX + 0x2c0]
006ea3b8  MOV dword ptr [ESP + 0x8],ESI
006ea3bc  FLD float ptr [EAX + 0x8]
006ea3bf  PUSH EDX
006ea3c0  FLD float ptr [EAX]
006ea3c2  PUSH EAX
006ea3c3  FLD float ptr [EAX + 0x4]
006ea3c6  FCHS
006ea3c8  FSTP float ptr [ECX + 0x374]
006ea3ce  FXCH
006ea3d0  FSTP float ptr [ECX + 0x378]
006ea3d6  FSTP float ptr [ECX + 0x37c]
006ea3dc  FILD dword ptr [ESP + 0x10]
006ea3e0  FMUL float ptr [0x00890980]
006ea3e6  FSTP float ptr [ECX + 0x2c8]
006ea3ec  CALL 0x00446e80
006ea3f1  ADD ESP,0x8
006ea3f4  POP ESI
006ea3f5  RET 0x8
