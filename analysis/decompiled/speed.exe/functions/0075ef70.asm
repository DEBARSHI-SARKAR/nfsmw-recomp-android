0075ef70  PUSH ESI
0075ef71  MOV ESI,ECX
0075ef73  CALL 0x0074cd10
0075ef78  MOV dword ptr [ESI + 0x4],EAX
0075ef7b  MOV byte ptr [EAX + 0x15],0x1
0075ef7f  MOV EAX,dword ptr [ESI + 0x4]
0075ef82  MOV dword ptr [EAX + 0x4],EAX
0075ef85  MOV EAX,dword ptr [ESI + 0x4]
0075ef88  MOV dword ptr [EAX],EAX
0075ef8a  MOV EAX,dword ptr [ESI + 0x4]
0075ef8d  MOV dword ptr [EAX + 0x8],EAX
0075ef90  MOV dword ptr [ESI + 0x8],0x0
0075ef97  MOV EAX,ESI
0075ef99  POP ESI
0075ef9a  RET
