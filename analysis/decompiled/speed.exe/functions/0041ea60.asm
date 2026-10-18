0041ea60  SUB ESP,0xc
0041ea63  MOV ECX,dword ptr [ESP + 0x14]
0041ea67  MOV EAX,dword ptr [ESP + 0x10]
0041ea6b  FLD float ptr [ECX + 0x8]
0041ea6e  FMUL float ptr [EAX + 0x4]
0041ea71  FLD float ptr [ECX + 0x4]
0041ea74  FMUL float ptr [EAX + 0x8]
0041ea77  FSUBP
0041ea79  FSTP float ptr [ESP]
0041ea7c  MOV EDX,dword ptr [ESP]
0041ea7f  FLD float ptr [ECX]
0041ea81  FMUL float ptr [EAX + 0x8]
0041ea84  FLD float ptr [EAX]
0041ea86  FMUL float ptr [ECX + 0x8]
0041ea89  FSUBP
0041ea8b  FSTP float ptr [ESP + 0x4]
0041ea8f  FLD float ptr [EAX]
0041ea91  FMUL float ptr [ECX + 0x4]
0041ea94  FLD float ptr [ECX]
0041ea96  FMUL float ptr [EAX + 0x4]
0041ea99  MOV EAX,dword ptr [ESP + 0x18]
0041ea9d  MOV ECX,EAX
0041ea9f  MOV dword ptr [ECX],EDX
0041eaa1  MOV EDX,dword ptr [ESP + 0x4]
0041eaa5  FSUBP
0041eaa7  MOV dword ptr [ECX + 0x4],EDX
0041eaaa  PUSH EAX
0041eaab  FSTP float ptr [ESP + 0xc]
0041eaaf  MOV EDX,dword ptr [ESP + 0xc]
0041eab3  PUSH EAX
0041eab4  MOV dword ptr [ECX + 0x8],EDX
0041eab7  CALL 0x0040fe20
0041eabc  ADD ESP,0x14
0041eabf  RET
