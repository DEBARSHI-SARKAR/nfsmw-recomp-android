004eb2a0  SUB ESP,0x24
004eb2a3  MOV ECX,dword ptr [ESP + 0x28]
004eb2a7  MOV EDX,dword ptr [ESP + 0x2c]
004eb2ab  XOR EAX,EAX
004eb2ad  MOV dword ptr [ESP],EAX
004eb2b0  MOV dword ptr [ESP + 0x4],EAX
004eb2b4  MOV dword ptr [ESP + 0x8],EAX
004eb2b8  MOV dword ptr [ESP + 0xc],EAX
004eb2bc  MOV dword ptr [ESP + 0x10],EAX
004eb2c0  MOV dword ptr [ESP + 0x14],0x0
004eb2c8  MOV dword ptr [ESP + 0x14],EAX
004eb2cc  MOV dword ptr [ESP + 0x18],EAX
004eb2d0  MOV dword ptr [ESP + 0x1c],EAX
004eb2d4  MOV dword ptr [ESP + 0x20],EAX
004eb2d8  LEA EAX,[ESP + 0x28]
004eb2dc  PUSH EAX
004eb2dd  MOV dword ptr [ESP + 0x8],ECX
004eb2e1  MOV dword ptr [ESP + 0x4],EDX
004eb2e5  MOV dword ptr [ESP + 0x14],0x4e4bc0
004eb2ed  CALL 0x00469b10
004eb2f2  MOV ECX,dword ptr [EAX]
004eb2f4  MOV EAX,[0x008f831c]
004eb2f9  MOV EDX,dword ptr [ESP + 0x38]
004eb2fd  MOV dword ptr [ESP + 0x1c],EAX
004eb301  INC EAX
004eb302  MOV dword ptr [ESP + 0x18],ECX
004eb306  MOV ECX,dword ptr [ESP + 0x34]
004eb30a  MOV [0x008f831c],EAX
004eb30f  MOV EAX,ESP
004eb311  MOV dword ptr [ESP + 0x20],EDX
004eb315  MOV dword ptr [EAX],ECX
004eb317  LEA ECX,[ESP + 0x4]
004eb31b  CALL 0x00665390
004eb320  ADD ESP,0x24
004eb323  RET
