0049aab0  PUSH ECX
0049aab1  MOV EAX,dword ptr [ESP + 0xc]
0049aab5  MOV ECX,dword ptr [EAX + 0x4]
0049aab8  MOV dword ptr [ESP],ECX
0049aabb  MOV ECX,dword ptr [ESP + 0x8]
0049aabf  FLD float ptr [ECX + 0x4]
0049aac2  MOV EDX,dword ptr [EAX]
0049aac4  FLD float ptr [ECX]
0049aac6  MOV dword ptr [ESP + 0xc],EDX
0049aaca  FLD float ptr [ECX + 0x4]
0049aacd  MOV EDX,dword ptr [ESP + 0x10]
0049aad1  FMUL float ptr [EAX + 0x4]
0049aad4  FLD float ptr [ECX]
0049aad6  FMUL float ptr [EAX]
0049aad8  MOV dword ptr [EDX],0x0
0049aade  MOV dword ptr [EDX + 0x8],0x0
0049aae5  FADDP
0049aae7  FLD ST1
0049aae9  FMUL ST2
0049aaeb  FLD ST3
0049aaed  FMUL ST4
0049aaef  FADDP
0049aaf1  FSQRT
0049aaf3  FSTP ST3
0049aaf5  FLD float ptr [ESP + 0xc]
0049aaf9  FMUL float ptr [ESP + 0xc]
0049aafd  FLD float ptr [ESP]
0049ab00  FMUL float ptr [ESP]
0049ab03  FADDP
0049ab05  FSQRT
0049ab07  FST float ptr [ESP + 0xc]
0049ab0b  FMULP ST3
0049ab0d  FXCH ST2
0049ab0f  FDIVP ST2,ST0
0049ab11  FXCH
0049ab13  FADD float ptr [0x0089096c]
0049ab19  FMUL float ptr [0x008933d4]
0049ab1f  FSTP ST1
0049ab21  FLD float ptr [0x0089096c]
0049ab27  FSUB ST0,ST1
0049ab29  FSQRT
0049ab2b  FST float ptr [ESP + 0xc]
0049ab2f  FSTP float ptr [EDX + 0x4]
0049ab32  FSQRT
0049ab34  FSTP float ptr [EDX + 0xc]
0049ab37  FLD float ptr [ECX]
0049ab39  FMUL float ptr [EAX + 0x4]
0049ab3c  FLD float ptr [ECX + 0x4]
0049ab3f  FMUL float ptr [EAX]
0049ab41  FSUBP
0049ab43  FCOMP float ptr [0x00890968]
0049ab49  FNSTSW AX
0049ab4b  TEST AH,0x41
0049ab4e  JNZ 0x0049ab5d
0049ab50  FLD float ptr [ESP + 0xc]
0049ab54  FMUL float ptr [0x00890da8]
0049ab5a  FSTP float ptr [EDX + 0x4]
0049ab5d  POP ECX
0049ab5e  RET 0xc
