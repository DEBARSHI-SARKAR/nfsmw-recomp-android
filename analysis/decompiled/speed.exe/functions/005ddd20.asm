005ddd20  MOV EAX,FS:[0x0]
005ddd26  PUSH -0x1
005ddd28  PUSH 0x874e9f
005ddd2d  PUSH EAX
005ddd2e  MOV EAX,[0x0091cf90]
005ddd33  MOV dword ptr FS:[0x0],ESP
005ddd3a  MOV ECX,dword ptr [EAX + 0x10]
005ddd3d  PUSH ESI
005ddd3e  PUSH EDI
005ddd3f  MOV EDI,dword ptr [ESP + 0x18]
005ddd43  PUSH EDI
005ddd44  ADD ECX,0xa8
005ddd4a  CALL 0x0056d720
005ddd4f  MOV ESI,EAX
005ddd51  TEST ESI,ESI
005ddd53  JZ 0x005ddd9a
005ddd55  MOV AL,byte ptr [ESI + 0x1]
005ddd58  TEST AL,AL
005ddd5a  JNZ 0x005ddd9a
005ddd5c  MOV byte ptr [ESI + 0x1],0x2
005ddd60  MOV ECX,dword ptr [0x0091cf90]
005ddd66  MOV ECX,dword ptr [ECX + 0x10]
005ddd69  ADD ECX,0xa8
005ddd6f  CALL 0x0056d740
005ddd74  PUSH 0xc
005ddd76  MOV word ptr [ESI + 0x2],AX
005ddd7a  CALL 0x00627400
005ddd7f  ADD ESP,0x4
005ddd82  MOV dword ptr [ESP + 0x18],EAX
005ddd86  TEST EAX,EAX
005ddd88  MOV dword ptr [ESP + 0x10],0x0
005ddd90  JZ 0x005ddd9a
005ddd92  PUSH EDI
005ddd93  MOV ECX,EAX
005ddd95  CALL 0x00620f80
005ddd9a  MOV ECX,dword ptr [ESP + 0x8]
005ddd9e  POP EDI
005ddd9f  MOV dword ptr FS:[0x0],ECX
005ddda6  POP ESI
005ddda7  ADD ESP,0xc
005dddaa  RET 0x4
