005bb4a0  PUSH ESI
005bb4a1  PUSH EDI
005bb4a2  MOV ESI,ECX
005bb4a4  MOV EDI,dword ptr [ESI + 0x10]
005bb4a7  LEA EAX,[EDI + 0x1]
005bb4aa  PUSH EAX
005bb4ab  CALL 0x005bb370
005bb4b0  MOV ECX,dword ptr [ESI + 0x14]
005bb4b3  MOV EDX,dword ptr [ESP + 0xc]
005bb4b7  LEA EAX,[EDI + EDI*0x2]
005bb4ba  SHL EAX,0x2
005bb4bd  MOV dword ptr [EAX + ECX*0x1],EDX
005bb4c0  MOV ECX,dword ptr [ESI + 0x14]
005bb4c3  MOV EDX,dword ptr [ESP + 0x10]
005bb4c7  MOV dword ptr [EAX + ECX*0x1 + 0x4],EDX
005bb4cb  MOV EAX,EDI
005bb4cd  POP EDI
005bb4ce  POP ESI
005bb4cf  RET 0x8
