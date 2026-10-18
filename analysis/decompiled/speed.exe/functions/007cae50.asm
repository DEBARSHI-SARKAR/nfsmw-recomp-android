007cae50  PUSH EBP
007cae51  MOV EBP,ESP
007cae53  SUB ESP,0x8
007cae56  CALL 0x007cd100
007cae5b  MOV EAX,dword ptr [EAX + 0x64]
007cae5e  MOV dword ptr [EBP + -0x4],EAX
007cae61  MOV ECX,dword ptr [EBP + -0x4]
007cae64  CMP ECX,dword ptr [0x00906b3c]
007cae6a  JZ 0x007cae74
007cae6c  CALL 0x007d2f80
007cae71  MOV dword ptr [EBP + -0x4],EAX
007cae74  MOV EDX,dword ptr [EBP + -0x4]
007cae77  CMP dword ptr [EDX + 0x10],0x0
007cae7b  JNZ 0x007cae98
007cae7d  CMP dword ptr [0x009bad9c],0x0
007cae84  JNZ 0x007cae98
007cae86  MOV EAX,dword ptr [EBP + 0xc]
007cae89  PUSH EAX
007cae8a  MOV ECX,dword ptr [EBP + 0x8]
007cae8d  PUSH ECX
007cae8e  CALL 0x007d1120
007cae93  ADD ESP,0x8
007cae96  JMP 0x007caee0
007cae98  MOV EDX,dword ptr [EBP + -0x4]
007cae9b  MOV EAX,dword ptr [EDX + 0x8]
007cae9e  PUSH EAX
007cae9f  PUSH -0x1
007caea1  MOV ECX,dword ptr [EBP + 0xc]
007caea4  PUSH ECX
007caea5  PUSH -0x1
007caea7  MOV EDX,dword ptr [EBP + 0x8]
007caeaa  PUSH EDX
007caeab  PUSH 0x1000
007caeb0  MOV EAX,dword ptr [EBP + -0x4]
007caeb3  MOV ECX,dword ptr [EAX + 0x10]
007caeb6  PUSH ECX
007caeb7  CALL 0x007dae20
007caebc  ADD ESP,0x1c
007caebf  MOV dword ptr [EBP + -0x8],EAX
007caec2  CMP dword ptr [EBP + -0x8],0x0
007caec6  JNZ 0x007caeda
007caec8  CALL 0x007cb270
007caecd  MOV dword ptr [EAX],0x16
007caed3  MOV EAX,0x7fffffff
007caed8  JMP 0x007caee0
007caeda  MOV EAX,dword ptr [EBP + -0x8]
007caedd  SUB EAX,0x2
007caee0  MOV ESP,EBP
007caee2  POP EBP
007caee3  RET
