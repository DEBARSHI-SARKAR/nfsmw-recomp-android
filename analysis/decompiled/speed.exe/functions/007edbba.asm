007edbba  PUSH EBP
007edbbb  MOV EBP,ESP
007edbbd  PUSH 0x40
007edbbf  CALL 0x007ed475
007edbc4  TEST EAX,EAX
007edbc6  POP ECX
007edbc7  JZ 0x007edbee
007edbc9  MOV EDX,dword ptr [EBP + 0x8]
007edbcc  PUSH dword ptr [EDX + 0xc]
007edbcf  MOV ECX,EAX
007edbd1  PUSH dword ptr [EBP + 0x24]
007edbd4  PUSH dword ptr [EBP + 0x20]
007edbd7  PUSH dword ptr [EBP + 0x14]
007edbda  PUSH dword ptr [EBP + 0x10]
007edbdd  PUSH dword ptr [EBP + 0xc]
007edbe0  PUSH dword ptr [EBP + 0x1c]
007edbe3  PUSH dword ptr [EBP + 0x18]
007edbe6  PUSH EDX
007edbe7  CALL 0x007eea3f
007edbec  JMP 0x007edbf0
007edbee  XOR EAX,EAX
007edbf0  MOV EAX,dword ptr [EAX + 0xc]
007edbf3  POP EBP
007edbf4  RET
