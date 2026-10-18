005afad0  MOV AL,byte ptr [ESP + 0x4]
005afad4  CMP AL,0x30
005afad6  JL 0x005afae2
005afad8  CMP AL,0x39
005afada  JG 0x005afae2
005afadc  MOV EAX,0x1
005afae1  RET
005afae2  XOR EAX,EAX
005afae4  RET
