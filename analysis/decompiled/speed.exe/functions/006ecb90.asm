006ecb90  PUSH -0x1
006ecb92  PUSH 0x87e8b8
006ecb97  MOV EAX,FS:[0x0]
006ecb9d  PUSH EAX
006ecb9e  MOV dword ptr FS:[0x0],ESP
006ecba5  PUSH ECX
006ecba6  MOV EAX,dword ptr [ESP + 0x1c]
006ecbaa  MOV EDX,dword ptr [ESP + 0x14]
006ecbae  PUSH ESI
006ecbaf  MOV ESI,ECX
006ecbb1  MOV ECX,dword ptr [ESP + 0x1c]
006ecbb5  PUSH EAX
006ecbb6  PUSH ECX
006ecbb7  PUSH EDX
006ecbb8  PUSH 0x4e8dce05
006ecbbd  MOV dword ptr [ESP + 0x14],ESI
006ecbc1  CALL 0x00455fd0
006ecbc6  ADD ESP,0x8
006ecbc9  PUSH EAX
006ecbca  MOV ECX,ESI
006ecbcc  CALL 0x00452380
006ecbd1  MOV EAX,dword ptr [ESI + 0x8]
006ecbd4  TEST EAX,EAX
006ecbd6  MOV dword ptr [ESP + 0x10],0x0
006ecbde  JNZ 0x006ecbf0
006ecbe0  PUSH 0xe8
006ecbe5  CALL 0x006269b0
006ecbea  ADD ESP,0x4
006ecbed  MOV dword ptr [ESI + 0x8],EAX
006ecbf0  MOV ECX,dword ptr [ESP + 0x8]
006ecbf4  MOV EAX,ESI
006ecbf6  POP ESI
006ecbf7  MOV dword ptr FS:[0x0],ECX
006ecbfe  ADD ESP,0x10
006ecc01  RET 0xc
