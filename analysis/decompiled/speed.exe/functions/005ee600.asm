005ee600  PUSH ESI
005ee601  MOV ESI,ECX
005ee603  CALL 0x005e6e40
005ee608  MOV dword ptr [ESI + 0x4],EAX
005ee60b  MOV byte ptr [EAX + 0xf],0x1
005ee60f  MOV EAX,dword ptr [ESI + 0x4]
005ee612  MOV dword ptr [EAX + 0x4],EAX
005ee615  MOV EAX,dword ptr [ESI + 0x4]
005ee618  MOV dword ptr [EAX],EAX
005ee61a  MOV EAX,dword ptr [ESI + 0x4]
005ee61d  MOV dword ptr [EAX + 0x8],EAX
005ee620  MOV dword ptr [ESI + 0x8],0x0
005ee627  MOV EAX,ESI
005ee629  POP ESI
005ee62a  RET 0x8
