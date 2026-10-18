005b0040  XOR EAX,EAX
005b0042  MOV EDX,0x3f800000
005b0047  MOV dword ptr [ECX],EDX
005b0049  MOV dword ptr [ECX + 0x4],EAX
005b004c  MOV dword ptr [ECX + 0x8],EAX
005b004f  MOV dword ptr [ECX + 0xc],EAX
005b0052  MOV dword ptr [ECX + 0x10],EAX
005b0055  MOV dword ptr [ECX + 0x14],EDX
005b0058  MOV dword ptr [ECX + 0x18],EAX
005b005b  MOV dword ptr [ECX + 0x1c],EAX
005b005e  MOV dword ptr [ECX + 0x20],EAX
005b0061  MOV dword ptr [ECX + 0x24],EAX
005b0064  MOV dword ptr [ECX + 0x28],EDX
005b0067  MOV dword ptr [ECX + 0x2c],EAX
005b006a  MOV dword ptr [ECX + 0x30],EAX
005b006d  MOV dword ptr [ECX + 0x34],EAX
005b0070  MOV dword ptr [ECX + 0x38],EAX
005b0073  MOV dword ptr [ECX + 0x3c],EDX
005b0076  RET
