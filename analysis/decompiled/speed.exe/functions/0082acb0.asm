0082acb0  PUSH EBP
0082acb1  MOV EBP,ESP
0082acb3  MOV EDX,dword ptr [EBP + 0x8]
0082acb6  MOV EAX,dword ptr [ECX]
0082acb8  PUSH ESI
0082acb9  PUSH EDI
0082acba  PUSH EDX
0082acbb  CALL dword ptr [EAX + 0x74]
0082acbe  MOV ESI,EAX
0082acc0  XOR EDI,EDI
0082acc2  TEST ESI,ESI
0082acc4  JZ 0x0082ad18
0082acc6  MOV EAX,dword ptr [ESI + 0x1c]
0082acc9  CMP EAX,-0x1
0082accc  JZ 0x0082ad18
0082acce  MOV ECX,dword ptr [ESI + 0x18]
0082acd1  TEST ECX,ECX
0082acd3  JNZ 0x0082ace9
0082acd5  PUSH EAX
0082acd6  CALL 0x0081f86b
0082acdb  MOV EDI,EAX
0082acdd  MOV EAX,dword ptr [ESI + 0x20]
0082ace0  PUSH EAX
0082ace1  CALL 0x008294a0
0082ace6  ADD ESP,0x8
0082ace9  XOR ECX,ECX
0082aceb  MOV EDX,ESI
0082aced  MOV dword ptr [EDX],ECX
0082acef  MOV dword ptr [EDX + 0x4],ECX
0082acf2  MOV dword ptr [EDX + 0x8],ECX
0082acf5  MOV dword ptr [EDX + 0xc],ECX
0082acf8  MOV dword ptr [EDX + 0x10],ECX
0082acfb  MOV dword ptr [EDX + 0x14],ECX
0082acfe  MOV dword ptr [EDX + 0x18],ECX
0082ad01  MOV dword ptr [EDX + 0x1c],ECX
0082ad04  MOV dword ptr [EDX + 0x20],ECX
0082ad07  MOV dword ptr [EDX + 0x24],ECX
0082ad0a  MOV dword ptr [ESI + 0x1c],0xffffffff
0082ad11  MOV dword ptr [ESI + 0x10],0xffffffff
0082ad18  MOV EAX,EDI
0082ad1a  POP EDI
0082ad1b  POP ESI
0082ad1c  POP EBP
0082ad1d  RET 0x4
