0065b8c0  FLD float ptr [ECX + 0xc]
0065b8c3  MOV EAX,dword ptr [ESP + 0x4]
0065b8c7  FLD float ptr [ESP + 0x4]
0065b8cb  MOV dword ptr [ECX + 0x4],EAX
0065b8ce  FUCOMPP
0065b8d0  MOV EDX,0x2
0065b8d5  FNSTSW AX
0065b8d7  TEST AH,0x44
0065b8da  JNP 0x0065b8e0
0065b8dc  MOV word ptr [ECX + 0x2c],DX
0065b8e0  FLD float ptr [ESP + 0x8]
0065b8e4  FMUL float ptr [0x00894b48]
0065b8ea  FST float ptr [ECX + 0x30]
0065b8ed  FLD float ptr [ECX + 0x38]
0065b8f0  FXCH
0065b8f2  FUCOMPP
0065b8f4  FNSTSW AX
0065b8f6  TEST AH,0x44
0065b8f9  JNP 0x0065b8ff
0065b8fb  MOV word ptr [ECX + 0x58],DX
0065b8ff  FLD float ptr [ECX + 0x64]
0065b902  MOV EAX,dword ptr [ESP + 0xc]
0065b906  FLD float ptr [ESP + 0xc]
0065b90a  MOV dword ptr [ECX + 0x5c],EAX
0065b90d  FUCOMPP
0065b90f  FNSTSW AX
0065b911  TEST AH,0x44
0065b914  JNP 0x0065b91d
0065b916  MOV word ptr [ECX + 0x84],DX
0065b91d  RET 0xc
