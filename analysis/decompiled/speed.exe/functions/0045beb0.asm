0045beb0  PUSH ESI
0045beb1  MOV ESI,ECX
0045beb3  MOV EAX,dword ptr [ESI + 0x8]
0045beb6  TEST EAX,EAX
0045beb8  JZ 0x0045beec
0045beba  MOV ECX,dword ptr [EAX + 0x1c]
0045bebd  CMP ECX,0x1
0045bec0  JBE 0x0045bec8
0045bec2  DEC ECX
0045bec3  MOV dword ptr [EAX + 0x1c],ECX
0045bec6  JMP 0x0045bee5
0045bec8  MOV dword ptr [EAX + 0x1c],0x0
0045becf  MOV ECX,dword ptr [0x0090dcbc]
0045bed5  MOV EDX,dword ptr [ECX + 0x4]
0045bed8  ADD EDX,0x38
0045bedb  PUSH EDX
0045bedc  PUSH EAX
0045bedd  CALL 0x00459f80
0045bee2  ADD ESP,0x8
0045bee5  MOV dword ptr [ESI + 0x8],0x0
0045beec  MOV EAX,dword ptr [ESP + 0x8]
0045bef0  MOV ECX,dword ptr [EAX]
0045bef2  MOV dword ptr [ESI],ECX
0045bef4  MOV EDX,dword ptr [EAX + 0x4]
0045bef7  MOV dword ptr [ESI + 0x4],EDX
0045befa  MOV EAX,dword ptr [EAX + 0x8]
0045befd  TEST EAX,EAX
0045beff  MOV dword ptr [ESI + 0x8],EAX
0045bf02  JZ 0x0045bf07
0045bf04  INC dword ptr [EAX + 0x1c]
0045bf07  MOV EAX,ESI
0045bf09  POP ESI
0045bf0a  RET 0x4
