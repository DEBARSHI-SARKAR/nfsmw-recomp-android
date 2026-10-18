005cb420  FLD float ptr [ESP + 0x8]
005cb424  MOV EAX,dword ptr [ESP + 0x4]
005cb428  FMUL float ptr [0x008a2f94]
005cb42e  XOR ECX,ECX
005cb430  MOV EDX,EAX
005cb432  MOV dword ptr [EDX],ECX
005cb434  FST float ptr [ESP + 0x8]
005cb438  MOV dword ptr [EDX + 0x4],ECX
005cb43b  FCOS
005cb43d  MOV dword ptr [EDX + 0x8],ECX
005cb440  MOV dword ptr [EDX + 0xc],ECX
005cb443  MOV dword ptr [EDX + 0x10],ECX
005cb446  MOV dword ptr [EDX + 0x14],ECX
005cb449  MOV dword ptr [EDX + 0x18],ECX
005cb44c  MOV dword ptr [EDX + 0x1c],ECX
005cb44f  MOV dword ptr [EDX + 0x20],ECX
005cb452  MOV dword ptr [EDX + 0x24],ECX
005cb455  MOV dword ptr [EDX + 0x28],ECX
005cb458  MOV dword ptr [EDX + 0x2c],ECX
005cb45b  MOV dword ptr [EDX + 0x30],ECX
005cb45e  MOV dword ptr [EDX + 0x34],ECX
005cb461  MOV dword ptr [EDX + 0x38],ECX
005cb464  MOV dword ptr [EDX + 0x3c],ECX
005cb467  MOV ECX,0x3f800000
005cb46c  MOV dword ptr [EAX + 0x14],ECX
005cb46f  MOV dword ptr [EAX + 0x3c],ECX
005cb472  FLD float ptr [ESP + 0x8]
005cb476  FSIN
005cb478  FLD ST1
005cb47a  FSTP float ptr [EAX]
005cb47c  FXCH
005cb47e  FSTP float ptr [EAX + 0x28]
005cb481  FLD ST0
005cb483  FCHS
005cb485  FSTP float ptr [EAX + 0x8]
005cb488  FSTP float ptr [EAX + 0x20]
005cb48b  RET
