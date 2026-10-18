004e14c0  MOV EAX,dword ptr [ECX + 0x10]
004e14c3  SUB ESP,0x8
004e14c6  CMP EAX,0x1
004e14c9  JGE 0x004e14d7
004e14cb  FLD float ptr [0x00890968]
004e14d1  ADD ESP,0x8
004e14d4  RET 0x4
004e14d7  PUSH ESI
004e14d8  FLD float ptr [ESP + 0x10]
004e14dc  FIST dword ptr [ESP + 0x4]
004e14e0  FISUB dword ptr [ESP + 0x4]
004e14e4  FSTP float ptr [ESP + 0x8]
004e14e8  MOV EAX,dword ptr [ESP + 0x8]
004e14ec  MOV ESI,dword ptr [ESP + 0x4]
004e14f0  SAR EAX,0x1f
004e14f3  ADD EAX,ESI
004e14f5  CMP EAX,0x1
004e14f8  MOV dword ptr [ESP + 0x4],EAX
004e14fc  JGE 0x004e153c
004e14fe  TEST EAX,EAX
004e1500  JGE 0x004e1512
004e1502  MOV dword ptr [ESP + 0x10],0x0
004e150a  MOV dword ptr [ESP + 0x4],0x0
004e1512  MOV ECX,dword ptr [ECX + 0x20]
004e1515  MOV EAX,dword ptr [ECX]
004e1517  MOV EDX,dword ptr [ECX + 0x4]
004e151a  MOV ECX,dword ptr [ECX + 0x8]
004e151d  SUB EDX,EAX
004e151f  MOV dword ptr [ESP + 0x8],EDX
004e1523  FILD dword ptr [ESP + 0x8]
004e1527  SUB ECX,EAX
004e1529  MOV dword ptr [ESP + 0x8],ECX
004e152d  FILD dword ptr [ESP + 0x8]
004e1531  FMUL float ptr [0x008933d4]
004e1537  JMP 0x004e15be
004e153c  MOV EDX,dword ptr [ECX + 0x10]
004e153f  LEA ESI,[EDX + -0x1]
004e1542  CMP EAX,ESI
004e1544  PUSH EDI
004e1545  JL 0x004e158b
004e1547  CMP EAX,EDX
004e1549  JL 0x004e155e
004e154b  MOV EAX,EDX
004e154d  MOV dword ptr [ESP + 0x14],EAX
004e1551  FILD dword ptr [ESP + 0x14]
004e1555  DEC EAX
004e1556  MOV dword ptr [ESP + 0x8],EAX
004e155a  FSTP float ptr [ESP + 0x14]
004e155e  MOV EDX,dword ptr [ECX + 0x10]
004e1561  MOV ECX,dword ptr [ECX + 0x20]
004e1564  MOV EAX,dword ptr [ECX + EDX*0x4]
004e1567  MOV EDI,dword ptr [ECX + EDX*0x4 + -0x8]
004e156b  MOV ESI,EAX
004e156d  SUB ESI,EDI
004e156f  MOV dword ptr [ESP + 0xc],ESI
004e1573  FILD dword ptr [ESP + 0xc]
004e1577  SUB EAX,dword ptr [ECX + EDX*0x4 + -0x4]
004e157b  FMUL float ptr [0x008933d4]
004e1581  MOV dword ptr [ESP + 0xc],EAX
004e1585  FILD dword ptr [ESP + 0xc]
004e1589  JMP 0x004e15bd
004e158b  MOV ECX,dword ptr [ECX + 0x20]
004e158e  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x4]
004e1592  MOV EDI,dword ptr [ECX + EAX*0x4 + -0x4]
004e1596  MOV ESI,dword ptr [ECX + EAX*0x4]
004e1599  SUB EDX,EDI
004e159b  MOV dword ptr [ESP + 0xc],EDX
004e159f  FILD dword ptr [ESP + 0xc]
004e15a3  MOV EDX,dword ptr [ECX + EAX*0x4 + 0x8]
004e15a7  SUB EDX,ESI
004e15a9  FMUL float ptr [0x008933d4]
004e15af  MOV dword ptr [ESP + 0xc],EDX
004e15b3  FILD dword ptr [ESP + 0xc]
004e15b7  FMUL float ptr [0x008933d4]
004e15bd  POP EDI
004e15be  FILD dword ptr [ESP + 0x4]
004e15c2  POP ESI
004e15c3  FSUBR float ptr [ESP + 0xc]
004e15c7  FXCH
004e15c9  FSUB ST0,ST2
004e15cb  FMULP
004e15cd  FADDP
004e15cf  ADD ESP,0x8
004e15d2  RET 0x4
