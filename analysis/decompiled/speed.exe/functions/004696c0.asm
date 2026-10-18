004696c0  PUSH EBP
004696c1  MOV EBP,ESP
004696c3  AND ESP,0xfffffff0
004696c6  SUB ESP,0x20
004696c9  MOV EAX,dword ptr [EBP + 0xc]
004696cc  MOV ECX,dword ptr [EBP + 0x10]
004696cf  FLD float ptr [ECX]
004696d1  FSUB float ptr [EAX]
004696d3  FLD float ptr [ECX + 0x4]
004696d6  FSUB float ptr [EAX + 0x4]
004696d9  FLD float ptr [ECX + 0x8]
004696dc  MOV ECX,dword ptr [EAX + 0x8]
004696df  FSUB float ptr [EAX + 0x8]
004696e2  MOV dword ptr [ESP + 0xc],ECX
004696e6  FSTP float ptr [ESP + 0x18]
004696ea  FXCH
004696ec  FMUL float ptr [EBP + 0x14]
004696ef  FSTP float ptr [ESP + 0x10]
004696f3  FMUL float ptr [EBP + 0x14]
004696f6  FLD float ptr [ESP + 0x18]
004696fa  FMUL float ptr [EBP + 0x14]
004696fd  FLD float ptr [EAX + 0x4]
00469700  FLD float ptr [ESP + 0x10]
00469704  FADD float ptr [EAX]
00469706  MOV EAX,dword ptr [EBP + 0x8]
00469709  FSTP float ptr [EAX]
0046970b  FADD ST0,ST2
0046970d  FSTP float ptr [EAX + 0x4]
00469710  FLD float ptr [ESP + 0xc]
00469714  FADD ST0,ST1
00469716  FSTP float ptr [EAX + 0x8]
00469719  FSTP ST0
0046971b  FSTP ST0
0046971d  MOV ESP,EBP
0046971f  POP EBP
00469720  RET
