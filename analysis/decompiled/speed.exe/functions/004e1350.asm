004e1350  SUB ESP,0xc
004e1353  MOV EDX,dword ptr [ECX + 0xc]
004e1356  CMP EDX,0x1
004e1359  MOV dword ptr [ESP],EDX
004e135c  JGE 0x004e1366
004e135e  XOR EAX,EAX
004e1360  ADD ESP,0xc
004e1363  RET 0x4
004e1366  FLD float ptr [ESP + 0x10]
004e136a  FCOMP float ptr [ECX + 0x4]
004e136d  FNSTSW AX
004e136f  TEST AH,0x41
004e1372  JP 0x004e137f
004e1374  MOV EAX,dword ptr [ECX + 0x1c]
004e1377  MOV EAX,dword ptr [EAX]
004e1379  ADD ESP,0xc
004e137c  RET 0x4
004e137f  FLD float ptr [ESP + 0x10]
004e1383  FCOMP float ptr [ECX + 0x8]
004e1386  FNSTSW AX
004e1388  TEST AH,0x1
004e138b  JNZ 0x004e1399
004e138d  MOV ECX,dword ptr [ECX + 0x1c]
004e1390  MOV EAX,dword ptr [ECX + EDX*0x4]
004e1393  ADD ESP,0xc
004e1396  RET 0x4
004e1399  FLD float ptr [ESP + 0x10]
004e139d  FSUB float ptr [ECX + 0x4]
004e13a0  FIMUL dword ptr [ESP]
004e13a3  FLD float ptr [ECX + 0x8]
004e13a6  FSUB float ptr [ECX + 0x4]
004e13a9  FDIVP
004e13ab  FSTP float ptr [ESP]
004e13ae  FLD float ptr [ESP]
004e13b1  FIST dword ptr [ESP + 0x10]
004e13b5  FISUB dword ptr [ESP + 0x10]
004e13b9  FSTP float ptr [ESP + 0x4]
004e13bd  MOV EAX,dword ptr [ESP + 0x4]
004e13c1  MOV EDX,dword ptr [ESP + 0x10]
004e13c5  SAR EAX,0x1f
004e13c8  ADD EAX,EDX
004e13ca  MOV EDX,dword ptr [ECX + 0x1c]
004e13cd  MOV ECX,dword ptr [EDX + EAX*0x4]
004e13d0  MOV dword ptr [ESP + 0x4],EAX
004e13d4  LEA EAX,[EDX + EAX*0x4]
004e13d7  MOV EAX,dword ptr [EAX + 0x4]
004e13da  SUB EAX,ECX
004e13dc  MOV dword ptr [ESP + 0x10],EAX
004e13e0  FILD dword ptr [ESP + 0x10]
004e13e4  FILD dword ptr [ESP + 0x4]
004e13e8  MOV dword ptr [ESP + 0x8],ECX
004e13ec  FSUBR float ptr [ESP]
004e13ef  FMULP
004e13f1  FIADD dword ptr [ESP + 0x8]
004e13f5  FSTP float ptr [ESP + 0x10]
004e13f9  FLD float ptr [ESP + 0x10]
004e13fd  FISTP dword ptr [ESP + 0x8]
004e1401  MOV EAX,dword ptr [ESP + 0x8]
004e1405  ADD ESP,0xc
004e1408  RET 0x4
