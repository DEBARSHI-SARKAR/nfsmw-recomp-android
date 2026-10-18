005abb60  PUSH ESI
005abb61  MOV ESI,ECX
005abb63  CALL 0x00594570
005abb68  MOV dword ptr [ESI + 0x4],EAX
005abb6b  MOV byte ptr [EAX + 0x15],0x1
005abb6f  MOV EAX,dword ptr [ESI + 0x4]
005abb72  MOV dword ptr [EAX + 0x4],EAX
005abb75  MOV EAX,dword ptr [ESI + 0x4]
005abb78  MOV dword ptr [EAX],EAX
005abb7a  MOV EAX,dword ptr [ESI + 0x4]
005abb7d  MOV dword ptr [EAX + 0x8],EAX
005abb80  MOV dword ptr [ESI + 0x8],0x0
005abb87  MOV EAX,ESI
005abb89  POP ESI
005abb8a  RET
