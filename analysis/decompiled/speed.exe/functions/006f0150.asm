006f0150  SUB ESP,0x24
006f0153  MOV ECX,dword ptr [ESP + 0x28]
006f0157  MOV EDX,dword ptr [ESP + 0x2c]
006f015b  XOR EAX,EAX
006f015d  MOV dword ptr [ESP],EAX
006f0160  MOV dword ptr [ESP + 0x4],EAX
006f0164  MOV dword ptr [ESP + 0x8],EAX
006f0168  MOV dword ptr [ESP + 0xc],EAX
006f016c  MOV dword ptr [ESP + 0x10],EAX
006f0170  MOV dword ptr [ESP + 0x14],0x0
006f0178  MOV dword ptr [ESP + 0x14],EAX
006f017c  MOV dword ptr [ESP + 0x18],EAX
006f0180  MOV dword ptr [ESP + 0x1c],EAX
006f0184  MOV dword ptr [ESP + 0x8],ECX
006f0188  MOV dword ptr [ESP + 0x20],EAX
006f018c  MOV EAX,dword ptr [ESP + 0x30]
006f0190  LEA ECX,[ESP + 0x28]
006f0194  PUSH ECX
006f0195  MOV dword ptr [ESP + 0x4],EDX
006f0199  MOV dword ptr [ESP + 0x8],EAX
006f019d  MOV dword ptr [ESP + 0x14],0x6ebda0
006f01a5  CALL 0x0056b4f0
006f01aa  MOV EDX,dword ptr [EAX]
006f01ac  MOV EAX,[0x008f831c]
006f01b1  MOV ECX,dword ptr [ESP + 0x38]
006f01b5  MOV dword ptr [ESP + 0x1c],EAX
006f01b9  INC EAX
006f01ba  MOV [0x008f831c],EAX
006f01bf  MOV EAX,dword ptr [ESP + 0x3c]
006f01c3  MOV dword ptr [ESP + 0x20],EAX
006f01c7  MOV EAX,ESP
006f01c9  MOV dword ptr [ESP + 0x18],EDX
006f01cd  MOV dword ptr [EAX],ECX
006f01cf  LEA ECX,[ESP + 0x4]
006f01d3  CALL 0x00665390
006f01d8  ADD ESP,0x24
006f01db  RET
