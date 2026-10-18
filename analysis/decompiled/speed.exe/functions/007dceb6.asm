007dceb6  CMP dword ptr [EBP + -0x1c],0x0
007dceba  JNZ 0x007dcec0
007dcebc  XOR EAX,EAX
007dcebe  JMP 0x007dced5
007dcec0  CMP dword ptr [EBP + -0x1c],0x1
007dcec4  JZ 0x007dced0
007dcec6  MOV EDX,dword ptr [EBP + -0x20]
007dcec9  PUSH EDX
007dceca  CALL dword ptr [EBP + -0x1c]
007dcecd  ADD ESP,0x4
007dced0  MOV EAX,0x1
007dced5  MOV ECX,dword ptr [EBP + -0x10]
007dced8  MOV dword ptr FS:[0x0],ECX
007dcedf  POP EDI
007dcee0  POP ESI
007dcee1  POP EBX
007dcee2  MOV ESP,EBP
007dcee4  POP EBP
007dcee5  RET 0x4
