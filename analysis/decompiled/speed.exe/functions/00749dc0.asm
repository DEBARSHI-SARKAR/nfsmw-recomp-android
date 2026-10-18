00749dc0  PUSH EBX
00749dc1  PUSH ESI
00749dc2  PUSH EDI
00749dc3  MOV ESI,ECX
00749dc5  CALL 0x0073cd30
00749dca  LEA EDI,[ESI + 0x34d0]
00749dd0  MOV EBX,0x2
00749dd5  MOV ECX,EDI
00749dd7  CALL 0x006c0a30
00749ddc  ADD EDI,0xa0
00749de2  DEC EBX
00749de3  JNZ 0x00749dd5
00749de5  XOR EAX,EAX
00749de7  MOV dword ptr [ESI + 0x36a0],EAX
00749ded  MOV dword ptr [ESI + 0x28c],EAX
00749df3  MOV ECX,dword ptr [0x009b0a3c]
00749df9  MOV dword ptr [ESI + 0x290],ECX
00749dff  MOV ECX,dword ptr [ESP + 0x14]
00749e03  MOV EDX,0x3f800000
00749e08  MOV dword ptr [ESI + 0x36a4],EAX
00749e0e  MOV dword ptr [ESI + 0x36a8],EAX
00749e14  MOV dword ptr [ESI + ECX*0x4 + 0x36a4],EDX
00749e1b  MOV ECX,dword ptr [ESP + 0x10]
00749e1f  MOV dword ptr [ESI + 0x288],ECX
00749e25  MOV CL,0x80
00749e27  MOV EDI,0x3dcccccd
00749e2c  MOV dword ptr [ESI + 0x3514],EDX
00749e32  MOV dword ptr [ESI + 0x351c],EDX
00749e38  MOV byte ptr [ESI + 0x3550],CL
00749e3e  MOV byte ptr [ESI + 0x3551],CL
00749e44  MOV byte ptr [ESI + 0x3552],CL
00749e4a  MOV byte ptr [ESI + 0x3553],CL
00749e50  MOV byte ptr [ESI + 0x3554],CL
00749e56  MOV byte ptr [ESI + 0x3555],CL
00749e5c  MOV byte ptr [ESI + 0x3556],CL
00749e62  MOV byte ptr [ESI + 0x3557],CL
00749e68  MOV byte ptr [ESI + 0x3558],CL
00749e6e  MOV byte ptr [ESI + 0x3559],CL
00749e74  MOV byte ptr [ESI + 0x355a],CL
00749e7a  MOV byte ptr [ESI + 0x355b],CL
00749e80  MOV byte ptr [ESI + 0x355c],CL
00749e86  MOV byte ptr [ESI + 0x355d],CL
00749e8c  MOV byte ptr [ESI + 0x355e],CL
00749e92  MOV byte ptr [ESI + 0x355f],CL
00749e98  MOV CL,0x64
00749e9a  MOV dword ptr [ESI + 0x35b4],EDX
00749ea0  MOV dword ptr [ESI + 0x35bc],EDX
00749ea6  MOV DL,0x1c
00749ea8  MOV dword ptr [ESI + 0x3518],EDI
00749eae  MOV dword ptr [ESI + 0x3520],EDI
00749eb4  MOV dword ptr [ESI + 0x35b8],EDI
00749eba  MOV dword ptr [ESI + 0x35c0],EDI
00749ec0  MOV dword ptr [ESI + 0x234],EAX
00749ec6  MOV dword ptr [ESI + 0x238],EAX
00749ecc  MOV dword ptr [ESI + 0x3510],EAX
00749ed2  MOV dword ptr [ESI + 0x3524],EAX
00749ed8  MOV dword ptr [ESI + 0x3528],EAX
00749ede  MOV dword ptr [ESI + 0x352c],EAX
00749ee4  MOV dword ptr [ESI + 0x35b0],EAX
00749eea  MOV dword ptr [ESI + 0x35c4],EAX
00749ef0  MOV dword ptr [ESI + 0x35c8],EAX
00749ef6  MOV dword ptr [ESI + 0x35cc],EAX
00749efc  MOV dword ptr [ESI + 0x34a8],EAX
00749f02  MOV dword ptr [ESI + 0x34ac],EAX
00749f08  MOV dword ptr [ESI + 0x34b0],EAX
00749f0e  MOV dword ptr [ESI + 0x23c],EAX
00749f14  MOV dword ptr [ESI + 0x240],EAX
00749f1a  MOV dword ptr [ESI + 0x280],EAX
00749f20  POP EDI
00749f21  MOV dword ptr [ESI + 0x33d8],0xffffffff
00749f2b  MOV byte ptr [ESI + 0x35f0],CL
00749f31  MOV byte ptr [ESI + 0x35f1],CL
00749f37  MOV byte ptr [ESI + 0x35f2],CL
00749f3d  MOV byte ptr [ESI + 0x35f3],DL
00749f43  MOV byte ptr [ESI + 0x35f4],CL
00749f49  MOV byte ptr [ESI + 0x35f5],CL
00749f4f  MOV byte ptr [ESI + 0x35f6],CL
00749f55  MOV byte ptr [ESI + 0x35f7],DL
00749f5b  MOV byte ptr [ESI + 0x35f8],CL
00749f61  MOV byte ptr [ESI + 0x35f9],CL
00749f67  MOV byte ptr [ESI + 0x35fa],CL
00749f6d  MOV byte ptr [ESI + 0x35fb],DL
00749f73  MOV byte ptr [ESI + 0x35fc],CL
00749f79  MOV byte ptr [ESI + 0x35fd],CL
00749f7f  MOV byte ptr [ESI + 0x35fe],CL
00749f85  MOV byte ptr [ESI + 0x35ff],DL
00749f8b  MOV EAX,ESI
00749f8d  POP ESI
00749f8e  POP EBX
00749f8f  RET 0x8
