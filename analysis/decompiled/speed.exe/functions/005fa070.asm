005fa070  PUSH ESI
005fa071  MOV ESI,ECX
005fa073  MOV EAX,dword ptr [ESI + 0x4]
005fa076  MOV ECX,dword ptr [EAX + 0x4]
005fa079  PUSH ECX
005fa07a  MOV ECX,ESI
005fa07c  CALL 0x005f9b50
005fa081  MOV EAX,dword ptr [ESI + 0x4]
005fa084  MOV dword ptr [EAX + 0x4],EAX
005fa087  MOV EAX,dword ptr [ESI + 0x4]
005fa08a  MOV dword ptr [ESI + 0x8],0x0
005fa091  MOV dword ptr [EAX],EAX
005fa093  MOV ESI,dword ptr [ESI + 0x4]
005fa096  MOV dword ptr [ESI + 0x8],ESI
005fa099  POP ESI
005fa09a  RET
