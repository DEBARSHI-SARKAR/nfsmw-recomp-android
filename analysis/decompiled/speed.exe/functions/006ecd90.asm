006ecd90  PUSH ESI
006ecd91  MOV ESI,ECX
006ecd93  MOV ECX,dword ptr [ESI + 0x18]
006ecd96  MOV EAX,ECX
006ecd98  SHR EAX,0x4
006ecd9b  TEST AL,0x1
006ecd9d  JNZ 0x006ece56
006ecda3  FLD float ptr [ESI]
006ecda5  FCOMP float ptr [0x00890968]
006ecdab  FNSTSW AX
006ecdad  TEST AH,0x41
006ecdb0  JNP 0x006ece56
006ecdb6  AND ECX,0xf
006ecdb9  JNZ 0x006ecdfa
006ecdbb  FLD float ptr [ESI + 0x8]
006ecdbe  FADD float ptr [ESI]
006ecdc0  FST float ptr [ESI + 0x8]
006ecdc3  FCOMP float ptr [0x0089096c]
006ecdc9  FNSTSW AX
006ecdcb  TEST AH,0x1
006ecdce  JNZ 0x006ece56
006ecdd4  FLD float ptr [ESP + 0x8]
006ecdd8  MOV ECX,dword ptr [ESI + 0x4]
006ecddb  FDIV float ptr [ESI]
006ecddd  MOV EAX,dword ptr [ESI + 0x20]
006ecde0  MOV EDX,dword ptr [ECX]
006ecde2  PUSH ECX
006ecde3  FSTP float ptr [ESP]
006ecde6  PUSH EAX
006ecde7  CALL dword ptr [EDX + 0x4]
006ecdea  FLD float ptr [ESI + 0x8]
006ecded  FSUB float ptr [0x0089096c]
006ecdf3  FSTP float ptr [ESI + 0x8]
006ecdf6  POP ESI
006ecdf7  RET 0x8
006ecdfa  CMP ECX,0x1
006ecdfd  JNZ 0x006ece56
006ecdff  FLD float ptr [ESP + 0xc]
006ece03  FCOMP float ptr [0x00890968]
006ece09  FNSTSW AX
006ece0b  TEST AH,0x41
006ece0e  JNZ 0x006ece56
006ece10  FLD float ptr [ESI + 0x8]
006ece13  FADD float ptr [ESI]
006ece15  FST float ptr [ESI + 0x8]
006ece18  FLD float ptr [ESP + 0xc]
006ece1c  FADD float ptr [ESI + 0x1c]
006ece1f  FST float ptr [ESP + 0xc]
006ece23  FSTP float ptr [ESI + 0x1c]
006ece26  FCOMP float ptr [0x0089096c]
006ece2c  FNSTSW AX
006ece2e  TEST CL,AH
006ece30  JNZ 0x006ece56
006ece32  MOV EAX,dword ptr [ESP + 0xc]
006ece36  MOV ECX,dword ptr [ESI + 0x4]
006ece39  MOV EDX,dword ptr [ECX]
006ece3b  PUSH EAX
006ece3c  MOV EAX,dword ptr [ESI + 0x20]
006ece3f  PUSH EAX
006ece40  CALL dword ptr [EDX + 0x4]
006ece43  FLD float ptr [ESI + 0x8]
006ece46  FSUB float ptr [0x0089096c]
006ece4c  MOV dword ptr [ESI + 0x1c],0x0
006ece53  FSTP float ptr [ESI + 0x8]
006ece56  POP ESI
006ece57  RET 0x8
