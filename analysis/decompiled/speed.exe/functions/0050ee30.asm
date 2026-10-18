0050ee30  MOV EDX,ECX
0050ee32  XOR EAX,EAX
0050ee34  PUSH EDI
0050ee35  MOV ECX,0x10
0050ee3a  MOV EDI,EDX
0050ee3c  STOSD.REP ES:EDI
0050ee3e  LEA ECX,[EDX + 0x40]
0050ee41  MOV dword ptr [ECX],EAX
0050ee43  MOV dword ptr [ECX + 0x4],EAX
0050ee46  MOV dword ptr [ECX + 0x8],EAX
0050ee49  MOV dword ptr [ECX + 0xc],EAX
0050ee4c  MOV dword ptr [ECX + 0x10],EAX
0050ee4f  MOV dword ptr [ECX + 0x14],EAX
0050ee52  MOV dword ptr [ECX + 0x18],EAX
0050ee55  MOV dword ptr [ECX + 0x1c],EAX
0050ee58  LEA ECX,[EDX + 0x60]
0050ee5b  MOV dword ptr [ECX],EAX
0050ee5d  MOV dword ptr [ECX + 0x4],EAX
0050ee60  MOV dword ptr [ECX + 0x8],EAX
0050ee63  MOV dword ptr [ECX + 0xc],EAX
0050ee66  MOV dword ptr [ECX + 0x10],EAX
0050ee69  MOV dword ptr [ECX + 0x14],EAX
0050ee6c  MOV dword ptr [ECX + 0x18],EAX
0050ee6f  MOV dword ptr [ECX + 0x1c],EAX
0050ee72  MOV ECX,0x10
0050ee77  LEA EDI,[EDX + 0x80]
0050ee7d  STOSD.REP ES:EDI
0050ee7f  MOV ECX,0x10
0050ee84  LEA EDI,[EDX + 0xc0]
0050ee8a  STOSD.REP ES:EDI
0050ee8c  MOV dword ptr [EDX + 0x100],0xffffffff
0050ee96  MOV dword ptr [EDX + 0x104],EAX
0050ee9c  MOV dword ptr [EDX + 0x108],EAX
0050eea2  MOV dword ptr [EDX + 0x10c],EAX
0050eea8  MOV byte ptr [EDX + 0x110],AL
0050eeae  MOV byte ptr [EDX + 0x112],AL
0050eeb4  MOV byte ptr [EDX + 0x111],AL
0050eeba  POP EDI
0050eebb  RET
