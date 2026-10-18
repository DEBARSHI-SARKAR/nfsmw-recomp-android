0081d582  MOV EAX,dword ptr [ESP + 0x4]
0081d586  OR word ptr [EAX + 0x14],0xffff
0081d58c  XOR ECX,ECX
0081d58e  MOV byte ptr [EAX + 0x2],0x3c
0081d592  MOV word ptr [EAX + 0xc],0x1000
0081d598  MOV word ptr [EAX + 0xe],0x1000
0081d59e  MOV word ptr [EAX + 0x10],0x1000
0081d5a4  MOV word ptr [EAX + 0x16],CX
0081d5a8  MOV byte ptr [EAX + 0x3],0x7f
0081d5ac  MOV byte ptr [EAX],0x7f
0081d5af  MOV byte ptr [EAX + 0x4],0x7f
0081d5b3  MOV byte ptr [EAX + 0x1],0x40
0081d5b7  MOV byte ptr [EAX + 0x5],CL
0081d5ba  MOV word ptr [EAX + 0x8],CX
0081d5be  MOV word ptr [EAX + 0xa],CX
0081d5c2  XOR EAX,EAX
0081d5c4  RET
