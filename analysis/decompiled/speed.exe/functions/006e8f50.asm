006e8f50  SUB ESP,0x18
006e8f53  FLD float ptr [ESP + 0x2c]
006e8f57  FADD ST0,ST0
006e8f59  FLD float ptr [ESP + 0x28]
006e8f5d  FADD ST0,ST0
006e8f5f  FLD float ptr [ESP + 0x24]
006e8f63  FADD ST0,ST0
006e8f65  FLD ST0
006e8f67  FMUL ST1
006e8f69  FSTP float ptr [ESP + 0x2c]
006e8f6d  FSTP ST0
006e8f6f  FLD ST0
006e8f71  FMULP
006e8f73  FLD ST1
006e8f75  FMUL ST2
006e8f77  FLD ST0
006e8f79  FADD ST0,ST2
006e8f7b  FMUL float ptr [0x008a939c]
006e8f81  FSTP float ptr [ESP + 0xc]
006e8f85  FADD float ptr [ESP + 0x2c]
006e8f89  FMUL float ptr [0x008a939c]
006e8f8f  FSTP float ptr [ESP + 0x10]
006e8f93  FADD float ptr [ESP + 0x2c]
006e8f97  FMUL float ptr [0x008a939c]
006e8f9d  FSTP ST1
006e8f9f  FLD float ptr [ESP + 0xc]
006e8fa3  FMUL float ptr [ESP + 0x20]
006e8fa7  FSTP float ptr [ESP + 0xc]
006e8fab  MOV EAX,dword ptr [ESP + 0xc]
006e8faf  FLD float ptr [ESP + 0x10]
006e8fb3  MOV dword ptr [ESP],EAX
006e8fb6  FMUL float ptr [ESP + 0x20]
006e8fba  MOV EAX,dword ptr [ESP + 0x30]
006e8fbe  FSTP float ptr [ESP + 0x10]
006e8fc2  MOV ECX,dword ptr [ESP + 0x10]
006e8fc6  MOV dword ptr [ESP + 0x4],ECX
006e8fca  FMUL float ptr [ESP + 0x20]
006e8fce  FSTP float ptr [ESP + 0x14]
006e8fd2  MOV EDX,dword ptr [ESP + 0x14]
006e8fd6  FLD float ptr [ESP]
006e8fd9  MOV dword ptr [ESP + 0x8],EDX
006e8fdd  FMUL float ptr [EAX]
006e8fdf  FSTP float ptr [ESP]
006e8fe2  MOV EDX,dword ptr [ESP]
006e8fe5  FLD float ptr [ESP + 0x4]
006e8fe9  FMUL float ptr [EAX + 0x4]
006e8fec  FSTP float ptr [ESP + 0x4]
006e8ff0  FLD float ptr [ESP + 0x8]
006e8ff4  FMUL float ptr [EAX + 0x8]
006e8ff7  MOV EAX,dword ptr [ESP + 0x1c]
006e8ffb  MOV ECX,EAX
006e8ffd  MOV dword ptr [ECX],EDX
006e8fff  MOV EDX,dword ptr [ESP + 0x4]
006e9003  FSTP float ptr [ESP + 0x8]
006e9007  MOV dword ptr [ECX + 0x4],EDX
006e900a  MOV EDX,dword ptr [ESP + 0x8]
006e900e  MOV dword ptr [ECX + 0x8],EDX
006e9011  ADD ESP,0x18
006e9014  RET
