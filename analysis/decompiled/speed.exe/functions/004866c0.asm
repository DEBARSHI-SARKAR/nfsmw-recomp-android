004866c0  SUB ESP,0x10
004866c3  MOV ECX,dword ptr [ESP + 0x18]
004866c7  MOV EAX,dword ptr [ESP + 0x14]
004866cb  FLD float ptr [ECX + 0x4]
004866ce  FMUL float ptr [EAX + 0x8]
004866d1  FLD float ptr [ECX + 0x8]
004866d4  FMUL float ptr [EAX + 0x4]
004866d7  FSUBP
004866d9  FLD float ptr [EAX]
004866db  FMUL float ptr [ECX + 0xc]
004866de  FADDP
004866e0  FLD float ptr [EAX + 0xc]
004866e3  FMUL float ptr [ECX]
004866e5  FADDP
004866e7  FSTP float ptr [ESP]
004866ea  FLD float ptr [EAX]
004866ec  FMUL float ptr [ECX + 0x8]
004866ef  FLD float ptr [ECX]
004866f1  FMUL float ptr [EAX + 0x8]
004866f4  FSUBP
004866f6  FLD float ptr [EAX + 0xc]
004866f9  FMUL float ptr [ECX + 0x4]
004866fc  FADDP
004866fe  FLD float ptr [ECX + 0xc]
00486701  FMUL float ptr [EAX + 0x4]
00486704  FADDP
00486706  FSTP float ptr [ESP + 0x4]
0048670a  FLD float ptr [ECX]
0048670c  MOV EDX,dword ptr [ESP + 0x4]
00486710  FMUL float ptr [EAX + 0x4]
00486713  FLD float ptr [EAX]
00486715  FMUL float ptr [ECX + 0x4]
00486718  FSUBP
0048671a  FLD float ptr [EAX + 0xc]
0048671d  FMUL float ptr [ECX + 0x8]
00486720  FADDP
00486722  FLD float ptr [ECX + 0xc]
00486725  FMUL float ptr [EAX + 0x8]
00486728  FADDP
0048672a  FSTP float ptr [ESP + 0x8]
0048672e  FLD float ptr [EAX + 0xc]
00486731  FMUL float ptr [ECX + 0xc]
00486734  FLD float ptr [EAX]
00486736  FMUL float ptr [ECX]
00486738  FSUBP
0048673a  FLD float ptr [ECX + 0x4]
0048673d  FMUL float ptr [EAX + 0x4]
00486740  FSUBP
00486742  FLD float ptr [ECX + 0x8]
00486745  MOV ECX,dword ptr [ESP]
00486748  FMUL float ptr [EAX + 0x8]
0048674b  MOV EAX,dword ptr [ESP + 0x1c]
0048674f  MOV dword ptr [EAX],ECX
00486751  MOV ECX,dword ptr [ESP + 0x8]
00486755  FSUBP
00486757  MOV dword ptr [EAX + 0x4],EDX
0048675a  MOV dword ptr [EAX + 0x8],ECX
0048675d  FSTP float ptr [ESP + 0xc]
00486761  MOV EDX,dword ptr [ESP + 0xc]
00486765  MOV dword ptr [EAX + 0xc],EDX
00486768  ADD ESP,0x10
0048676b  RET
