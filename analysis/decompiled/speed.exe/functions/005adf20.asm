005adf20  PUSH ESI
005adf21  MOV ESI,ECX
005adf23  MOV EAX,dword ptr [ESI + 0xbc]
005adf29  TEST EAX,EAX
005adf2b  JZ 0x005adf33
005adf2d  PUSH ESI
005adf2e  CALL EAX
005adf30  ADD ESP,0x4
005adf33  FLD float ptr [ESP + 0x8]
005adf37  FMUL float ptr [ESI + 0xa8]
005adf3d  FADD float ptr [ESI + 0xa4]
005adf43  FCOM float ptr [0x00890968]
005adf49  FST float ptr [ESI + 0xa4]
005adf4f  FNSTSW AX
005adf51  TEST AH,0x5
005adf54  JP 0x005adf74
005adf56  FSTP ST0
005adf58  MOV dword ptr [ESI + 0xa4],0x0
005adf62  FLD float ptr [ESI + 0xa8]
005adf68  FCHS
005adf6a  FSTP float ptr [ESI + 0xa8]
005adf70  POP ESI
005adf71  RET 0x4
005adf74  FCOMP float ptr [0x0089096c]
005adf7a  FNSTSW AX
005adf7c  TEST AH,0x41
005adf7f  JNZ 0x005adf99
005adf81  FLD float ptr [ESI + 0xa8]
005adf87  MOV dword ptr [ESI + 0xa4],0x3f800000
005adf91  FCHS
005adf93  FSTP float ptr [ESI + 0xa8]
005adf99  POP ESI
005adf9a  RET 0x4
