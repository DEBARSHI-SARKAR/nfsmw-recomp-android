005abc50  MOV EAX,FS:[0x0]
005abc56  PUSH -0x1
005abc58  PUSH 0x873dfe
005abc5d  PUSH EAX
005abc5e  TEST byte ptr [0x0091dcd0],0x1
005abc65  MOV dword ptr FS:[0x0],ESP
005abc6c  JNZ 0x005abcbe
005abc6e  OR dword ptr [0x0091dcd0],0x1
005abc75  MOV ECX,0x91dcc4
005abc7a  MOV dword ptr [ESP + 0x8],0x0
005abc82  CALL 0x00594570
005abc87  MOV [0x0091dcc8],EAX
005abc8c  MOV byte ptr [EAX + 0x15],0x1
005abc90  MOV EAX,[0x0091dcc8]
005abc95  MOV dword ptr [EAX + 0x4],EAX
005abc98  MOV EAX,[0x0091dcc8]
005abc9d  MOV dword ptr [EAX],EAX
005abc9f  MOV EAX,[0x0091dcc8]
005abca4  MOV dword ptr [EAX + 0x8],EAX
005abca7  PUSH 0x88e500
005abcac  MOV dword ptr [0x0091dccc],0x0
005abcb6  CALL 0x007c5df0
005abcbb  ADD ESP,0x4
005abcbe  MOV ECX,dword ptr [ESP]
005abcc1  MOV EAX,0x91dcc4
005abcc6  MOV dword ptr FS:[0x0],ECX
005abccd  ADD ESP,0xc
005abcd0  RET
