007ed7df  PUSH EBP
007ed7e0  MOV EBP,ESP
007ed7e2  PUSH EBX
007ed7e3  PUSH ESI
007ed7e4  MOV ESI,dword ptr [EBP + 0x10]
007ed7e7  PUSH EDI
007ed7e8  MOV EDI,ECX
007ed7ea  XOR EBX,EBX
007ed7ec  MOV dword ptr [EDI],0x8c1fa4
007ed7f2  CMP dword ptr [ESI + 0x4],EBX
007ed7f5  JNZ 0x007ed7fc
007ed7f7  CALL 0x007ed751
007ed7fc  MOV AL,byte ptr [EBP + 0x8]
007ed7ff  OR dword ptr [EDI + 0x14],0xffffffff
007ed803  MOV byte ptr [EDI + 0x12],AL
007ed806  MOV EAX,dword ptr [EBP + 0xc]
007ed809  PUSH ESI
007ed80a  MOV ECX,EDI
007ed80c  MOV byte ptr [EDI + 0x10],BL
007ed80f  MOV byte ptr [EDI + 0x11],BL
007ed812  MOV dword ptr [EDI + 0x18],EAX
007ed815  MOV dword ptr [EDI + 0x1c],0x7ed00f
007ed81c  MOV dword ptr [EDI + 0x20],EBX
007ed81f  MOV dword ptr [EDI + 0x24],EBX
007ed822  MOV dword ptr [EDI + 0x28],EBX
007ed825  MOV dword ptr [EDI + 0x2c],EBX
007ed828  MOV dword ptr [EDI + 0x30],EBX
007ed82b  CALL 0x007ed02f
007ed830  MOV dword ptr [EDI + 0xc],EAX
007ed833  MOV EAX,EDI
007ed835  POP EDI
007ed836  POP ESI
007ed837  POP EBX
007ed838  POP EBP
007ed839  RET 0xc
