0066fd50  PUSH ESI
0066fd51  MOV ESI,ECX
0066fd53  PUSH ESI
0066fd54  CALL 0x006686d0
0066fd59  MOV EAX,dword ptr [ESP + 0xc]
0066fd5d  MOV ECX,dword ptr [ESP + 0x10]
0066fd61  MOV EDX,dword ptr [ESP + 0x14]
0066fd65  MOV dword ptr [ESI + 0x4],0xa6b47fac
0066fd6c  MOV dword ptr [ESI + 0x10],EAX
0066fd6f  MOV EAX,dword ptr [ESP + 0x18]
0066fd73  MOV dword ptr [ESI + 0x14],ECX
0066fd76  MOV ECX,dword ptr [ESP + 0x1c]
0066fd7a  MOV dword ptr [ESI + 0x18],EDX
0066fd7d  MOV EDX,dword ptr [ESP + 0x20]
0066fd81  MOV dword ptr [ESI + 0x1c],EAX
0066fd84  ADD ESP,0x4
0066fd87  MOV dword ptr [ESI + 0x8],ESI
0066fd8a  MOV dword ptr [ESI + 0x20],ECX
0066fd8d  MOV dword ptr [ESI + 0x24],EDX
0066fd90  MOV EAX,ESI
0066fd92  POP ESI
0066fd93  RET 0x18
