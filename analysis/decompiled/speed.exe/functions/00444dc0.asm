00444dc0  SUB ESP,0x10
00444dc3  MOV ECX,dword ptr [ESP + 0x18]
00444dc7  FLD float ptr [ECX + 0x8]
00444dca  MOV EAX,dword ptr [ESP + 0x14]
00444dce  FMUL float ptr [EAX + 0x4]
00444dd1  FLD float ptr [ECX + 0x4]
00444dd4  FMUL float ptr [EAX + 0x8]
00444dd7  FSUBP
00444dd9  FSTP float ptr [ESP]
00444ddc  MOV EDX,dword ptr [ESP]
00444ddf  FLD float ptr [ECX]
00444de1  FMUL float ptr [EAX + 0x8]
00444de4  FLD float ptr [EAX]
00444de6  FMUL float ptr [ECX + 0x8]
00444de9  FSUBP
00444deb  FSTP float ptr [ESP + 0x4]
00444def  FLD float ptr [EAX]
00444df1  FMUL float ptr [ECX + 0x4]
00444df4  FLD float ptr [ECX]
00444df6  FMUL float ptr [EAX + 0x4]
00444df9  MOV EAX,dword ptr [ESP + 0x1c]
00444dfd  MOV ECX,dword ptr [EAX + 0xc]
00444e00  FSUBP
00444e02  MOV dword ptr [ESP + 0xc],ECX
00444e06  MOV ECX,dword ptr [ESP + 0x4]
00444e0a  MOV dword ptr [EAX],EDX
00444e0c  FSTP float ptr [ESP + 0x8]
00444e10  MOV EDX,dword ptr [ESP + 0x8]
00444e14  MOV dword ptr [EAX + 0x4],ECX
00444e17  MOV ECX,dword ptr [ESP + 0xc]
00444e1b  MOV dword ptr [EAX + 0x8],EDX
00444e1e  MOV dword ptr [EAX + 0xc],ECX
00444e21  ADD ESP,0x10
00444e24  RET
