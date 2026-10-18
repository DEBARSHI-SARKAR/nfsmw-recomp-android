004872e0  MOV EAX,dword ptr [ESP + 0x4]
004872e4  MOV EDX,dword ptr [EAX]
004872e6  MOV dword ptr [ECX + 0x80],EDX
004872ec  MOV EDX,dword ptr [EAX + 0x4]
004872ef  MOV dword ptr [ECX + 0x84],EDX
004872f5  MOV EAX,dword ptr [EAX + 0x8]
004872f8  MOV dword ptr [ECX + 0x88],EAX
004872fe  RET 0x4
