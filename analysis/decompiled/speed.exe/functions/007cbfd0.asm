007cbfd0  PUSH EBP
007cbfd1  MOV EBP,ESP
007cbfd3  CMP dword ptr [EBP + 0x8],0xe06d7363
007cbfda  JNZ 0x007cbfee
007cbfdc  MOV EAX,dword ptr [EBP + 0xc]
007cbfdf  PUSH EAX
007cbfe0  MOV ECX,dword ptr [EBP + 0x8]
007cbfe3  PUSH ECX
007cbfe4  CALL 0x007cc000
007cbfe9  ADD ESP,0x8
007cbfec  JMP 0x007cbff0
007cbfee  XOR EAX,EAX
007cbff0  POP EBP
007cbff1  RET
