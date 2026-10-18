0073d060  MOV EAX,dword ptr [ECX + 0x4]
0073d063  MOV EDX,dword ptr [ESP + 0x4]
0073d067  MOV dword ptr [EDX],EAX
0073d069  MOV EAX,dword ptr [ECX + 0x8]
0073d06c  MOV ECX,dword ptr [ESP + 0x8]
0073d070  MOV EDX,dword ptr [ESP + 0xc]
0073d074  MOV dword ptr [ECX],EAX
0073d076  FLD float ptr [0x00904b3c]
0073d07c  MOV EAX,dword ptr [ESP + 0x10]
0073d080  FSTP float ptr [EDX]
0073d082  FLD float ptr [0x00904b40]
0073d088  FSTP float ptr [EAX]
0073d08a  RET 0x10
