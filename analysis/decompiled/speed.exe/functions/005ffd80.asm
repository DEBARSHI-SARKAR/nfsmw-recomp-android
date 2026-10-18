005ffd80  PUSH ECX
005ffd81  PUSH EBX
005ffd82  PUSH ESI
005ffd83  MOV ESI,ECX
005ffd85  PUSH EDI
005ffd86  XOR EAX,EAX
005ffd88  MOV ECX,0xa0
005ffd8d  LEA EDI,[ESI + 0x19bc]
005ffd93  STOSD.REP ES:EDI
005ffd95  MOV ECX,0xa00
005ffd9a  LEA EDI,[ESI + 0x1c3c]
005ffda0  STOSD.REP ES:EDI
005ffda2  MOV ECX,dword ptr [ESI + 0x1968]
005ffda8  XOR EBX,EBX
005ffdaa  CMP ECX,EBX
005ffdac  JZ 0x005ffdb9
005ffdae  CALL 0x005fcd20
005ffdb3  FSTP float ptr [ESP + 0xc]
005ffdb7  JMP 0x005ffdc1
005ffdb9  MOV dword ptr [ESP + 0xc],0x0
005ffdc1  CMP byte ptr [ESI + 0x1978],BL
005ffdc7  JZ 0x005ffddc
005ffdc9  CALL 0x006e8de0
005ffdce  FSUB float ptr [ESI + 0x1970]
005ffdd4  FADD float ptr [ESI + 0x1974]
005ffdda  JMP 0x005ffde2
005ffddc  FLD float ptr [ESI + 0x1974]
005ffde2  MOV EAX,dword ptr [ESP + 0xc]
005ffde6  FSTP float ptr [ESI + 0x1974]
005ffdec  MOV byte ptr [ESI + 0x1978],BL
005ffdf2  MOV dword ptr [ESI + 0x1974],EAX
005ffdf8  CALL 0x006e8de0
005ffdfd  FSTP float ptr [ESI + 0x1970]
005ffe03  POP EDI
005ffe04  MOV dword ptr [ESI + 0x1980],EBX
005ffe0a  MOV dword ptr [ESI + 0x1984],EBX
005ffe10  MOV byte ptr [ESI + 0x1989],BL
005ffe16  MOV byte ptr [ESI + 0x1988],BL
005ffe1c  MOV dword ptr [ESI + 0x198c],EBX
005ffe22  POP ESI
005ffe23  POP EBX
005ffe24  POP ECX
005ffe25  RET
