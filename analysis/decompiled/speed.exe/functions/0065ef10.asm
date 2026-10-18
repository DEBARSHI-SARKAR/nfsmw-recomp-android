0065ef10  PUSH ESI
0065ef11  MOV ESI,ECX
0065ef13  CALL 0x0065e210
0065ef18  MOV dword ptr [ESI + 0x4],EAX
0065ef1b  MOV byte ptr [EAX + 0x1d],0x1
0065ef1f  MOV EAX,dword ptr [ESI + 0x4]
0065ef22  MOV dword ptr [EAX + 0x4],EAX
0065ef25  MOV EAX,dword ptr [ESI + 0x4]
0065ef28  MOV dword ptr [EAX],EAX
0065ef2a  MOV EAX,dword ptr [ESI + 0x4]
0065ef2d  MOV dword ptr [EAX + 0x8],EAX
0065ef30  MOV dword ptr [ESI + 0x8],0x0
0065ef37  POP ESI
0065ef38  RET
