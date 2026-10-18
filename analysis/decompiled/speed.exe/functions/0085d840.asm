0085d840  PUSH EBP
0085d841  MOV EBP,ESP
0085d843  SUB ESP,0x1c
0085d846  MOV EAX,dword ptr [EBP + 0xc]
0085d849  MOV dword ptr [EBP + -0x8],EAX
0085d84c  MOV ECX,dword ptr [EBP + 0x10]
0085d84f  SUB ECX,0x1
0085d852  IMUL ECX,dword ptr [EBP + 0x14]
0085d856  ADD ECX,dword ptr [EBP + 0xc]
0085d859  MOV dword ptr [EBP + -0x10],ECX
0085d85c  MOV EDX,dword ptr [EBP + -0x8]
0085d85f  CMP EDX,dword ptr [EBP + -0x10]
0085d862  JA 0x0085d923
0085d868  MOV EAX,dword ptr [EBP + 0x10]
0085d86b  SHR EAX,0x1
0085d86d  MOV dword ptr [EBP + -0xc],EAX
0085d870  CMP dword ptr [EBP + -0xc],0x0
0085d874  JZ 0x0085d8fd
0085d87a  MOV ECX,dword ptr [EBP + 0x10]
0085d87d  AND ECX,0x1
0085d880  JZ 0x0085d88a
0085d882  MOV EDX,dword ptr [EBP + -0xc]
0085d885  MOV dword ptr [EBP + -0x18],EDX
0085d888  JMP 0x0085d893
0085d88a  MOV EAX,dword ptr [EBP + -0xc]
0085d88d  SUB EAX,0x1
0085d890  MOV dword ptr [EBP + -0x18],EAX
0085d893  MOV ECX,dword ptr [EBP + -0x18]
0085d896  IMUL ECX,dword ptr [EBP + 0x14]
0085d89a  ADD ECX,dword ptr [EBP + -0x8]
0085d89d  MOV dword ptr [EBP + -0x4],ECX
0085d8a0  MOV EDX,dword ptr [EBP + -0x4]
0085d8a3  PUSH EDX
0085d8a4  MOV EAX,dword ptr [EBP + 0x8]
0085d8a7  PUSH EAX
0085d8a8  CALL dword ptr [EBP + 0x18]
0085d8ab  ADD ESP,0x8
0085d8ae  MOV dword ptr [EBP + -0x14],EAX
0085d8b1  CMP dword ptr [EBP + -0x14],0x0
0085d8b5  JNZ 0x0085d8bc
0085d8b7  MOV EAX,dword ptr [EBP + -0x4]
0085d8ba  JMP 0x0085d925
0085d8bc  CMP dword ptr [EBP + -0x14],0x0
0085d8c0  JGE 0x0085d8ec
0085d8c2  MOV ECX,dword ptr [EBP + -0x4]
0085d8c5  SUB ECX,dword ptr [EBP + 0x14]
0085d8c8  MOV dword ptr [EBP + -0x10],ECX
0085d8cb  MOV EDX,dword ptr [EBP + 0x10]
0085d8ce  AND EDX,0x1
0085d8d1  JZ 0x0085d8db
0085d8d3  MOV EAX,dword ptr [EBP + -0xc]
0085d8d6  MOV dword ptr [EBP + -0x1c],EAX
0085d8d9  JMP 0x0085d8e4
0085d8db  MOV ECX,dword ptr [EBP + -0xc]
0085d8de  SUB ECX,0x1
0085d8e1  MOV dword ptr [EBP + -0x1c],ECX
0085d8e4  MOV EDX,dword ptr [EBP + -0x1c]
0085d8e7  MOV dword ptr [EBP + 0x10],EDX
0085d8ea  JMP 0x0085d8fb
0085d8ec  MOV EAX,dword ptr [EBP + -0x4]
0085d8ef  ADD EAX,dword ptr [EBP + 0x14]
0085d8f2  MOV dword ptr [EBP + -0x8],EAX
0085d8f5  MOV ECX,dword ptr [EBP + -0xc]
0085d8f8  MOV dword ptr [EBP + 0x10],ECX
0085d8fb  JMP 0x0085d91e
0085d8fd  CMP dword ptr [EBP + 0x10],0x0
0085d901  JZ 0x0085d91c
0085d903  MOV EDX,dword ptr [EBP + -0x8]
0085d906  PUSH EDX
0085d907  MOV EAX,dword ptr [EBP + 0x8]
0085d90a  PUSH EAX
0085d90b  CALL dword ptr [EBP + 0x18]
0085d90e  ADD ESP,0x8
0085d911  NEG EAX
0085d913  SBB EAX,EAX
0085d915  NOT EAX
0085d917  AND EAX,dword ptr [EBP + -0x8]
0085d91a  JMP 0x0085d925
0085d91c  JMP 0x0085d923
0085d91e  JMP 0x0085d85c
0085d923  XOR EAX,EAX
0085d925  MOV ESP,EBP
0085d927  POP EBP
0085d928  RET
