007ee73d  PUSH ESI
007ee73e  MOV ESI,ECX
007ee740  MOV ECX,dword ptr [0x009076dc]
007ee746  MOV EAX,dword ptr [ECX]
007ee748  PUSH 0x0
007ee74a  PUSH dword ptr [ESI + 0x30]
007ee74d  CALL dword ptr [EAX + 0x4]
007ee750  MOV EAX,dword ptr [ESI + 0x20]
007ee753  MOV EDX,dword ptr [ESI + 0x24]
007ee756  POP ESI
007ee757  RET
