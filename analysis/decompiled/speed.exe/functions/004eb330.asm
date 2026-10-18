004eb330  SUB ESP,0x24
004eb333  MOV ECX,dword ptr [ESP + 0x28]
004eb337  MOV EDX,dword ptr [ESP + 0x2c]
004eb33b  XOR EAX,EAX
004eb33d  MOV dword ptr [ESP],EAX
004eb340  MOV dword ptr [ESP + 0x4],EAX
004eb344  MOV dword ptr [ESP + 0x8],EAX
004eb348  MOV dword ptr [ESP + 0xc],EAX
004eb34c  MOV dword ptr [ESP + 0x10],EAX
004eb350  MOV dword ptr [ESP + 0x14],0x0
004eb358  MOV dword ptr [ESP + 0x14],EAX
004eb35c  MOV dword ptr [ESP + 0x18],EAX
004eb360  MOV dword ptr [ESP + 0x1c],EAX
004eb364  MOV dword ptr [ESP + 0x20],EAX
004eb368  LEA EAX,[ESP + 0x28]
004eb36c  PUSH EAX
004eb36d  MOV dword ptr [ESP + 0x8],ECX
004eb371  MOV dword ptr [ESP + 0x4],EDX
004eb375  MOV dword ptr [ESP + 0x14],0x4e4bd0
004eb37d  CALL 0x004b5880
004eb382  MOV ECX,dword ptr [EAX]
004eb384  MOV EAX,[0x008f831c]
004eb389  MOV EDX,dword ptr [ESP + 0x38]
004eb38d  MOV dword ptr [ESP + 0x1c],EAX
004eb391  INC EAX
004eb392  MOV dword ptr [ESP + 0x18],ECX
004eb396  MOV ECX,dword ptr [ESP + 0x34]
004eb39a  MOV [0x008f831c],EAX
004eb39f  MOV EAX,ESP
004eb3a1  MOV dword ptr [ESP + 0x20],EDX
004eb3a5  MOV dword ptr [EAX],ECX
004eb3a7  LEA ECX,[ESP + 0x4]
004eb3ab  CALL 0x00665390
004eb3b0  ADD ESP,0x24
004eb3b3  RET
