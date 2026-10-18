005dc1a0  PUSH ECX
005dc1a1  MOV EAX,[0x0091cf90]
005dc1a6  MOV EDX,dword ptr [EAX + 0x10]
005dc1a9  MOVSX EAX,word ptr [EDX + 0xb8]
005dc1b0  MOV dword ptr [ESP],EAX
005dc1b3  FILD dword ptr [ESP]
005dc1b6  FMUL float ptr [0x00896ab8]
005dc1bc  FST float ptr [ESP]
005dc1bf  FCOMP float ptr [0x00890da8]
005dc1c5  FNSTSW AX
005dc1c7  TEST AH,0x41
005dc1ca  JNZ 0x005dc1ed
005dc1cc  FLD float ptr [ESP]
005dc1cf  FLD float ptr [0x0089096c]
005dc1d5  FCOMP float ptr [ESP]
005dc1d8  FNSTSW AX
005dc1da  TEST AH,0x5
005dc1dd  JP 0x005dc1f3
005dc1df  FSTP ST0
005dc1e1  MOV dword ptr [ECX + 0x449c],0x3f800000
005dc1eb  POP ECX
005dc1ec  RET
005dc1ed  FLD float ptr [0x00890da8]
005dc1f3  FSTP float ptr [ECX + 0x449c]
005dc1f9  POP ECX
005dc1fa  RET
