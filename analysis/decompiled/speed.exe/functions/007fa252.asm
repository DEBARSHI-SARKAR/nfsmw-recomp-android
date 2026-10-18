007fa252  PUSH EBP
007fa253  MOV EBP,ESP
007fa255  MOV EAX,dword ptr [EBP + 0x8]
007fa258  MOV EDX,dword ptr [ECX]
007fa25a  MOV dword ptr [ECX],EAX
007fa25c  MOV dword ptr [EDX + 0x4],EAX
007fa25f  MOV dword ptr [EAX + 0x4],ECX
007fa262  MOV dword ptr [EAX],EDX
007fa264  ADD EAX,-0x8
007fa267  POP EBP
007fa268  RET 0x4
