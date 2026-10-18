004102c0  PUSH EBP
004102c1  MOV EBP,ESP
004102c3  MOV EAX,dword ptr [EBP + 0xc]
004102c6  FLD float ptr [EAX]
004102c8  MOV ECX,dword ptr [EBP + 0x10]
004102cb  FSUB float ptr [ECX]
004102cd  AND ESP,0xfffffff0
004102d0  FLD float ptr [EAX + 0x4]
004102d3  FSUB float ptr [ECX + 0x4]
004102d6  FLD float ptr [EAX + 0x8]
004102d9  MOV EAX,dword ptr [EBP + 0x8]
004102dc  FSUB float ptr [ECX + 0x8]
004102df  FXCH ST2
004102e1  FSTP float ptr [EAX]
004102e3  FSTP float ptr [EAX + 0x4]
004102e6  FSTP float ptr [EAX + 0x8]
004102e9  MOV ESP,EBP
004102eb  POP EBP
004102ec  RET
