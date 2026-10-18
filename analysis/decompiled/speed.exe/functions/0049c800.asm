0049c800  SUB ESP,0x24
0049c803  MOV EAX,dword ptr [ESP + 0x2c]
0049c807  MOV ECX,dword ptr [ESP + 0x28]
0049c80b  FLD float ptr [ECX]
0049c80d  FSUB float ptr [EAX]
0049c80f  FSTP float ptr [ESP + 0xc]
0049c813  FLD float ptr [ECX + 0x4]
0049c816  FSUB float ptr [EAX + 0x4]
0049c819  FSTP float ptr [ESP + 0x10]
0049c81d  FLD float ptr [ECX + 0x8]
0049c820  MOV ECX,dword ptr [ESP + 0x30]
0049c824  FSUB float ptr [EAX + 0x8]
0049c827  FLD float ptr [ECX]
0049c829  FSUB float ptr [EAX]
0049c82b  FSTP float ptr [ESP]
0049c82e  FLD float ptr [ECX + 0x4]
0049c831  FSUB float ptr [EAX + 0x4]
0049c834  FSTP float ptr [ESP + 0x4]
0049c838  FLD float ptr [ECX + 0x8]
0049c83b  FSUB float ptr [EAX + 0x8]
0049c83e  MOV EAX,dword ptr [ESP + 0x34]
0049c842  FLD float ptr [ESP + 0x4]
0049c846  MOV dword ptr [EAX + 0xc],0x0
0049c84d  FMUL ST2
0049c84f  FLD ST1
0049c851  FMUL float ptr [ESP + 0x10]
0049c855  FSUBP
0049c857  FSTP float ptr [ESP + 0x18]
0049c85b  FMUL float ptr [ESP + 0xc]
0049c85f  FLD float ptr [ESP]
0049c862  FMUL ST2
0049c864  FSUBP
0049c866  FSTP ST1
0049c868  FLD float ptr [ESP]
0049c86b  FMUL float ptr [ESP + 0x10]
0049c86f  FLD float ptr [ESP + 0x4]
0049c873  FMUL float ptr [ESP + 0xc]
0049c877  FSUBP
0049c879  FLD float ptr [ESP + 0x18]
0049c87d  FSTP float ptr [EAX]
0049c87f  FXCH
0049c881  FSTP float ptr [EAX + 0x4]
0049c884  FSTP float ptr [EAX + 0x8]
0049c887  ADD ESP,0x24
0049c88a  RET 0x10
