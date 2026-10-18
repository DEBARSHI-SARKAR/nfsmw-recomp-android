0068ffe0  MOV EAX,dword ptr [ESP + 0x4]
0068ffe4  MOV dword ptr [ECX + 0x118],EAX
0068ffea  XOR EAX,EAX
0068ffec  PUSH ESI
0068ffed  MOV dword ptr [ECX + 0xe0],EAX
0068fff3  MOV ESI,dword ptr [0x008a2fb4]
0068fff9  LEA EDX,[ECX + 0x5c]
0068fffc  MOV dword ptr [EDX],ESI
0068fffe  MOV ESI,dword ptr [0x008a2fb8]
00690004  MOV dword ptr [EDX + 0x4],ESI
00690007  MOV ESI,dword ptr [0x008a2fbc]
0069000d  MOV dword ptr [EDX + 0x8],ESI
00690010  MOV EDX,dword ptr [ESP + 0x10]
00690014  MOV dword ptr [ECX + 0xe4],EDX
0069001a  MOV EDX,dword ptr [ESP + 0xc]
0069001e  MOV dword ptr [ECX + 0xd8],EAX
00690024  MOV dword ptr [ECX + 0xdc],EAX
0069002a  MOV dword ptr [ECX + 0x11c],EDX
00690030  MOV byte ptr [ECX + 0x10d],AL
00690036  POP ESI
00690037  RET 0xc
