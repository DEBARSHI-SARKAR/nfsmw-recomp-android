005de370  MOV EAX,FS:[0x0]
005de376  MOV CL,byte ptr [0x0091e098]
005de37c  PUSH -0x1
005de37e  PUSH 0x874ede
005de383  PUSH EAX
005de384  MOV EAX,0x1
005de389  TEST AL,CL
005de38b  MOV dword ptr FS:[0x0],ESP
005de392  JNZ 0x005de3ca
005de394  OR dword ptr [0x0091e098],EAX
005de39a  PUSH 0x8a3990
005de39f  MOV dword ptr [ESP + 0xc],0x0
005de3a7  CALL 0x005cc240
005de3ac  MOV ECX,dword ptr [ESP + 0x14]
005de3b0  MOV [0x0091e094],EAX
005de3b5  MOV dword ptr [ECX],EAX
005de3b7  ADD ESP,0x4
005de3ba  MOV EAX,ECX
005de3bc  MOV ECX,dword ptr [ESP]
005de3bf  MOV dword ptr FS:[0x0],ECX
005de3c6  ADD ESP,0xc
005de3c9  RET
005de3ca  MOV ECX,dword ptr [0x0091e094]
005de3d0  MOV EAX,dword ptr [ESP + 0x10]
005de3d4  MOV dword ptr [EAX],ECX
005de3d6  MOV ECX,dword ptr [ESP]
005de3d9  MOV dword ptr FS:[0x0],ECX
005de3e0  ADD ESP,0xc
005de3e3  RET
