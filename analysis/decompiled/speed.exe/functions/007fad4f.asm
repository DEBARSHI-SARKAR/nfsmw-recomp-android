007fad4f  PUSH 0x8
007fad51  POP EDX
007fad52  SHL ECX,0x2
007fad55  PUSH ESI
007fad56  MOV ESI,dword ptr [0x00909fcc]
007fad5c  MOV dword ptr [EAX],ESI
007fad5e  MOV ESI,dword ptr [0x00909fcc]
007fad64  MOV dword ptr [EAX + 0x4],ESI
007fad67  MOV ESI,dword ptr [0x00909fcc]
007fad6d  MOV dword ptr [EAX + 0x8],ESI
007fad70  MOV ESI,dword ptr [0x00909fcc]
007fad76  MOV dword ptr [EAX + 0xc],ESI
007fad79  MOV ESI,dword ptr [0x00909fcc]
007fad7f  MOV dword ptr [EAX + 0x10],ESI
007fad82  MOV ESI,dword ptr [0x00909fcc]
007fad88  MOV dword ptr [EAX + 0x14],ESI
007fad8b  MOV ESI,dword ptr [0x00909fcc]
007fad91  MOV dword ptr [EAX + 0x18],ESI
007fad94  MOV ESI,dword ptr [0x00909fcc]
007fad9a  MOV dword ptr [EAX + 0x1c],ESI
007fad9d  ADD EAX,ECX
007fad9f  DEC EDX
007fada0  JNZ 0x007fad56
007fada2  POP ESI
007fada3  RET
