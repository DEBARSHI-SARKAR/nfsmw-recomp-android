0046ff20  PUSH EBP
0046ff21  MOV EBP,ESP
0046ff23  MOV EAX,dword ptr [EBP + 0xc]
0046ff26  FLD float ptr [EAX]
0046ff28  MOV ECX,dword ptr [EBP + 0x10]
0046ff2b  FADD float ptr [ECX]
0046ff2d  AND ESP,0xfffffff0
0046ff30  FLD float ptr [EAX + 0x4]
0046ff33  FADD float ptr [ECX + 0x4]
0046ff36  FLD float ptr [EAX + 0x8]
0046ff39  MOV EAX,dword ptr [EBP + 0x8]
0046ff3c  FADD float ptr [ECX + 0x8]
0046ff3f  FXCH ST2
0046ff41  FSTP float ptr [EAX]
0046ff43  FSTP float ptr [EAX + 0x4]
0046ff46  FSTP float ptr [EAX + 0x8]
0046ff49  MOV ESP,EBP
0046ff4b  POP EBP
0046ff4c  RET
