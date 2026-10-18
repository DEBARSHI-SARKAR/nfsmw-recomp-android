005f6ee0  PUSH ESI
005f6ee1  MOV ESI,ECX
005f6ee3  CALL 0x005e6a30
005f6ee8  MOV dword ptr [ESI + 0x4],EAX
005f6eeb  MOV byte ptr [EAX + 0x15],0x1
005f6eef  MOV EAX,dword ptr [ESI + 0x4]
005f6ef2  MOV dword ptr [EAX + 0x4],EAX
005f6ef5  MOV EAX,dword ptr [ESI + 0x4]
005f6ef8  MOV dword ptr [EAX],EAX
005f6efa  MOV EAX,dword ptr [ESI + 0x4]
005f6efd  MOV dword ptr [EAX + 0x8],EAX
005f6f00  MOV dword ptr [ESI + 0x8],0x0
005f6f07  MOV EAX,ESI
005f6f09  POP ESI
005f6f0a  RET
