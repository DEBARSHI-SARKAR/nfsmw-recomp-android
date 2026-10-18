0045e1a0  SUB ESP,0x8
0045e1a3  MOV EAX,dword ptr [ESP + 0x10]
0045e1a7  FLD float ptr [EAX + 0x14]
0045e1aa  MOV ECX,dword ptr [EAX + 0x1c]
0045e1ad  FLD float ptr [EAX + 0x18]
0045e1b0  MOV EDX,dword ptr [EAX + 0x2c]
0045e1b3  FCHS
0045e1b5  MOV dword ptr [ESP + 0x4],ECX
0045e1b9  FLD float ptr [EAX + 0x10]
0045e1bc  MOV ECX,dword ptr [ESP + 0xc]
0045e1c0  FCHS
0045e1c2  MOV dword ptr [ESP + 0x10],EDX
0045e1c6  FSTP float ptr [ESP]
0045e1c9  FLD float ptr [EAX + 0x28]
0045e1cc  FLD float ptr [EAX + 0x20]
0045e1cf  FLD float ptr [EAX + 0x24]
0045e1d2  MOV dword ptr [ECX + 0x1c],EDX
0045e1d5  FCHS
0045e1d7  FSTP float ptr [ECX + 0x10]
0045e1da  FXCH
0045e1dc  FSTP float ptr [ECX + 0x14]
0045e1df  FSTP float ptr [ECX + 0x18]
0045e1e2  MOV EDX,dword ptr [EAX + 0xc]
0045e1e5  FLD float ptr [EAX + 0x8]
0045e1e8  MOV dword ptr [ESP + 0x10],EDX
0045e1ec  FLD float ptr [EAX]
0045e1ee  FLD float ptr [EAX + 0x4]
0045e1f1  MOV dword ptr [ECX + 0x2c],EDX
0045e1f4  MOV EDX,dword ptr [ESP]
0045e1f7  FCHS
0045e1f9  FSTP float ptr [ECX + 0x20]
0045e1fc  FXCH
0045e1fe  FSTP float ptr [ECX + 0x24]
0045e201  FSTP float ptr [ECX + 0x28]
0045e204  MOV dword ptr [ECX + 0x8],EDX
0045e207  MOV EDX,dword ptr [ESP + 0x4]
0045e20b  FXCH
0045e20d  FSTP float ptr [ECX]
0045e20f  MOV dword ptr [ECX + 0xc],EDX
0045e212  FSTP float ptr [ECX + 0x4]
0045e215  MOV EDX,dword ptr [EAX + 0x3c]
0045e218  FLD float ptr [EAX + 0x38]
0045e21b  MOV dword ptr [ESP + 0x10],EDX
0045e21f  FLD float ptr [EAX + 0x30]
0045e222  FLD float ptr [EAX + 0x34]
0045e225  MOV EAX,EDX
0045e227  FCHS
0045e229  MOV dword ptr [ECX + 0x3c],EAX
0045e22c  FSTP float ptr [ECX + 0x30]
0045e22f  FXCH
0045e231  FSTP float ptr [ECX + 0x34]
0045e234  FSTP float ptr [ECX + 0x38]
0045e237  ADD ESP,0x8
0045e23a  RET
