0065bd30  FLD float ptr [ECX + 0x94]
0065bd36  MOV EAX,dword ptr [ESP + 0x4]
0065bd3a  FLD float ptr [ESP + 0x4]
0065bd3e  MOV dword ptr [ECX + 0x8c],EAX
0065bd44  FUCOMPP
0065bd46  MOV EDX,0x2
0065bd4b  FNSTSW AX
0065bd4d  TEST AH,0x44
0065bd50  JNP 0x0065bd59
0065bd52  MOV word ptr [ECX + 0xb0],DX
0065bd59  FLD float ptr [ECX + 0xc0]
0065bd5f  MOV EAX,dword ptr [ESP + 0x8]
0065bd63  FLD float ptr [ESP + 0x8]
0065bd67  MOV dword ptr [ECX + 0xb8],EAX
0065bd6d  FUCOMPP
0065bd6f  FNSTSW AX
0065bd71  TEST AH,0x44
0065bd74  JNP 0x0065bd7d
0065bd76  MOV word ptr [ECX + 0xdc],DX
0065bd7d  FLD float ptr [ECX + 0xec]
0065bd83  MOV EAX,dword ptr [ESP + 0xc]
0065bd87  FLD float ptr [ESP + 0xc]
0065bd8b  MOV dword ptr [ECX + 0xe4],EAX
0065bd91  FUCOMPP
0065bd93  FNSTSW AX
0065bd95  TEST AH,0x44
0065bd98  JNP 0x0065bda1
0065bd9a  MOV word ptr [ECX + 0x108],DX
0065bda1  RET 0xc
