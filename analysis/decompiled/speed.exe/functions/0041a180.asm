0041a180  SUB ESP,0xc
0041a183  MOV EAX,dword ptr [ESP + 0x18]
0041a187  MOV ECX,dword ptr [ESP + 0x10]
0041a18b  FLD float ptr [EAX]
0041a18d  FSUB float ptr [ECX]
0041a18f  FSTP float ptr [ESP]
0041a192  FLD float ptr [EAX + 0x4]
0041a195  FSUB float ptr [ECX + 0x4]
0041a198  FSTP float ptr [ESP + 0x4]
0041a19c  FLD float ptr [EAX + 0x8]
0041a19f  LEA EAX,[ESP]
0041a1a2  FSUB float ptr [ECX + 0x8]
0041a1a5  PUSH EAX
0041a1a6  MOV ECX,EAX
0041a1a8  PUSH ECX
0041a1a9  FSTP float ptr [ESP + 0x10]
0041a1ad  CALL 0x0040fe20
0041a1b2  MOV EAX,dword ptr [ESP + 0x1c]
0041a1b6  FLD float ptr [ESP + 0xc]
0041a1ba  FMUL float ptr [EAX + 0x4]
0041a1bd  ADD ESP,0x8
0041a1c0  FLD float ptr [ESP + 0x8]
0041a1c4  FMUL float ptr [EAX + 0x8]
0041a1c7  FADDP
0041a1c9  FLD float ptr [ESP]
0041a1cc  FMUL float ptr [EAX]
0041a1ce  FADDP
0041a1d0  FST float ptr [ESP + 0x18]
0041a1d4  FCOMP float ptr [0x0089096c]
0041a1da  FNSTSW AX
0041a1dc  TEST AH,0x5
0041a1df  JP 0x0041a213
0041a1e1  FLD float ptr [ESP + 0x18]
0041a1e5  FLD float ptr [0x00890da8]
0041a1eb  FCOMP float ptr [ESP + 0x18]
0041a1ef  FNSTSW AX
0041a1f1  TEST AH,0x41
0041a1f4  JNZ 0x0041a219
0041a1f6  FSTP ST0
0041a1f8  MOV dword ptr [ESP + 0x18],0xbf800000
0041a200  FLD float ptr [ESP + 0x18]
0041a204  CALL 0x007c4410
0041a209  FMUL float ptr [0x00890964]
0041a20f  ADD ESP,0xc
0041a212  RET
0041a213  FLD float ptr [0x0089096c]
0041a219  FSTP float ptr [ESP + 0x18]
0041a21d  FLD float ptr [ESP + 0x18]
0041a221  CALL 0x007c4410
0041a226  FMUL float ptr [0x00890964]
0041a22c  ADD ESP,0xc
0041a22f  RET
