004bc0c0  PUSH EBX
004bc0c1  PUSH ESI
004bc0c2  MOV ESI,ECX
004bc0c4  MOV EAX,dword ptr [ESI + 0x148]
004bc0ca  XOR EBX,EBX
004bc0cc  CMP EAX,EBX
004bc0ce  JZ 0x004bc14b
004bc0d0  PUSH EDI
004bc0d1  MOV EDI,dword ptr [ESP + 0x10]
004bc0d5  PUSH EDI
004bc0d6  LEA ECX,[ESI + 0x110]
004bc0dc  CALL 0x004b0320
004bc0e1  PUSH EDI
004bc0e2  LEA ECX,[ESI + 0x12c]
004bc0e8  CALL 0x004b0320
004bc0ed  CMP byte ptr [ESI + 0x128],BL
004bc0f3  JZ 0x004bc119
004bc0f5  POP EDI
004bc0f6  MOV dword ptr [ESI + 0x148],EBX
004bc0fc  MOV dword ptr [ESI + 0x40],EBX
004bc0ff  MOV dword ptr [ESI + 0x44],EBX
004bc102  MOV dword ptr [ESI + 0x48],EBX
004bc105  MOV dword ptr [ESI + 0x4c],EBX
004bc108  MOV dword ptr [ESI + 0x50],EBX
004bc10b  MOV dword ptr [ESI + 0x54],EBX
004bc10e  MOV dword ptr [ESI + 0x38],EBX
004bc111  MOV dword ptr [ESI + 0x3c],EBX
004bc114  POP ESI
004bc115  POP EBX
004bc116  RET 0x4
004bc119  FLD float ptr [ESI + 0x124]
004bc11f  CALL 0x007c4b80
004bc124  FLD float ptr [ESI + 0x140]
004bc12a  MOV EDI,dword ptr [ESI + 0x34]
004bc12d  MOV dword ptr [ESI + 0x50],EAX
004bc130  MOV EAX,dword ptr [EDI + 0x8]
004bc133  MOV ECX,dword ptr [EAX + 0x50]
004bc136  MOV dword ptr [ESI + 0x54],ECX
004bc139  CALL 0x007c4b80
004bc13e  MOV dword ptr [ESI + 0x40],EAX
004bc141  MOV EDX,dword ptr [EDI + 0x8]
004bc144  MOV EAX,dword ptr [EDX + 0x40]
004bc147  MOV dword ptr [ESI + 0x44],EAX
004bc14a  POP EDI
004bc14b  POP ESI
004bc14c  POP EBX
004bc14d  RET 0x4
