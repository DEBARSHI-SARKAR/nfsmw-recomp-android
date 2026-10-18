00741f20  MOV EAX,ECX
00741f22  MOV dword ptr [EAX],0x8b4b64
00741f28  XOR ECX,ECX
00741f2a  MOV dword ptr [EAX + 0x50],ECX
00741f2d  MOV dword ptr [EAX + 0x54],ECX
00741f30  MOV dword ptr [EAX + 0x58],ECX
00741f33  MOV dword ptr [EAX + 0x5c],ECX
00741f36  PUSH ESI
00741f37  MOV byte ptr [EAX + 0x70],CL
00741f3a  XOR EDX,EDX
00741f3c  LEA ESI,[EAX + 0x4]
00741f3f  MOV dword ptr [ESI],EDX
00741f41  MOV dword ptr [ESI + 0x4],EDX
00741f44  MOV dword ptr [ESI + 0x8],EDX
00741f47  MOV dword ptr [ESI + 0xc],EDX
00741f4a  LEA ESI,[EAX + 0x44]
00741f4d  MOV dword ptr [ESI],EDX
00741f4f  MOV dword ptr [ESI + 0x4],EDX
00741f52  LEA ESI,[EAX + 0x14]
00741f55  MOV dword ptr [ESI],EDX
00741f57  MOV dword ptr [ESI + 0x4],EDX
00741f5a  MOV dword ptr [ESI + 0x8],EDX
00741f5d  MOV dword ptr [ESI + 0xc],EDX
00741f60  LEA ESI,[EAX + 0x24]
00741f63  MOV dword ptr [ESI],EDX
00741f65  MOV dword ptr [ESI + 0x4],EDX
00741f68  MOV dword ptr [ESI + 0x8],EDX
00741f6b  MOV dword ptr [ESI + 0xc],EDX
00741f6e  LEA ESI,[EAX + 0x34]
00741f71  MOV dword ptr [ESI],EDX
00741f73  MOV dword ptr [ESI + 0x4],EDX
00741f76  MOV dword ptr [ESI + 0x8],EDX
00741f79  MOV dword ptr [ESI + 0xc],EDX
00741f7c  MOV DL,byte ptr [ESP + 0x8]
00741f80  MOV byte ptr [EAX + 0x68],DL
00741f83  MOV EDX,dword ptr [ESP + 0xc]
00741f87  MOV dword ptr [EAX + 0x6c],EDX
00741f8a  MOV EDX,0x1
00741f8f  MOV dword ptr [EAX + 0x4c],ECX
00741f92  MOV dword ptr [EAX + 0x60],ECX
00741f95  MOV dword ptr [EAX + 0x64],ECX
00741f98  MOV byte ptr [EAX + 0x71],CL
00741f9b  MOV byte ptr [EAX + 0x72],CL
00741f9e  MOV dword ptr [EAX + 0x78],EDX
00741fa1  MOV dword ptr [EAX + 0x74],EDX
00741fa4  MOV dword ptr [EAX + 0x7c],ECX
00741fa7  MOV dword ptr [EAX + 0x84],ECX
00741fad  MOV dword ptr [EAX + 0x88],ECX
00741fb3  MOV dword ptr [EAX + 0x80],ECX
00741fb9  MOV dword ptr [EAX + 0x90],0x3f800000
00741fc3  MOV dword ptr [EAX + 0x8c],ECX
00741fc9  MOV dword ptr [EAX + 0x94],ECX
00741fcf  MOV dword ptr [EAX + 0x98],ECX
00741fd5  MOV dword ptr [EAX + 0x9c],ECX
00741fdb  POP ESI
00741fdc  RET 0x8
