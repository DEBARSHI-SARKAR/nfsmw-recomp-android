0081ef6f  PUSH EBP
0081ef70  MOV EBP,ESP
0081ef72  MOV EAX,dword ptr [EBP + 0xc]
0081ef75  SUB EAX,0x0
0081ef78  JZ 0x0081efa7
0081ef7a  DEC EAX
0081ef7b  JZ 0x0081ef88
0081ef7d  DEC EAX
0081ef7e  JZ 0x0081ef9e
0081ef80  DEC EAX
0081ef81  JZ 0x0081ef91
0081ef83  SUB EAX,0x5
0081ef86  JNZ 0x0081efae
0081ef88  MOV EAX,dword ptr [EBP + 0x8]
0081ef8b  MOV byte ptr [EAX + 0x3f],0x2
0081ef8f  JMP 0x0081efae
0081ef91  MOV EAX,dword ptr [EBP + 0x8]
0081ef94  MOV byte ptr [EAX + 0x3f],0x5
0081ef98  MOV byte ptr [EAX + 0x40],0x1
0081ef9c  JMP 0x0081efae
0081ef9e  MOV EAX,dword ptr [EBP + 0x8]
0081efa1  MOV byte ptr [EAX + 0x3f],0x4
0081efa5  JMP 0x0081efae
0081efa7  MOV EAX,dword ptr [EBP + 0x8]
0081efaa  MOV byte ptr [EAX + 0x3f],0x1
0081efae  XOR EAX,EAX
0081efb0  POP EBP
0081efb1  RET
