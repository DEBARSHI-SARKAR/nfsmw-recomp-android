005abbc0  MOV EAX,FS:[0x0]
005abbc6  PUSH -0x1
005abbc8  PUSH 0x873dde
005abbcd  PUSH EAX
005abbce  TEST byte ptr [0x0091dcc0],0x1
005abbd5  MOV dword ptr FS:[0x0],ESP
005abbdc  JNZ 0x005abc2e
005abbde  OR dword ptr [0x0091dcc0],0x1
005abbe5  MOV ECX,0x91dcb4
005abbea  MOV dword ptr [ESP + 0x8],0x0
005abbf2  CALL 0x00594520
005abbf7  MOV [0x0091dcb8],EAX
005abbfc  MOV byte ptr [EAX + 0x15],0x1
005abc00  MOV EAX,[0x0091dcb8]
005abc05  MOV dword ptr [EAX + 0x4],EAX
005abc08  MOV EAX,[0x0091dcb8]
005abc0d  MOV dword ptr [EAX],EAX
005abc0f  MOV EAX,[0x0091dcb8]
005abc14  MOV dword ptr [EAX + 0x8],EAX
005abc17  PUSH 0x88e510
005abc1c  MOV dword ptr [0x0091dcbc],0x0
005abc26  CALL 0x007c5df0
005abc2b  ADD ESP,0x4
005abc2e  MOV ECX,dword ptr [ESP]
005abc31  MOV EAX,0x91dcb4
005abc36  MOV dword ptr FS:[0x0],ECX
005abc3d  ADD ESP,0xc
005abc40  RET
