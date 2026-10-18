0085ac70  MOV EAX,dword ptr [ESP + 0x4]
0085ac74  CMP dword ptr [EAX],0x0
0085ac77  MOV EAX,dword ptr [ESP + 0x8]
0085ac7b  JZ 0x0085ac80
0085ac7d  ADD EAX,0x8
0085ac80  RET
