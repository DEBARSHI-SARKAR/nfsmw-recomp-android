005abb30  PUSH ESI
005abb31  MOV ESI,ECX
005abb33  CALL 0x00594520
005abb38  MOV dword ptr [ESI + 0x4],EAX
005abb3b  MOV byte ptr [EAX + 0x15],0x1
005abb3f  MOV EAX,dword ptr [ESI + 0x4]
005abb42  MOV dword ptr [EAX + 0x4],EAX
005abb45  MOV EAX,dword ptr [ESI + 0x4]
005abb48  MOV dword ptr [EAX],EAX
005abb4a  MOV EAX,dword ptr [ESI + 0x4]
005abb4d  MOV dword ptr [EAX + 0x8],EAX
005abb50  MOV dword ptr [ESI + 0x8],0x0
005abb57  MOV EAX,ESI
005abb59  POP ESI
005abb5a  RET
