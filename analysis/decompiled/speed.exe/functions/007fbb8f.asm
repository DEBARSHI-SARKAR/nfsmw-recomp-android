007fbb8f  PUSH EBP
007fbb90  MOV EBP,ESP
007fbb92  SUB ESP,0xc
007fbb95  MOV ECX,dword ptr [0x009c1948]
007fbb9b  XOR EAX,EAX
007fbb9d  CMP ECX,EAX
007fbb9f  JZ 0x007fbbb7
007fbba1  LEA EDX,[EBP + -0xc]
007fbba4  PUSH EDX
007fbba5  PUSH dword ptr [EBP + 0x8]
007fbba8  MOV dword ptr [EBP + -0xc],EAX
007fbbab  MOV dword ptr [EBP + -0x8],EAX
007fbbae  MOV dword ptr [EBP + -0x4],EAX
007fbbb1  MOV EAX,dword ptr [ECX]
007fbbb3  CALL dword ptr [EAX]
007fbbb5  LEAVE
007fbbb6  RET
007fbbb7  PUSH dword ptr [EBP + 0x8]
007fbbba  CALL 0x007c66d0
007fbbbf  POP ECX
007fbbc0  LEAVE
007fbbc1  RET
