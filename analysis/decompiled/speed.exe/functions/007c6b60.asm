007c6b60  PUSH EBP
007c6b61  MOV EBP,ESP
007c6b63  SUB ESP,0xc
007c6b66  MOV EAX,dword ptr [EBP + 0xc]
007c6b69  IMUL EAX,dword ptr [EBP + 0x8]
007c6b6d  MOV dword ptr [EBP + 0xc],EAX
007c6b70  MOV ECX,dword ptr [EBP + 0x18]
007c6b73  PUSH ECX
007c6b74  MOV EDX,dword ptr [EBP + 0x14]
007c6b77  PUSH EDX
007c6b78  MOV EAX,dword ptr [EBP + 0x10]
007c6b7b  PUSH EAX
007c6b7c  MOV ECX,dword ptr [EBP + 0xc]
007c6b7f  PUSH ECX
007c6b80  CALL 0x007c6700
007c6b85  ADD ESP,0x10
007c6b88  MOV dword ptr [EBP + -0x4],EAX
007c6b8b  CMP dword ptr [EBP + -0x4],0x0
007c6b8f  JZ 0x007c6bb9
007c6b91  MOV EDX,dword ptr [EBP + -0x4]
007c6b94  MOV dword ptr [EBP + -0x8],EDX
007c6b97  MOV EAX,dword ptr [EBP + -0x8]
007c6b9a  ADD EAX,dword ptr [EBP + 0xc]
007c6b9d  MOV dword ptr [EBP + -0xc],EAX
007c6ba0  MOV ECX,dword ptr [EBP + -0x8]
007c6ba3  CMP ECX,dword ptr [EBP + -0xc]
007c6ba6  JNC 0x007c6bb9
007c6ba8  MOV EDX,dword ptr [EBP + -0x8]
007c6bab  MOV byte ptr [EDX],0x0
007c6bae  MOV EAX,dword ptr [EBP + -0x8]
007c6bb1  ADD EAX,0x1
007c6bb4  MOV dword ptr [EBP + -0x8],EAX
007c6bb7  JMP 0x007c6ba0
007c6bb9  MOV EAX,dword ptr [EBP + -0x4]
007c6bbc  MOV ESP,EBP
007c6bbe  POP EBP
007c6bbf  RET
