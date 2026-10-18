005f6f50  PUSH ESI
005f6f51  MOV ESI,ECX
005f6f53  CALL 0x005e6b90
005f6f58  MOV dword ptr [ESI + 0x4],EAX
005f6f5b  MOV byte ptr [EAX + 0x21],0x1
005f6f5f  MOV EAX,dword ptr [ESI + 0x4]
005f6f62  MOV dword ptr [EAX + 0x4],EAX
005f6f65  MOV EAX,dword ptr [ESI + 0x4]
005f6f68  MOV dword ptr [EAX],EAX
005f6f6a  MOV EAX,dword ptr [ESI + 0x4]
005f6f6d  MOV dword ptr [EAX + 0x8],EAX
005f6f70  MOV dword ptr [ESI + 0x8],0x0
005f6f77  MOV EAX,ESI
005f6f79  POP ESI
005f6f7a  RET
