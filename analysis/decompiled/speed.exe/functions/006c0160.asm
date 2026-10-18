006c0160  FLD float ptr [0x0089096c]
006c0166  PUSH EBX
006c0167  FSUB float ptr [ESP + 0x1c]
006c016b  PUSH EBP
006c016c  PUSH ESI
006c016d  PUSH EDI
006c016e  MOV EDI,dword ptr [ESP + 0x18]
006c0172  CMP dword ptr [EDI],0x0
006c0175  FMUL float ptr [EDI + 0x8]
006c0178  MOV EBP,ECX
006c017a  FSTP float ptr [ESP + 0x28]
006c017e  JNZ 0x006c0195
006c0180  FLD float ptr [EDI + 0xc]
006c0183  FCOMP float ptr [ESP + 0x1c]
006c0187  FNSTSW AX
006c0189  TEST AH,0x41
006c018c  JNZ 0x006c0195
006c018e  MOV EAX,dword ptr [EDI + 0xc]
006c0191  MOV dword ptr [ESP + 0x1c],EAX
006c0195  FLD float ptr [ESP + 0x1c]
006c0199  FADD float ptr [ESP + 0x20]
006c019d  FLD float ptr [ESP + 0x1c]
006c01a1  FADD ST0,ST0
006c01a3  FADD float ptr [0x008ae8f8]
006c01a9  FDIVP
006c01ab  FMUL float ptr [EDI + 0x20]
006c01ae  FMUL float ptr [0x00894230]
006c01b4  CALL 0x007c4b80
006c01b9  FLD float ptr [EDI + 0xc]
006c01bc  FMUL float ptr [0x008933d4]
006c01c2  XOR ESI,ESI
006c01c4  MOV SI,word ptr [EDI + 0x1c]
006c01c8  SUB SI,AX
006c01cb  FSTP float ptr [ESP + 0x1c]
006c01cf  PUSH ESI
006c01d0  CALL 0x0045db30
006c01d5  FSTP float ptr [ESP + 0x1c]
006c01d9  PUSH ESI
006c01da  CALL 0x0045dbf0
006c01df  FMUL float ptr [ESP + 0x24]
006c01e3  FLD float ptr [ESP + 0x20]
006c01e7  MOV ESI,dword ptr [ESP + 0x1c]
006c01eb  FMUL float ptr [ESP + 0x24]
006c01ef  MOV EAX,0x3f7fbe77
006c01f4  FLD ST1
006c01f6  MOV dword ptr [ESI + 0x8],EAX
006c01f9  MOV dword ptr [ESI + 0x18],EAX
006c01fc  FADD ST0,ST1
006c01fe  MOV dword ptr [ESI + 0x28],EAX
006c0201  MOV dword ptr [ESI + 0x38],EAX
006c0204  MOVZX ECX,byte ptr [EDI + 0x19]
006c0208  MOVZX EDX,byte ptr [EDI + 0x1a]
006c020c  FSTP float ptr [ESP + 0x20]
006c0210  FSUBP
006c0212  FLD float ptr [ESP + 0x28]
006c0216  MOVZX EBX,byte ptr [EDI + 0x18]
006c021a  FADD float ptr [EDI + 0x10]
006c021d  FLD float ptr [ESP + 0x2c]
006c0221  FADD float ptr [EDI + 0x14]
006c0224  ADD ESP,0x8
006c0227  MOV dword ptr [ESP + 0x20],ECX
006c022b  MOV dword ptr [ESP + 0x14],EDX
006c022f  FSTP float ptr [ESP + 0x1c]
006c0233  FLD float ptr [EDI + 0x8]
006c0236  FCOMP float ptr [0x00890968]
006c023c  FLD float ptr [ESP + 0x28]
006c0240  FNSTSW AX
006c0242  TEST AH,0x5
006c0245  JP 0x006c024f
006c0247  FMUL float ptr [0x00894234]
006c024d  JMP 0x006c0258
006c024f  FMUL float ptr [EBP + 0x18]
006c0252  FMUL float ptr [0x008adf80]
006c0258  CALL 0x007c4b80
006c025d  FLD float ptr [ESP + 0x18]
006c0261  FSUBR ST0,ST1
006c0263  MOV CL,byte ptr [ESP + 0x20]
006c0267  MOV DL,byte ptr [ESP + 0x14]
006c026b  POP EDI
006c026c  FSTP float ptr [ESI]
006c026e  MOV byte ptr [ESI + 0x80],BL
006c0274  FLD float ptr [ESP + 0x18]
006c0278  MOV byte ptr [ESI + 0x84],BL
006c027e  FSUB ST0,ST2
006c0280  MOV byte ptr [ESI + 0x88],BL
006c0286  MOV byte ptr [ESI + 0x8c],BL
006c028c  MOV byte ptr [ESI + 0x81],CL
006c0292  FSTP float ptr [ESI + 0x4]
006c0295  MOV byte ptr [ESI + 0x82],DL
006c029b  MOV byte ptr [ESI + 0x83],AL
006c02a1  FLD ST0
006c02a3  MOV byte ptr [ESI + 0x85],CL
006c02a9  FADD ST0,ST2
006c02ab  MOV byte ptr [ESI + 0x86],DL
006c02b1  MOV byte ptr [ESI + 0x87],AL
006c02b7  MOV byte ptr [ESI + 0x89],CL
006c02bd  FSTP float ptr [ESI + 0x10]
006c02c0  MOV byte ptr [ESI + 0x8a],DL
006c02c6  FLD float ptr [ESP + 0x18]
006c02ca  MOV byte ptr [ESI + 0x8b],AL
006c02d0  FSUB float ptr [ESP + 0x14]
006c02d4  MOV byte ptr [ESI + 0x8d],CL
006c02da  MOV byte ptr [ESI + 0x8e],DL
006c02e0  MOV byte ptr [ESI + 0x8f],AL
006c02e6  FSTP float ptr [ESI + 0x14]
006c02e9  FLD float ptr [ESP + 0x14]
006c02ed  FADD ST0,ST1
006c02ef  FSTP float ptr [ESI + 0x20]
006c02f2  FLD float ptr [ESP + 0x18]
006c02f6  FADD ST0,ST2
006c02f8  FSTP float ptr [ESI + 0x24]
006c02fb  FSUB ST0,ST1
006c02fd  FSTP float ptr [ESI + 0x30]
006c0300  FSTP ST0
006c0302  FLD float ptr [ESP + 0x18]
006c0306  FADD float ptr [ESP + 0x14]
006c030a  FSTP float ptr [ESI + 0x34]
006c030d  POP ESI
006c030e  POP EBP
006c030f  POP EBX
006c0310  RET 0x18
