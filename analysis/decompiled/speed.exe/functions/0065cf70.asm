0065cf70  PUSH ESI
0065cf71  MOV ESI,ECX
0065cf73  MOV EAX,dword ptr [ESI + 0x4]
0065cf76  MOV ECX,dword ptr [EAX + 0x4]
0065cf79  PUSH ECX
0065cf7a  MOV ECX,ESI
0065cf7c  CALL 0x00655bf0
0065cf81  MOV EAX,dword ptr [ESI + 0x4]
0065cf84  MOV dword ptr [EAX + 0x4],EAX
0065cf87  MOV EAX,dword ptr [ESI + 0x4]
0065cf8a  MOV dword ptr [ESI + 0x8],0x0
0065cf91  MOV dword ptr [EAX],EAX
0065cf93  MOV ESI,dword ptr [ESI + 0x4]
0065cf96  MOV dword ptr [ESI + 0x8],ESI
0065cf99  POP ESI
0065cf9a  RET
