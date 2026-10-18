0075aa00  PUSH ESI
0075aa01  MOV ESI,ECX
0075aa03  CALL 0x0074cd10
0075aa08  MOV dword ptr [ESI + 0x4],EAX
0075aa0b  MOV byte ptr [EAX + 0x15],0x1
0075aa0f  MOV EAX,dword ptr [ESI + 0x4]
0075aa12  MOV dword ptr [EAX + 0x4],EAX
0075aa15  MOV EAX,dword ptr [ESI + 0x4]
0075aa18  MOV dword ptr [EAX],EAX
0075aa1a  MOV EAX,dword ptr [ESI + 0x4]
0075aa1d  MOV dword ptr [EAX + 0x8],EAX
0075aa20  MOV dword ptr [ESI + 0x8],0x0
0075aa27  MOV EAX,ESI
0075aa29  POP ESI
0075aa2a  RET 0x8
