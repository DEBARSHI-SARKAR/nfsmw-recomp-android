005abad0  PUSH -0x1
005abad2  PUSH 0x873dc4
005abad7  MOV EAX,FS:[0x0]
005abadd  PUSH EAX
005abade  MOV dword ptr FS:[0x0],ESP
005abae5  PUSH ECX
005abae6  PUSH 0xb78
005abaeb  CALL 0x00652ad0
005abaf0  ADD ESP,0x4
005abaf3  MOV dword ptr [ESP],EAX
005abaf6  TEST EAX,EAX
005abaf8  MOV dword ptr [ESP + 0xc],0x0
005abb00  JZ 0x005abb0b
005abb02  MOV ECX,EAX
005abb04  CALL 0x005992e0
005abb09  JMP 0x005abb0d
005abb0b  XOR EAX,EAX
005abb0d  MOV ECX,EAX
005abb0f  MOV dword ptr [ESP + 0xc],0xffffffff
005abb17  MOV [0x0091cf90],EAX
005abb1c  CALL 0x005ab900
005abb21  MOV ECX,dword ptr [ESP + 0x4]
005abb25  MOV dword ptr FS:[0x0],ECX
005abb2c  ADD ESP,0x10
005abb2f  RET
