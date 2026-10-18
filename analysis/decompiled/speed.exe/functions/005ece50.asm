005ece50  PUSH ECX
005ece51  MOV EDX,dword ptr [ESP + 0xc]
005ece55  MOV byte ptr [ESP],0x0
005ece59  MOV EAX,dword ptr [ESP]
005ece5c  PUSH EAX
005ece5d  MOV EAX,dword ptr [ESP + 0xc]
005ece61  PUSH ECX
005ece62  MOV ECX,dword ptr [ESP + 0x18]
005ece66  PUSH ECX
005ece67  PUSH EDX
005ece68  PUSH EAX
005ece69  CALL 0x005e2230
005ece6e  ADD ESP,0x18
005ece71  RET 0xc
