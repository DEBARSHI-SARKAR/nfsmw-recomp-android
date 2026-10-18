0040aaa0  FLD float ptr [ESP + 0x4]
0040aaa4  FCOMP float ptr [0x00890968]
0040aaaa  FLD float ptr [ESP + 0x8]
0040aaae  FNSTSW AX
0040aab0  FCOMP float ptr [0x00890968]
0040aab6  TEST AH,0x41
0040aab9  FNSTSW AX
0040aabb  JNZ 0x0040aafa
0040aabd  TEST AH,0x41
0040aac0  JNZ 0x0040aae0
0040aac2  FLD float ptr [ESP + 0x4]
0040aac6  FCOMP float ptr [ESP + 0x8]
0040aaca  FNSTSW AX
0040aacc  TEST AH,0x41
0040aacf  JZ 0x0040aaf1
0040aad1  FLD float ptr [ESP + 0x4]
0040aad5  FDIV float ptr [ESP + 0x8]
0040aad9  FSUBR float ptr [0x00890d3c]
0040aadf  RET
0040aae0  FLD float ptr [ESP + 0x8]
0040aae4  FCHS
0040aae6  FCOMP float ptr [ESP + 0x4]
0040aaea  FNSTSW AX
0040aaec  TEST AH,0x5
0040aaef  JP 0x0040ab3d
0040aaf1  FLD float ptr [ESP + 0x8]
0040aaf5  FDIV float ptr [ESP + 0x4]
0040aaf9  RET
0040aafa  TEST AH,0x41
0040aafd  FLD float ptr [ESP + 0x4]
0040ab01  FCHS
0040ab03  JNZ 0x0040ab1f
0040ab05  FCOMP float ptr [ESP + 0x8]
0040ab09  FNSTSW AX
0040ab0b  TEST AH,0x41
0040ab0e  JNZ 0x0040aad1
0040ab10  FLD float ptr [ESP + 0x8]
0040ab14  FDIV float ptr [ESP + 0x4]
0040ab18  FADD float ptr [0x00890e98]
0040ab1e  RET
0040ab1f  FLD float ptr [ESP + 0x8]
0040ab23  FCHS
0040ab25  FCOMPP
0040ab27  FNSTSW AX
0040ab29  TEST AH,0x5
0040ab2c  JP 0x0040ab3d
0040ab2e  FLD float ptr [ESP + 0x8]
0040ab32  FDIV float ptr [ESP + 0x4]
0040ab36  FSUB float ptr [0x00890e98]
0040ab3c  RET
0040ab3d  FLD float ptr [ESP + 0x4]
0040ab41  FDIV float ptr [ESP + 0x8]
0040ab45  FSUBR float ptr [0x00890e94]
0040ab4b  RET
