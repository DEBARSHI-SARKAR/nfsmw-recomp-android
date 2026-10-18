006fd3a0  PUSH -0x1
006fd3a2  PUSH 0x87f812
006fd3a7  MOV EAX,FS:[0x0]
006fd3ad  PUSH EAX
006fd3ae  MOV dword ptr FS:[0x0],ESP
006fd3b5  SUB ESP,0x8
006fd3b8  PUSH EBX
006fd3b9  PUSH EBP
006fd3ba  PUSH ESI
006fd3bb  PUSH EDI
006fd3bc  MOV ESI,ECX
006fd3be  PUSH 0x3
006fd3c0  MOV dword ptr [ESP + 0x18],ESI
006fd3c4  CALL 0x006f94d0
006fd3c9  XOR EBX,EBX
006fd3cb  CMP ESI,EBX
006fd3cd  MOV dword ptr [ESP + 0x20],EBX
006fd3d1  JZ 0x006fd3d8
006fd3d3  LEA ECX,[ESI + 0x10]
006fd3d6  JMP 0x006fd3da
006fd3d8  XOR ECX,ECX
006fd3da  LEA EDI,[ESI + 0x48]
006fd3dd  PUSH EDI
006fd3de  PUSH 0x445660
006fd3e3  MOV dword ptr [EDI],0x890970
006fd3e9  MOV dword ptr [EDI + 0x4],ECX
006fd3ec  CALL 0x005d7930
006fd3f1  LEA EAX,[EDI + 0x8]
006fd3f4  CMP EAX,EBX
006fd3f6  JZ 0x006fd402
006fd3f8  ADD EAX,-0x8
006fd3fb  MOV [0x009885c8],EAX
006fd400  JMP 0x006fd408
006fd402  MOV dword ptr [0x009885c8],EBX
006fd408  MOV dword ptr [EDI],0x8b0518
006fd40e  CMP ESI,EBX
006fd410  MOV byte ptr [ESP + 0x20],0x1
006fd415  JZ 0x006fd41c
006fd417  LEA ECX,[ESI + 0x10]
006fd41a  JMP 0x006fd41e
006fd41c  XOR ECX,ECX
006fd41e  LEA EDI,[ESI + 0x50]
006fd421  PUSH EDI
006fd422  PUSH 0x668440
006fd427  MOV dword ptr [EDI],0x890970
006fd42d  MOV dword ptr [EDI + 0x4],ECX
006fd430  CALL 0x005d7930
006fd435  MOV dword ptr [EDI],0x8a9410
006fd43b  CMP ESI,EBX
006fd43d  MOV byte ptr [ESP + 0x20],0x2
006fd442  JZ 0x006fd449
006fd444  LEA EAX,[ESI + 0x10]
006fd447  JMP 0x006fd44b
006fd449  XOR EAX,EAX
006fd44b  LEA EDI,[ESI + 0x58]
006fd44e  PUSH EAX
006fd44f  MOV ECX,EDI
006fd451  CALL 0x0042e340
006fd456  LEA EBP,[ESI + 0x8]
006fd459  PUSH 0x1
006fd45b  LEA ECX,[ESI + 0x68]
006fd45e  MOV byte ptr [ESP + 0x24],0x3
006fd463  MOV dword ptr [ESI],0x8b0e18
006fd469  MOV dword ptr [EBP],0x8b0e10
006fd470  MOV dword ptr [ESI + 0x2c],0x8b0dfc
006fd477  MOV dword ptr [ESI + 0x38],0x8b0de0
006fd47e  MOV dword ptr [ESI + 0x48],0x8b0d78
006fd485  MOV dword ptr [ESI + 0x50],0x8b0d70
006fd48c  MOV dword ptr [EDI],0x8b0d60
006fd492  MOV dword ptr [ESI + 0x64],EBX
006fd495  CALL 0x00643fc0
006fd49a  PUSH EBX
006fd49b  PUSH ECX
006fd49c  MOV ECX,ESP
006fd49e  MOV dword ptr [ESP + 0x18],ESP
006fd4a2  MOV EAX,0x6ef530
006fd4a7  PUSH EBX
006fd4a8  PUSH EAX
006fd4a9  MOV dword ptr [ESI + 0x2f4],EBX
006fd4af  PUSH ESI
006fd4b0  MOV byte ptr [ESP + 0x34],0x4
006fd4b5  MOV dword ptr [ECX],0x20d60dbf
006fd4bb  CALL 0x006f0150
006fd4c0  MOV dword ptr [ESI + 0x2f8],EAX
006fd4c6  MOV dword ptr [ESI + 0x2fc],EBX
006fd4cc  MOV dword ptr [ESI + 0x394],EBX
006fd4d2  MOV dword ptr [ESI + 0x398],EBX
006fd4d8  LEA EDI,[ESI + 0x3ac]
006fd4de  ADD ESP,0x14
006fd4e1  MOV ECX,EDI
006fd4e3  MOV dword ptr [ESI + 0x39c],EBX
006fd4e9  MOV dword ptr [ESI + 0x3a0],EBX
006fd4ef  MOV dword ptr [ESI + 0x3a4],EBX
006fd4f5  MOV dword ptr [ESI + 0x3a8],0x40800000
006fd4ff  CALL 0x006efef0
006fd504  MOV dword ptr [EDI + 0x4],EAX
006fd507  MOV byte ptr [EAX + 0x15],0x1
006fd50b  MOV EAX,dword ptr [EDI + 0x4]
006fd50e  MOV dword ptr [EAX + 0x4],EAX
006fd511  MOV EAX,dword ptr [EDI + 0x4]
006fd514  MOV dword ptr [EAX],EAX
006fd516  MOV EAX,dword ptr [EDI + 0x4]
006fd519  MOV dword ptr [EAX + 0x8],EAX
006fd51c  MOV dword ptr [EDI + 0x8],EBX
006fd51f  PUSH 0x8911a8
006fd524  MOV byte ptr [ESP + 0x24],0x5
006fd529  MOV dword ptr [ESI + 0x3b8],EBX
006fd52f  MOV byte ptr [ESI + 0x3d4],0x1
006fd536  MOV byte ptr [ESI + 0x3d5],BL
006fd53c  MOV dword ptr [ESI + 0x3d8],EBX
006fd542  MOV dword ptr [ESI + 0x3dc],EBX
006fd548  MOV dword ptr [ESI + 0x3e0],EBX
006fd54e  MOV byte ptr [ESI + 0x3e4],BL
006fd554  MOV byte ptr [ESI + 0x3e5],BL
006fd55a  MOV byte ptr [ESI + 0x3e6],BL
006fd560  MOV byte ptr [ESI + 0x3e7],BL
006fd566  MOV byte ptr [ESI + 0x3e8],BL
006fd56c  MOV byte ptr [ESI + 0x3f9],BL
006fd572  MOV dword ptr [ESI + 0x3fc],EBX
006fd578  MOV byte ptr [ESI + 0x404],BL
006fd57e  MOV dword ptr [ESI + 0x408],EBX
006fd584  MOV byte ptr [ESI + 0x314],BL
006fd58a  MOV byte ptr [ESI + 0x354],BL
006fd590  MOV byte ptr [ESI + 0x3e9],BL
006fd596  CALL 0x005cc240
006fd59b  ADD ESP,0x4
006fd59e  PUSH EBX
006fd59f  PUSH EBX
006fd5a0  PUSH EBP
006fd5a1  MOV dword ptr [ESP + 0x1c],EAX
006fd5a5  PUSH 0x3f800000
006fd5aa  LEA EAX,[ESP + 0x20]
006fd5ae  MOV ECX,dword ptr [0x009885e0]
006fd5b4  PUSH EAX
006fd5b5  CALL 0x006ed0f0
006fd5ba  CMP EAX,EBX
006fd5bc  JZ 0x006fd5c1
006fd5be  INC dword ptr [ESI + 0x24]
006fd5c1  MOV dword ptr [ESI + 0x60],EAX
006fd5c4  MOV ECX,dword ptr [0x008f86e4]
006fd5ca  POP EDI
006fd5cb  MOV dword ptr [ESI + 0x400],ECX
006fd5d1  MOV ECX,dword ptr [ESP + 0x14]
006fd5d5  MOV EAX,ESI
006fd5d7  POP ESI
006fd5d8  POP EBP
006fd5d9  MOV dword ptr FS:[0x0],ECX
006fd5e0  POP EBX
006fd5e1  ADD ESP,0x14
006fd5e4  RET
