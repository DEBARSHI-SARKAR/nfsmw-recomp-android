007faa07  PUSH EBP
007faa08  MOV EBP,ESP
007faa0a  MOV EAX,dword ptr [EBP + 0x8]
007faa0d  MOV EDX,dword ptr [ECX + 0x4]
007faa10  MOV dword ptr [EDX],EAX
007faa12  MOV dword ptr [ECX + 0x4],EAX
007faa15  MOV dword ptr [EAX + 0x4],EDX
007faa18  MOV dword ptr [EAX],ECX
007faa1a  ADD EAX,-0x8
007faa1d  POP EBP
007faa1e  RET 0x4
