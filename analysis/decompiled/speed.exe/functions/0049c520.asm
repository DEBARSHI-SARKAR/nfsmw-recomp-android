0049c520  PUSH ECX
0049c521  MOV EAX,dword ptr [ESP + 0xc]
0049c525  MOV ECX,dword ptr [EAX + 0x4]
0049c528  MOV dword ptr [ESP],ECX
0049c52b  MOV ECX,dword ptr [ESP + 0x8]
0049c52f  FLD float ptr [ECX + 0x4]
0049c532  MOV EDX,dword ptr [EAX]
0049c534  FLD float ptr [ECX]
0049c536  MOV dword ptr [ESP + 0xc],EDX
0049c53a  FLD float ptr [ECX + 0x4]
0049c53d  MOV EDX,dword ptr [ESP + 0x10]
0049c541  FMUL float ptr [EAX + 0x4]
0049c544  FLD float ptr [ECX]
0049c546  FMUL float ptr [EAX]
0049c548  MOV dword ptr [EDX],0x0
0049c54e  MOV dword ptr [EDX + 0x8],0x0
0049c555  FADDP
0049c557  FLD ST1
0049c559  FMUL ST2
0049c55b  FLD ST3
0049c55d  FMUL ST4
0049c55f  FADDP
0049c561  FSQRT
0049c563  FSTP ST3
0049c565  FLD float ptr [ESP + 0xc]
0049c569  FMUL float ptr [ESP + 0xc]
0049c56d  FLD float ptr [ESP]
0049c570  FMUL float ptr [ESP]
0049c573  FADDP
0049c575  FSQRT
0049c577  FST float ptr [ESP + 0xc]
0049c57b  FMULP ST3
0049c57d  FXCH ST2
0049c57f  FDIVP ST2,ST0
0049c581  FXCH
0049c583  FADD float ptr [0x0089096c]
0049c589  FMUL float ptr [0x008933d4]
0049c58f  FSTP ST1
0049c591  FLD float ptr [0x0089096c]
0049c597  FSUB ST0,ST1
0049c599  FSQRT
0049c59b  FST float ptr [ESP + 0xc]
0049c59f  FSTP float ptr [EDX + 0x4]
0049c5a2  FSQRT
0049c5a4  FSTP float ptr [EDX + 0xc]
0049c5a7  FLD float ptr [ECX]
0049c5a9  FMUL float ptr [EAX + 0x4]
0049c5ac  FLD float ptr [ECX + 0x4]
0049c5af  FMUL float ptr [EAX]
0049c5b1  FSUBP
0049c5b3  FCOMP float ptr [0x00890968]
0049c5b9  FNSTSW AX
0049c5bb  TEST AH,0x41
0049c5be  JNZ 0x0049c5cd
0049c5c0  FLD float ptr [ESP + 0xc]
0049c5c4  FMUL float ptr [0x00890da8]
0049c5ca  FSTP float ptr [EDX + 0x4]
0049c5cd  POP ECX
0049c5ce  RET 0xc
