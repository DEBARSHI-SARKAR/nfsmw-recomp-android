00824aec  MOV EAX,dword ptr [ESP + 0x8]
00824af0  FILD dword ptr [EAX]
00824af2  MOV EAX,dword ptr [ESP + 0x4]
00824af6  FMUL float ptr [0x008ae820]
00824afc  FSTP float ptr [EAX + 0x1c]
00824aff  RET
