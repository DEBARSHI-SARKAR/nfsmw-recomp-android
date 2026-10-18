0067aa10  PUSH ESI
0067aa11  MOV ESI,ECX
0067aa13  CALL 0x00675ab0
0067aa18  MOV dword ptr [ESI + 0x4],EAX
0067aa1b  MOV byte ptr [EAX + 0x15],0x1
0067aa1f  MOV EAX,dword ptr [ESI + 0x4]
0067aa22  MOV dword ptr [EAX + 0x4],EAX
0067aa25  MOV EAX,dword ptr [ESI + 0x4]
0067aa28  MOV dword ptr [EAX],EAX
0067aa2a  MOV EAX,dword ptr [ESI + 0x4]
0067aa2d  MOV dword ptr [EAX + 0x8],EAX
0067aa30  MOV dword ptr [ESI + 0x8],0x0
0067aa37  POP ESI
0067aa38  RET
