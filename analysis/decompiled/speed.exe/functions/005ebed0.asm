005ebed0  PUSH ESI
005ebed1  MOV ESI,ECX
005ebed3  CALL 0x005e5a00
005ebed8  MOV ECX,dword ptr [0x008a2fb4]
005ebede  LEA EAX,[ESI + 0x10]
005ebee1  MOV dword ptr [EAX],ECX
005ebee3  MOV EDX,dword ptr [0x008a2fb8]
005ebee9  MOV dword ptr [EAX + 0x4],EDX
005ebeec  MOV ECX,dword ptr [0x008a2fbc]
005ebef2  MOV dword ptr [EAX + 0x8],ECX
005ebef5  OR ECX,0xffffffff
005ebef8  XOR EAX,EAX
005ebefa  MOV word ptr [ESI + 0x4],CX
005ebefe  MOV word ptr [ESI + 0x6],CX
005ebf02  TEST byte ptr [ESP + 0x8],0x1
005ebf07  MOV word ptr [ESI + 0x1c],AX
005ebf0b  MOV word ptr [ESI],AX
005ebf0e  MOV word ptr [ESI + 0x2],AX
005ebf12  MOV dword ptr [ESI + 0x8],EAX
005ebf15  MOV dword ptr [ESI + 0xc],EAX
005ebf18  JZ 0x005ebf28
005ebf1a  PUSH EAX
005ebf1b  PUSH 0x20
005ebf1d  PUSH ESI
005ebf1e  MOV ECX,0x925b30
005ebf23  CALL 0x005d0370
005ebf28  MOV EAX,ESI
005ebf2a  POP ESI
005ebf2b  RET 0x4
