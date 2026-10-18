004b8db0  MOV ECX,dword ptr [ESP + 0x4]
004b8db4  MOV EAX,dword ptr [ECX + 0x20]
004b8db7  PUSH EAX
004b8db8  MOV EAX,dword ptr [ECX]
004b8dba  CALL dword ptr [EAX + 0x8]
004b8dbd  PUSH EAX
004b8dbe  PUSH 0x896f74
004b8dc3  PUSH 0x911e9c
004b8dc8  CALL 0x004647c0
004b8dcd  ADD ESP,0x10
004b8dd0  MOV dword ptr [0x008ee560],0x911e9c
004b8dda  RET 0x4
