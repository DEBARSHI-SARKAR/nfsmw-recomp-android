00444fe0  MOV ECX,dword ptr [ESP + 0x8]
00444fe4  MOV EAX,dword ptr [ECX + 0xc]
00444fe7  FLD float ptr [ECX + 0x4]
00444fea  FLD float ptr [ECX + 0x8]
00444fed  MOV EDX,dword ptr [ECX]
00444fef  MOV dword ptr [ESP + 0x8],EAX
00444ff3  FXCH
00444ff5  MOV EAX,dword ptr [ESP + 0x4]
00444ff9  FSTP float ptr [EAX + 0x4]
00444ffc  MOV dword ptr [EAX],EDX
00444ffe  MOV EDX,dword ptr [ESP + 0x8]
00445002  FSTP float ptr [EAX + 0x8]
00445005  MOV dword ptr [EAX + 0xc],EDX
00445008  MOV EDX,dword ptr [ECX + 0x1c]
0044500b  FLD float ptr [ECX + 0x14]
0044500e  FLD float ptr [ECX + 0x18]
00445011  MOV dword ptr [ESP + 0x8],EDX
00445015  MOV EDX,dword ptr [ECX + 0x10]
00445018  FXCH
0044501a  FSTP float ptr [EAX + 0x14]
0044501d  MOV dword ptr [EAX + 0x10],EDX
00445020  MOV EDX,dword ptr [ESP + 0x8]
00445024  FSTP float ptr [EAX + 0x18]
00445027  MOV dword ptr [EAX + 0x1c],EDX
0044502a  MOV EDX,dword ptr [ECX + 0x2c]
0044502d  FLD float ptr [ECX + 0x24]
00445030  FLD float ptr [ECX + 0x28]
00445033  MOV dword ptr [ESP + 0x8],EDX
00445037  MOV EDX,dword ptr [ECX + 0x20]
0044503a  FXCH
0044503c  FSTP float ptr [EAX + 0x24]
0044503f  MOV dword ptr [EAX + 0x20],EDX
00445042  MOV EDX,dword ptr [ESP + 0x8]
00445046  FSTP float ptr [EAX + 0x28]
00445049  MOV dword ptr [EAX + 0x2c],EDX
0044504c  FLD float ptr [ECX + 0x34]
0044504f  MOV EDX,dword ptr [ECX + 0x3c]
00445052  FLD float ptr [ECX + 0x38]
00445055  MOV ECX,dword ptr [ECX + 0x30]
00445058  FXCH
0044505a  MOV dword ptr [ESP + 0x8],EDX
0044505e  FSTP float ptr [EAX + 0x34]
00445061  MOV dword ptr [EAX + 0x30],ECX
00445064  MOV dword ptr [EAX + 0x3c],EDX
00445067  FSTP float ptr [EAX + 0x38]
0044506a  RET
