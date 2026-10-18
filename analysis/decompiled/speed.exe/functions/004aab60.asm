004aab60  PUSH EBP
004aab61  MOV EBP,ESP
004aab63  MOV EAX,dword ptr [ECX + 0x1c]
004aab66  MOV ECX,dword ptr [EBP + 0x8]
004aab69  FLD float ptr [EAX + 0x40]
004aab6c  FSUB float ptr [ECX]
004aab6e  AND ESP,0xfffffff0
004aab71  FLD float ptr [EAX + 0x44]
004aab74  ADD EAX,0x40
004aab77  FSUB float ptr [ECX + 0x4]
004aab7a  FLD float ptr [EAX + 0x8]
004aab7d  FSUB float ptr [ECX + 0x8]
004aab80  FLD ST2
004aab82  FMULP ST3
004aab84  FLD ST0
004aab86  FMUL ST1
004aab88  FADDP ST3,ST0
004aab8a  FLD ST1
004aab8c  FMUL ST2
004aab8e  FADDP ST3,ST0
004aab90  FXCH ST2
004aab92  FSQRT
004aab94  FSTP ST2
004aab96  FSTP ST0
004aab98  MOV ESP,EBP
004aab9a  POP EBP
004aab9b  RET 0x4
