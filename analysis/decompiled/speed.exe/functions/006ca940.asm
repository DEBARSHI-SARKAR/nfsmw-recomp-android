006ca940  MOV EAX,dword ptr [ESP + 0x8]
006ca944  SUB ESP,0x5c
006ca947  PUSH EBX
006ca948  MOV EBX,dword ptr [ESP + 0x64]
006ca94c  LEA EDX,[EAX + EBX*0x8 + 0x10]
006ca950  MOV EAX,dword ptr [ECX + EDX*0x4]
006ca953  LEA EDX,[ECX + EDX*0x4]
006ca956  PUSH ESI
006ca957  XOR ESI,ESI
006ca959  TEST EAX,EAX
006ca95b  JZ 0x006caa80
006ca961  MOV EAX,dword ptr [ESP + 0x8c]
006ca968  MOV ECX,dword ptr [ESP + 0x90]
006ca96f  MOV dword ptr [ESP + 0x8],EAX
006ca973  MOV EAX,dword ptr [ESP + 0x94]
006ca97a  MOV dword ptr [ESP + 0xc],ECX
006ca97e  MOV ECX,dword ptr [ESP + 0x98]
006ca985  MOV dword ptr [ESP + 0x10],EAX
006ca989  MOV EAX,dword ptr [ESP + 0x9c]
006ca990  MOV dword ptr [ESP + 0x14],ECX
006ca994  MOV ECX,dword ptr [ESP + 0xa4]
006ca99b  MOV dword ptr [ESP + 0x68],EAX
006ca99f  MOV EAX,dword ptr [ESP + 0xa8]
006ca9a6  MOV dword ptr [ESP + 0x1c],ECX
006ca9aa  MOV ECX,dword ptr [ESP + 0xac]
006ca9b1  MOV dword ptr [ESP + 0x20],EAX
006ca9b5  MOV EAX,dword ptr [ESP + 0xb0]
006ca9bc  MOV EDX,dword ptr [EDX]
006ca9be  MOV dword ptr [ESP + 0x24],ECX
006ca9c2  MOV dword ptr [ESP + 0x28],EAX
006ca9c6  XOR EAX,EAX
006ca9c8  PUSH EDI
006ca9c9  MOV ECX,0xe
006ca9ce  LEA EDI,[ESP + 0x30]
006ca9d2  STOSD.REP ES:EDI
006ca9d4  MOV EAX,dword ptr [ESP + 0x78]
006ca9d8  MOV ECX,dword ptr [ESP + 0x74]
006ca9dc  MOV dword ptr [ESP + 0x38],EAX
006ca9e0  MOV EAX,dword ptr [ESP + 0x80]
006ca9e7  MOV dword ptr [ESP + 0x40],EAX
006ca9eb  MOV EAX,dword ptr [ESP + 0x88]
006ca9f2  MOV dword ptr [ESP + 0x34],ECX
006ca9f6  MOV ECX,dword ptr [ESP + 0x7c]
006ca9fa  MOV dword ptr [ESP + 0x48],EAX
006ca9fe  MOV dword ptr [ESP + 0x3c],ECX
006caa02  MOV ECX,dword ptr [ESP + 0x84]
006caa09  MOV dword ptr [ESP + 0x44],ECX
006caa0d  MOV ECX,dword ptr [ESP + 0x8c]
006caa14  LEA EAX,[ESP + 0xc]
006caa18  MOV dword ptr [ESP + 0x50],EAX
006caa1c  LEA EAX,[ESP + 0x1c]
006caa20  MOV dword ptr [ESP + 0x58],EAX
006caa24  MOV EAX,dword ptr [ESP + 0xa4]
006caa2b  MOV dword ptr [ESP + 0x4c],ECX
006caa2f  LEA ECX,[ESP + 0x14]
006caa33  MOV dword ptr [ESP + 0x64],EAX
006caa37  MOV dword ptr [ESP + 0x54],ECX
006caa3b  PUSH 0x140
006caa40  LEA EAX,[ESP + 0x34]
006caa44  LEA ECX,[ESP + 0x70]
006caa48  PUSH EAX
006caa49  MOV dword ptr [ESP + 0x24],0x14
006caa51  MOV dword ptr [ESP + 0x38],0x38
006caa59  MOV dword ptr [ESP + 0x64],0x4
006caa61  MOV dword ptr [ESP + 0x68],ECX
006caa65  MOV ECX,dword ptr [EDX]
006caa67  PUSH EDX
006caa68  CALL dword ptr [ECX + 0x18]
006caa6b  MOV ESI,EAX
006caa6d  TEST ESI,ESI
006caa6f  POP EDI
006caa70  JGE 0x006caa80
006caa72  PUSH EBX
006caa73  PUSH 0x8af51c
006caa78  CALL 0x006ca3d0
006caa7d  ADD ESP,0x8
006caa80  MOV EAX,ESI
006caa82  POP ESI
006caa83  POP EBX
006caa84  ADD ESP,0x5c
006caa87  RET 0x4c
