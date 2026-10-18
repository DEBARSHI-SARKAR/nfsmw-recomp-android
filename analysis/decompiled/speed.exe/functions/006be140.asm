006be140  MOV EAX,dword ptr [ESP + 0x8]
006be144  PUSH ESI
006be145  MOV ESI,dword ptr [ESP + 0x8]
006be149  PUSH EAX
006be14a  PUSH ESI
006be14b  CALL 0x0045ed30
006be150  XOR EAX,EAX
006be152  MOV dword ptr [ESI + 0xc],EAX
006be155  MOV dword ptr [ESI + 0x1c],EAX
006be158  MOV dword ptr [ESI + 0x2c],EAX
006be15b  MOV dword ptr [ESI + 0x3c],EAX
006be15e  MOV dword ptr [ESI + 0x30],EAX
006be161  MOV dword ptr [ESI + 0x34],EAX
006be164  MOV dword ptr [ESI + 0x38],EAX
006be167  ADD ESP,0x8
006be16a  MOV EAX,ESI
006be16c  POP ESI
006be16d  RET
