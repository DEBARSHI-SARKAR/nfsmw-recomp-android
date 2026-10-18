0065bc40  FLD float ptr [ECX + 0x88]
0065bc46  MOV EAX,dword ptr [ESP + 0x4]
0065bc4a  FLD float ptr [ESP + 0x4]
0065bc4e  MOV dword ptr [ECX + 0x90],EAX
0065bc54  FUCOMPP
0065bc56  MOV EDX,0x2
0065bc5b  FNSTSW AX
0065bc5d  TEST AH,0x44
0065bc60  JNP 0x0065bc69
0065bc62  MOV word ptr [ECX + 0xb0],DX
0065bc69  FLD float ptr [ECX + 0xb4]
0065bc6f  MOV EAX,dword ptr [ESP + 0x8]
0065bc73  FLD float ptr [ESP + 0x8]
0065bc77  MOV dword ptr [ECX + 0xbc],EAX
0065bc7d  FUCOMPP
0065bc7f  FNSTSW AX
0065bc81  TEST AH,0x44
0065bc84  JNP 0x0065bc8d
0065bc86  MOV word ptr [ECX + 0xdc],DX
0065bc8d  FLD float ptr [ECX + 0xe0]
0065bc93  MOV EAX,dword ptr [ESP + 0xc]
0065bc97  FLD float ptr [ESP + 0xc]
0065bc9b  MOV dword ptr [ECX + 0xe8],EAX
0065bca1  FUCOMPP
0065bca3  FNSTSW AX
0065bca5  TEST AH,0x44
0065bca8  JNP 0x0065bcb1
0065bcaa  MOV word ptr [ECX + 0x108],DX
0065bcb1  RET 0xc
