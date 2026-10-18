007df730  PUSH EBP
007df731  MOV EBP,ESP
007df733  SUB ESP,0x14
007df736  PUSH ESI
007df737  MOV EAX,[0x0090729c]
007df73c  MOV dword ptr [EBP + -0xc],EAX
007df73f  MOV dword ptr [EBP + -0x10],0x0
007df746  MOV dword ptr [EBP + -0x8],0x0
007df74d  JMP 0x007df758
007df74f  MOV ECX,dword ptr [EBP + -0x8]
007df752  ADD ECX,0x1
007df755  MOV dword ptr [EBP + -0x8],ECX
007df758  CMP dword ptr [EBP + -0x8],0xc
007df75c  JNC 0x007df792
007df75e  MOV EDX,dword ptr [EBP + -0x8]
007df761  MOV EAX,dword ptr [EBP + -0xc]
007df764  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x38]
007df768  PUSH ECX
007df769  CALL 0x007d0cd0
007df76e  ADD ESP,0x4
007df771  MOV ESI,EAX
007df773  MOV EDX,dword ptr [EBP + -0x8]
007df776  MOV EAX,dword ptr [EBP + -0xc]
007df779  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x68]
007df77d  PUSH ECX
007df77e  CALL 0x007d0cd0
007df783  ADD ESP,0x4
007df786  ADD EAX,dword ptr [EBP + -0x10]
007df789  LEA EDX,[EAX + ESI*0x1 + 0x2]
007df78d  MOV dword ptr [EBP + -0x10],EDX
007df790  JMP 0x007df74f
007df792  PUSH 0x91
007df797  PUSH 0x8bdf70
007df79c  PUSH 0x2
007df79e  MOV EAX,dword ptr [EBP + -0x10]
007df7a1  ADD EAX,0x1
007df7a4  PUSH EAX
007df7a5  CALL 0x007c6700
007df7aa  ADD ESP,0x10
007df7ad  MOV dword ptr [EBP + -0x4],EAX
007df7b0  CMP dword ptr [EBP + -0x4],0x0
007df7b4  JZ 0x007df853
007df7ba  MOV ECX,dword ptr [EBP + -0x4]
007df7bd  MOV dword ptr [EBP + -0x14],ECX
007df7c0  MOV dword ptr [EBP + -0x8],0x0
007df7c7  JMP 0x007df7d2
007df7c9  MOV EDX,dword ptr [EBP + -0x8]
007df7cc  ADD EDX,0x1
007df7cf  MOV dword ptr [EBP + -0x8],EDX
007df7d2  CMP dword ptr [EBP + -0x8],0xc
007df7d6  JNC 0x007df844
007df7d8  MOV EAX,dword ptr [EBP + -0x14]
007df7db  MOV byte ptr [EAX],0x3a
007df7de  MOV ECX,dword ptr [EBP + -0x14]
007df7e1  ADD ECX,0x1
007df7e4  MOV dword ptr [EBP + -0x14],ECX
007df7e7  MOV EDX,dword ptr [EBP + -0x8]
007df7ea  MOV EAX,dword ptr [EBP + -0xc]
007df7ed  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x38]
007df7f1  PUSH ECX
007df7f2  MOV EDX,dword ptr [EBP + -0x14]
007df7f5  PUSH EDX
007df7f6  CALL 0x007d0bd0
007df7fb  ADD ESP,0x8
007df7fe  PUSH EAX
007df7ff  CALL 0x007d0cd0
007df804  ADD ESP,0x4
007df807  ADD EAX,dword ptr [EBP + -0x14]
007df80a  MOV dword ptr [EBP + -0x14],EAX
007df80d  MOV EAX,dword ptr [EBP + -0x14]
007df810  MOV byte ptr [EAX],0x3a
007df813  MOV ECX,dword ptr [EBP + -0x14]
007df816  ADD ECX,0x1
007df819  MOV dword ptr [EBP + -0x14],ECX
007df81c  MOV EDX,dword ptr [EBP + -0x8]
007df81f  MOV EAX,dword ptr [EBP + -0xc]
007df822  MOV ECX,dword ptr [EAX + EDX*0x4 + 0x68]
007df826  PUSH ECX
007df827  MOV EDX,dword ptr [EBP + -0x14]
007df82a  PUSH EDX
007df82b  CALL 0x007d0bd0
007df830  ADD ESP,0x8
007df833  PUSH EAX
007df834  CALL 0x007d0cd0
007df839  ADD ESP,0x4
007df83c  ADD EAX,dword ptr [EBP + -0x14]
007df83f  MOV dword ptr [EBP + -0x14],EAX
007df842  JMP 0x007df7c9
007df844  MOV EAX,dword ptr [EBP + -0x14]
007df847  MOV byte ptr [EAX],0x0
007df84a  MOV ECX,dword ptr [EBP + -0x14]
007df84d  ADD ECX,0x1
007df850  MOV dword ptr [EBP + -0x14],ECX
007df853  MOV EAX,dword ptr [EBP + -0x4]
007df856  POP ESI
007df857  MOV ESP,EBP
007df859  POP EBP
007df85a  RET
