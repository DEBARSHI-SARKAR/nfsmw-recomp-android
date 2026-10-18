0072cd40  MOV EAX,[0x009a3ac4]
0072cd45  PUSH EAX
0072cd46  CALL 0x00466340
0072cd4b  ADD ESP,0x4
0072cd4e  TEST EAX,EAX
0072cd50  JNZ 0x0072cd53
0072cd52  RET
0072cd53  XOR ECX,ECX
0072cd55  MOV EDX,EAX
0072cd57  MOV dword ptr [EDX],ECX
0072cd59  MOV dword ptr [EDX + 0x4],ECX
0072cd5c  MOV dword ptr [EDX + 0x8],ECX
0072cd5f  MOV dword ptr [EDX + 0xc],ECX
0072cd62  MOV dword ptr [EDX + 0x10],ECX
0072cd65  MOV dword ptr [EDX + 0x14],ECX
0072cd68  MOV dword ptr [EDX + 0x18],ECX
0072cd6b  MOV dword ptr [EDX + 0x1c],ECX
0072cd6e  MOV dword ptr [EDX + 0x20],ECX
0072cd71  MOV dword ptr [EAX + 0x8],ECX
0072cd74  MOV ECX,dword ptr [ESP + 0x4]
0072cd78  MOV dword ptr [EAX + 0xc],ECX
0072cd7b  MOV EDX,dword ptr [0x009031f4]
0072cd81  MOV ECX,dword ptr [EDX + 0x4]
0072cd84  MOV dword ptr [ECX],EAX
0072cd86  MOV dword ptr [EDX + 0x4],EAX
0072cd89  MOV dword ptr [EAX + 0x4],ECX
0072cd8c  MOV dword ptr [EAX],EDX
0072cd8e  INC dword ptr [0x009a2dc8]
0072cd94  RET
