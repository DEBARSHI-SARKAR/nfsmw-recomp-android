007fd0ef  PUSH EBP
007fd0f0  MOV EBP,ESP
007fd0f2  PUSH ESI
007fd0f3  MOV ESI,dword ptr [EBP + 0x8]
007fd0f6  MOV EAX,dword ptr [ESI]
007fd0f8  MOV EAX,dword ptr [ESI + EAX*0x4 + 0x3c]
007fd0fc  CMP EAX,dword ptr [ESI + 0x38]
007fd0ff  JZ 0x007fd11a
007fd101  MOV EAX,dword ptr [ESI + 0x4]
007fd104  PUSH ESI
007fd105  MOV dword ptr [ESI + 0x38],EAX
007fd108  CALL dword ptr [0x009c6a74]
007fd10e  PUSH dword ptr [EBP + 0xc]
007fd111  PUSH ESI
007fd112  CALL 0x007fd063
007fd117  ADD ESP,0xc
007fd11a  POP ESI
007fd11b  POP EBP
007fd11c  RET
