006b4b10  PUSH -0x1
006b4b12  PUSH 0x87d658
006b4b17  MOV EAX,FS:[0x0]
006b4b1d  PUSH EAX
006b4b1e  MOV dword ptr FS:[0x0],ESP
006b4b25  PUSH ECX
006b4b26  MOV EAX,dword ptr [ESP + 0x18]
006b4b2a  PUSH ESI
006b4b2b  MOV ESI,ECX
006b4b2d  MOV ECX,dword ptr [ESP + 0x18]
006b4b31  PUSH EAX
006b4b32  PUSH ECX
006b4b33  MOV ECX,ESI
006b4b35  MOV dword ptr [ESP + 0xc],ESI
006b4b39  CALL 0x006b45c0
006b4b3e  MOV EAX,dword ptr [ESI + 0x34]
006b4b41  MOV dword ptr [ESI],0x8ac0fc
006b4b47  MOV dword ptr [ESI + 0x8],0x8ac0f4
006b4b4e  MOV dword ptr [ESI + 0x4c],0x8ac0ec
006b4b55  MOV dword ptr [ESI + 0x54],0x8ac0e4
006b4b5c  MOV ECX,dword ptr [EAX + 0x4]
006b4b5f  PUSH 0x604250
006b4b64  MOV dword ptr [ESP + 0x14],0x0
006b4b6c  CALL 0x005d59f0
006b4b71  MOV dword ptr [ESI + 0x98],EAX
006b4b77  MOV EAX,dword ptr [ESI + 0x34]
006b4b7a  MOV ECX,dword ptr [EAX + 0x4]
006b4b7d  PUSH 0x68cc70
006b4b82  CALL 0x005d59f0
006b4b87  MOV ECX,dword ptr [ESP + 0x8]
006b4b8b  MOV dword ptr [ESI + 0x9c],EAX
006b4b91  MOV EAX,ESI
006b4b93  POP ESI
006b4b94  MOV dword ptr FS:[0x0],ECX
006b4b9b  ADD ESP,0x10
006b4b9e  RET 0x8
