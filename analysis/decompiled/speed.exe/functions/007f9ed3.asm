007f9ed3  PUSH ESI
007f9ed4  FLDZ
007f9ed6  MOV ESI,ECX
007f9ed8  MOV dword ptr [ESI],0x8c2850
007f9ede  LEA EAX,[ESI + 0x24]
007f9ee1  MOV dword ptr [EAX],EAX
007f9ee3  MOV dword ptr [EAX + 0x4],EAX
007f9ee6  LEA EAX,[ESI + 0x2c]
007f9ee9  MOV dword ptr [EAX],EAX
007f9eeb  MOV dword ptr [EAX + 0x4],EAX
007f9eee  FSTP float ptr [ESI + 0x18]
007f9ef1  XOR EAX,EAX
007f9ef3  MOV dword ptr [ESI + 0x1c],0x1
007f9efa  MOV dword ptr [ESI + 0x8],EAX
007f9efd  MOV dword ptr [ESI + 0xc],EAX
007f9f00  MOV dword ptr [ESI + 0x10],EAX
007f9f03  MOV dword ptr [ESI + 0x14],EAX
007f9f06  MOV dword ptr [ESI + 0x4],EAX
007f9f09  OR dword ptr [0x009bfe20],0xffffffff
007f9f10  PUSH 0x909e60
007f9f15  MOV [0x009bfe1c],EAX
007f9f1a  CALL 0x007fbb7c
007f9f1f  POP ECX
007f9f20  CALL 0x007fbb31
007f9f25  MOV EAX,ESI
007f9f27  POP ESI
007f9f28  RET
