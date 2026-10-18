00649cb0  FLD float ptr [ECX]
00649cb2  MOV EAX,dword ptr [ESP + 0x4]
00649cb6  FLD float ptr [ESP + 0x4]
00649cba  MOV dword ptr [ECX + 0x8],EAX
00649cbd  FUCOMPP
00649cbf  MOV EDX,0x2
00649cc4  FNSTSW AX
00649cc6  TEST AH,0x44
00649cc9  JNP 0x00649ccf
00649ccb  MOV word ptr [ECX + 0x28],DX
00649ccf  FLD float ptr [ECX + 0x2c]
00649cd2  MOV EAX,dword ptr [ESP + 0x8]
00649cd6  FLD float ptr [ESP + 0x8]
00649cda  MOV dword ptr [ECX + 0x34],EAX
00649cdd  FUCOMPP
00649cdf  FNSTSW AX
00649ce1  TEST AH,0x44
00649ce4  JNP 0x00649cea
00649ce6  MOV word ptr [ECX + 0x54],DX
00649cea  FLD float ptr [ECX + 0x58]
00649ced  MOV EAX,dword ptr [ESP + 0xc]
00649cf1  FLD float ptr [ESP + 0xc]
00649cf5  MOV dword ptr [ECX + 0x60],EAX
00649cf8  FUCOMPP
00649cfa  FNSTSW AX
00649cfc  TEST AH,0x44
00649cff  JNP 0x00649d08
00649d01  MOV word ptr [ECX + 0x80],DX
00649d08  RET 0xc
