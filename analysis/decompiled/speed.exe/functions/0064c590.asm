0064c590  MOV ECX,dword ptr [ESP + 0x8]
0064c594  FLD float ptr [ECX + 0x4]
0064c597  MOV EAX,dword ptr [ESP + 0x4]
0064c59b  FLD float ptr [ECX + 0x8]
0064c59e  SHL EAX,0x5
0064c5a1  FLD float ptr [ECX]
0064c5a3  ADD EAX,0x925aa0
0064c5a8  FMUL float ptr [0x00890da8]
0064c5ae  MOV dword ptr [EAX + 0x10],0x8f83d0
0064c5b5  MOV dword ptr [EAX + 0x14],0x0
0064c5bc  MOV dword ptr [EAX + 0x18],0x3f19999a
0064c5c3  FSTP float ptr [EAX]
0064c5c5  MOV dword ptr [EAX + 0x1c],0x413be1e5
0064c5cc  FXCH
0064c5ce  FMUL float ptr [0x00890da8]
0064c5d4  FSTP float ptr [EAX + 0x4]
0064c5d7  FMUL float ptr [0x00890da8]
0064c5dd  FSTP float ptr [EAX + 0x8]
0064c5e0  RET
