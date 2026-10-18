006a4ba0  PUSH -0x1
006a4ba2  PUSH 0x87ca58
006a4ba7  MOV EAX,FS:[0x0]
006a4bad  PUSH EAX
006a4bae  MOV dword ptr FS:[0x0],ESP
006a4bb5  PUSH ECX
006a4bb6  MOV EAX,dword ptr [ESP + 0x14]
006a4bba  PUSH ESI
006a4bbb  PUSH 0x0
006a4bbd  MOV ESI,ECX
006a4bbf  PUSH EAX
006a4bc0  MOV dword ptr [ESP + 0xc],ESI
006a4bc4  CALL 0x006717f0
006a4bc9  MOV EAX,dword ptr [ESI + 0x34]
006a4bcc  MOV dword ptr [ESI],0x8aba94
006a4bd2  MOV dword ptr [ESI + 0x8],0x8aba8c
006a4bd9  MOV ECX,dword ptr [EAX + 0x4]
006a4bdc  PUSH 0x668400
006a4be1  MOV dword ptr [ESP + 0x14],0x0
006a4be9  CALL 0x005d59f0
006a4bee  TEST EAX,EAX
006a4bf0  MOV dword ptr [ESI + 0x48],EAX
006a4bf3  JZ 0x006a4c06
006a4bf5  MOV ECX,EAX
006a4bf7  MOV EDX,dword ptr [ECX]
006a4bf9  PUSH 0x8001
006a4bfe  PUSH 0x20b
006a4c03  CALL dword ptr [EDX + 0x4]
006a4c06  MOV ECX,dword ptr [ESP + 0x8]
006a4c0a  MOV EAX,ESI
006a4c0c  POP ESI
006a4c0d  MOV dword ptr FS:[0x0],ECX
006a4c14  ADD ESP,0x10
006a4c17  RET 0x4
