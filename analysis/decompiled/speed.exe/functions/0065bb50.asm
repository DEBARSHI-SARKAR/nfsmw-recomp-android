0065bb50  FLD float ptr [ECX + 0x90]
0065bb56  MOV EAX,dword ptr [ESP + 0x4]
0065bb5a  FLD float ptr [ESP + 0x4]
0065bb5e  MOV dword ptr [ECX + 0x88],EAX
0065bb64  FUCOMPP
0065bb66  MOV EDX,0x2
0065bb6b  FNSTSW AX
0065bb6d  TEST AH,0x44
0065bb70  JNP 0x0065bb79
0065bb72  MOV word ptr [ECX + 0xb0],DX
0065bb79  FLD float ptr [ECX + 0xbc]
0065bb7f  MOV EAX,dword ptr [ESP + 0x8]
0065bb83  FLD float ptr [ESP + 0x8]
0065bb87  MOV dword ptr [ECX + 0xb4],EAX
0065bb8d  FUCOMPP
0065bb8f  FNSTSW AX
0065bb91  TEST AH,0x44
0065bb94  JNP 0x0065bb9d
0065bb96  MOV word ptr [ECX + 0xdc],DX
0065bb9d  FLD float ptr [ECX + 0xe8]
0065bba3  MOV EAX,dword ptr [ESP + 0xc]
0065bba7  FLD float ptr [ESP + 0xc]
0065bbab  MOV dword ptr [ECX + 0xe0],EAX
0065bbb1  FUCOMPP
0065bbb3  FNSTSW AX
0065bbb5  TEST AH,0x44
0065bbb8  JNP 0x0065bbc1
0065bbba  MOV word ptr [ECX + 0x108],DX
0065bbc1  RET 0xc
