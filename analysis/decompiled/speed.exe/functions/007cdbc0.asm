007cdbc0  PUSH EBP
007cdbc1  MOV EBP,ESP
007cdbc3  PUSH ECX
007cdbc4  MOV EAX,dword ptr [EBP + 0x8]
007cdbc7  FLD double ptr [EAX]
007cdbc9  FCOMP double ptr [0x008942e0]
007cdbcf  FNSTSW AX
007cdbd1  TEST AH,0x1
007cdbd4  JNZ 0x007cdbdf
007cdbd6  MOV dword ptr [EBP + -0x4],0x1
007cdbdd  JMP 0x007cdbe6
007cdbdf  MOV dword ptr [EBP + -0x4],0x0
007cdbe6  MOV EAX,dword ptr [EBP + -0x4]
007cdbe9  MOV ESP,EBP
007cdbeb  POP EBP
007cdbec  RET
