007d3e60  PUSH EBP
007d3e61  MOV EBP,ESP
007d3e63  SUB ESP,0x8
007d3e66  LEA EAX,[EBP + 0x10]
007d3e69  MOV dword ptr [EBP + -0x4],EAX
007d3e6c  MOV dword ptr [EBP + -0x8],0x0
007d3e73  JMP 0x007d3e7e
007d3e75  MOV ECX,dword ptr [EBP + -0x8]
007d3e78  ADD ECX,0x1
007d3e7b  MOV dword ptr [EBP + -0x8],ECX
007d3e7e  MOV EDX,dword ptr [EBP + -0x8]
007d3e81  CMP EDX,dword ptr [EBP + 0xc]
007d3e84  JGE 0x007d3ea4
007d3e86  MOV EAX,dword ptr [EBP + -0x4]
007d3e89  ADD EAX,0x4
007d3e8c  MOV dword ptr [EBP + -0x4],EAX
007d3e8f  MOV ECX,dword ptr [EBP + -0x4]
007d3e92  MOV EDX,dword ptr [ECX + -0x4]
007d3e95  PUSH EDX
007d3e96  MOV EAX,dword ptr [EBP + 0x8]
007d3e99  PUSH EAX
007d3e9a  CALL 0x007d0be0
007d3e9f  ADD ESP,0x8
007d3ea2  JMP 0x007d3e75
007d3ea4  MOV dword ptr [EBP + -0x4],0x0
007d3eab  MOV ESP,EBP
007d3ead  POP EBP
007d3eae  RET
