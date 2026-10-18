007f1948  PUSH EBP
007f1949  MOV EBP,ESP
007f194b  SUB ESP,0x30
007f194e  MOV EAX,dword ptr [EBP + 0x18]
007f1951  MOV ECX,dword ptr [0x009bb414]
007f1957  AND dword ptr [EBP + -0x4],0x0
007f195b  MOV dword ptr [EBP + -0x2c],EAX
007f195e  MOV EAX,dword ptr [EBP + 0x14]
007f1961  MOV dword ptr [EBP + -0x20],EAX
007f1964  MOV EAX,dword ptr [EBP + 0x10]
007f1967  MOV dword ptr [EBP + -0x14],EAX
007f196a  MOV EAX,dword ptr [EBP + 0x8]
007f196d  MOV dword ptr [EBP + -0x8],EAX
007f1970  LEA EAX,[EBP + -0xc]
007f1973  MOV dword ptr [EBP + -0x10],EAX
007f1976  LEA EAX,[EBP + -0x18]
007f1979  MOV dword ptr [EBP + -0x1c],EAX
007f197c  LEA EDX,[EBP + -0x30]
007f197f  LEA EAX,[EBP + -0x24]
007f1982  PUSH EDX
007f1983  PUSH dword ptr [EBP + 0xc]
007f1986  MOV dword ptr [EBP + -0x30],0x4
007f198d  MOV dword ptr [EBP + -0x24],0x3
007f1994  MOV dword ptr [EBP + -0x18],0x2
007f199b  MOV dword ptr [EBP + -0xc],0x1
007f19a2  MOV dword ptr [EBP + -0x28],EAX
007f19a5  MOV EAX,dword ptr [ECX]
007f19a7  CALL dword ptr [EAX]
007f19a9  LEAVE
007f19aa  RET
