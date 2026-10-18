0067ab00  PUSH ESI
0067ab01  MOV ESI,ECX
0067ab03  MOV EAX,dword ptr [ESI + 0x4]
0067ab06  MOV ECX,dword ptr [EAX + 0x4]
0067ab09  PUSH ECX
0067ab0a  MOV ECX,ESI
0067ab0c  CALL 0x00675d00
0067ab11  MOV EAX,dword ptr [ESI + 0x4]
0067ab14  MOV dword ptr [EAX + 0x4],EAX
0067ab17  MOV EAX,dword ptr [ESI + 0x4]
0067ab1a  MOV dword ptr [ESI + 0x8],0x0
0067ab21  MOV dword ptr [EAX],EAX
0067ab23  MOV ESI,dword ptr [ESI + 0x4]
0067ab26  MOV dword ptr [ESI + 0x8],ESI
0067ab29  POP ESI
0067ab2a  RET
