007ee912  PUSH EBP
007ee913  MOV EBP,ESP
007ee915  PUSH ESI
007ee916  PUSH dword ptr [EBP + 0x20]
007ee919  MOV ESI,ECX
007ee91b  PUSH dword ptr [EBP + 0x1c]
007ee91e  PUSH dword ptr [EBP + 0x18]
007ee921  CALL 0x007ed7df
007ee926  MOV EAX,dword ptr [EBP + 0x8]
007ee929  AND dword ptr [ESI + 0x38],0x0
007ee92d  AND dword ptr [ESI + 0x3c],0x0
007ee931  MOV dword ptr [ESI + 0x14],EAX
007ee934  MOV EAX,dword ptr [EBP + 0xc]
007ee937  CDQ
007ee938  MOV dword ptr [ESI + 0x28],EAX
007ee93b  MOV EAX,dword ptr [EBP + 0x10]
007ee93e  MOV dword ptr [ESI + 0x2c],EDX
007ee941  CDQ
007ee942  MOV dword ptr [ESI + 0x20],EAX
007ee945  MOV EAX,dword ptr [EBP + 0x14]
007ee948  MOV ECX,ESI
007ee94a  MOV dword ptr [ESI],0x8c2068
007ee950  MOV dword ptr [ESI + 0x24],EDX
007ee953  MOV dword ptr [ESI + 0x30],EAX
007ee956  CALL 0x007ed884
007ee95b  MOV EAX,ESI
007ee95d  POP ESI
007ee95e  POP EBP
007ee95f  RET 0x1c
