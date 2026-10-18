007ca4a1  CMP dword ptr [EBP + 0x10],0x0
007ca4a5  JZ 0x007ca4a9
007ca4a7  JMP 0x007ca4bf
007ca4a9  MOV dword ptr [0x009baa60],0x1
007ca4b3  MOV EAX,dword ptr [EBP + 0x8]
007ca4b6  PUSH EAX
007ca4b7  CALL 0x007ca4d0
007ca4bc  ADD ESP,0x4
007ca4bf  MOV ECX,dword ptr [EBP + -0x10]
007ca4c2  MOV dword ptr FS:[0x0],ECX
007ca4c9  POP EDI
007ca4ca  POP ESI
007ca4cb  POP EBX
007ca4cc  MOV ESP,EBP
007ca4ce  POP EBP
007ca4cf  RET
