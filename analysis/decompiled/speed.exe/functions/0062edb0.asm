0062edb0  PUSH -0x1
0062edb2  PUSH 0x877eaf
0062edb7  MOV EAX,FS:[0x0]
0062edbd  PUSH EAX
0062edbe  MOV dword ptr FS:[0x0],ESP
0062edc5  PUSH ECX
0062edc6  MOV EAX,[0x00920390]
0062edcb  MOV ECX,EAX
0062edcd  ADD EAX,0x20
0062edd0  MOV [0x00920390],EAX
0062edd5  MOV dword ptr [ESP],ECX
0062edd8  TEST ECX,ECX
0062edda  MOV dword ptr [ESP + 0xc],0x0
0062ede2  JZ 0x0062ee05
0062ede4  MOV EAX,dword ptr [ESP + 0x14]
0062ede8  MOV EDX,dword ptr [EAX + 0x18]
0062edeb  PUSH EDX
0062edec  MOV EDX,dword ptr [EAX + 0x14]
0062edef  PUSH EDX
0062edf0  MOV EDX,dword ptr [EAX + 0x10]
0062edf3  PUSH EDX
0062edf4  MOV EDX,dword ptr [EAX + 0xc]
0062edf7  PUSH EDX
0062edf8  MOV EDX,dword ptr [EAX + 0x8]
0062edfb  MOV EAX,dword ptr [EAX + 0x4]
0062edfe  PUSH EDX
0062edff  PUSH EAX
0062ee00  CALL 0x006236c0
0062ee05  MOV ECX,dword ptr [ESP + 0x4]
0062ee09  MOV dword ptr FS:[0x0],ECX
0062ee10  ADD ESP,0x10
0062ee13  RET
