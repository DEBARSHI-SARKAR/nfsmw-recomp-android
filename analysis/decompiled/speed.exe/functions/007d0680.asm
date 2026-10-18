007d0680  PUSH EBP
007d0681  MOV EBP,ESP
007d0683  SUB ESP,0x14
007d0686  MOV dword ptr [EBP + -0x10],0x0
007d068d  MOV EAX,dword ptr [EBP + 0xc]
007d0690  MOV dword ptr [EBP + -0x4],EAX
007d0693  MOV ECX,dword ptr [EBP + -0x4]
007d0696  ADD ECX,0x8
007d0699  MOV dword ptr [EBP + -0xc],ECX
007d069c  MOV EDX,dword ptr [EBP + -0xc]
007d069f  ADD EDX,0x4
007d06a2  MOV dword ptr [EBP + -0x8],EDX
007d06a5  CMP dword ptr [EBP + 0x8],0x0
007d06a9  JZ 0x007d0743
007d06af  MOV EAX,dword ptr [EBP + 0x8]
007d06b2  CMP dword ptr [EAX],0x0
007d06b5  JZ 0x007d0743
007d06bb  MOV ECX,dword ptr [EBP + 0x8]
007d06be  MOV EDX,dword ptr [ECX]
007d06c0  MOV dword ptr [EBP + -0x10],EDX
007d06c3  MOV EAX,dword ptr [EBP + -0x10]
007d06c6  CMP dword ptr [EAX],0xe06d7363
007d06cc  JNZ 0x007d0703
007d06ce  MOV ECX,dword ptr [EBP + -0x10]
007d06d1  CMP dword ptr [ECX + 0x10],0x3
007d06d5  JNZ 0x007d0703
007d06d7  MOV EDX,dword ptr [EBP + -0x10]
007d06da  CMP dword ptr [EDX + 0x14],0x19930520
007d06e1  JZ 0x007d06ef
007d06e3  MOV EAX,dword ptr [EBP + -0x10]
007d06e6  CMP dword ptr [EAX + 0x14],0x19930521
007d06ed  JNZ 0x007d0703
007d06ef  MOV ECX,dword ptr [EBP + -0x10]
007d06f2  CMP dword ptr [ECX + 0x1c],0x0
007d06f6  JNZ 0x007d0703
007d06f8  CALL 0x007cd100
007d06fd  MOV EDX,dword ptr [EAX + 0x7c]
007d0700  MOV dword ptr [EBP + -0x10],EDX
007d0703  MOV EAX,dword ptr [EBP + -0x10]
007d0706  MOV ECX,dword ptr [EAX + 0x18]
007d0709  PUSH ECX
007d070a  MOV EDX,dword ptr [EBP + -0x4]
007d070d  PUSH EDX
007d070e  CALL 0x007c5050
007d0713  ADD ESP,0x8
007d0716  MOV dword ptr [EBP + -0x4],EAX
007d0719  CALL 0x007cd100
007d071e  MOV ECX,dword ptr [EBP + -0xc]
007d0721  MOV EDX,dword ptr [EAX + 0x7c]
007d0724  MOV dword ptr [ECX],EDX
007d0726  CALL 0x007cd100
007d072b  MOV ECX,dword ptr [EBP + -0x8]
007d072e  MOV EDX,dword ptr [EAX + 0x80]
007d0734  MOV dword ptr [ECX],EDX
007d0736  CALL 0x007cd100
007d073b  MOV ECX,dword ptr [EBP + -0x10]
007d073e  MOV dword ptr [EAX + 0x7c],ECX
007d0741  JMP 0x007d0755
007d0743  MOV EDX,dword ptr [EBP + -0xc]
007d0746  MOV dword ptr [EDX],0xffffffff
007d074c  MOV EAX,dword ptr [EBP + -0x8]
007d074f  MOV dword ptr [EAX],0xffffffff
007d0755  CALL 0x007cd100
007d075a  ADD EAX,0x84
007d075f  MOV dword ptr [EBP + -0x14],EAX
007d0762  MOV ECX,dword ptr [EBP + -0x14]
007d0765  MOV EDX,dword ptr [ECX]
007d0767  SUB EDX,0x1
007d076a  MOV EAX,dword ptr [EBP + -0x14]
007d076d  MOV dword ptr [EAX],EDX
007d076f  CALL 0x007cd100
007d0774  CMP dword ptr [EAX + 0x84],0x0
007d077b  JGE 0x007d078c
007d077d  CALL 0x007cd100
007d0782  MOV dword ptr [EAX + 0x84],0x0
007d078c  MOV EAX,0x1
007d0791  MOV ESP,EBP
007d0793  POP EBP
007d0794  RET
