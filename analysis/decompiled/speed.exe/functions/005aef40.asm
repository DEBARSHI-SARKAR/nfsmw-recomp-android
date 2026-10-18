005aef40  MOV EAX,dword ptr [ESP + 0x4]
005aef44  TEST EAX,EAX
005aef46  JZ 0x005aef88
005aef48  CMP EAX,dword ptr [ECX + 0x8]
005aef4b  JNZ 0x005aef53
005aef4d  MOV EDX,dword ptr [EAX + 0x4]
005aef50  MOV dword ptr [ECX + 0x8],EDX
005aef53  CMP EAX,dword ptr [ECX + 0xc]
005aef56  JNZ 0x005aef5e
005aef58  MOV EDX,dword ptr [EAX + 0x8]
005aef5b  MOV dword ptr [ECX + 0xc],EDX
005aef5e  MOV EDX,dword ptr [EAX + 0x8]
005aef61  TEST EDX,EDX
005aef63  PUSH ESI
005aef64  JZ 0x005aef6c
005aef66  MOV ESI,dword ptr [EAX + 0x4]
005aef69  MOV dword ptr [EDX + 0x4],ESI
005aef6c  MOV EDX,dword ptr [EAX + 0x4]
005aef6f  TEST EDX,EDX
005aef71  JZ 0x005aef79
005aef73  MOV ESI,dword ptr [EAX + 0x8]
005aef76  MOV dword ptr [EDX + 0x8],ESI
005aef79  MOV EDX,0xabadcafe
005aef7e  MOV dword ptr [EAX + 0x4],EDX
005aef81  MOV dword ptr [EAX + 0x8],EDX
005aef84  DEC dword ptr [ECX + 0x4]
005aef87  POP ESI
005aef88  RET 0x4
