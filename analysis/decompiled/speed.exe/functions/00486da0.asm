00486da0  SUB ESP,0xc
00486da3  FLD float ptr [ECX + 0xd4]
00486da9  MOV EAX,dword ptr [ESP + 0x10]
00486dad  MOV ECX,dword ptr [ESP + 0x1c]
00486db1  FLD ST0
00486db3  FMUL float ptr [EAX]
00486db5  FSTP float ptr [ECX]
00486db7  FLD ST0
00486db9  FMUL float ptr [EAX + 0x4]
00486dbc  FSTP float ptr [ECX + 0x4]
00486dbf  FMUL float ptr [EAX + 0x8]
00486dc2  FSTP float ptr [ECX + 0x8]
00486dc5  MOV ECX,dword ptr [ESP + 0x14]
00486dc9  FLD float ptr [ECX + 0x4]
00486dcc  FMUL float ptr [EAX + 0x8]
00486dcf  FLD float ptr [EAX + 0x4]
00486dd2  FMUL float ptr [ECX + 0x8]
00486dd5  FSUBP
00486dd7  FSTP float ptr [ESP]
00486dda  MOV EDX,dword ptr [ESP]
00486ddd  FLD float ptr [EAX]
00486ddf  FMUL float ptr [ECX + 0x8]
00486de2  FLD float ptr [ECX]
00486de4  FMUL float ptr [EAX + 0x8]
00486de7  FSUBP
00486de9  FSTP float ptr [ESP + 0x4]
00486ded  FLD float ptr [EAX + 0x4]
00486df0  FMUL float ptr [ECX]
00486df2  FLD float ptr [ECX + 0x4]
00486df5  FMUL float ptr [EAX]
00486df7  MOV EAX,dword ptr [ESP + 0x20]
00486dfb  MOV ECX,EAX
00486dfd  MOV dword ptr [ECX],EDX
00486dff  MOV EDX,dword ptr [ESP + 0x4]
00486e03  FSUBP
00486e05  MOV dword ptr [ECX + 0x4],EDX
00486e08  PUSH EAX
00486e09  FSTP float ptr [ESP + 0xc]
00486e0d  MOV EDX,dword ptr [ESP + 0xc]
00486e11  MOV dword ptr [ECX + 0x8],EDX
00486e14  MOV ECX,dword ptr [ESP + 0x1c]
00486e18  PUSH ECX
00486e19  PUSH EAX
00486e1a  CALL 0x00401670
00486e1f  ADD ESP,0x18
00486e22  RET 0x14
