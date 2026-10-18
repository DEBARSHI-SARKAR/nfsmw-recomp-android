005aba50  MOV EAX,FS:[0x0]
005aba56  PUSH -0x1
005aba58  PUSH 0x873da4
005aba5d  PUSH EAX
005aba5e  MOV dword ptr FS:[0x0],ESP
005aba65  PUSH ESI
005aba66  PUSH EDI
005aba67  MOV EDI,dword ptr [ESP + 0x18]
005aba6b  MOV ESI,ECX
005aba6d  MOV EAX,dword ptr [ESI + EDI*0x4 + 0x10]
005aba71  TEST EAX,EAX
005aba73  JNZ 0x005abab3
005aba75  PUSH 0x9cb8
005aba7a  CALL 0x00652ad0
005aba7f  ADD ESP,0x4
005aba82  MOV dword ptr [ESP + 0x18],EAX
005aba86  TEST EAX,EAX
005aba88  MOV dword ptr [ESP + 0x10],0x0
005aba90  JZ 0x005aba9b
005aba92  MOV ECX,EAX
005aba94  CALL 0x00599290
005aba99  JMP 0x005aba9d
005aba9b  XOR EAX,EAX
005aba9d  PUSH 0x1
005aba9f  PUSH EDI
005abaa0  MOV ECX,EAX
005abaa2  MOV dword ptr [ESP + 0x18],0xffffffff
005abaaa  MOV dword ptr [ESI + EDI*0x4 + 0x10],EAX
005abaae  CALL 0x005ab450
005abab3  MOV ECX,dword ptr [ESP + 0x8]
005abab7  POP EDI
005abab8  MOV dword ptr FS:[0x0],ECX
005ababf  POP ESI
005abac0  ADD ESP,0xc
005abac3  RET 0x4
