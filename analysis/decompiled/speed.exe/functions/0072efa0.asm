0072efa0  MOV EAX,dword ptr [ESP + 0x10]
0072efa4  PUSH ESI
0072efa5  MOV ESI,ECX
0072efa7  MOV ECX,dword ptr [ESP + 0x8]
0072efab  MOV dword ptr [ESI + 0x30],EAX
0072efae  MOV dword ptr [ESI + 0x2c],ECX
0072efb1  MOV dword ptr [ESI + 0xf0],0x0
0072efbb  PUSH EDI
0072efbc  MOV EDI,dword ptr [ESP + 0x10]
0072efc0  FLD float ptr [EDI + 0x4]
0072efc3  MOV EDX,dword ptr [EDI]
0072efc5  FLD float ptr [EDI + 0x8]
0072efc8  PUSH EDI
0072efc9  LEA EAX,[ESI + 0x50]
0072efcc  FXCH
0072efce  FSTP float ptr [ESI + 0x44]
0072efd1  PUSH EAX
0072efd2  LEA ECX,[ESI + 0x60]
0072efd5  PUSH ECX
0072efd6  FSTP float ptr [ESI + 0x48]
0072efd9  MOV dword ptr [ESI + 0x40],EDX
0072efdc  CALL 0x0045fba0
0072efe1  FLD float ptr [EDI + 0x4]
0072efe4  FLD float ptr [EDI + 0x8]
0072efe7  MOV EDX,dword ptr [EDI]
0072efe9  FXCH
0072efeb  PUSH EDI
0072efec  FSTP float ptr [ESI + 0x104]
0072eff2  MOV dword ptr [ESI + 0x100],EDX
0072eff8  FSTP float ptr [ESI + 0x108]
0072effe  CALL 0x0072edb0
0072f003  ADD ESP,0x10
0072f006  PUSH ESI
0072f007  LEA ECX,[EAX + 0x8]
0072f00a  MOV dword ptr [ESI + 0x24],EAX
0072f00d  CALL 0x0072b2f0
0072f012  MOV ECX,dword ptr [ESP + 0x14]
0072f016  MOV dword ptr [ESI + 0x28],EAX
0072f019  MOV EAX,dword ptr [ESP + 0x1c]
0072f01d  PUSH EAX
0072f01e  PUSH 0x0
0072f020  PUSH ECX
0072f021  PUSH EDI
0072f022  MOV ECX,ESI
0072f024  CALL 0x0072b780
0072f029  POP EDI
0072f02a  MOV EAX,ESI
0072f02c  POP ESI
0072f02d  RET 0x14
