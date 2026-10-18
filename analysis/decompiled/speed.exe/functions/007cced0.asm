007cced0  PUSH EBP
007cced1  MOV EBP,ESP
007cced3  PUSH -0x1
007cced5  PUSH 0x8b8d18
007cceda  PUSH 0x7cd5e4
007ccedf  MOV EAX,FS:[0x0]
007ccee5  PUSH EAX
007ccee6  MOV dword ptr FS:[0x0],ESP
007cceed  SUB ESP,0xc
007ccef0  PUSH EBX
007ccef1  PUSH ESI
007ccef2  PUSH EDI
007ccef3  MOV dword ptr [EBP + -0x18],ESP
007ccef6  MOV ESI,0x8c8740
007ccefb  OR EDI,0xffffffff
007ccefe  MOV dword ptr [EBP + -0x1c],ESI
007ccf01  CMP ESI,0x8c8740
007ccf07  JNC 0x007ccf37
007ccf09  MOV dword ptr [EBP + -0x4],0x0
007ccf10  MOV EAX,dword ptr [ESI]
007ccf12  TEST EAX,EAX
007ccf14  JZ 0x007ccf18
007ccf16  CALL EAX
007ccf18  MOV dword ptr [EBP + -0x4],EDI
007ccf1b  ADD ESI,0x4
007ccf1e  JMP 0x007ccefe
007ccf37  MOV ECX,dword ptr [EBP + -0x10]
007ccf3a  MOV dword ptr FS:[0x0],ECX
007ccf41  POP EDI
007ccf42  POP ESI
007ccf43  POP EBX
007ccf44  MOV ESP,EBP
007ccf46  POP EBP
007ccf47  RET
