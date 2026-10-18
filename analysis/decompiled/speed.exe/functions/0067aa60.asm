0067aa60  PUSH ESI
0067aa61  MOV ESI,ECX
0067aa63  CALL 0x00675b80
0067aa68  MOV dword ptr [ESI + 0x4],EAX
0067aa6b  MOV byte ptr [EAX + 0x15],0x1
0067aa6f  MOV EAX,dword ptr [ESI + 0x4]
0067aa72  MOV dword ptr [EAX + 0x4],EAX
0067aa75  MOV EAX,dword ptr [ESI + 0x4]
0067aa78  MOV dword ptr [EAX],EAX
0067aa7a  MOV EAX,dword ptr [ESI + 0x4]
0067aa7d  MOV dword ptr [EAX + 0x8],EAX
0067aa80  MOV dword ptr [ESI + 0x8],0x0
0067aa87  POP ESI
0067aa88  RET
