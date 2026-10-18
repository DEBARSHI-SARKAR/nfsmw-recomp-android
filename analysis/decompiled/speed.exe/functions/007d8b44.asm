007d8b44  PUSH EBP
007d8b45  MOV EBP,ESP
007d8b47  ADD ESP,-0xc
007d8b4a  PUSH EBX
007d8b4b  MOV AX,word ptr [EBP + 0xe]
007d8b4f  MOV BX,AX
007d8b52  AND AX,0x7ff0
007d8b56  CMP AX,0x7ff0
007d8b5a  JNZ 0x007d8b7a
007d8b5c  OR BX,0x7fff
007d8b61  MOV word ptr [EBP + -0x2],BX
007d8b65  MOV EAX,dword ptr [EBP + 0xc]
007d8b68  MOV EBX,dword ptr [EBP + 0x8]
007d8b6b  SHLD EAX,EBX,0xb
007d8b6f  MOV dword ptr [EBP + -0x6],EAX
007d8b72  MOV dword ptr [EBP + -0xa],EBX
007d8b75  FLD extended double ptr [EBP + -0xa]
007d8b78  JMP 0x007d8b7d
007d8b7a  FLD double ptr [EBP + 0x8]
007d8b7d  POP EBX
007d8b7e  LEAVE
007d8b7f  RET
