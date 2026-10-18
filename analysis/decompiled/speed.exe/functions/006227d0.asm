006227d0  MOV EDX,dword ptr [ESP + 0x4]
006227d4  MOV EAX,ECX
006227d6  LEA ECX,[EAX + 0x8]
006227d9  MOV dword ptr [ECX],EDX
006227db  MOV EDX,dword ptr [ESP + 0x8]
006227df  MOV dword ptr [ECX + 0x4],EDX
006227e2  MOV EDX,dword ptr [ESP + 0xc]
006227e6  MOV dword ptr [ECX + 0x8],EDX
006227e9  MOV EDX,dword ptr [ESP + 0x10]
006227ed  MOV dword ptr [ECX + 0xc],EDX
006227f0  MOV EDX,dword ptr [ESP + 0x14]
006227f4  LEA ECX,[EAX + 0x18]
006227f7  MOV dword ptr [ECX],EDX
006227f9  MOV EDX,dword ptr [ESP + 0x18]
006227fd  MOV dword ptr [ECX + 0x4],EDX
00622800  MOV EDX,dword ptr [ESP + 0x1c]
00622804  MOV dword ptr [ECX + 0x8],EDX
00622807  MOV EDX,dword ptr [ESP + 0x20]
0062280b  MOV dword ptr [ECX + 0xc],EDX
0062280e  MOV EDX,dword ptr [ESP + 0x24]
00622812  LEA ECX,[EAX + 0x28]
00622815  MOV dword ptr [ECX],EDX
00622817  MOV EDX,dword ptr [ESP + 0x28]
0062281b  MOV dword ptr [ECX + 0x4],EDX
0062281e  MOV EDX,dword ptr [ESP + 0x2c]
00622822  MOV dword ptr [ECX + 0x8],EDX
00622825  MOV EDX,dword ptr [ESP + 0x30]
00622829  MOV dword ptr [ECX + 0xc],EDX
0062282c  MOV ECX,dword ptr [ESP + 0x34]
00622830  MOV EDX,dword ptr [ESP + 0x38]
00622834  MOV dword ptr [EAX + 0x38],ECX
00622837  MOV ECX,dword ptr [ESP + 0x3c]
0062283b  MOV dword ptr [EAX + 0x4],0x50
00622842  MOV dword ptr [EAX],0x8a6e5c
00622848  MOV dword ptr [EAX + 0x3c],EDX
0062284b  MOV dword ptr [EAX + 0x40],ECX
0062284e  RET 0x3c
