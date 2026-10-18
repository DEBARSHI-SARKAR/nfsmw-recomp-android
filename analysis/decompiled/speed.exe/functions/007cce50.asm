007cce50  PUSH EBP
007cce51  MOV EBP,ESP
007cce53  PUSH -0x1
007cce55  PUSH 0x8b8d08
007cce5a  PUSH 0x7cd5e4
007cce5f  MOV EAX,FS:[0x0]
007cce65  PUSH EAX
007cce66  MOV dword ptr FS:[0x0],ESP
007cce6d  SUB ESP,0xc
007cce70  PUSH EBX
007cce71  PUSH ESI
007cce72  PUSH EDI
007cce73  MOV dword ptr [EBP + -0x18],ESP
007cce76  MOV ESI,0x8c8738
007cce7b  OR EDI,0xffffffff
007cce7e  MOV dword ptr [EBP + -0x1c],ESI
007cce81  CMP ESI,0x8c8738
007cce87  JNC 0x007cceb7
007cce89  MOV dword ptr [EBP + -0x4],0x0
007cce90  MOV EAX,dword ptr [ESI]
007cce92  TEST EAX,EAX
007cce94  JZ 0x007cce98
007cce96  CALL EAX
007cce98  MOV dword ptr [EBP + -0x4],EDI
007cce9b  ADD ESI,0x4
007cce9e  JMP 0x007cce7e
007cceb7  MOV ECX,dword ptr [EBP + -0x10]
007cceba  MOV dword ptr FS:[0x0],ECX
007ccec1  POP EDI
007ccec2  POP ESI
007ccec3  POP EBX
007ccec4  MOV ESP,EBP
007ccec6  POP EBP
007ccec7  RET
