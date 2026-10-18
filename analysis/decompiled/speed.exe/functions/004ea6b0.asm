004ea6b0  PUSH ESI
004ea6b1  MOV ESI,ECX
004ea6b3  CALL 0x00466410
004ea6b8  TEST EAX,EAX
004ea6ba  JZ 0x004ea6d4
004ea6bc  MOV ECX,dword ptr [ESP + 0x8]
004ea6c0  MOV dword ptr [EAX + 0x8],ECX
004ea6c3  MOV ECX,dword ptr [ESI + 0x4]
004ea6c6  MOV dword ptr [ECX],EAX
004ea6c8  MOV dword ptr [ESI + 0x4],EAX
004ea6cb  MOV dword ptr [EAX],ESI
004ea6cd  MOV dword ptr [EAX + 0x4],ECX
004ea6d0  POP ESI
004ea6d1  RET 0x4
004ea6d4  MOV ECX,dword ptr [ESI + 0x4]
004ea6d7  XOR EAX,EAX
004ea6d9  MOV dword ptr [ECX],EAX
004ea6db  MOV dword ptr [ESI + 0x4],EAX
004ea6de  MOV dword ptr [EAX],ESI
004ea6e0  MOV dword ptr [EAX + 0x4],ECX
004ea6e3  POP ESI
004ea6e4  RET 0x4
