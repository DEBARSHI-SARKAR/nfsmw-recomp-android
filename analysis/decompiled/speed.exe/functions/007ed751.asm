007ed751  MOV ECX,dword ptr [0x009bb13c]
007ed757  ADD ECX,0xc
007ed75a  CALL 0x007ec1bd
007ed75f  LEA ECX,[ESI + 0x28]
007ed762  CALL 0x007ec1a7
007ed767  AND dword ptr [ESI + 0xc],0x0
007ed76b  LEA EAX,[ESI + 0x44]
007ed76e  PUSH EAX
007ed76f  CALL 0x007ecc4a
007ed774  POP ECX
007ed775  PUSH 0x0
007ed777  PUSH 0x0
007ed779  PUSH 0x1
007ed77b  PUSH 0x0
007ed77d  CALL dword ptr [0x00890194]
007ed783  LEA ECX,[ESI + 0x4c]
007ed786  MOV dword ptr [ESI + 0x78],EAX
007ed789  CALL 0x007ec1a7
007ed78e  MOV ECX,dword ptr [ESI + 0x80]
007ed794  MOV dword ptr [ESI + 0x7c],0xff
007ed79b  MOV EAX,dword ptr [ECX]
007ed79d  CALL dword ptr [EAX + 0x4]
007ed7a0  PUSH 0x1
007ed7a2  PUSH dword ptr [0x009076f4]
007ed7a8  LEA EAX,[ESI + 0x68]
007ed7ab  PUSH dword ptr [ESI + 0x74]
007ed7ae  PUSH ESI
007ed7af  PUSH 0x7ed55e
007ed7b4  PUSH EAX
007ed7b5  CALL 0x007ec44f
007ed7ba  ADD ESP,0x18
007ed7bd  PUSH -0x1
007ed7bf  PUSH dword ptr [ESI + 0x78]
007ed7c2  CALL dword ptr [0x008902d0]
007ed7c8  PUSH dword ptr [ESI + 0x78]
007ed7cb  CALL dword ptr [0x00890178]
007ed7d1  MOV ECX,dword ptr [0x009bb13c]
007ed7d7  ADD ECX,0xc
007ed7da  JMP 0x007ec1c8
