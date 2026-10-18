007cbf90  PUSH EBP
007cbf91  MOV EBP,ESP
007cbf93  PUSH ECX
007cbf94  CALL 0x007cd100
007cbf99  MOV dword ptr [EBP + -0x4],EAX
007cbf9c  MOV EAX,dword ptr [EBP + -0x4]
007cbf9f  MOV ECX,dword ptr [EAX + 0x14]
007cbfa2  IMUL ECX,ECX,0x343fd
007cbfa8  ADD ECX,0x269ec3
007cbfae  MOV EDX,dword ptr [EBP + -0x4]
007cbfb1  MOV dword ptr [EDX + 0x14],ECX
007cbfb4  MOV EAX,dword ptr [EBP + -0x4]
007cbfb7  MOV EAX,dword ptr [EAX + 0x14]
007cbfba  SHR EAX,0x10
007cbfbd  AND EAX,0x7fff
007cbfc2  MOV ESP,EBP
007cbfc4  POP EBP
007cbfc5  RET
