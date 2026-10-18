007e5b90  PUSH EBP
007e5b91  MOV EBP,ESP
007e5b93  SUB ESP,0x8
007e5b96  MOV dword ptr [EBP + -0x4],0x0
007e5b9d  MOV EAX,dword ptr [EBP + 0x8]
007e5ba0  ADD EAX,dword ptr [EBP + 0xc]
007e5ba3  MOV dword ptr [EBP + -0x8],EAX
007e5ba6  MOV ECX,dword ptr [EBP + -0x8]
007e5ba9  CMP ECX,dword ptr [EBP + 0x8]
007e5bac  JC 0x007e5bb6
007e5bae  MOV EDX,dword ptr [EBP + -0x8]
007e5bb1  CMP EDX,dword ptr [EBP + 0xc]
007e5bb4  JNC 0x007e5bbf
007e5bb6  MOV EAX,dword ptr [EBP + -0x4]
007e5bb9  ADD EAX,0x1
007e5bbc  MOV dword ptr [EBP + -0x4],EAX
007e5bbf  MOV ECX,dword ptr [EBP + 0x10]
007e5bc2  MOV EDX,dword ptr [EBP + -0x8]
007e5bc5  MOV dword ptr [ECX],EDX
007e5bc7  MOV EAX,dword ptr [EBP + -0x4]
007e5bca  MOV ESP,EBP
007e5bcc  POP EBP
007e5bcd  RET
