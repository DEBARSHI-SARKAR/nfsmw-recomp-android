005abd70  MOV EAX,FS:[0x0]
005abd76  PUSH -0x1
005abd78  PUSH 0x873e3e
005abd7d  PUSH EAX
005abd7e  TEST byte ptr [0x0091dcf0],0x1
005abd85  MOV dword ptr FS:[0x0],ESP
005abd8c  JNZ 0x005abdde
005abd8e  OR dword ptr [0x0091dcf0],0x1
005abd95  MOV ECX,0x91dce4
005abd9a  MOV dword ptr [ESP + 0x8],0x0
005abda2  CALL 0x005945c0
005abda7  MOV [0x0091dce8],EAX
005abdac  MOV byte ptr [EAX + 0x11],0x1
005abdb0  MOV EAX,[0x0091dce8]
005abdb5  MOV dword ptr [EAX + 0x4],EAX
005abdb8  MOV EAX,[0x0091dce8]
005abdbd  MOV dword ptr [EAX],EAX
005abdbf  MOV EAX,[0x0091dce8]
005abdc4  MOV dword ptr [EAX + 0x8],EAX
005abdc7  PUSH 0x88e4e0
005abdcc  MOV dword ptr [0x0091dcec],0x0
005abdd6  CALL 0x007c5df0
005abddb  ADD ESP,0x4
005abdde  MOV ECX,dword ptr [ESP]
005abde1  MOV EAX,0x91dce4
005abde6  MOV dword ptr FS:[0x0],ECX
005abded  ADD ESP,0xc
005abdf0  RET
