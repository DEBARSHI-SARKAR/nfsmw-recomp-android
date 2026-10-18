006e9400  MOV EAX,dword ptr [ESP + 0x4]
006e9404  MOV ECX,dword ptr [ESP + 0x8]
006e9408  FLD float ptr [EAX + 0x8]
006e940b  FSUB float ptr [ECX + 0x8]
006e940e  MOV EDX,dword ptr [ESP + 0x10]
006e9412  FMUL float ptr [EDX + 0x8]
006e9415  FLD float ptr [EAX + 0x4]
006e9418  FSUB float ptr [ECX + 0x4]
006e941b  FMUL float ptr [EDX + 0x4]
006e941e  FADDP
006e9420  FLD float ptr [EAX]
006e9422  FSUB float ptr [ECX]
006e9424  FMUL float ptr [EDX]
006e9426  FADDP
006e9428  FMUL float ptr [ESP + 0xc]
006e942c  FST float ptr [ESP + 0x8]
006e9430  FCOMP float ptr [0x0089096c]
006e9436  FNSTSW AX
006e9438  TEST AH,0x5
006e943b  JP 0x006e947b
006e943d  FLD float ptr [ESP + 0x8]
006e9441  FLD float ptr [ESP + 0x8]
006e9445  FCOMP float ptr [0x00890968]
006e944b  FNSTSW AX
006e944d  TEST AH,0x41
006e9450  JZ 0x006e945a
006e9452  FSTP ST0
006e9454  FLD float ptr [0x00890968]
006e945a  MOV EAX,dword ptr [ESP + 0x14]
006e945e  FLD ST0
006e9460  FMUL float ptr [EDX]
006e9462  FADD float ptr [ECX]
006e9464  FSTP float ptr [EAX]
006e9466  FLD ST0
006e9468  FMUL float ptr [EDX + 0x4]
006e946b  FADD float ptr [ECX + 0x4]
006e946e  FSTP float ptr [EAX + 0x4]
006e9471  FMUL float ptr [EDX + 0x8]
006e9474  FADD float ptr [ECX + 0x8]
006e9477  FSTP float ptr [EAX + 0x8]
006e947a  RET
006e947b  FLD float ptr [0x0089096c]
006e9481  JMP 0x006e945a
