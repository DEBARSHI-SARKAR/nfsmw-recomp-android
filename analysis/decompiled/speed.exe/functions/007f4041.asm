007f4041  PUSH EBP
007f4042  MOV EBP,ESP
007f4044  SUB ESP,0x18
007f4047  MOV EAX,dword ptr [EBP + 0x10]
007f404a  MOV ECX,dword ptr [0x009bb428]
007f4050  AND dword ptr [EBP + -0x4],0x0
007f4054  MOV dword ptr [EBP + -0x14],EAX
007f4057  MOV EAX,dword ptr [EBP + 0x8]
007f405a  MOV dword ptr [EBP + -0x8],EAX
007f405d  LEA EDX,[EBP + -0x18]
007f4060  LEA EAX,[EBP + -0xc]
007f4063  PUSH EDX
007f4064  PUSH dword ptr [EBP + 0xc]
007f4067  MOV dword ptr [EBP + -0x10],EAX
007f406a  MOV EAX,dword ptr [ECX]
007f406c  MOV dword ptr [EBP + -0x18],0x2
007f4073  MOV dword ptr [EBP + -0xc],0x1
007f407a  CALL dword ptr [EAX]
007f407c  LEAVE
007f407d  RET
