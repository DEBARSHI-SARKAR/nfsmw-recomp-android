007caef0  PUSH EBP
007caef1  MOV EBP,ESP
007caef3  PUSH -0x1
007caef5  PUSH 0x8b8c58
007caefa  PUSH 0x7cd5e4
007caeff  MOV EAX,FS:[0x0]
007caf05  PUSH EAX
007caf06  MOV dword ptr FS:[0x0],ESP
007caf0d  ADD ESP,-0xc
007caf10  PUSH EBX
007caf11  PUSH ESI
007caf12  PUSH EDI
007caf13  MOV EAX,dword ptr [EBP + 0x14]
007caf16  PUSH EAX
007caf17  CALL 0x007c9390
007caf1c  ADD ESP,0x4
007caf1f  MOV dword ptr [EBP + -0x4],0x0
007caf26  MOV ECX,dword ptr [EBP + 0x14]
007caf29  PUSH ECX
007caf2a  MOV EDX,dword ptr [EBP + 0x10]
007caf2d  PUSH EDX
007caf2e  MOV EAX,dword ptr [EBP + 0xc]
007caf31  PUSH EAX
007caf32  MOV ECX,dword ptr [EBP + 0x8]
007caf35  PUSH ECX
007caf36  CALL 0x007caf70
007caf3b  ADD ESP,0x10
007caf3e  MOV dword ptr [EBP + -0x1c],EAX
007caf41  MOV dword ptr [EBP + -0x4],0xffffffff
007caf48  CALL 0x007caf4f
007caf4d  JMP 0x007caf5c
