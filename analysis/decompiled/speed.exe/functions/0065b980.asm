0065b980  FLD float ptr [ECX + 0x4]
0065b983  MOV EAX,dword ptr [ESP + 0x4]
0065b987  FLD float ptr [ESP + 0x4]
0065b98b  MOV dword ptr [ECX + 0xc],EAX
0065b98e  FUCOMPP
0065b990  MOV EDX,0x2
0065b995  FNSTSW AX
0065b997  TEST AH,0x44
0065b99a  JNP 0x0065b9a0
0065b99c  MOV word ptr [ECX + 0x2c],DX
0065b9a0  FLD float ptr [ESP + 0x8]
0065b9a4  FMUL float ptr [0x00894b48]
0065b9aa  FST float ptr [ECX + 0x38]
0065b9ad  FLD float ptr [ECX + 0x30]
0065b9b0  FXCH
0065b9b2  FUCOMPP
0065b9b4  FNSTSW AX
0065b9b6  TEST AH,0x44
0065b9b9  JNP 0x0065b9bf
0065b9bb  MOV word ptr [ECX + 0x58],DX
0065b9bf  FLD float ptr [ECX + 0x5c]
0065b9c2  MOV EAX,dword ptr [ESP + 0xc]
0065b9c6  FLD float ptr [ESP + 0xc]
0065b9ca  MOV dword ptr [ECX + 0x64],EAX
0065b9cd  FUCOMPP
0065b9cf  FNSTSW AX
0065b9d1  TEST AH,0x44
0065b9d4  JNP 0x0065b9dd
0065b9d6  MOV word ptr [ECX + 0x84],DX
0065b9dd  RET 0xc
