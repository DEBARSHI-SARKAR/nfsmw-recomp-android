004ea670  PUSH ESI
004ea671  MOV ESI,ECX
004ea673  CALL 0x00466410
004ea678  TEST EAX,EAX
004ea67a  JZ 0x004ea694
004ea67c  MOV ECX,dword ptr [ESP + 0x8]
004ea680  MOV dword ptr [EAX + 0x8],ECX
004ea683  MOV ECX,dword ptr [ESI + 0x4]
004ea686  MOV dword ptr [ECX],EAX
004ea688  MOV dword ptr [ESI + 0x4],EAX
004ea68b  MOV dword ptr [EAX],ESI
004ea68d  MOV dword ptr [EAX + 0x4],ECX
004ea690  POP ESI
004ea691  RET 0x4
004ea694  MOV ECX,dword ptr [ESI + 0x4]
004ea697  XOR EAX,EAX
004ea699  MOV dword ptr [ECX],EAX
004ea69b  MOV dword ptr [ESI + 0x4],EAX
004ea69e  MOV dword ptr [EAX],ESI
004ea6a0  MOV dword ptr [EAX + 0x4],ECX
004ea6a3  POP ESI
004ea6a4  RET 0x4
