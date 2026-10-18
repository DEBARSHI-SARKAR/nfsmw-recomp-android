006e9390  MOV ECX,dword ptr [ESP + 0x8]
006e9394  FLD float ptr [ECX]
006e9396  MOV EDX,dword ptr [ESP + 0x4]
006e939a  FSUB float ptr [EDX]
006e939c  MOV EAX,dword ptr [ESP + 0x10]
006e93a0  FSTP float ptr [EAX]
006e93a2  FLD float ptr [ECX + 0x4]
006e93a5  FSUB float ptr [EDX + 0x4]
006e93a8  FSTP float ptr [EAX + 0x4]
006e93ab  FLD float ptr [ECX + 0x8]
006e93ae  FSUB float ptr [EDX + 0x8]
006e93b1  FST float ptr [EAX + 0x8]
006e93b4  FLD float ptr [EAX + 0x4]
006e93b7  FLD float ptr [EAX]
006e93b9  FLD ST0
006e93bb  FMUL ST1
006e93bd  FLD ST2
006e93bf  FMUL ST3
006e93c1  FADDP
006e93c3  FLD ST3
006e93c5  FMUL ST4
006e93c7  FADDP
006e93c9  FSTP ST3
006e93cb  FSTP ST0
006e93cd  FSTP ST0
006e93cf  FLD float ptr [0x00890968]
006e93d5  FLD ST1
006e93d7  FUCOMPP
006e93d9  FNSTSW AX
006e93db  TEST AH,0x44
006e93de  JP 0x006e93ed
006e93e0  MOV EAX,dword ptr [ESP + 0xc]
006e93e4  FSTP ST0
006e93e6  MOV dword ptr [EAX],0x0
006e93ec  RET
006e93ed  FLD float ptr [0x0089096c]
006e93f3  MOV ECX,dword ptr [ESP + 0xc]
006e93f7  FDIV ST0,ST1
006e93f9  FSTP float ptr [ECX]
006e93fb  FSTP ST0
006e93fd  RET
