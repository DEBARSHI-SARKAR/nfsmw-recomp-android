00819f3a  PUSH EBP
00819f3b  MOV EBP,ESP
00819f3d  PUSH ECX
00819f3e  MOV EAX,dword ptr [EBP + 0x8]
00819f41  FILD dword ptr [EAX + 0x8]
00819f44  FIMUL dword ptr [EAX + 0x4]
00819f47  FMUL float ptr [EAX]
00819f49  FSTP float ptr [EBP + 0x8]
00819f4c  FLD float ptr [EBP + 0x8]
00819f4f  FISTP dword ptr [EBP + -0x4]
00819f52  MOV EAX,dword ptr [EBP + -0x4]
00819f55  LEAVE
00819f56  RET
