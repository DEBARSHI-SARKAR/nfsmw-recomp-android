004fbea0  PUSH EBX
004fbea1  MOV EBX,dword ptr [ESP + 0x8]
004fbea5  PUSH ESI
004fbea6  PUSH EDI
004fbea7  MOV EDI,dword ptr [EBX + 0x4]
004fbeaa  PUSH EDI
004fbeab  CALL 0x0064a980
004fbeb0  LEA ESI,[EDI + 0x8]
004fbeb3  PUSH ESI
004fbeb4  CALL 0x0064a980
004fbeb9  MOV EAX,dword ptr [ESI + 0x4]
004fbebc  LEA ESI,[EAX + ESI*0x1 + 0x8]
004fbec0  PUSH ESI
004fbec1  CALL 0x0064a980
004fbec6  MOV EAX,dword ptr [ESI + 0x4]
004fbec9  ADD ESP,0xc
004fbecc  SUB ESI,EDI
004fbece  POP EDI
004fbecf  MOV dword ptr [EBX + 0x8],ESI
004fbed2  ADD EAX,0x10
004fbed5  POP ESI
004fbed6  MOV dword ptr [EBX + 0xc],EAX
004fbed9  POP EBX
004fbeda  RET
