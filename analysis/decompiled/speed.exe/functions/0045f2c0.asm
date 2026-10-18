0045f2c0  MOV EDX,dword ptr [ECX + 0x18]
0045f2c3  MOV EAX,dword ptr [ECX + 0x10]
0045f2c6  INC EDX
0045f2c7  TEST EAX,EAX
0045f2c9  JZ 0x0045f2dd
0045f2cb  PUSH ESI
0045f2cc  MOV ESI,dword ptr [EAX]
0045f2ce  CMP EDX,dword ptr [ECX + 0x1c]
0045f2d1  JLE 0x0045f2d6
0045f2d3  MOV dword ptr [ECX + 0x1c],EDX
0045f2d6  MOV dword ptr [ECX + 0x10],ESI
0045f2d9  MOV dword ptr [ECX + 0x18],EDX
0045f2dc  POP ESI
0045f2dd  RET
