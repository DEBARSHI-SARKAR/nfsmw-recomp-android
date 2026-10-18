0047a200  SUB ESP,0x1c
0047a203  PUSH ESI
0047a204  MOV ESI,ECX
0047a206  MOV ECX,dword ptr [ESI + 0x10]
0047a209  MOV EAX,dword ptr [ESI + 0x14]
0047a20c  MOV dword ptr [ESP + 0x14],ECX
0047a210  FLD float ptr [ESP + 0x14]
0047a214  MOV dword ptr [ESP + 0x10],EAX
0047a218  FSUB float ptr [ESP + 0x10]
0047a21c  PUSH EDI
0047a21d  MOV EDI,dword ptr [ESP + 0x28]
0047a221  FDIVR float ptr [0x0089096c]
0047a227  MOV EAX,dword ptr [EDI]
0047a229  LEA EDX,[ESP + 0x8]
0047a22d  PUSH EAX
0047a22e  LEA ECX,[ESP + 0x14]
0047a232  MOV dword ptr [ESP + 0xc],0xbc23d70a
0047a23a  MOV dword ptr [ESP + 0x10],0x3f8147ae
0047a242  MOV dword ptr [ESP + 0x14],0x2
0047a24a  MOV dword ptr [ESP + 0x24],EDX
0047a24e  FSTP float ptr [ESP + 0x20]
0047a252  CALL 0x006533b0
0047a257  FSUBR float ptr [0x0089096c]
0047a25d  ADD ESI,0x8
0047a260  MOV dword ptr [ESP + 0x10],0x2
0047a268  MOV dword ptr [ESP + 0x14],0x0
0047a270  FSTP float ptr [ESP + 0x28]
0047a274  MOV dword ptr [ESP + 0x18],0x3f800000
0047a27c  MOV ECX,dword ptr [ESP + 0x28]
0047a280  PUSH ECX
0047a281  LEA ECX,[ESP + 0x14]
0047a285  MOV dword ptr [ESP + 0x20],0x3f800000
0047a28d  MOV dword ptr [ESP + 0x24],ESI
0047a291  CALL 0x006533b0
0047a296  FLD ST0
0047a298  FCHS
0047a29a  PUSH ECX
0047a29b  FSTP float ptr [ESP + 0x18]
0047a29f  LEA EDX,[ESP + 0xc]
0047a2a3  LEA ECX,[ESP + 0x14]
0047a2a7  FST float ptr [ESP + 0x1c]
0047a2ab  MOV dword ptr [ESP + 0x14],0x2
0047a2b3  FSUB float ptr [ESP + 0x18]
0047a2b7  MOV dword ptr [ESP + 0x24],EDX
0047a2bb  FDIVR float ptr [0x0089096c]
0047a2c1  FSTP float ptr [ESP + 0x20]
0047a2c5  FLD float ptr [EDI + 0x4]
0047a2c8  FCHS
0047a2ca  FSTP float ptr [ESP]
0047a2cd  CALL 0x006533b0
0047a2d2  FLD float ptr [ESP + 0x28]
0047a2d6  MOV EAX,dword ptr [ESP + 0x30]
0047a2da  FSTP float ptr [EAX]
0047a2dc  MOV ECX,dword ptr [ESP + 0x2c]
0047a2e0  POP EDI
0047a2e1  FSTP float ptr [ECX]
0047a2e3  POP ESI
0047a2e4  ADD ESP,0x1c
0047a2e7  RET 0xc
