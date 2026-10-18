007dcac0  PUSH EBX
007dcac1  MOV EAX,dword ptr [ESP + 0x14]
007dcac5  OR EAX,EAX
007dcac7  JNZ 0x007dcae1
007dcac9  MOV ECX,dword ptr [ESP + 0x10]
007dcacd  MOV EAX,dword ptr [ESP + 0xc]
007dcad1  XOR EDX,EDX
007dcad3  DIV ECX
007dcad5  MOV EAX,dword ptr [ESP + 0x8]
007dcad9  DIV ECX
007dcadb  MOV EAX,EDX
007dcadd  XOR EDX,EDX
007dcadf  JMP 0x007dcb31
007dcae1  MOV ECX,EAX
007dcae3  MOV EBX,dword ptr [ESP + 0x10]
007dcae7  MOV EDX,dword ptr [ESP + 0xc]
007dcaeb  MOV EAX,dword ptr [ESP + 0x8]
007dcaef  SHR ECX,0x1
007dcaf1  RCR EBX,0x1
007dcaf3  SHR EDX,0x1
007dcaf5  RCR EAX,0x1
007dcaf7  OR ECX,ECX
007dcaf9  JNZ 0x007dcaef
007dcafb  DIV EBX
007dcafd  MOV ECX,EAX
007dcaff  MUL dword ptr [ESP + 0x14]
007dcb03  XCHG EAX,ECX
007dcb04  MUL dword ptr [ESP + 0x10]
007dcb08  ADD EDX,ECX
007dcb0a  JC 0x007dcb1a
007dcb0c  CMP EDX,dword ptr [ESP + 0xc]
007dcb10  JA 0x007dcb1a
007dcb12  JC 0x007dcb22
007dcb14  CMP EAX,dword ptr [ESP + 0x8]
007dcb18  JBE 0x007dcb22
007dcb1a  SUB EAX,dword ptr [ESP + 0x10]
007dcb1e  SBB EDX,dword ptr [ESP + 0x14]
007dcb22  SUB EAX,dword ptr [ESP + 0x8]
007dcb26  SBB EDX,dword ptr [ESP + 0xc]
007dcb2a  NEG EDX
007dcb2c  NEG EAX
007dcb2e  SBB EDX,0x0
007dcb31  POP EBX
007dcb32  RET 0x10
