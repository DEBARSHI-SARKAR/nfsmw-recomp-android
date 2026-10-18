006969c0  MOV EDX,dword ptr [ESP + 0x14]
006969c4  MOV EAX,ECX
006969c6  PUSH ESI
006969c7  MOV ESI,dword ptr [EDX]
006969c9  LEA ECX,[EAX + 0x8]
006969cc  MOV dword ptr [ECX],ESI
006969ce  MOV ESI,dword ptr [EDX + 0x4]
006969d1  MOV dword ptr [ECX + 0x4],ESI
006969d4  MOV ESI,dword ptr [EDX + 0x8]
006969d7  MOV dword ptr [ECX + 0x8],ESI
006969da  MOV EDX,dword ptr [EDX + 0xc]
006969dd  MOV dword ptr [ECX + 0xc],EDX
006969e0  MOV EDX,dword ptr [ESP + 0x8]
006969e4  MOV ESI,dword ptr [EDX]
006969e6  LEA ECX,[EAX + 0x18]
006969e9  MOV dword ptr [ECX],ESI
006969eb  MOV ESI,dword ptr [EDX + 0x4]
006969ee  MOV dword ptr [ECX + 0x4],ESI
006969f1  MOV EDX,dword ptr [EDX + 0x8]
006969f4  MOV dword ptr [ECX + 0x8],EDX
006969f7  MOV ECX,dword ptr [ESP + 0x14]
006969fb  MOV dword ptr [EAX + 0x24],ECX
006969fe  MOV ECX,dword ptr [ESP + 0xc]
00696a02  MOV ESI,dword ptr [ECX]
00696a04  LEA EDX,[EAX + 0x28]
00696a07  MOV dword ptr [EDX],ESI
00696a09  MOV ESI,dword ptr [ECX + 0x4]
00696a0c  MOV dword ptr [EDX + 0x4],ESI
00696a0f  MOV ECX,dword ptr [ECX + 0x8]
00696a12  MOV dword ptr [EDX + 0x8],ECX
00696a15  MOV EDX,dword ptr [ESP + 0x20]
00696a19  MOV ECX,dword ptr [EDX]
00696a1b  MOV dword ptr [EAX + 0x34],ECX
00696a1e  MOV ECX,dword ptr [0x008a2fb4]
00696a24  LEA EDX,[EAX + 0x38]
00696a27  MOV dword ptr [EDX],ECX
00696a29  MOV ECX,dword ptr [0x008a2fb8]
00696a2f  MOV dword ptr [EDX + 0x4],ECX
00696a32  MOV ECX,dword ptr [0x008a2fbc]
00696a38  MOV dword ptr [EDX + 0x8],ECX
00696a3b  MOV EDX,dword ptr [ESP + 0x1c]
00696a3f  MOV ECX,dword ptr [ESP + 0x10]
00696a43  MOV dword ptr [EAX + 0x44],EDX
00696a46  MOV EDX,dword ptr [ECX + 0x4]
00696a49  MOV dword ptr [EAX + 0x48],EDX
00696a4c  POP ESI
00696a4d  RET 0x1c
