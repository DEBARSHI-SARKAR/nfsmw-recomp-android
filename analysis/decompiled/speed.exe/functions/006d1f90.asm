006d1f90  PUSH EBP
006d1f91  MOV EBP,ESP
006d1f93  AND ESP,0xfffffff0
006d1f96  SUB ESP,0x60
006d1f99  MOV EAX,dword ptr [EBP + 0x8]
006d1f9c  FLD float ptr [EAX]
006d1f9e  MOV EDX,dword ptr [EAX + 0x14]
006d1fa1  FSUB float ptr [EAX + 0x30]
006d1fa4  MOV ECX,dword ptr [EAX + 0x8]
006d1fa7  MOV dword ptr [ESP + 0x10],EDX
006d1fab  MOV EDX,dword ptr [EAX + 0x18]
006d1fae  FSTP float ptr [ESP]
006d1fb1  MOV dword ptr [ESP + 0x14],EDX
006d1fb5  FLD float ptr [EAX + 0x4]
006d1fb8  MOV EDX,dword ptr [EAX + 0x8]
006d1fbb  FSUB float ptr [EAX + 0x44]
006d1fbe  MOV dword ptr [ESP + 0x20],EDX
006d1fc2  MOV EDX,dword ptr [EAX + 0x1c]
006d1fc5  MOV dword ptr [ESP + 0x28],EDX
006d1fc9  FSTP float ptr [ESP + 0x4]
006d1fcd  MOV EDX,dword ptr [EAX + 0x18]
006d1fd0  FLD float ptr [EAX]
006d1fd2  MOV dword ptr [ESP + 0x2c],EDX
006d1fd6  FADD float ptr [EAX + 0x44]
006d1fd9  MOV EDX,dword ptr [EAX + 0x8]
006d1fdc  MOV dword ptr [ESP + 0x38],EDX
006d1fe0  MOV EDX,dword ptr [EAX + 0x1c]
006d1fe3  FSTP float ptr [ESP + 0x18]
006d1fe7  MOV dword ptr [ESP + 0x40],EDX
006d1feb  FLD float ptr [EAX + 0x4]
006d1fee  MOV EDX,dword ptr [EAX + 0x20]
006d1ff1  FSUB float ptr [EAX + 0x30]
006d1ff4  MOV dword ptr [ESP + 0x8],ECX
006d1ff8  MOV ECX,dword ptr [EAX + 0x10]
006d1ffb  MOV dword ptr [ESP + 0x44],EDX
006d1fff  MOV EDX,dword ptr [EAX + 0x8]
006d2002  FSTP float ptr [ESP + 0x1c]
006d2006  FLD float ptr [EAX]
006d2008  MOV dword ptr [ESP + 0xc],ECX
006d200c  FADD float ptr [EAX + 0x30]
006d200f  MOV dword ptr [ESP + 0x24],ECX
006d2013  MOV dword ptr [ESP + 0x3c],ECX
006d2017  MOV dword ptr [ESP + 0x50],EDX
006d201b  MOV EDX,dword ptr [EAX + 0x20]
006d201e  FSTP float ptr [ESP + 0x30]
006d2022  FLD float ptr [EAX + 0x4]
006d2025  MOV dword ptr [ESP + 0x54],ECX
006d2029  FADD float ptr [EAX + 0x44]
006d202c  MOV ECX,dword ptr [EAX + 0x14]
006d202f  PUSH 0x0
006d2031  MOV dword ptr [ESP + 0x5c],ECX
006d2035  FSTP float ptr [ESP + 0x38]
006d2039  MOV dword ptr [ESP + 0x60],EDX
006d203d  FLD float ptr [EAX]
006d203f  FSUB float ptr [EAX + 0x44]
006d2042  FSTP float ptr [ESP + 0x4c]
006d2046  FLD float ptr [EAX + 0x4]
006d2049  FADD float ptr [EAX + 0x30]
006d204c  MOV EAX,dword ptr [EBP + 0xc]
006d204f  PUSH EAX
006d2050  FSTP float ptr [ESP + 0x54]
006d2054  CALL 0x006c6cc0
006d2059  MOV ECX,dword ptr [0x0093de9c]
006d205f  MOV EAX,dword ptr [ECX + 0x48]
006d2062  MOV EDX,dword ptr [EAX]
006d2064  ADD ESP,0x8
006d2067  PUSH EAX
006d2068  CALL dword ptr [EDX + 0x104]
006d206e  MOV EAX,[0x0093de9c]
006d2073  MOV EAX,dword ptr [EAX + 0x48]
006d2076  MOV ECX,dword ptr [EAX]
006d2078  PUSH 0x0
006d207a  PUSH EAX
006d207b  CALL dword ptr [ECX + 0x100]
006d2081  MOV EAX,[0x00982bdc]
006d2086  MOV EDX,dword ptr [EAX]
006d2088  PUSH 0x18
006d208a  LEA ECX,[ESP + 0x4]
006d208e  PUSH ECX
006d208f  PUSH 0x2
006d2091  PUSH 0x6
006d2093  PUSH EAX
006d2094  CALL dword ptr [EDX + 0x14c]
006d209a  MOV EDX,dword ptr [0x0093de9c]
006d20a0  MOV EAX,dword ptr [EDX + 0x48]
006d20a3  MOV ECX,dword ptr [EAX]
006d20a5  PUSH EAX
006d20a6  CALL dword ptr [ECX + 0x108]
006d20ac  MOV ESP,EBP
006d20ae  POP EBP
006d20af  RET 0xc
