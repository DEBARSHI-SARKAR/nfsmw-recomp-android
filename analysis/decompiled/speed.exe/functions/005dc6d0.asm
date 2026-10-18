005dc6d0  FLD float ptr [ESP + 0x4]
005dc6d4  FADD float ptr [ECX + 0x120]
005dc6da  FST float ptr [ECX + 0x120]
005dc6e0  FLD float ptr [0x00890968]
005dc6e6  FCOMP
005dc6e8  FNSTSW AX
005dc6ea  TEST AH,0x41
005dc6ed  JNZ 0x005dc6fe
005dc6ef  FSTP ST0
005dc6f1  MOV dword ptr [ECX + 0x120],0x0
005dc6fb  RET 0x4
005dc6fe  FSTP float ptr [ECX + 0x120]
005dc704  RET 0x4
