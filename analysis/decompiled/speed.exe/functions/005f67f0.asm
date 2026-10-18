005f67f0  PUSH ESI
005f67f1  MOV ESI,ECX
005f67f3  CALL 0x005e6b90
005f67f8  MOV dword ptr [ESI + 0x4],EAX
005f67fb  MOV byte ptr [EAX + 0x21],0x1
005f67ff  MOV EAX,dword ptr [ESI + 0x4]
005f6802  MOV dword ptr [EAX + 0x4],EAX
005f6805  MOV EAX,dword ptr [ESI + 0x4]
005f6808  MOV dword ptr [EAX],EAX
005f680a  MOV EAX,dword ptr [ESI + 0x4]
005f680d  MOV dword ptr [EAX + 0x8],EAX
005f6810  MOV dword ptr [ESI + 0x8],0x0
005f6817  MOV EAX,ESI
005f6819  POP ESI
005f681a  RET
