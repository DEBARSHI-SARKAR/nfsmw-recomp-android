007ca570  PUSH EBP
007ca571  MOV EBP,ESP
007ca573  PUSH ECX
007ca574  MOV dword ptr [EBP + -0x4],0x0
007ca57b  MOV EAX,dword ptr [EBP + 0x8]
007ca57e  CMP EAX,dword ptr [EBP + 0xc]
007ca581  JNC 0x007ca5a4
007ca583  CMP dword ptr [EBP + -0x4],0x0
007ca587  JNZ 0x007ca5a4
007ca589  MOV ECX,dword ptr [EBP + 0x8]
007ca58c  CMP dword ptr [ECX],0x0
007ca58f  JZ 0x007ca599
007ca591  MOV EDX,dword ptr [EBP + 0x8]
007ca594  CALL dword ptr [EDX]
007ca596  MOV dword ptr [EBP + -0x4],EAX
007ca599  MOV EAX,dword ptr [EBP + 0x8]
007ca59c  ADD EAX,0x4
007ca59f  MOV dword ptr [EBP + 0x8],EAX
007ca5a2  JMP 0x007ca57b
007ca5a4  MOV EAX,dword ptr [EBP + -0x4]
007ca5a7  MOV ESP,EBP
007ca5a9  POP EBP
007ca5aa  RET
