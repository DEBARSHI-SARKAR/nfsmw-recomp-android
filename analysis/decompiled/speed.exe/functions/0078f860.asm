0078f860  MOV EAX,ECX
0078f862  MOV ECX,dword ptr [ESP + 0x4]
0078f866  MOV EDX,dword ptr [ECX]
0078f868  MOV dword ptr [EAX],EDX
0078f86a  MOV ECX,dword ptr [ECX + 0x4]
0078f86d  MOV dword ptr [EAX + 0x4],ECX
0078f870  RET 0x4
