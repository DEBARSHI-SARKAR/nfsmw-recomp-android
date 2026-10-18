007fa9ee  PUSH EBP
007fa9ef  MOV EBP,ESP
007fa9f1  MOV EAX,dword ptr [EBP + 0x8]
007fa9f4  MOV EDX,dword ptr [ECX]
007fa9f6  MOV dword ptr [ECX],EAX
007fa9f8  MOV dword ptr [EDX + 0x4],EAX
007fa9fb  MOV dword ptr [EAX + 0x4],ECX
007fa9fe  MOV dword ptr [EAX],EDX
007faa00  ADD EAX,-0x8
007faa03  POP EBP
007faa04  RET 0x4
