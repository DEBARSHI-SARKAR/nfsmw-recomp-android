004eb060  SUB ESP,0x24
004eb063  MOV ECX,dword ptr [ESP + 0x28]
004eb067  MOV EDX,dword ptr [ESP + 0x2c]
004eb06b  XOR EAX,EAX
004eb06d  MOV dword ptr [ESP],EAX
004eb070  MOV dword ptr [ESP + 0x4],EAX
004eb074  MOV dword ptr [ESP + 0x8],EAX
004eb078  MOV dword ptr [ESP + 0xc],EAX
004eb07c  MOV dword ptr [ESP + 0x10],EAX
004eb080  MOV dword ptr [ESP + 0x14],0x0
004eb088  MOV dword ptr [ESP + 0x14],EAX
004eb08c  MOV dword ptr [ESP + 0x18],EAX
004eb090  MOV dword ptr [ESP + 0x1c],EAX
004eb094  MOV dword ptr [ESP + 0x20],EAX
004eb098  LEA EAX,[ESP + 0x28]
004eb09c  PUSH EAX
004eb09d  MOV dword ptr [ESP + 0x8],ECX
004eb0a1  MOV dword ptr [ESP + 0x4],EDX
004eb0a5  MOV dword ptr [ESP + 0x14],0x4e4b80
004eb0ad  CALL 0x00469d20
004eb0b2  MOV ECX,dword ptr [EAX]
004eb0b4  MOV EAX,[0x008f831c]
004eb0b9  MOV EDX,dword ptr [ESP + 0x38]
004eb0bd  MOV dword ptr [ESP + 0x1c],EAX
004eb0c1  INC EAX
004eb0c2  MOV dword ptr [ESP + 0x18],ECX
004eb0c6  MOV ECX,dword ptr [ESP + 0x34]
004eb0ca  MOV [0x008f831c],EAX
004eb0cf  MOV EAX,ESP
004eb0d1  MOV dword ptr [ESP + 0x20],EDX
004eb0d5  MOV dword ptr [EAX],ECX
004eb0d7  LEA ECX,[ESP + 0x4]
004eb0db  CALL 0x00665390
004eb0e0  ADD ESP,0x24
004eb0e3  RET
