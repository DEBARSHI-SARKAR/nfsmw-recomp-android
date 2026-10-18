005db770  MOV EAX,FS:[0x0]
005db776  MOV CL,byte ptr [0x0091e044]
005db77c  PUSH -0x1
005db77e  PUSH 0x874dbe
005db783  PUSH EAX
005db784  MOV EAX,0x1
005db789  TEST AL,CL
005db78b  MOV dword ptr FS:[0x0],ESP
005db792  JNZ 0x005db7ca
005db794  OR dword ptr [0x0091e044],EAX
005db79a  PUSH 0x8a388c
005db79f  MOV dword ptr [ESP + 0xc],0x0
005db7a7  CALL 0x005cc240
005db7ac  MOV ECX,dword ptr [ESP + 0x14]
005db7b0  MOV [0x0091e040],EAX
005db7b5  MOV dword ptr [ECX],EAX
005db7b7  ADD ESP,0x4
005db7ba  MOV EAX,ECX
005db7bc  MOV ECX,dword ptr [ESP]
005db7bf  MOV dword ptr FS:[0x0],ECX
005db7c6  ADD ESP,0xc
005db7c9  RET
005db7ca  MOV ECX,dword ptr [0x0091e040]
005db7d0  MOV EAX,dword ptr [ESP + 0x10]
005db7d4  MOV dword ptr [EAX],ECX
005db7d6  MOV ECX,dword ptr [ESP]
005db7d9  MOV dword ptr FS:[0x0],ECX
005db7e0  ADD ESP,0xc
005db7e3  RET
