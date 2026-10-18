007e5c80  PUSH EBP
007e5c81  MOV EBP,ESP
007e5c83  SUB ESP,0x8
007e5c86  MOV EAX,dword ptr [EBP + 0x8]
007e5c89  MOV ECX,dword ptr [EAX]
007e5c8b  AND ECX,0x80000000
007e5c91  NEG ECX
007e5c93  SBB ECX,ECX
007e5c95  NEG ECX
007e5c97  MOV dword ptr [EBP + -0x4],ECX
007e5c9a  MOV EDX,dword ptr [EBP + 0x8]
007e5c9d  MOV EAX,dword ptr [EDX + 0x4]
007e5ca0  AND EAX,0x80000000
007e5ca5  NEG EAX
007e5ca7  SBB EAX,EAX
007e5ca9  NEG EAX
007e5cab  MOV dword ptr [EBP + -0x8],EAX
007e5cae  MOV ECX,dword ptr [EBP + 0x8]
007e5cb1  MOV EDX,dword ptr [ECX]
007e5cb3  SHL EDX,0x1
007e5cb5  MOV EAX,dword ptr [EBP + 0x8]
007e5cb8  MOV dword ptr [EAX],EDX
007e5cba  MOV ECX,dword ptr [EBP + 0x8]
007e5cbd  MOV EDX,dword ptr [ECX + 0x4]
007e5cc0  SHL EDX,0x1
007e5cc2  OR EDX,dword ptr [EBP + -0x4]
007e5cc5  MOV EAX,dword ptr [EBP + 0x8]
007e5cc8  MOV dword ptr [EAX + 0x4],EDX
007e5ccb  MOV ECX,dword ptr [EBP + 0x8]
007e5cce  MOV EDX,dword ptr [ECX + 0x8]
007e5cd1  SHL EDX,0x1
007e5cd3  OR EDX,dword ptr [EBP + -0x8]
007e5cd6  MOV EAX,dword ptr [EBP + 0x8]
007e5cd9  MOV dword ptr [EAX + 0x8],EDX
007e5cdc  MOV ESP,EBP
007e5cde  POP EBP
007e5cdf  RET
