0060fd00  PUSH ESI
0060fd01  MOV ESI,ECX
0060fd03  MOV EAX,dword ptr [ESI + 0x4]
0060fd06  MOV ECX,dword ptr [EAX + 0x4]
0060fd09  PUSH ECX
0060fd0a  MOV ECX,ESI
0060fd0c  CALL 0x0060c630
0060fd11  MOV EAX,dword ptr [ESI + 0x4]
0060fd14  MOV dword ptr [EAX + 0x4],EAX
0060fd17  MOV EAX,dword ptr [ESI + 0x4]
0060fd1a  MOV dword ptr [ESI + 0x8],0x0
0060fd21  MOV dword ptr [EAX],EAX
0060fd23  MOV ESI,dword ptr [ESI + 0x4]
0060fd26  MOV dword ptr [ESI + 0x8],ESI
0060fd29  POP ESI
0060fd2a  RET
