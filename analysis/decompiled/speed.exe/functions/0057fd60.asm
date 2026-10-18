0057fd60  MOV EAX,dword ptr [ESP + 0x4]
0057fd64  TEST EAX,EAX
0057fd66  MOV dword ptr [ECX + 0xb74],0x1
0057fd70  JNZ 0x0057fd87
0057fd72  MOV EAX,dword ptr [ECX + 0x10]
0057fd75  MOV ECX,dword ptr [EAX + 0x9aec]
0057fd7b  ADD EAX,0x90e0
0057fd80  INC ECX
0057fd81  MOV dword ptr [EAX + 0xa0c],ECX
0057fd87  RET 0x4
