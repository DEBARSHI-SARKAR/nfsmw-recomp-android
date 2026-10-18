007e40ea  MOV EAX,dword ptr [EBP + -0x1c]
007e40ed  ADD EAX,0x1
007e40f0  MOV dword ptr [EBP + -0x1c],EAX
007e40f3  CMP dword ptr [EBP + -0x1c],0x40
007e40f7  JGE 0x007e42e1
007e40fd  MOV ECX,dword ptr [EBP + -0x1c]
007e4100  CMP dword ptr [ECX*0x4 + 0x9c5340],0x0
007e4108  JZ 0x007e4239
007e410e  MOV EDX,dword ptr [EBP + -0x1c]
007e4111  MOV EAX,dword ptr [EDX*0x4 + 0x9c5340]
007e4118  MOV dword ptr [EBP + -0x24],EAX
007e411b  JMP 0x007e4126
