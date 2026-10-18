007d4f54  CMP dword ptr [EBP + -0x28],0x0
007d4f58  JNZ 0x007d4f8d
007d4f5a  CMP dword ptr [EBP + 0xc],0x0
007d4f5e  JNZ 0x007d4f67
007d4f60  MOV dword ptr [EBP + 0xc],0x1
007d4f67  MOV ECX,dword ptr [EBP + 0xc]
007d4f6a  ADD ECX,0xf
007d4f6d  AND ECX,0xfffffff0
007d4f70  MOV dword ptr [EBP + 0xc],ECX
007d4f73  MOV EDX,dword ptr [EBP + 0xc]
007d4f76  PUSH EDX
007d4f77  MOV EAX,dword ptr [EBP + 0x8]
007d4f7a  PUSH EAX
007d4f7b  PUSH 0x0
007d4f7d  MOV ECX,dword ptr [0x009c5318]
007d4f83  PUSH ECX
007d4f84  CALL dword ptr [0x0089023c]
007d4f8a  MOV dword ptr [EBP + -0x1c],EAX
007d4f8d  CMP dword ptr [EBP + -0x1c],0x0
007d4f91  JNZ 0x007d4f9c
007d4f93  CMP dword ptr [0x009bad8c],0x0
007d4f9a  JNZ 0x007d4fa1
007d4f9c  MOV EAX,dword ptr [EBP + -0x1c]
007d4f9f  JMP 0x007d5018
007d4fa1  MOV EDX,dword ptr [EBP + 0xc]
007d4fa4  PUSH EDX
007d4fa5  CALL 0x007d4a70
007d4faa  ADD ESP,0x4
007d4fad  TEST EAX,EAX
007d4faf  JNZ 0x007d4fb5
007d4fb1  XOR EAX,EAX
007d4fb3  JMP 0x007d5018
007d4fb5  JMP 0x007d4de6
