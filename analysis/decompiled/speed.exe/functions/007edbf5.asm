007edbf5  PUSH EBP
007edbf6  MOV EBP,ESP
007edbf8  PUSH 0x40
007edbfa  CALL 0x007ed475
007edbff  TEST EAX,EAX
007edc01  POP ECX
007edc02  JZ 0x007edc23
007edc04  MOV EDX,dword ptr [EBP + 0x8]
007edc07  PUSH dword ptr [EDX + 0xc]
007edc0a  MOV ECX,EAX
007edc0c  PUSH dword ptr [EBP + 0x1c]
007edc0f  PUSH dword ptr [EBP + 0x18]
007edc12  PUSH dword ptr [EBP + 0x10]
007edc15  PUSH dword ptr [EBP + 0xc]
007edc18  PUSH dword ptr [EBP + 0x14]
007edc1b  PUSH EDX
007edc1c  CALL 0x007eeb7d
007edc21  JMP 0x007edc25
007edc23  XOR EAX,EAX
007edc25  MOV EAX,dword ptr [EAX + 0xc]
007edc28  POP EBP
007edc29  RET
