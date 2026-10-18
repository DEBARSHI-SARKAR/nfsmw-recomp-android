00700370  MOV EAX,ECX
00700372  MOV ECX,dword ptr [ESP + 0x4]
00700376  MOV dword ptr [EAX + 0xc],ECX
00700379  XOR ECX,ECX
0070037b  MOV dword ptr [EAX],0x8b1d98
00700381  MOV dword ptr [EAX + 0x10],ECX
00700384  MOV dword ptr [EAX + 0x14],ECX
00700387  MOV dword ptr [EAX + 0x18],ECX
0070038a  PUSH ESI
0070038b  MOV ESI,dword ptr [0x008a2fb4]
00700391  LEA EDX,[EAX + 0x1c]
00700394  MOV dword ptr [EDX],ESI
00700396  MOV ESI,dword ptr [0x008a2fb8]
0070039c  MOV dword ptr [EDX + 0x4],ESI
0070039f  MOV ESI,dword ptr [0x008a2fbc]
007003a5  MOV dword ptr [EDX + 0x8],ESI
007003a8  MOV dword ptr [EAX + 0x28],ECX
007003ab  MOV dword ptr [EAX + 0x2c],ECX
007003ae  MOV dword ptr [EAX + 0x30],0x3f800000
007003b5  MOV byte ptr [EAX + 0x34],CL
007003b8  MOV byte ptr [EAX + 0x35],CL
007003bb  MOV byte ptr [EAX + 0x36],CL
007003be  MOV dword ptr [EAX],0x8b1e18
007003c4  POP ESI
007003c5  RET 0x4
