0068dfe0  SUB ESP,0x8
0068dfe3  MOV EAX,dword ptr [ESP + 0xc]
0068dfe7  MOV dword ptr [ECX + 0x124],EAX
0068dfed  XOR EAX,EAX
0068dfef  MOV dword ptr [ECX + 0xe0],EAX
0068dff5  MOV dword ptr [ECX + 0xe4],EAX
0068dffb  PUSH ESI
0068dffc  MOV ESI,dword ptr [0x008a2fb4]
0068e002  LEA EDX,[ECX + 0x5c]
0068e005  MOV dword ptr [EDX],ESI
0068e007  MOV ESI,dword ptr [0x008a2fb8]
0068e00d  MOV dword ptr [EDX + 0x4],ESI
0068e010  MOV ESI,dword ptr [0x008a2fbc]
0068e016  MOV dword ptr [ECX + 0xd8],EAX
0068e01c  MOV dword ptr [ECX + 0xdc],EAX
0068e022  MOV dword ptr [ESP + 0x4],0x3f800000
0068e02a  MOV EAX,dword ptr [ESP + 0x4]
0068e02e  MOV dword ptr [EDX + 0x8],ESI
0068e031  MOV dword ptr [ECX + 0x11c],EAX
0068e037  MOV EAX,dword ptr [ESP + 0x18]
0068e03b  MOV dword ptr [ESP + 0x8],0x3f800000
0068e043  MOV EDX,dword ptr [ESP + 0x8]
0068e047  MOV dword ptr [ECX + 0x120],EDX
0068e04d  MOV EDX,dword ptr [ESP + 0x14]
0068e051  MOV dword ptr [ECX + 0xec],EAX
0068e057  MOV EAX,dword ptr [ESP + 0x1c]
0068e05b  MOV dword ptr [ECX + 0x128],EDX
0068e061  MOV dword ptr [ECX + 0x12c],0x3f800000
0068e06b  MOV dword ptr [ECX + 0x13c],EAX
0068e071  POP ESI
0068e072  ADD ESP,0x8
0068e075  RET 0x10
