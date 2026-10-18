0046a3c0  FLD float ptr [ECX + 0x8]
0046a3c3  MOV EAX,dword ptr [ESP + 0x4]
0046a3c7  FLD float ptr [ESP + 0x4]
0046a3cb  MOV dword ptr [ECX],EAX
0046a3cd  FUCOMPP
0046a3cf  MOV EDX,0x2
0046a3d4  FNSTSW AX
0046a3d6  TEST AH,0x44
0046a3d9  JNP 0x0046a3df
0046a3db  MOV word ptr [ECX + 0x28],DX
0046a3df  FLD float ptr [ECX + 0x34]
0046a3e2  MOV EAX,dword ptr [ESP + 0x8]
0046a3e6  FLD float ptr [ESP + 0x8]
0046a3ea  MOV dword ptr [ECX + 0x2c],EAX
0046a3ed  FUCOMPP
0046a3ef  FNSTSW AX
0046a3f1  TEST AH,0x44
0046a3f4  JNP 0x0046a3fa
0046a3f6  MOV word ptr [ECX + 0x54],DX
0046a3fa  FLD float ptr [ECX + 0x60]
0046a3fd  MOV EAX,dword ptr [ESP + 0xc]
0046a401  FLD float ptr [ESP + 0xc]
0046a405  MOV dword ptr [ECX + 0x58],EAX
0046a408  FUCOMPP
0046a40a  FNSTSW AX
0046a40c  TEST AH,0x44
0046a40f  JNP 0x0046a418
0046a411  MOV word ptr [ECX + 0x80],DX
0046a418  RET 0xc
