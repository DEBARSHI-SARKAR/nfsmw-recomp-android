004bb580  PUSH EBP
004bb581  MOV EBP,ESP
004bb583  AND ESP,0xfffffff0
004bb586  SUB ESP,0x30
004bb589  MOV EAX,dword ptr [ECX + 0x14]
004bb58c  MOV EDX,dword ptr [EAX + 0x34]
004bb58f  CMP dword ptr [EDX + 0x228],0x3
004bb596  JZ 0x004bb6a5
004bb59c  MOV EAX,dword ptr [ECX + 0x14]
004bb59f  FLD float ptr [0x008ee6a8]
004bb5a5  MOV EAX,dword ptr [EAX + 0x34]
004bb5a8  FMUL float ptr [EAX + 0x20]
004bb5ab  FLD float ptr [0x008ee6a8]
004bb5b1  FMUL float ptr [EAX + 0x24]
004bb5b4  FSTP float ptr [ESP + 0x14]
004bb5b8  FLD float ptr [0x008ee6a8]
004bb5be  FMUL float ptr [EAX + 0x28]
004bb5c1  FSTP float ptr [ESP + 0x18]
004bb5c5  FLD float ptr [0x008ee6ac]
004bb5cb  FMUL float ptr [EDX + 0x10]
004bb5ce  FSTP float ptr [ESP]
004bb5d1  FLD float ptr [0x008ee6ac]
004bb5d7  FMUL float ptr [EDX + 0x14]
004bb5da  FSTP float ptr [ESP + 0x4]
004bb5de  FLD float ptr [0x008ee6ac]
004bb5e4  FMUL float ptr [EDX + 0x18]
004bb5e7  FSTP float ptr [ESP + 0x8]
004bb5eb  FLD float ptr [EAX + 0x40]
004bb5ee  FSUB ST0,ST1
004bb5f0  FLD float ptr [EAX + 0x44]
004bb5f3  FSUB float ptr [ESP + 0x14]
004bb5f7  FLD float ptr [EAX + 0x48]
004bb5fa  FSUB float ptr [ESP + 0x18]
004bb5fe  FSTP float ptr [ESP + 0x28]
004bb602  MOV EDX,dword ptr [ESP + 0x28]
004bb606  MOV dword ptr [ECX + 0xe8],EDX
004bb60c  FXCH
004bb60e  FSTP float ptr [ECX + 0xe0]
004bb614  FSTP float ptr [ECX + 0xe4]
004bb61a  FLD float ptr [ESP]
004bb61d  FADD float ptr [ECX + 0xe0]
004bb623  FSTP float ptr [ECX + 0xe0]
004bb629  FLD float ptr [ESP + 0x4]
004bb62d  FADD float ptr [ECX + 0xe4]
004bb633  FSTP float ptr [ECX + 0xe4]
004bb639  FLD float ptr [ESP + 0x8]
004bb63d  FADD float ptr [ECX + 0xe8]
004bb643  FSTP float ptr [ECX + 0xe8]
004bb649  FADD float ptr [EAX + 0x40]
004bb64c  FLD float ptr [ESP + 0x14]
004bb650  FADD float ptr [EAX + 0x44]
004bb653  FLD float ptr [ESP + 0x18]
004bb657  FADD float ptr [EAX + 0x48]
004bb65a  FSTP float ptr [ESP + 0x28]
004bb65e  MOV EAX,dword ptr [ESP + 0x28]
004bb662  FXCH
004bb664  MOV dword ptr [ECX + 0xd8],EAX
004bb66a  FSTP float ptr [ECX + 0xd0]
004bb670  FSTP float ptr [ECX + 0xd4]
004bb676  FLD float ptr [ESP]
004bb679  FADD float ptr [ECX + 0xd0]
004bb67f  FSTP float ptr [ECX + 0xd0]
004bb685  FLD float ptr [ESP + 0x4]
004bb689  FADD float ptr [ECX + 0xd4]
004bb68f  FSTP float ptr [ECX + 0xd4]
004bb695  FLD float ptr [ESP + 0x8]
004bb699  FADD float ptr [ECX + 0xd8]
004bb69f  FSTP float ptr [ECX + 0xd8]
004bb6a5  MOV ESP,EBP
004bb6a7  POP EBP
004bb6a8  RET
