0046a480  FLD float ptr [ECX]
0046a482  MOV EAX,dword ptr [ESP + 0x4]
0046a486  FLD float ptr [ESP + 0x4]
0046a48a  MOV dword ptr [ECX + 0x8],EAX
0046a48d  FUCOMPP
0046a48f  MOV EDX,0x2
0046a494  FNSTSW AX
0046a496  TEST AH,0x44
0046a499  JNP 0x0046a49f
0046a49b  MOV word ptr [ECX + 0x28],DX
0046a49f  FLD float ptr [ECX + 0x2c]
0046a4a2  MOV EAX,dword ptr [ESP + 0x8]
0046a4a6  FLD float ptr [ESP + 0x8]
0046a4aa  MOV dword ptr [ECX + 0x34],EAX
0046a4ad  FUCOMPP
0046a4af  FNSTSW AX
0046a4b1  TEST AH,0x44
0046a4b4  JNP 0x0046a4ba
0046a4b6  MOV word ptr [ECX + 0x54],DX
0046a4ba  FLD float ptr [ECX + 0x58]
0046a4bd  MOV EAX,dword ptr [ESP + 0xc]
0046a4c1  FLD float ptr [ESP + 0xc]
0046a4c5  MOV dword ptr [ECX + 0x60],EAX
0046a4c8  FUCOMPP
0046a4ca  FNSTSW AX
0046a4cc  TEST AH,0x44
0046a4cf  JNP 0x0046a4d8
0046a4d1  MOV word ptr [ECX + 0x80],DX
0046a4d8  RET 0xc
