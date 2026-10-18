007da000  PUSH EBP
007da001  MOV EBP,ESP
007da003  SUB ESP,0x8
007da006  FLD double ptr [EBP + 0xc]
007da009  FADD double ptr [EBP + 0x14]
007da00c  FSTP double ptr [EBP + -0x8]
007da00f  CMP dword ptr [0x00907390],0x0
007da016  JNZ 0x007da047
007da018  MOV EAX,dword ptr [EBP + 0x1c]
007da01b  PUSH EAX
007da01c  FLD double ptr [EBP + -0x8]
007da01f  SUB ESP,0x8
007da022  FSTP double ptr [ESP]
007da025  FLD double ptr [EBP + 0x14]
007da028  SUB ESP,0x8
007da02b  FSTP double ptr [ESP]
007da02e  FLD double ptr [EBP + 0xc]
007da031  SUB ESP,0x8
007da034  FSTP double ptr [ESP]
007da037  MOV ECX,dword ptr [EBP + 0x8]
007da03a  PUSH ECX
007da03b  PUSH 0x1
007da03d  CALL 0x007daa50
007da042  ADD ESP,0x24
007da045  JMP 0x007da066
007da047  CALL 0x007cb270
007da04c  MOV dword ptr [EAX],0x21
007da052  PUSH 0xffff
007da057  MOV EDX,dword ptr [EBP + 0x1c]
007da05a  PUSH EDX
007da05b  CALL 0x007dac10
007da060  ADD ESP,0x8
007da063  FLD double ptr [EBP + -0x8]
007da066  MOV ESP,EBP
007da068  POP EBP
007da069  RET
