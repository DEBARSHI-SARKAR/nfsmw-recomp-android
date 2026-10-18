007df2d0  PUSH EBP
007df2d1  MOV EBP,ESP
007df2d3  PUSH ECX
007df2d4  CMP dword ptr [EBP + 0x14],0xa
007df2d8  JNZ 0x007df2f1
007df2da  CMP dword ptr [EBP + 0xc],0x0
007df2de  JG 0x007df2f1
007df2e0  JL 0x007df2e8
007df2e2  CMP dword ptr [EBP + 0x8],0x0
007df2e6  JNC 0x007df2f1
007df2e8  MOV dword ptr [EBP + -0x4],0x1
007df2ef  JMP 0x007df2f8
007df2f1  MOV dword ptr [EBP + -0x4],0x0
007df2f8  MOV EAX,dword ptr [EBP + -0x4]
007df2fb  PUSH EAX
007df2fc  MOV ECX,dword ptr [EBP + 0x14]
007df2ff  PUSH ECX
007df300  MOV EDX,dword ptr [EBP + 0x10]
007df303  PUSH EDX
007df304  MOV EAX,dword ptr [EBP + 0xc]
007df307  PUSH EAX
007df308  MOV ECX,dword ptr [EBP + 0x8]
007df30b  PUSH ECX
007df30c  CALL 0x007df320
007df311  MOV EAX,dword ptr [EBP + 0x10]
007df314  MOV ESP,EBP
007df316  POP EBP
007df317  RET
