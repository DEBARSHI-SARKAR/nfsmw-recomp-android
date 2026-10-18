007c7ee0  PUSH EBP
007c7ee1  MOV EBP,ESP
007c7ee3  PUSH ECX
007c7ee4  CMP dword ptr [EBP + 0x8],0x0
007c7ee8  JZ 0x007c7f1d
007c7eea  MOV EAX,dword ptr [EBP + 0xc]
007c7eed  PUSH EAX
007c7eee  MOV ECX,dword ptr [EBP + 0x8]
007c7ef1  PUSH ECX
007c7ef2  CALL dword ptr [0x0089018c]
007c7ef8  TEST EAX,EAX
007c7efa  JNZ 0x007c7f1d
007c7efc  CMP dword ptr [EBP + 0x10],0x0
007c7f00  JZ 0x007c7f14
007c7f02  MOV EDX,dword ptr [EBP + 0xc]
007c7f05  PUSH EDX
007c7f06  MOV EAX,dword ptr [EBP + 0x8]
007c7f09  PUSH EAX
007c7f0a  CALL dword ptr [0x008901b0]
007c7f10  TEST EAX,EAX
007c7f12  JNZ 0x007c7f1d
007c7f14  MOV dword ptr [EBP + -0x4],0x1
007c7f1b  JMP 0x007c7f24
007c7f1d  MOV dword ptr [EBP + -0x4],0x0
007c7f24  MOV EAX,dword ptr [EBP + -0x4]
007c7f27  MOV ESP,EBP
007c7f29  POP EBP
007c7f2a  RET
