007db390  PUSH EBP
007db391  MOV EBP,ESP
007db393  SUB ESP,0x8
007db396  MOV EAX,dword ptr [EBP + 0xc]
007db399  MOV dword ptr [EBP + -0x8],EAX
007db39c  MOV ECX,dword ptr [EBP + 0x8]
007db39f  MOV dword ptr [EBP + -0x4],ECX
007db3a2  MOV EDX,dword ptr [EBP + -0x8]
007db3a5  MOV EAX,dword ptr [EBP + -0x8]
007db3a8  SUB EAX,0x1
007db3ab  MOV dword ptr [EBP + -0x8],EAX
007db3ae  TEST EDX,EDX
007db3b0  JZ 0x007db3c7
007db3b2  MOV ECX,dword ptr [EBP + -0x4]
007db3b5  MOVSX EDX,byte ptr [ECX]
007db3b8  TEST EDX,EDX
007db3ba  JZ 0x007db3c7
007db3bc  MOV EAX,dword ptr [EBP + -0x4]
007db3bf  ADD EAX,0x1
007db3c2  MOV dword ptr [EBP + -0x4],EAX
007db3c5  JMP 0x007db3a2
007db3c7  MOV EAX,dword ptr [EBP + 0xc]
007db3ca  SUB EAX,dword ptr [EBP + -0x8]
007db3cd  SUB EAX,0x1
007db3d0  MOV ESP,EBP
007db3d2  POP EBP
007db3d3  RET
