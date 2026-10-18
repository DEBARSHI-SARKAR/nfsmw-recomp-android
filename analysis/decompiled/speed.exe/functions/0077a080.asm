0077a080  PUSH ESI
0077a081  MOV ESI,ECX
0077a083  CALL 0x00771eb0
0077a088  MOV dword ptr [ESI + 0x4],EAX
0077a08b  MOV byte ptr [EAX + 0x15],0x1
0077a08f  MOV EAX,dword ptr [ESI + 0x4]
0077a092  MOV dword ptr [EAX + 0x4],EAX
0077a095  MOV EAX,dword ptr [ESI + 0x4]
0077a098  MOV dword ptr [EAX],EAX
0077a09a  MOV EAX,dword ptr [ESI + 0x4]
0077a09d  MOV dword ptr [EAX + 0x8],EAX
0077a0a0  MOV dword ptr [ESI + 0x8],0x0
0077a0a7  POP ESI
0077a0a8  RET
