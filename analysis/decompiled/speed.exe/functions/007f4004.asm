007f4004  PUSH EBP
007f4005  MOV EBP,ESP
007f4007  SUB ESP,0x18
007f400a  MOV EAX,dword ptr [EBP + 0x10]
007f400d  MOV ECX,dword ptr [0x009bb428]
007f4013  AND dword ptr [EBP + -0x4],0x0
007f4017  MOV dword ptr [EBP + -0x14],EAX
007f401a  MOV EAX,dword ptr [EBP + 0x8]
007f401d  MOV dword ptr [EBP + -0x8],EAX
007f4020  LEA EDX,[EBP + -0x18]
007f4023  LEA EAX,[EBP + -0xc]
007f4026  PUSH EDX
007f4027  PUSH dword ptr [EBP + 0xc]
007f402a  MOV dword ptr [EBP + -0x10],EAX
007f402d  MOV EAX,dword ptr [ECX]
007f402f  MOV dword ptr [EBP + -0x18],0x2
007f4036  MOV dword ptr [EBP + -0xc],0x1
007f403d  CALL dword ptr [EAX]
007f403f  LEAVE
007f4040  RET
