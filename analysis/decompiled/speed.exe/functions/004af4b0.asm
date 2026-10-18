004af4b0  MOV EDX,dword ptr [ESP + 0x4]
004af4b4  SUB ESP,0x10
004af4b7  MOV EAX,ESP
004af4b9  MOV dword ptr [EAX],EDX
004af4bb  MOV EDX,dword ptr [ESP + 0x18]
004af4bf  MOV dword ptr [EAX + 0x4],EDX
004af4c2  MOV EDX,dword ptr [ESP + 0x1c]
004af4c6  MOV dword ptr [EAX + 0x8],EDX
004af4c9  MOV EDX,dword ptr [ESP + 0x20]
004af4cd  MOV dword ptr [EAX + 0xc],EDX
004af4d0  CALL 0x004af470
004af4d5  CMP EAX,-0x1
004af4d8  JZ 0x004af4e9
004af4da  MOV ECX,EAX
004af4dc  IMUL ECX,ECX,0x68
004af4df  MOV DL,byte ptr [ECX + 0x912891]
004af4e5  TEST DL,DL
004af4e7  JNZ 0x004af4ec
004af4e9  OR EAX,0xffffffff
004af4ec  RET 0x10
