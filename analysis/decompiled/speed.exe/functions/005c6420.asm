005c6420  MOV ECX,dword ptr [ESP + 0x8]
005c6424  MOV EAX,dword ptr [ESP + 0x4]
005c6428  FLD float ptr [ECX]
005c642a  FMUL float ptr [EAX + 0x8]
005c642d  FLD float ptr [ECX + 0x8]
005c6430  FMUL float ptr [EAX]
005c6432  FSUBP
005c6434  FLD float ptr [EAX]
005c6436  FMUL float ptr [ECX + 0x4]
005c6439  FLD float ptr [EAX + 0x4]
005c643c  FMUL float ptr [ECX]
005c643e  FSUBP
005c6440  FLD float ptr [ECX + 0x8]
005c6443  FMUL float ptr [EAX + 0x4]
005c6446  FLD float ptr [ECX + 0x4]
005c6449  FMUL float ptr [EAX + 0x8]
005c644c  MOV EAX,dword ptr [ESP + 0xc]
005c6450  FSUBP
005c6452  FSTP float ptr [EAX]
005c6454  FXCH
005c6456  FSTP float ptr [EAX + 0x4]
005c6459  FSTP float ptr [EAX + 0x8]
005c645c  RET
