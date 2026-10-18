004dcc60  MOV EAX,dword ptr [ECX + 0xc]
004dcc63  MOV dword ptr [EAX + 0x4],0x0
004dcc6a  MOV EAX,dword ptr [ECX + 0x28]
004dcc6d  TEST EAX,EAX
004dcc6f  JZ 0x004dcc8a
004dcc71  MOV dword ptr [EAX + 0x10],0x1
004dcc78  MOV EAX,dword ptr [ECX + 0x28]
004dcc7b  MOV ECX,dword ptr [EAX]
004dcc7d  TEST ECX,ECX
004dcc7f  JZ 0x004dcc8a
004dcc81  ADD EAX,0x4
004dcc84  PUSH EAX
004dcc85  CALL 0x0083179c
004dcc8a  RET
