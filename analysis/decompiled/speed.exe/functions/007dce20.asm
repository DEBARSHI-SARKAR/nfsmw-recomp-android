007dce20  PUSH EBP
007dce21  MOV EBP,ESP
007dce23  PUSH -0x1
007dce25  PUSH 0x8bd800
007dce2a  PUSH 0x7cd5e4
007dce2f  MOV EAX,FS:[0x0]
007dce35  PUSH EAX
007dce36  MOV dword ptr FS:[0x0],ESP
007dce3d  ADD ESP,-0x14
007dce40  PUSH EBX
007dce41  PUSH ESI
007dce42  PUSH EDI
007dce43  PUSH 0x0
007dce45  CALL 0x007d0fd0
007dce4a  ADD ESP,0x4
007dce4d  MOV dword ptr [EBP + -0x4],0x0
007dce54  CMP dword ptr [EBP + 0x8],0x0
007dce58  JNZ 0x007dce72
007dce5a  MOV dword ptr [EBP + -0x24],0x9bae70
007dce61  MOV EAX,dword ptr [EBP + -0x24]
007dce64  MOV ECX,dword ptr [EAX]
007dce66  MOV dword ptr [EBP + -0x1c],ECX
007dce69  MOV dword ptr [EBP + -0x20],0x2
007dce70  JMP 0x007dce88
007dce72  MOV dword ptr [EBP + -0x24],0x9bae74
007dce79  MOV EDX,dword ptr [EBP + -0x24]
007dce7c  MOV EAX,dword ptr [EDX]
007dce7e  MOV dword ptr [EBP + -0x1c],EAX
007dce81  MOV dword ptr [EBP + -0x20],0x15
007dce88  CMP dword ptr [EBP + -0x1c],0x0
007dce8c  JZ 0x007dce9d
007dce8e  CMP dword ptr [EBP + -0x1c],0x1
007dce92  JZ 0x007dce9d
007dce94  MOV ECX,dword ptr [EBP + -0x24]
007dce97  MOV dword ptr [ECX],0x0
007dce9d  MOV dword ptr [EBP + -0x4],0xffffffff
007dcea4  CALL 0x007dceab
007dcea9  JMP 0x007dceb6
