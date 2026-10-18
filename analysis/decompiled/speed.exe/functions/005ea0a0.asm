005ea0a0  PUSH ESI
005ea0a1  MOV ESI,ECX
005ea0a3  CALL 0x005e5a00
005ea0a8  MOV ECX,dword ptr [0x008a2fb4]
005ea0ae  LEA EAX,[ESI + 0x10]
005ea0b1  MOV dword ptr [EAX],ECX
005ea0b3  MOV EDX,dword ptr [0x008a2fb8]
005ea0b9  MOV dword ptr [EAX + 0x4],EDX
005ea0bc  MOV ECX,dword ptr [0x008a2fbc]
005ea0c2  MOV dword ptr [EAX + 0x8],ECX
005ea0c5  XOR EAX,EAX
005ea0c7  MOV word ptr [ESI + 0x1c],AX
005ea0cb  MOV word ptr [ESI],AX
005ea0ce  MOV word ptr [ESI + 0x2],AX
005ea0d2  MOV dword ptr [ESI + 0x8],EAX
005ea0d5  MOV dword ptr [ESI + 0xc],EAX
005ea0d8  OR EAX,0xffffffff
005ea0db  MOV word ptr [ESI + 0x4],AX
005ea0df  MOV word ptr [ESI + 0x6],AX
005ea0e3  POP ESI
005ea0e4  RET
