0045e240  SUB ESP,0x8
0045e243  MOV EAX,dword ptr [ESP + 0x10]
0045e247  FLD float ptr [EAX + 0x8]
0045e24a  MOV ECX,dword ptr [EAX + 0xc]
0045e24d  MOV EDX,dword ptr [EAX + 0x2c]
0045e250  FCHS
0045e252  FLD float ptr [EAX]
0045e254  MOV dword ptr [ESP + 0x10],EDX
0045e258  FLD float ptr [EAX + 0x4]
0045e25b  MOV EDX,dword ptr [EAX + 0x28]
0045e25e  FCHS
0045e260  MOV dword ptr [ESP + 0x4],ECX
0045e264  MOV ECX,dword ptr [ESP + 0xc]
0045e268  FSTP float ptr [ESP]
0045e26b  FLD float ptr [EAX + 0x20]
0045e26e  FCHS
0045e270  FLD float ptr [EAX + 0x24]
0045e273  MOV dword ptr [ECX],EDX
0045e275  MOV EDX,dword ptr [ESP + 0x10]
0045e279  FXCH
0045e27b  FSTP float ptr [ECX + 0x4]
0045e27e  MOV dword ptr [ECX + 0xc],EDX
0045e281  FSTP float ptr [ECX + 0x8]
0045e284  MOV EDX,dword ptr [EAX + 0x1c]
0045e287  FLD float ptr [EAX + 0x10]
0045e28a  MOV dword ptr [ESP + 0x10],EDX
0045e28e  MOV EDX,dword ptr [EAX + 0x18]
0045e291  FCHS
0045e293  FLD float ptr [EAX + 0x14]
0045e296  MOV dword ptr [ECX + 0x20],EDX
0045e299  MOV EDX,dword ptr [ESP + 0x10]
0045e29d  FXCH
0045e29f  FSTP float ptr [ECX + 0x24]
0045e2a2  MOV dword ptr [ECX + 0x2c],EDX
0045e2a5  MOV EDX,dword ptr [ESP]
0045e2a8  FSTP float ptr [ECX + 0x28]
0045e2ab  MOV dword ptr [ECX + 0x18],EDX
0045e2ae  MOV EDX,dword ptr [ESP + 0x4]
0045e2b2  FXCH
0045e2b4  FSTP float ptr [ECX + 0x10]
0045e2b7  MOV dword ptr [ECX + 0x1c],EDX
0045e2ba  FSTP float ptr [ECX + 0x14]
0045e2bd  MOV EDX,dword ptr [EAX + 0x3c]
0045e2c0  FLD float ptr [EAX + 0x30]
0045e2c3  MOV dword ptr [ESP + 0x10],EDX
0045e2c7  FCHS
0045e2c9  FLD float ptr [EAX + 0x34]
0045e2cc  MOV EAX,dword ptr [EAX + 0x38]
0045e2cf  FXCH
0045e2d1  MOV dword ptr [ECX + 0x30],EAX
0045e2d4  FSTP float ptr [ECX + 0x34]
0045e2d7  MOV dword ptr [ECX + 0x3c],EDX
0045e2da  FSTP float ptr [ECX + 0x38]
0045e2dd  ADD ESP,0x8
0045e2e0  RET
