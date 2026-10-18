0077cff0  PUSH ESI
0077cff1  MOV ESI,ECX
0077cff3  CALL 0x00771e00
0077cff8  MOV dword ptr [ESI + 0x4],EAX
0077cffb  MOV byte ptr [EAX + 0x15],0x1
0077cfff  MOV EAX,dword ptr [ESI + 0x4]
0077d002  MOV dword ptr [EAX + 0x4],EAX
0077d005  MOV EAX,dword ptr [ESI + 0x4]
0077d008  MOV dword ptr [EAX],EAX
0077d00a  MOV EAX,dword ptr [ESI + 0x4]
0077d00d  MOV dword ptr [EAX + 0x8],EAX
0077d010  MOV dword ptr [ESI + 0x8],0x0
0077d017  MOV EAX,ESI
0077d019  POP ESI
0077d01a  RET 0x8
