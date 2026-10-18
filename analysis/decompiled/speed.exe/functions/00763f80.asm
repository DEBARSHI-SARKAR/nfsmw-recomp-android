00763f80  MOV EAX,dword ptr [ESP + 0x4]
00763f84  MOV ECX,dword ptr [ESP + 0x8]
00763f88  FLD float ptr [EAX + 0x8]
00763f8b  FSUB float ptr [ECX + 0x8]
00763f8e  MOV EDX,dword ptr [ESP + 0x10]
00763f92  FMUL float ptr [EDX + 0x8]
00763f95  FLD float ptr [EAX]
00763f97  FSUB float ptr [ECX]
00763f99  FMUL float ptr [EDX]
00763f9b  FADDP
00763f9d  FMUL float ptr [ESP + 0xc]
00763fa1  FST float ptr [ESP + 0x8]
00763fa5  FCOMP float ptr [0x0089096c]
00763fab  FNSTSW AX
00763fad  TEST AH,0x5
00763fb0  JP 0x00763fe5
00763fb2  FLD float ptr [ESP + 0x8]
00763fb6  FLD float ptr [ESP + 0x8]
00763fba  FCOMP float ptr [0x00890968]
00763fc0  FNSTSW AX
00763fc2  TEST AH,0x41
00763fc5  JZ 0x00763fcf
00763fc7  FSTP ST0
00763fc9  FLD float ptr [0x00890968]
00763fcf  MOV EAX,dword ptr [ESP + 0x14]
00763fd3  FLD ST0
00763fd5  FMUL float ptr [EDX]
00763fd7  FADD float ptr [ECX]
00763fd9  FSTP float ptr [EAX]
00763fdb  FMUL float ptr [EDX + 0x8]
00763fde  FADD float ptr [ECX + 0x8]
00763fe1  FSTP float ptr [EAX + 0x8]
00763fe4  RET
00763fe5  FLD float ptr [0x0089096c]
00763feb  JMP 0x00763fcf
