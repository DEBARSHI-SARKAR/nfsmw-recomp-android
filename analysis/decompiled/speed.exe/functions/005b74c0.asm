005b74c0  MOV EAX,dword ptr [ESP + 0x4]
005b74c4  TEST EAX,EAX
005b74c6  PUSH ESI
005b74c7  MOV ESI,dword ptr [ECX + 0xf4]
005b74cd  JZ 0x005b7519
005b74cf  TEST ESI,ESI
005b74d1  JZ 0x005b74e8
005b74d3  MOV EDX,dword ptr [ESI + 0x4]
005b74d6  TEST EDX,EDX
005b74d8  MOV dword ptr [EAX + 0x4],EDX
005b74db  JZ 0x005b74e0
005b74dd  MOV dword ptr [EDX + 0x8],EAX
005b74e0  MOV dword ptr [EAX + 0x8],ESI
005b74e3  MOV dword ptr [ESI + 0x4],EAX
005b74e6  JMP 0x005b7505
005b74e8  MOV EDX,dword ptr [ECX + 0xf0]
005b74ee  TEST EDX,EDX
005b74f0  MOV dword ptr [EAX + 0x4],EDX
005b74f3  JZ 0x005b74f8
005b74f5  MOV dword ptr [EDX + 0x8],EAX
005b74f8  MOV dword ptr [EAX + 0x8],0x0
005b74ff  MOV dword ptr [ECX + 0xf0],EAX
005b7505  CMP dword ptr [ECX + 0xf4],ESI
005b750b  JNZ 0x005b7513
005b750d  MOV dword ptr [ECX + 0xf4],EAX
005b7513  INC dword ptr [ECX + 0xec]
005b7519  POP ESI
005b751a  RET 0x4
