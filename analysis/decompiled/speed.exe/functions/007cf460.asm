007cf460  PUSH EBP
007cf461  MOV EBP,ESP
007cf463  SUB ESP,0x2c
007cf466  MOV dword ptr [EBP + -0x4],0x0
007cf46d  FLD double ptr [EBP + 0x8]
007cf470  FCOMP double ptr [0x008942e0]
007cf476  FNSTSW AX
007cf478  TEST AH,0x5
007cf47b  JP 0x007cf487
007cf47d  FLD double ptr [EBP + 0x8]
007cf480  FCHS
007cf482  FSTP double ptr [EBP + -0x1c]
007cf485  JMP 0x007cf48d
007cf487  FLD double ptr [EBP + 0x8]
007cf48a  FSTP double ptr [EBP + -0x1c]
007cf48d  FLD double ptr [EBP + -0x1c]
007cf490  FSTP double ptr [EBP + -0x10]
007cf493  CMP dword ptr [EBP + 0x14],0x7ff00000
007cf49a  JNZ 0x007cf4f3
007cf49c  CMP dword ptr [EBP + 0x10],0x0
007cf4a0  JNZ 0x007cf4f3
007cf4a2  FLD double ptr [EBP + -0x10]
007cf4a5  FCOMP double ptr [0x008942e8]
007cf4ab  FNSTSW AX
007cf4ad  TEST AH,0x41
007cf4b0  JNZ 0x007cf4bf
007cf4b2  MOV EAX,dword ptr [EBP + 0x18]
007cf4b5  FLD double ptr [0x00906ec0]
007cf4bb  FSTP double ptr [EAX]
007cf4bd  JMP 0x007cf4ee
007cf4bf  FLD double ptr [EBP + -0x10]
007cf4c2  FCOMP double ptr [0x008942e8]
007cf4c8  FNSTSW AX
007cf4ca  TEST AH,0x5
007cf4cd  JP 0x007cf4dc
007cf4cf  MOV ECX,dword ptr [EBP + 0x18]
007cf4d2  FLD double ptr [0x008942e0]
007cf4d8  FSTP double ptr [ECX]
007cf4da  JMP 0x007cf4ee
007cf4dc  MOV EDX,dword ptr [EBP + 0x18]
007cf4df  FLD double ptr [0x00906ec8]
007cf4e5  FSTP double ptr [EDX]
007cf4e7  MOV dword ptr [EBP + -0x4],0x1
007cf4ee  JMP 0x007cf64c
007cf4f3  CMP dword ptr [EBP + 0x14],0xfff00000
007cf4fa  JNZ 0x007cf553
007cf4fc  CMP dword ptr [EBP + 0x10],0x0
007cf500  JNZ 0x007cf553
007cf502  FLD double ptr [EBP + -0x10]
007cf505  FCOMP double ptr [0x008942e8]
007cf50b  FNSTSW AX
007cf50d  TEST AH,0x41
007cf510  JNZ 0x007cf51f
007cf512  MOV EAX,dword ptr [EBP + 0x18]
007cf515  FLD double ptr [0x008942e0]
007cf51b  FSTP double ptr [EAX]
007cf51d  JMP 0x007cf54e
007cf51f  FLD double ptr [EBP + -0x10]
007cf522  FCOMP double ptr [0x008942e8]
007cf528  FNSTSW AX
007cf52a  TEST AH,0x5
007cf52d  JP 0x007cf53c
007cf52f  MOV ECX,dword ptr [EBP + 0x18]
007cf532  FLD double ptr [0x00906ec0]
007cf538  FSTP double ptr [ECX]
007cf53a  JMP 0x007cf54e
007cf53c  MOV EDX,dword ptr [EBP + 0x18]
007cf53f  FLD double ptr [0x00906ec8]
007cf545  FSTP double ptr [EDX]
007cf547  MOV dword ptr [EBP + -0x4],0x1
007cf54e  JMP 0x007cf64c
007cf553  CMP dword ptr [EBP + 0xc],0x7ff00000
007cf55a  JNZ 0x007cf5ac
007cf55c  CMP dword ptr [EBP + 0x8],0x0
007cf560  JNZ 0x007cf5ac
007cf562  FLD double ptr [EBP + 0x10]
007cf565  FCOMP double ptr [0x008942e0]
007cf56b  FNSTSW AX
007cf56d  TEST AH,0x41
007cf570  JNZ 0x007cf57f
007cf572  MOV EAX,dword ptr [EBP + 0x18]
007cf575  FLD double ptr [0x00906ec0]
007cf57b  FSTP double ptr [EAX]
007cf57d  JMP 0x007cf5a7
007cf57f  FLD double ptr [EBP + 0x10]
007cf582  FCOMP double ptr [0x008942e0]
007cf588  FNSTSW AX
007cf58a  TEST AH,0x5
007cf58d  JP 0x007cf59c
007cf58f  MOV ECX,dword ptr [EBP + 0x18]
007cf592  FLD double ptr [0x008942e0]
007cf598  FSTP double ptr [ECX]
007cf59a  JMP 0x007cf5a7
007cf59c  MOV EDX,dword ptr [EBP + 0x18]
007cf59f  FLD double ptr [0x008942e8]
007cf5a5  FSTP double ptr [EDX]
007cf5a7  JMP 0x007cf64c
007cf5ac  CMP dword ptr [EBP + 0xc],0xfff00000
007cf5b3  JNZ 0x007cf64c
007cf5b9  CMP dword ptr [EBP + 0x8],0x0
007cf5bd  JNZ 0x007cf64c
007cf5c3  FLD double ptr [EBP + 0x10]
007cf5c6  SUB ESP,0x8
007cf5c9  FSTP double ptr [ESP]
007cf5cc  CALL 0x007cf660
007cf5d1  ADD ESP,0x8
007cf5d4  MOV dword ptr [EBP + -0x14],EAX
007cf5d7  FLD double ptr [EBP + 0x10]
007cf5da  FCOMP double ptr [0x008942e0]
007cf5e0  FNSTSW AX
007cf5e2  TEST AH,0x41
007cf5e5  JNZ 0x007cf60d
007cf5e7  CMP dword ptr [EBP + -0x14],0x1
007cf5eb  JNZ 0x007cf5fa
007cf5ed  FLD double ptr [0x00906ec0]
007cf5f3  FCHS
007cf5f5  FSTP double ptr [EBP + -0x24]
007cf5f8  JMP 0x007cf603
007cf5fa  FLD double ptr [0x00906ec0]
007cf600  FSTP double ptr [EBP + -0x24]
007cf603  MOV EAX,dword ptr [EBP + 0x18]
007cf606  FLD double ptr [EBP + -0x24]
007cf609  FSTP double ptr [EAX]
007cf60b  JMP 0x007cf64c
007cf60d  FLD double ptr [EBP + 0x10]
007cf610  FCOMP double ptr [0x008942e0]
007cf616  FNSTSW AX
007cf618  TEST AH,0x5
007cf61b  JP 0x007cf641
007cf61d  CMP dword ptr [EBP + -0x14],0x1
007cf621  JNZ 0x007cf62e
007cf623  FLD double ptr [0x00906ee0]
007cf629  FSTP double ptr [EBP + -0x2c]
007cf62c  JMP 0x007cf637
007cf62e  FLD double ptr [0x008942e0]
007cf634  FSTP double ptr [EBP + -0x2c]
007cf637  MOV ECX,dword ptr [EBP + 0x18]
007cf63a  FLD double ptr [EBP + -0x2c]
007cf63d  FSTP double ptr [ECX]
007cf63f  JMP 0x007cf64c
007cf641  MOV EDX,dword ptr [EBP + 0x18]
007cf644  FLD double ptr [0x008942e8]
007cf64a  FSTP double ptr [EDX]
007cf64c  MOV EAX,dword ptr [EBP + -0x4]
007cf64f  MOV ESP,EBP
007cf651  POP EBP
007cf652  RET
