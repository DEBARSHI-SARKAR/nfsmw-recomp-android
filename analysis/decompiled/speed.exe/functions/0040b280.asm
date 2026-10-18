0040b280  SUB ESP,0x14
0040b283  MOV EAX,dword ptr [ESP + 0x1c]
0040b287  FLD float ptr [EAX]
0040b289  PUSH ESI
0040b28a  MOV ESI,dword ptr [ESP + 0x1c]
0040b28e  FSUB float ptr [ESI]
0040b290  FSTP float ptr [ESP + 0xc]
0040b294  FLD float ptr [EAX + 0x4]
0040b297  FSUB float ptr [ESI + 0x4]
0040b29a  FSTP float ptr [ESP + 0x10]
0040b29e  FLD float ptr [EAX + 0x8]
0040b2a1  FSUB float ptr [ESI + 0x8]
0040b2a4  FST float ptr [ESP + 0x14]
0040b2a8  FMUL float ptr [ESP + 0x14]
0040b2ac  FLD float ptr [ESP + 0x10]
0040b2b0  FMUL float ptr [ESP + 0x10]
0040b2b4  FADDP
0040b2b6  FLD float ptr [ESP + 0xc]
0040b2ba  FMUL float ptr [ESP + 0xc]
0040b2be  FADDP
0040b2c0  FST float ptr [ESP + 0x1c]
0040b2c4  FCOMP float ptr [0x00890ec4]
0040b2ca  FNSTSW AX
0040b2cc  TEST AH,0x5
0040b2cf  JNP 0x0040b40c
0040b2d5  MOV EAX,dword ptr [ESP + 0x24]
0040b2d9  FLD float ptr [ESI + 0x4]
0040b2dc  FSUB float ptr [EAX + 0x4]
0040b2df  MOV EDX,dword ptr [EAX]
0040b2e1  MOV dword ptr [ESP + 0x4],EDX
0040b2e5  MOV ECX,dword ptr [ESI]
0040b2e7  FMUL float ptr [ESP + 0x10]
0040b2eb  FLD float ptr [ESI]
0040b2ed  MOV dword ptr [ESP + 0x8],ECX
0040b2f1  FSUB float ptr [EAX]
0040b2f3  FMUL float ptr [ESP + 0xc]
0040b2f7  FADDP
0040b2f9  FLD float ptr [ESI + 0x8]
0040b2fc  FSUB float ptr [EAX + 0x8]
0040b2ff  FMUL float ptr [ESP + 0x14]
0040b303  FADDP
0040b305  FADD ST0,ST0
0040b307  FSTP float ptr [ESP + 0x20]
0040b30b  FLD float ptr [ESI + 0x8]
0040b30e  FLD float ptr [ESI + 0x4]
0040b311  FLD float ptr [EAX + 0x8]
0040b314  FLD float ptr [EAX + 0x4]
0040b317  FLD float ptr [ESP + 0x20]
0040b31b  FMUL float ptr [ESP + 0x20]
0040b31f  FLD float ptr [ESP + 0x4]
0040b323  FMUL float ptr [ESP + 0x4]
0040b327  FLD ST2
0040b329  FMUL ST3
0040b32b  FADDP
0040b32d  FLD ST4
0040b32f  FMUL ST5
0040b331  FADDP
0040b333  FLD ST3
0040b335  FMUL ST4
0040b337  FADDP
0040b339  FLD ST5
0040b33b  FMUL ST6
0040b33d  FADDP
0040b33f  FLD float ptr [ESP + 0x8]
0040b343  FMUL float ptr [ESP + 0x8]
0040b347  FADDP
0040b349  FLD float ptr [ESI + 0x4]
0040b34c  FMUL float ptr [EAX + 0x4]
0040b34f  FLD float ptr [ESI]
0040b351  FMUL float ptr [EAX]
0040b353  FADDP
0040b355  FLD float ptr [ESI + 0x8]
0040b358  FMUL float ptr [EAX + 0x8]
0040b35b  FADDP
0040b35d  FADD ST0,ST0
0040b35f  FSUBP
0040b361  FLD float ptr [ESP + 0x28]
0040b365  FMUL float ptr [ESP + 0x28]
0040b369  FSUBP
0040b36b  FMUL float ptr [ESP + 0x1c]
0040b36f  FMUL float ptr [0x00890e98]
0040b375  FSUBP
0040b377  FSTP float ptr [ESP + 0x8]
0040b37b  FSTP ST0
0040b37d  FSTP ST0
0040b37f  FSTP ST0
0040b381  FSTP ST0
0040b383  FLD float ptr [ESP + 0x8]
0040b387  FCOMP float ptr [0x00890968]
0040b38d  FNSTSW AX
0040b38f  TEST AH,0x5
0040b392  JNP 0x0040b40c
0040b394  FLD float ptr [ESP + 0x20]
0040b398  MOV EAX,dword ptr [ESP + 0x8]
0040b39c  FCHS
0040b39e  PUSH EAX
0040b39f  FSTP float ptr [ESP + 0x24]
0040b3a3  CALL 0x005c5e80
0040b3a8  FSUBR float ptr [ESP + 0x24]
0040b3ac  ADD ESP,0x4
0040b3af  FLD float ptr [ESP + 0x1c]
0040b3b3  FADD ST0,ST0
0040b3b5  FDIVP
0040b3b7  FST float ptr [ESP + 0x20]
0040b3bb  FCOMP float ptr [0x00890968]
0040b3c1  FNSTSW AX
0040b3c3  TEST AH,0x5
0040b3c6  JNP 0x0040b40c
0040b3c8  FLD float ptr [ESP + 0x20]
0040b3cc  FCOMP float ptr [0x0089096c]
0040b3d2  FNSTSW AX
0040b3d4  TEST AH,0x41
0040b3d7  JZ 0x0040b40c
0040b3d9  FLD float ptr [ESP + 0x20]
0040b3dd  MOV EAX,dword ptr [ESP + 0x2c]
0040b3e1  FMUL float ptr [ESP + 0xc]
0040b3e5  FADD float ptr [ESI]
0040b3e7  FSTP float ptr [EAX]
0040b3e9  FLD float ptr [ESP + 0x20]
0040b3ed  FMUL float ptr [ESP + 0x10]
0040b3f1  FADD float ptr [ESI + 0x4]
0040b3f4  FSTP float ptr [EAX + 0x4]
0040b3f7  FLD float ptr [ESP + 0x20]
0040b3fb  FMUL float ptr [ESP + 0x14]
0040b3ff  FADD float ptr [ESI + 0x8]
0040b402  POP ESI
0040b403  FSTP float ptr [EAX + 0x8]
0040b406  MOV AL,0x1
0040b408  ADD ESP,0x14
0040b40b  RET
0040b40c  XOR AL,AL
0040b40e  POP ESI
0040b40f  ADD ESP,0x14
0040b412  RET
