006ffc50  PUSH ESI
006ffc51  MOV ESI,ECX
006ffc53  MOV EAX,dword ptr [ESI + 0x7c]
006ffc56  TEST EAX,EAX
006ffc58  PUSH EDI
006ffc59  MOV EDI,dword ptr [ESP + 0xc]
006ffc5d  JZ 0x006ffc8b
006ffc5f  CMP EDI,0x2
006ffc62  JLE 0x006ffc6b
006ffc64  POP EDI
006ffc65  MOV AL,0x1
006ffc67  POP ESI
006ffc68  RET 0xc
006ffc6b  MOV ECX,dword ptr [ESI + 0x2c]
006ffc6e  ADD ECX,0x4
006ffc71  CALL 0x004b2580
006ffc76  MOV EAX,dword ptr [ESI + 0x7c]
006ffc79  PUSH EAX
006ffc7a  MOV ECX,0x912840
006ffc7f  CALL 0x004ac0e0
006ffc84  MOV dword ptr [ESI + 0x7c],0x0
006ffc8b  MOV ECX,dword ptr [ESI + 0x2c]
006ffc8e  ADD ECX,0x4
006ffc91  CALL 0x004b21b0
006ffc96  TEST AL,AL
006ffc98  JZ 0x006ffcc4
006ffc9a  TEST EDI,EDI
006ffc9c  JZ 0x006ffca3
006ffc9e  CMP EDI,0x5
006ffca1  JNZ 0x006ffcc4
006ffca3  CMP EDI,0x2
006ffca6  JZ 0x006ffcb3
006ffca8  MOV ECX,dword ptr [ESI + 0x2c]
006ffcab  ADD ECX,0x4
006ffcae  CALL 0x004b2210
006ffcb3  CMP EDI,0x5
006ffcb6  JNZ 0x006ffcc4
006ffcb8  MOV ECX,dword ptr [ESI + 0x4c]
006ffcbb  TEST ECX,ECX
006ffcbd  JZ 0x006ffcc4
006ffcbf  CALL 0x004e0800
006ffcc4  MOV ECX,dword ptr [ESP + 0x10]
006ffcc8  PUSH 0x2
006ffcca  MOV dword ptr [ESI + 0x80],ECX
006ffcd0  MOV dword ptr [ESI + 0x7c],0x0
006ffcd7  MOV dword ptr [ESI + 0x84],EDI
006ffcdd  MOV dword ptr [ESI + 0x88],0xffffffff
006ffce7  MOV byte ptr [ESI + 0x50],0x0
006ffceb  CALL 0x008325c8
006ffcf0  ADD ESP,0x4
006ffcf3  TEST EAX,EAX
006ffcf5  POP EDI
006ffcf6  SETNZ AL
006ffcf9  POP ESI
006ffcfa  RET 0xc
