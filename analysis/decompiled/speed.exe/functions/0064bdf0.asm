0064bdf0  FLD float ptr [ESP + 0x4]
0064bdf4  PUSH ESI
0064bdf5  MOV ESI,dword ptr [ECX]
0064bdf7  FCOMP float ptr [ESI]
0064bdf9  PUSH EDI
0064bdfa  FNSTSW AX
0064bdfc  TEST AH,0x5
0064bdff  JNP 0x0064be13
0064be01  MOV EDI,dword ptr [ECX + 0x4]
0064be04  FLD float ptr [ESP + 0xc]
0064be08  FCOMP float ptr [ESI + EDI*0x8 + -0x8]
0064be0c  FNSTSW AX
0064be0e  TEST AH,0x1
0064be11  JNZ 0x0064be1e
0064be13  FLD float ptr [0x00890968]
0064be19  POP EDI
0064be1a  POP ESI
0064be1b  RET 0x4
0064be1e  MOV EAX,dword ptr [ESP + 0xc]
0064be22  PUSH EAX
0064be23  CALL 0x0064bc80
0064be28  TEST EAX,EAX
0064be2a  JL 0x0064be56
0064be2c  ADD EDI,-0x2
0064be2f  CMP EAX,EDI
0064be31  JG 0x0064be56
0064be33  FLD float ptr [ESI + EAX*0x8 + 0xc]
0064be37  POP EDI
0064be38  FSUB float ptr [ESI + EAX*0x8 + 0x4]
0064be3c  FLD float ptr [ESI + EAX*0x8 + 0x8]
0064be40  FSUB float ptr [ESI + EAX*0x8]
0064be43  FDIVP
0064be45  FLD float ptr [ESP + 0x8]
0064be49  FSUB float ptr [ESI + EAX*0x8]
0064be4c  FMULP
0064be4e  FADD float ptr [ESI + EAX*0x8 + 0x4]
0064be52  POP ESI
0064be53  RET 0x4
0064be56  FLD float ptr [0x00890968]
0064be5c  POP EDI
0064be5d  FLD float ptr [ESP + 0x8]
0064be61  FSUB float ptr [ESI + EAX*0x8]
0064be64  FMULP
0064be66  FADD float ptr [ESI + EAX*0x8 + 0x4]
0064be6a  POP ESI
0064be6b  RET 0x4
