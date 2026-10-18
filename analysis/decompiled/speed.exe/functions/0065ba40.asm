0065ba40  FLD float ptr [ECX + 0x10]
0065ba43  MOV EAX,dword ptr [ESP + 0x4]
0065ba47  FLD float ptr [ESP + 0x4]
0065ba4b  MOV dword ptr [ECX + 0x8],EAX
0065ba4e  FUCOMPP
0065ba50  MOV EDX,0x2
0065ba55  FNSTSW AX
0065ba57  TEST AH,0x44
0065ba5a  JNP 0x0065ba60
0065ba5c  MOV word ptr [ECX + 0x2c],DX
0065ba60  FLD float ptr [ECX + 0x3c]
0065ba63  MOV EAX,dword ptr [ESP + 0x8]
0065ba67  FLD float ptr [ESP + 0x8]
0065ba6b  MOV dword ptr [ECX + 0x34],EAX
0065ba6e  FUCOMPP
0065ba70  FNSTSW AX
0065ba72  TEST AH,0x44
0065ba75  JNP 0x0065ba7b
0065ba77  MOV word ptr [ECX + 0x58],DX
0065ba7b  FLD float ptr [ECX + 0x68]
0065ba7e  MOV EAX,dword ptr [ESP + 0xc]
0065ba82  FLD float ptr [ESP + 0xc]
0065ba86  MOV dword ptr [ECX + 0x60],EAX
0065ba89  FUCOMPP
0065ba8b  FNSTSW AX
0065ba8d  TEST AH,0x44
0065ba90  JNP 0x0065ba99
0065ba92  MOV word ptr [ECX + 0x84],DX
0065ba99  RET 0xc
