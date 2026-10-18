0077cfc0  PUSH ESI
0077cfc1  MOV ESI,ECX
0077cfc3  CALL 0x00771d20
0077cfc8  MOV dword ptr [ESI + 0x4],EAX
0077cfcb  MOV byte ptr [EAX + 0x15],0x1
0077cfcf  MOV EAX,dword ptr [ESI + 0x4]
0077cfd2  MOV dword ptr [EAX + 0x4],EAX
0077cfd5  MOV EAX,dword ptr [ESI + 0x4]
0077cfd8  MOV dword ptr [EAX],EAX
0077cfda  MOV EAX,dword ptr [ESI + 0x4]
0077cfdd  MOV dword ptr [EAX + 0x8],EAX
0077cfe0  MOV dword ptr [ESI + 0x8],0x0
0077cfe7  MOV EAX,ESI
0077cfe9  POP ESI
0077cfea  RET 0x8
