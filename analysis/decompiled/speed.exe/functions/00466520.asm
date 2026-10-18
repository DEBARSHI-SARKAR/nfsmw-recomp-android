00466520  SUB ESP,0x10
00466523  MOV EDX,dword ptr [ESP + 0x14]
00466527  MOV EAX,EDX
00466529  MOV ECX,dword ptr [EAX]
0046652b  MOV dword ptr [ESP],ECX
0046652e  MOV ECX,dword ptr [EAX + 0x4]
00466531  MOV dword ptr [ESP + 0x4],ECX
00466535  MOV ECX,dword ptr [EAX + 0x8]
00466538  MOV EAX,dword ptr [EAX + 0xc]
0046653b  MOV dword ptr [ESP + 0x8],ECX
0046653f  FLD float ptr [ESP + 0x8]
00466543  MOV ECX,dword ptr [ESP + 0x1c]
00466547  MOV dword ptr [ESP + 0xc],EAX
0046654b  MOV EAX,dword ptr [ESP + 0x18]
0046654f  FMUL float ptr [EAX + 0x20]
00466552  FLD float ptr [ESP + 0x4]
00466556  FMUL float ptr [EAX + 0x10]
00466559  FADDP
0046655b  FLD float ptr [ESP]
0046655e  FMUL float ptr [EAX]
00466560  FADDP
00466562  FSTP float ptr [ECX]
00466564  FLD float ptr [ESP + 0x8]
00466568  FMUL float ptr [EAX + 0x24]
0046656b  FLD float ptr [ESP + 0x4]
0046656f  FMUL float ptr [EAX + 0x14]
00466572  FADDP
00466574  FLD float ptr [ESP]
00466577  FMUL float ptr [EAX + 0x4]
0046657a  FADDP
0046657c  FSTP float ptr [ECX + 0x4]
0046657f  FLD float ptr [ESP + 0x8]
00466583  FMUL float ptr [EAX + 0x28]
00466586  FLD float ptr [ESP + 0x4]
0046658a  FMUL float ptr [EAX + 0x18]
0046658d  FADDP
0046658f  FLD float ptr [ESP]
00466592  FMUL float ptr [EAX + 0x8]
00466595  FADDP
00466597  FSTP float ptr [ECX + 0x8]
0046659a  MOV EDX,dword ptr [EDX + 0xc]
0046659d  MOV dword ptr [ECX + 0xc],EDX
004665a0  ADD ESP,0x10
004665a3  RET
