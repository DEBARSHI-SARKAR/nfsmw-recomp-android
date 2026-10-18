004fd2c0  MOV EAX,dword ptr [ESP + 0xc]
004fd2c4  TEST EAX,EAX
004fd2c6  JNZ 0x004fd2d1
004fd2c8  FLD float ptr [0x00890968]
004fd2ce  RET 0x10
004fd2d1  CMP EAX,0x2
004fd2d4  FLD float ptr [ESP + 0x4]
004fd2d8  JNZ 0x004fd2eb
004fd2da  FDIV float ptr [ESP + 0x10]
004fd2de  CALL 0x007c4b80
004fd2e3  MOV dword ptr [ESP + 0x4],EAX
004fd2e7  FILD dword ptr [ESP + 0x4]
004fd2eb  FMUL float ptr [ESP + 0x8]
004fd2ef  FLD ST0
004fd2f1  CALL 0x007c4b80
004fd2f6  MOV dword ptr [ESP + 0x4],EAX
004fd2fa  FISUB dword ptr [ESP + 0x4]
004fd2fe  RET 0x10
