006eea40  PUSH -0x1
006eea42  PUSH 0x87e9eb
006eea47  MOV EAX,FS:[0x0]
006eea4d  PUSH EAX
006eea4e  MOV dword ptr FS:[0x0],ESP
006eea55  PUSH ECX
006eea56  PUSH EBX
006eea57  PUSH ESI
006eea58  MOV ESI,ECX
006eea5a  PUSH EDI
006eea5b  LEA EDI,[ESI + 0x8]
006eea5e  PUSH 0x1
006eea60  MOV ECX,EDI
006eea62  MOV dword ptr [ESP + 0x10],ESI
006eea66  CALL 0x005d8660
006eea6b  XOR EBX,EBX
006eea6d  MOV ECX,ESI
006eea6f  NEG ECX
006eea71  SBB ECX,ECX
006eea73  PUSH ESI
006eea74  AND ECX,EDI
006eea76  PUSH 0x6e8160
006eea7b  MOV dword ptr [ESP + 0x20],EBX
006eea7f  MOV dword ptr [ESI],0x890970
006eea85  MOV dword ptr [ESI + 0x4],ECX
006eea88  CALL 0x005d7930
006eea8d  MOV dword ptr [ESI],0x8ab398
006eea93  MOV ECX,dword ptr [0x008a2fb4]
006eea99  LEA EAX,[ESI + 0x20]
006eea9c  MOV dword ptr [EAX],ECX
006eea9e  MOV EDX,dword ptr [0x008a2fb8]
006eeaa4  MOV dword ptr [EAX + 0x4],EDX
006eeaa7  MOV ECX,dword ptr [0x008a2fbc]
006eeaad  MOV dword ptr [EAX + 0x8],ECX
006eeab0  MOV dword ptr [ESI + 0x2c],EBX
006eeab3  MOV EAX,[0x008a2fb4]
006eeab8  LEA EDX,[ESI + 0x30]
006eeabb  MOV dword ptr [EDX],EAX
006eeabd  MOV ECX,dword ptr [0x008a2fb8]
006eeac3  MOV dword ptr [EDX + 0x4],ECX
006eeac6  MOV EAX,[0x008a2fbc]
006eeacb  MOV ECX,dword ptr [ESP + 0x24]
006eeacf  MOV dword ptr [EDX + 0x8],EAX
006eead2  MOV EDX,dword ptr [ESP + 0x20]
006eead6  MOV dword ptr [ESI + 0x3c],EBX
006eead9  MOV dword ptr [ESI + 0x40],ECX
006eeadc  MOV ECX,dword ptr [ESP + 0x10]
006eeae0  MOV dword ptr [ESI + 0x44],EBX
006eeae3  MOV dword ptr [ESI + 0x48],EBX
006eeae6  MOV byte ptr [ESI + 0x4c],BL
006eeae9  MOV byte ptr [ESI + 0x4d],BL
006eeaec  MOV dword ptr [ESI + 0x54],EBX
006eeaef  POP EDI
006eeaf0  MOV dword ptr [ESI + 0x50],EDX
006eeaf3  MOV EAX,ESI
006eeaf5  POP ESI
006eeaf6  POP EBX
006eeaf7  MOV dword ptr FS:[0x0],ECX
006eeafe  ADD ESP,0x10
006eeb01  RET 0x8
