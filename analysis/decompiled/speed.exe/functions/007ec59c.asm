007ec59c  PUSH 0x0
007ec59e  CALL 0x007ec2d0
007ec5a3  TEST AL,AL
007ec5a5  POP ECX
007ec5a6  JZ 0x007ec600
007ec5a8  MOV EAX,[0x009bb134]
007ec5ad  PUSH ESI
007ec5ae  MOV [0x009bb0bc],EAX
007ec5b3  MOV ESI,0x9baf84
007ec5b8  MOV ECX,dword ptr [ESI + -0xc]
007ec5bb  TEST ECX,ECX
007ec5bd  JZ 0x007ec5f4
007ec5bf  MOV EAX,dword ptr [ESI]
007ec5c1  CMP dword ptr [0x009bb134],EAX
007ec5c7  JL 0x007ec5f4
007ec5c9  CMP dword ptr [ESI + 0x4],0x0
007ec5cd  JNZ 0x007ec5f4
007ec5cf  MOV EDX,dword ptr [0x009bb134]
007ec5d5  SUB EDX,EAX
007ec5d7  PUSH EDX
007ec5d8  PUSH dword ptr [ESI + -0x8]
007ec5db  MOV dword ptr [ESI + 0x4],0x1
007ec5e2  CALL ECX
007ec5e4  MOV EAX,[0x009bb134]
007ec5e9  ADD EAX,dword ptr [ESI + -0x4]
007ec5ec  AND dword ptr [ESI + 0x4],0x0
007ec5f0  POP ECX
007ec5f1  POP ECX
007ec5f2  MOV dword ptr [ESI],EAX
007ec5f4  ADD ESI,0x14
007ec5f7  CMP ESI,0x9bb0c4
007ec5fd  JL 0x007ec5b8
007ec5ff  POP ESI
007ec600  RET
