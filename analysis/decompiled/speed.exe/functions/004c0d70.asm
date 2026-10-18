004c0d70  SUB ESP,0x24
004c0d73  MOV ECX,dword ptr [ESP + 0x28]
004c0d77  MOV EDX,dword ptr [ESP + 0x2c]
004c0d7b  XOR EAX,EAX
004c0d7d  MOV dword ptr [ESP],EAX
004c0d80  MOV dword ptr [ESP + 0x4],EAX
004c0d84  MOV dword ptr [ESP + 0x8],EAX
004c0d88  MOV dword ptr [ESP + 0xc],EAX
004c0d8c  MOV dword ptr [ESP + 0x10],EAX
004c0d90  MOV dword ptr [ESP + 0x14],0x0
004c0d98  MOV dword ptr [ESP + 0x14],EAX
004c0d9c  MOV dword ptr [ESP + 0x18],EAX
004c0da0  MOV dword ptr [ESP + 0x1c],EAX
004c0da4  MOV dword ptr [ESP + 0x20],EAX
004c0da8  LEA EAX,[ESP + 0x28]
004c0dac  PUSH EAX
004c0dad  MOV dword ptr [ESP + 0x8],ECX
004c0db1  MOV dword ptr [ESP + 0x4],EDX
004c0db5  MOV dword ptr [ESP + 0x14],0x4b7d70
004c0dbd  CALL 0x004b39c0
004c0dc2  MOV ECX,dword ptr [EAX]
004c0dc4  MOV EAX,[0x008f831c]
004c0dc9  MOV EDX,dword ptr [ESP + 0x38]
004c0dcd  MOV dword ptr [ESP + 0x1c],EAX
004c0dd1  INC EAX
004c0dd2  MOV dword ptr [ESP + 0x18],ECX
004c0dd6  MOV ECX,dword ptr [ESP + 0x34]
004c0dda  MOV [0x008f831c],EAX
004c0ddf  MOV EAX,ESP
004c0de1  MOV dword ptr [ESP + 0x20],EDX
004c0de5  MOV dword ptr [EAX],ECX
004c0de7  LEA ECX,[ESP + 0x4]
004c0deb  CALL 0x00665390
004c0df0  ADD ESP,0x24
004c0df3  RET
