007dbfc0  PUSH EBP
007dbfc1  MOV EBP,ESP
007dbfc3  PUSH -0x1
007dbfc5  PUSH 0x8bd7a0
007dbfca  PUSH 0x7cd5e4
007dbfcf  MOV EAX,FS:[0x0]
007dbfd5  PUSH EAX
007dbfd6  MOV dword ptr FS:[0x0],ESP
007dbfdd  SUB ESP,0x8
007dbfe0  PUSH EBX
007dbfe1  PUSH ESI
007dbfe2  PUSH EDI
007dbfe3  CMP dword ptr [0x009bae6c],0x0
007dbfea  JNZ 0x007dc031
007dbfec  PUSH 0x6
007dbfee  CALL 0x007d0fd0
007dbff3  ADD ESP,0x4
007dbff6  MOV dword ptr [EBP + -0x4],0x0
007dbffd  CMP dword ptr [0x009bae6c],0x0
007dc004  JNZ 0x007dc018
007dc006  CALL 0x007dc0c0
007dc00b  MOV EAX,[0x009bae6c]
007dc010  ADD EAX,0x1
007dc013  MOV [0x009bae6c],EAX
007dc018  MOV dword ptr [EBP + -0x4],0xffffffff
007dc01f  CALL 0x007dc026
007dc024  JMP 0x007dc031
