005abce0  MOV EAX,FS:[0x0]
005abce6  PUSH -0x1
005abce8  PUSH 0x873e1e
005abced  PUSH EAX
005abcee  TEST byte ptr [0x0091dce0],0x1
005abcf5  MOV dword ptr FS:[0x0],ESP
005abcfc  JNZ 0x005abd4e
005abcfe  OR dword ptr [0x0091dce0],0x1
005abd05  MOV ECX,0x91dcd4
005abd0a  MOV dword ptr [ESP + 0x8],0x0
005abd12  CALL 0x00594570
005abd17  MOV [0x0091dcd8],EAX
005abd1c  MOV byte ptr [EAX + 0x15],0x1
005abd20  MOV EAX,[0x0091dcd8]
005abd25  MOV dword ptr [EAX + 0x4],EAX
005abd28  MOV EAX,[0x0091dcd8]
005abd2d  MOV dword ptr [EAX],EAX
005abd2f  MOV EAX,[0x0091dcd8]
005abd34  MOV dword ptr [EAX + 0x8],EAX
005abd37  PUSH 0x88e4f0
005abd3c  MOV dword ptr [0x0091dcdc],0x0
005abd46  CALL 0x007c5df0
005abd4b  ADD ESP,0x4
005abd4e  MOV ECX,dword ptr [ESP]
005abd51  MOV EAX,0x91dcd4
005abd56  MOV dword ptr FS:[0x0],ECX
005abd5d  ADD ESP,0xc
005abd60  RET
