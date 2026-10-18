006535c0  MOV EAX,dword ptr [ESP + 0x8]
006535c4  FLD float ptr [EAX + 0x4]
006535c7  MOV ECX,dword ptr [EAX + 0xc]
006535ca  FLD float ptr [EAX + 0x8]
006535cd  MOV EDX,dword ptr [ESP + 0xc]
006535d1  FLD float ptr [ESP + 0x10]
006535d5  MOV dword ptr [ESP + 0x8],ECX
006535d9  FMUL float ptr [EAX]
006535db  MOV EAX,dword ptr [ESP + 0x4]
006535df  PUSH ECX
006535e0  FSTP float ptr [EAX]
006535e2  FXCH
006535e4  FMUL float ptr [ESP + 0x14]
006535e8  FSTP float ptr [EAX + 0x4]
006535eb  FMUL float ptr [ESP + 0x14]
006535ef  FSTP float ptr [EAX + 0x8]
006535f2  FLD float ptr [ESP + 0xc]
006535f6  FMUL float ptr [ESP + 0x14]
006535fa  FSTP float ptr [EAX + 0xc]
006535fd  FLD float ptr [0x0089096c]
00653603  FSUB float ptr [ESP + 0x14]
00653607  FSTP float ptr [ESP]
0065360a  PUSH EDX
0065360b  PUSH EAX
0065360c  PUSH EAX
0065360d  CALL 0x0045f680
00653612  ADD ESP,0x10
00653615  RET 0x10
