00492800  MOV EAX,dword ptr [ESP + 0x4]
00492804  MOV EDX,dword ptr [EAX]
00492806  MOV dword ptr [ECX],EDX
00492808  MOV EDX,dword ptr [EAX + 0x4]
0049280b  MOV dword ptr [ECX + 0x4],EDX
0049280e  MOV EDX,dword ptr [EAX + 0x8]
00492811  MOV dword ptr [ECX + 0x8],EDX
00492814  XOR EDX,EDX
00492816  MOV dword ptr [ECX + 0xc],EDX
00492819  PUSH ESI
0049281a  MOV ESI,dword ptr [EAX + 0xc]
0049281d  MOV dword ptr [ECX + 0x10],ESI
00492820  MOV ESI,dword ptr [EAX + 0x10]
00492823  MOV dword ptr [ECX + 0x14],ESI
00492826  MOV ESI,dword ptr [EAX + 0x14]
00492829  MOV dword ptr [ECX + 0x18],ESI
0049282c  MOV dword ptr [ECX + 0x1c],EDX
0049282f  MOV ESI,dword ptr [EAX + 0x18]
00492832  MOV dword ptr [ECX + 0x20],ESI
00492835  MOV ESI,dword ptr [EAX + 0x1c]
00492838  MOV dword ptr [ECX + 0x24],ESI
0049283b  MOV EAX,dword ptr [EAX + 0x20]
0049283e  MOV dword ptr [ECX + 0x28],EAX
00492841  MOV EAX,dword ptr [ESP + 0xc]
00492845  MOV dword ptr [ECX + 0x2c],EDX
00492848  MOV EDX,dword ptr [EAX]
0049284a  MOV dword ptr [ECX + 0x30],EDX
0049284d  MOV EDX,dword ptr [EAX + 0x4]
00492850  MOV dword ptr [ECX + 0x34],EDX
00492853  MOV EAX,dword ptr [EAX + 0x8]
00492856  MOV dword ptr [ECX + 0x38],EAX
00492859  MOV dword ptr [ECX + 0x3c],0x3f800000
00492860  POP ESI
00492861  RET 0x8
