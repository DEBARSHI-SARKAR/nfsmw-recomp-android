005ee540  PUSH ESI
005ee541  MOV ESI,ECX
005ee543  CALL 0x005e6a30
005ee548  MOV dword ptr [ESI + 0x4],EAX
005ee54b  MOV byte ptr [EAX + 0x15],0x1
005ee54f  MOV EAX,dword ptr [ESI + 0x4]
005ee552  MOV dword ptr [EAX + 0x4],EAX
005ee555  MOV EAX,dword ptr [ESI + 0x4]
005ee558  MOV dword ptr [EAX],EAX
005ee55a  MOV EAX,dword ptr [ESI + 0x4]
005ee55d  MOV dword ptr [EAX + 0x8],EAX
005ee560  MOV dword ptr [ESI + 0x8],0x0
005ee567  MOV EAX,ESI
005ee569  POP ESI
005ee56a  RET 0x8
