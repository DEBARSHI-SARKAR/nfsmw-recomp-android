00819be2  MOV EAX,dword ptr [ESP + 0x4]
00819be6  MOVZX ECX,byte ptr [EAX + 0x3]
00819bea  FLD float ptr [EAX + ECX*0x8 + 0x18]
00819bee  FST float ptr [EAX + 0x4]
00819bf1  FLD float ptr [EAX + ECX*0x8 + 0x1c]
00819bf5  FSUB float ptr [EAX + 0xc]
00819bf8  FDIVRP
00819bfa  FST float ptr [EAX + 0x8]
00819bfd  FMUL float ptr [0x009c1b54]
00819c03  FSTP float ptr [EAX + 0x8]
00819c06  RET
