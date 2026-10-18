0048bf50  SUB ESP,0x10
0048bf53  PUSH EBX
0048bf54  PUSH EBP
0048bf55  MOV EBP,dword ptr [ESP + 0x20]
0048bf59  PUSH ESI
0048bf5a  PUSH EDI
0048bf5b  MOV EDI,dword ptr [ESP + 0x24]
0048bf5f  FLD float ptr [EDI]
0048bf61  PUSH ECX
0048bf62  FSUB float ptr [EBP]
0048bf65  FSTP float ptr [ESP + 0x14]
0048bf69  FLD float ptr [EDI + 0x4]
0048bf6c  FSUB float ptr [EBP + 0x4]
0048bf6f  FSTP float ptr [ESP + 0x18]
0048bf73  FLD float ptr [EDI + 0x8]
0048bf76  FSUB float ptr [EBP + 0x8]
0048bf79  FSTP float ptr [ESP + 0x1c]
0048bf7d  FLD float ptr [ESP + 0x18]
0048bf81  FMUL float ptr [ESP + 0x18]
0048bf85  FLD float ptr [ESP + 0x1c]
0048bf89  FMUL float ptr [ESP + 0x1c]
0048bf8d  FADDP
0048bf8f  FLD float ptr [ESP + 0x14]
0048bf93  FMUL float ptr [ESP + 0x14]
0048bf97  FADDP
0048bf99  FSTP float ptr [ESP]
0048bf9c  CALL 0x005c5e80
0048bfa1  FSTP float ptr [ESP + 0x28]
0048bfa5  ADD ESP,0x4
0048bfa8  FLD float ptr [EDI + 0x90]
0048bfae  FADD float ptr [EBP + 0x90]
0048bfb4  FSTP float ptr [ESP + 0x28]
0048bfb8  FLD float ptr [0x00890968]
0048bfbe  FLD float ptr [ESP + 0x24]
0048bfc2  FUCOMPP
0048bfc4  FNSTSW AX
0048bfc6  TEST AH,0x44
0048bfc9  JP 0x0048c01a
0048bfcb  MOV ESI,dword ptr [ESP + 0x2c]
0048bfcf  MOV dword ptr [ESI + 0x80],0x0
0048bfd9  MOV dword ptr [ESI + 0x84],0xbf800000
0048bfe3  MOV dword ptr [ESI + 0x88],0x0
0048bfed  MOV EAX,dword ptr [EDI]
0048bfef  LEA EBX,[ESI + 0x80]
0048bff5  MOV dword ptr [ESI + 0x70],EAX
0048bff8  FLD float ptr [EDI + 0x90]
0048bffe  FADD float ptr [EDI + 0x4]
0048c001  FSTP float ptr [ESI + 0x70]
0048c004  MOV ECX,dword ptr [EDI + 0x8]
0048c007  MOV dword ptr [ESI + 0x70],ECX
0048c00a  FLD float ptr [EDI + 0x90]
0048c010  FCHS
0048c012  FSTP float ptr [ESI + 0xac]
0048c018  JMP 0x0048c077
0048c01a  FLD float ptr [ESP + 0x24]
0048c01e  FCOMP float ptr [ESP + 0x28]
0048c022  FNSTSW AX
0048c024  TEST AH,0x5
0048c027  JP 0x0048c0ce
0048c02d  MOV ESI,dword ptr [ESP + 0x2c]
0048c031  LEA EBX,[ESI + 0x80]
0048c037  LEA EDX,[ESP + 0x10]
0048c03b  PUSH EBX
0048c03c  PUSH EDX
0048c03d  CALL 0x0040feb0
0048c042  FLD float ptr [ESP + 0x2c]
0048c046  FSUB float ptr [ESP + 0x30]
0048c04a  ADD ESP,0x8
0048c04d  FST float ptr [ESI + 0xac]
0048c053  FADD float ptr [EBP + 0x90]
0048c059  FLD ST0
0048c05b  FMUL float ptr [EBX]
0048c05d  FADD float ptr [EBP]
0048c060  FSTP float ptr [ESI + 0x70]
0048c063  FLD ST0
0048c065  FMUL float ptr [EBX + 0x4]
0048c068  FADD float ptr [EBP + 0x4]
0048c06b  FSTP float ptr [ESI + 0x74]
0048c06e  FMUL float ptr [EBX + 0x8]
0048c071  FADD float ptr [EBP + 0x8]
0048c074  FSTP float ptr [ESI + 0x78]
0048c077  CMP EDI,ESI
0048c079  MOV EAX,0x1
0048c07e  JZ 0x0048c0bf
0048c080  FLD float ptr [EBX]
0048c082  POP EDI
0048c083  FMUL float ptr [0x00890da8]
0048c089  MOV word ptr [ESI + 0x9e],0x0
0048c092  FSTP float ptr [EBX]
0048c094  FLD float ptr [ESI + 0x84]
0048c09a  FMUL float ptr [0x00890da8]
0048c0a0  FSTP float ptr [ESI + 0x84]
0048c0a6  FLD float ptr [ESI + 0x88]
0048c0ac  FMUL float ptr [0x00890da8]
0048c0b2  FSTP float ptr [ESI + 0x88]
0048c0b8  POP ESI
0048c0b9  POP EBP
0048c0ba  POP EBX
0048c0bb  ADD ESP,0x10
0048c0be  RET
0048c0bf  POP EDI
0048c0c0  MOV word ptr [ESI + 0x9e],AX
0048c0c7  POP ESI
0048c0c8  POP EBP
0048c0c9  POP EBX
0048c0ca  ADD ESP,0x10
0048c0cd  RET
0048c0ce  POP EDI
0048c0cf  POP ESI
0048c0d0  POP EBP
0048c0d1  XOR AL,AL
0048c0d3  POP EBX
0048c0d4  ADD ESP,0x10
0048c0d7  RET
