004b3a50  MOV EAX,FS:[0x0]
004b3a56  MOV CL,byte ptr [0x00913c30]
004b3a5c  PUSH -0x1
004b3a5e  PUSH 0x86b50e
004b3a63  PUSH EAX
004b3a64  MOV EAX,0x1
004b3a69  TEST AL,CL
004b3a6b  MOV dword ptr FS:[0x0],ESP
004b3a72  JNZ 0x004b3aaa
004b3a74  OR dword ptr [0x00913c30],EAX
004b3a7a  PUSH 0x896bdc
004b3a7f  MOV dword ptr [ESP + 0xc],0x0
004b3a87  CALL 0x005cc240
004b3a8c  MOV ECX,dword ptr [ESP + 0x14]
004b3a90  MOV [0x00913c2c],EAX
004b3a95  MOV dword ptr [ECX],EAX
004b3a97  ADD ESP,0x4
004b3a9a  MOV EAX,ECX
004b3a9c  MOV ECX,dword ptr [ESP]
004b3a9f  MOV dword ptr FS:[0x0],ECX
004b3aa6  ADD ESP,0xc
004b3aa9  RET
004b3aaa  MOV ECX,dword ptr [0x00913c2c]
004b3ab0  MOV EAX,dword ptr [ESP + 0x10]
004b3ab4  MOV dword ptr [EAX],ECX
004b3ab6  MOV ECX,dword ptr [ESP]
004b3ab9  MOV dword ptr FS:[0x0],ECX
004b3ac0  ADD ESP,0xc
004b3ac3  RET
