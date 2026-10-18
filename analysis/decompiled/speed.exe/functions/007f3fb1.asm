007f3fb1  PUSH EBP
007f3fb2  MOV EBP,ESP
007f3fb4  SUB ESP,0x18
007f3fb7  MOV EAX,dword ptr [EBP + 0x10]
007f3fba  MOV ECX,dword ptr [0x009bb428]
007f3fc0  AND dword ptr [EBP + -0x4],0x0
007f3fc4  MOV dword ptr [EBP + -0x14],EAX
007f3fc7  MOV EAX,dword ptr [EBP + 0x8]
007f3fca  MOV dword ptr [EBP + -0x8],EAX
007f3fcd  LEA EDX,[EBP + -0x18]
007f3fd0  LEA EAX,[EBP + -0xc]
007f3fd3  PUSH EDX
007f3fd4  PUSH dword ptr [EBP + 0xc]
007f3fd7  MOV dword ptr [EBP + -0x10],EAX
007f3fda  MOV EAX,dword ptr [ECX]
007f3fdc  MOV dword ptr [EBP + -0x18],0x2
007f3fe3  MOV dword ptr [EBP + -0xc],0x1
007f3fea  CALL dword ptr [EAX]
007f3fec  LEAVE
007f3fed  RET
