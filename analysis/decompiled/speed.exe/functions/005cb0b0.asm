005cb0b0  SUB ESP,0x24
005cb0b3  MOV EAX,dword ptr [ESP + 0x28]
005cb0b7  MOV ECX,dword ptr [ESP + 0x2c]
005cb0bb  FLD float ptr [ECX + 0x8]
005cb0be  FMUL float ptr [EAX + 0x4]
005cb0c1  FLD float ptr [ECX + 0x4]
005cb0c4  FMUL float ptr [EAX + 0x8]
005cb0c7  FSUBP
005cb0c9  FSTP float ptr [ESP + 0xc]
005cb0cd  MOV EDX,dword ptr [ESP + 0xc]
005cb0d1  FLD float ptr [ECX]
005cb0d3  MOV dword ptr [ESP],EDX
005cb0d6  FMUL float ptr [EAX + 0x8]
005cb0d9  FLD float ptr [EAX]
005cb0db  FMUL float ptr [ECX + 0x8]
005cb0de  FSUBP
005cb0e0  FSTP float ptr [ESP + 0x10]
005cb0e4  MOV EDX,dword ptr [ESP + 0x10]
005cb0e8  FLD float ptr [EAX]
005cb0ea  MOV dword ptr [ESP + 0x4],EDX
005cb0ee  FMUL float ptr [ECX + 0x4]
005cb0f1  FLD float ptr [ECX]
005cb0f3  FMUL float ptr [EAX + 0x4]
005cb0f6  FSUBP
005cb0f8  FSTP float ptr [ESP + 0x14]
005cb0fc  MOV EDX,dword ptr [ESP + 0x14]
005cb100  FLD float ptr [EAX + 0xc]
005cb103  MOV dword ptr [ESP + 0x8],EDX
005cb107  FLD ST0
005cb109  FMUL float ptr [ECX]
005cb10b  FADD float ptr [ESP]
005cb10e  FLD ST1
005cb110  FMUL float ptr [ECX + 0x4]
005cb113  FADD float ptr [ESP + 0x4]
005cb117  FSTP float ptr [ESP + 0x4]
005cb11b  FXCH
005cb11d  FMUL float ptr [ECX + 0x8]
005cb120  FADD float ptr [ESP + 0x8]
005cb124  FSTP float ptr [ESP + 0x8]
005cb128  FLD float ptr [ESP + 0x4]
005cb12c  FMUL float ptr [EAX + 0x8]
005cb12f  FLD float ptr [ESP + 0x8]
005cb133  FMUL float ptr [EAX + 0x4]
005cb136  FSUBP
005cb138  FSTP float ptr [ESP + 0xc]
005cb13c  MOV EDX,dword ptr [ESP + 0xc]
005cb140  FLD float ptr [ESP + 0x8]
005cb144  MOV dword ptr [ESP + 0x18],EDX
005cb148  FMUL float ptr [EAX]
005cb14a  FLD ST1
005cb14c  FMUL float ptr [EAX + 0x8]
005cb14f  FSUBP
005cb151  FSTP float ptr [ESP + 0x10]
005cb155  MOV EDX,dword ptr [ESP + 0x10]
005cb159  MOV dword ptr [ESP + 0x1c],EDX
005cb15d  FLD ST0
005cb15f  FMUL float ptr [EAX + 0x4]
005cb162  FLD float ptr [ESP + 0x4]
005cb166  FMUL float ptr [EAX]
005cb168  FSUBP
005cb16a  FSTP float ptr [ESP + 0x14]
005cb16e  MOV EDX,dword ptr [ESP + 0x14]
005cb172  FLD float ptr [ECX + 0x8]
005cb175  MOV dword ptr [ESP + 0x20],EDX
005cb179  FMUL float ptr [EAX + 0x8]
005cb17c  FLD float ptr [ECX + 0x4]
005cb17f  FMUL float ptr [EAX + 0x4]
005cb182  FADDP
005cb184  FLD float ptr [EAX]
005cb186  FMUL float ptr [ECX]
005cb188  MOV ECX,dword ptr [ESP + 0x30]
005cb18c  FADDP
005cb18e  FLD ST0
005cb190  FMUL float ptr [EAX]
005cb192  FSTP float ptr [ESP + 0xc]
005cb196  FLD ST0
005cb198  FMUL float ptr [EAX + 0x4]
005cb19b  FSTP float ptr [ESP + 0x10]
005cb19f  FMUL float ptr [EAX + 0x8]
005cb1a2  MOV EAX,dword ptr [EAX + 0xc]
005cb1a5  MOV dword ptr [ESP + 0x28],EAX
005cb1a9  MOV EAX,dword ptr [ESP + 0x34]
005cb1ad  FSTP float ptr [ESP + 0x14]
005cb1b1  FMUL float ptr [ESP + 0x28]
005cb1b5  FADD float ptr [ESP + 0xc]
005cb1b9  FLD float ptr [ESP + 0x4]
005cb1bd  FMUL float ptr [ESP + 0x28]
005cb1c1  FADD float ptr [ESP + 0x10]
005cb1c5  FLD float ptr [ESP + 0x8]
005cb1c9  FMUL float ptr [ESP + 0x28]
005cb1cd  FADD float ptr [ESP + 0x14]
005cb1d1  FSTP float ptr [ESP + 0x14]
005cb1d5  FXCH
005cb1d7  FSUB float ptr [ESP + 0x18]
005cb1db  FST float ptr [ESP + 0x28]
005cb1df  FSTP float ptr [EAX]
005cb1e1  FSUB float ptr [ESP + 0x1c]
005cb1e5  FST float ptr [EAX + 0x4]
005cb1e8  FLD float ptr [ESP + 0x14]
005cb1ec  FSUB float ptr [ESP + 0x20]
005cb1f0  FST float ptr [EAX + 0x8]
005cb1f3  FLD float ptr [ESP + 0x28]
005cb1f7  FADD float ptr [ECX]
005cb1f9  FSTP float ptr [EAX]
005cb1fb  FXCH
005cb1fd  FADD float ptr [ECX + 0x4]
005cb200  FSTP float ptr [EAX + 0x4]
005cb203  FADD float ptr [ECX + 0x8]
005cb206  FSTP float ptr [EAX + 0x8]
005cb209  ADD ESP,0x24
005cb20c  RET
