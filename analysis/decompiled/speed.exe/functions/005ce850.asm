005ce850  SUB ESP,0x20
005ce853  MOV EAX,dword ptr [ESP + 0x24]
005ce857  FLD float ptr [EAX + 0x8]
005ce85a  FLD float ptr [EAX + 0x4]
005ce85d  FLD float ptr [EAX]
005ce85f  FLD ST0
005ce861  FMUL ST1
005ce863  FLD ST2
005ce865  FMUL ST3
005ce867  FADDP
005ce869  FLD ST3
005ce86b  FMUL ST4
005ce86d  FADDP
005ce86f  FSQRT
005ce871  FSTP ST3
005ce873  FSTP ST0
005ce875  FSTP ST0
005ce877  FDIVR float ptr [EAX + 0xc]
005ce87a  FLD ST0
005ce87c  FMUL float ptr [EAX]
005ce87e  FSTP float ptr [ESP + 0x10]
005ce882  FLD ST0
005ce884  FMUL float ptr [EAX + 0x4]
005ce887  FSTP float ptr [ESP + 0x14]
005ce88b  FMUL float ptr [EAX + 0x8]
005ce88e  MOV EAX,dword ptr [EAX + 0xc]
005ce891  MOV dword ptr [ESP + 0x1c],EAX
005ce895  MOV EAX,dword ptr [ESP + 0x28]
005ce899  FSTP float ptr [ESP + 0x18]
005ce89d  MOV ECX,dword ptr [EAX + 0xc]
005ce8a0  FLD float ptr [EAX + 0x8]
005ce8a3  MOV dword ptr [ESP + 0xc],ECX
005ce8a7  FLD float ptr [EAX + 0x4]
005ce8aa  FLD float ptr [EAX]
005ce8ac  FLD ST0
005ce8ae  FMUL ST1
005ce8b0  FLD ST2
005ce8b2  FMUL ST3
005ce8b4  FADDP
005ce8b6  FLD ST3
005ce8b8  FMUL ST4
005ce8ba  FADDP
005ce8bc  FSQRT
005ce8be  FSTP ST3
005ce8c0  FSTP ST0
005ce8c2  FSTP ST0
005ce8c4  FDIVR float ptr [EAX + 0xc]
005ce8c7  FLD ST0
005ce8c9  FMUL float ptr [EAX]
005ce8cb  FSTP float ptr [ESP]
005ce8ce  FLD ST0
005ce8d0  FMUL float ptr [EAX + 0x4]
005ce8d3  FSTP float ptr [ESP + 0x4]
005ce8d7  FMUL float ptr [EAX + 0x8]
005ce8da  FSTP float ptr [ESP + 0x8]
005ce8de  FLD float ptr [ESP + 0x8]
005ce8e2  FMUL float ptr [ESP + 0x18]
005ce8e6  FLD float ptr [ESP + 0x4]
005ce8ea  FMUL float ptr [ESP + 0x14]
005ce8ee  FADDP
005ce8f0  FLD float ptr [ESP]
005ce8f3  FMUL float ptr [ESP + 0x10]
005ce8f7  FADDP
005ce8f9  FLD float ptr [ESP + 0xc]
005ce8fd  FMUL float ptr [ESP + 0x1c]
005ce901  FDIVP
005ce903  CALL 0x007c4410
005ce908  FMUL float ptr [0x008a2f98]
005ce90e  ADD ESP,0x20
005ce911  RET
