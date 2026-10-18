008009cc  PUSH EBP
008009cd  MOV EBP,ESP
008009cf  MOV ECX,dword ptr [EBP + 0x8]
008009d2  MOV EAX,dword ptr [EBP + 0x10]
008009d5  MOV EDX,dword ptr [EBP + 0xc]
008009d8  PUSH ESI
008009d9  MOV ESI,dword ptr [ECX + EAX*0x4 + 0xc]
008009dd  MOV dword ptr [EDX + 0x4],ESI
008009e0  MOV ESI,dword ptr [ECX + 0x4]
008009e3  SHL EAX,0x7
008009e6  MOV AX,word ptr [EAX + ESI*0x1]
008009ea  MOV word ptr [EDX + 0xa],AX
008009ee  MOV EAX,dword ptr [ECX + 0x8]
008009f1  MOV AX,word ptr [EAX*0x4 + 0x8c4d50]
008009f9  MOV word ptr [EDX + 0x8],AX
008009fd  POP ESI
008009fe  POP EBP
008009ff  RET
