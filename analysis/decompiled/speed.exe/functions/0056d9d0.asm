0056d9d0  MOV EDX,ECX
0056d9d2  XOR EAX,EAX
0056d9d4  PUSH EDI
0056d9d5  LEA EDI,[EDX + 0xa2c]
0056d9db  MOV ECX,0x46
0056d9e0  STOSD.REP ES:EDI
0056d9e2  LEA ECX,[EDX + 0xb44]
0056d9e8  MOV dword ptr [ECX],EAX
0056d9ea  MOV dword ptr [ECX + 0x4],EAX
0056d9ed  MOV dword ptr [ECX + 0x8],EAX
0056d9f0  MOV dword ptr [ECX + 0xc],EAX
0056d9f3  MOV dword ptr [ECX + 0x10],EAX
0056d9f6  MOV dword ptr [ECX + 0x14],EAX
0056d9f9  MOV dword ptr [ECX + 0x18],EAX
0056d9fc  MOV dword ptr [ECX + 0x1c],EAX
0056d9ff  LEA EDI,[EDX + 0xb64]
0056da05  MOV ECX,0x14
0056da0a  STOSD.REP ES:EDI
0056da0c  LEA ECX,[EDX + 0xbb4]
0056da12  MOV dword ptr [ECX],EAX
0056da14  MOV dword ptr [ECX + 0x4],EAX
0056da17  MOV dword ptr [ECX + 0x8],EAX
0056da1a  MOV dword ptr [ECX + 0xc],EAX
0056da1d  MOV dword ptr [ECX + 0x10],EAX
0056da20  MOV dword ptr [ECX + 0x14],EAX
0056da23  MOV dword ptr [ECX + 0x18],EAX
0056da26  MOV dword ptr [ECX + 0x1c],EAX
0056da29  MOV EAX,EDX
0056da2b  POP EDI
0056da2c  RET
