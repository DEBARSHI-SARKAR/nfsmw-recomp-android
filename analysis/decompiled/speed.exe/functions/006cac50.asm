006cac50  MOV EAX,dword ptr [ESP + 0x8]
006cac54  SUB ESP,0x78
006cac57  PUSH EBP
006cac58  MOV EBP,dword ptr [ESP + 0x80]
006cac5f  LEA EDX,[EAX + EBP*0x8 + 0x10]
006cac63  MOV EAX,dword ptr [ECX + EDX*0x4]
006cac66  LEA EDX,[ECX + EDX*0x4]
006cac69  PUSH ESI
006cac6a  XOR ESI,ESI
006cac6c  TEST EAX,EAX
006cac6e  JZ 0x006cadc4
006cac74  MOV EAX,dword ptr [ESP + 0xa8]
006cac7b  MOV ECX,dword ptr [ESP + 0xac]
006cac82  MOV dword ptr [ESP + 0x8],EAX
006cac86  MOV EAX,dword ptr [ESP + 0xb0]
006cac8d  MOV dword ptr [ESP + 0x10],EAX
006cac91  MOV EAX,dword ptr [ESP + 0xb8]
006cac98  MOV dword ptr [ESP + 0xc],ECX
006cac9c  MOV ECX,dword ptr [ESP + 0xb4]
006caca3  MOV dword ptr [ESP + 0x18],EAX
006caca7  MOV EAX,dword ptr [ESP + 0xc0]
006cacae  MOV dword ptr [ESP + 0x14],ECX
006cacb2  MOV ECX,dword ptr [ESP + 0xbc]
006cacb9  MOV dword ptr [ESP + 0x20],EAX
006cacbd  MOV EAX,dword ptr [ESP + 0xc8]
006cacc4  MOV dword ptr [ESP + 0x1c],ECX
006cacc8  MOV ECX,dword ptr [ESP + 0xc4]
006caccf  MOV dword ptr [ESP + 0x28],EAX
006cacd3  MOV dword ptr [ESP + 0x24],ECX
006cacd7  MOV ECX,dword ptr [ESP + 0xcc]
006cacde  MOV dword ptr [ESP + 0x2c],ECX
006cace2  MOV EAX,0x1f40
006cace7  MOV dword ptr [ESP + 0x34],EAX
006caceb  MOV dword ptr [ESP + 0x38],EAX
006cacef  MOV dword ptr [ESP + 0x3c],EAX
006cacf3  MOV dword ptr [ESP + 0x40],EAX
006cacf7  XOR EAX,EAX
006cacf9  PUSH EDI
006cacfa  MOV ECX,0xe
006cacff  LEA EDI,[ESP + 0x4c]
006cad03  STOSD.REP ES:EDI
006cad05  MOV EAX,dword ptr [ESP + 0x90]
006cad0c  MOV ECX,dword ptr [ESP + 0x94]
006cad13  MOV dword ptr [ESP + 0x50],EAX
006cad17  MOV EAX,dword ptr [ESP + 0x98]
006cad1e  MOV dword ptr [ESP + 0x58],EAX
006cad22  MOV EAX,dword ptr [ESP + 0xa0]
006cad29  MOV dword ptr [ESP + 0x60],EAX
006cad2d  MOV EAX,dword ptr [ESP + 0xa8]
006cad34  MOV dword ptr [ESP + 0x54],ECX
006cad38  MOV ECX,dword ptr [ESP + 0x9c]
006cad3f  MOV dword ptr [ESP + 0x68],EAX
006cad43  MOV dword ptr [ESP + 0x5c],ECX
006cad47  MOV ECX,dword ptr [ESP + 0xa4]
006cad4e  LEA EAX,[EAX + EAX*0x2]
006cad51  MOV dword ptr [ESP + 0x64],ECX
006cad55  SHL EAX,0x3
006cad58  MOV dword ptr [ESP + 0x78],EAX
006cad5c  MOV EAX,dword ptr [ESP + 0xd4]
006cad63  LEA ECX,[ESP + 0xc]
006cad67  MOV dword ptr [ESP + 0x6c],ECX
006cad6b  MOV dword ptr [ESP + 0x80],EAX
006cad72  MOV EAX,dword ptr [EDX]
006cad74  LEA ECX,[ESP + 0x14]
006cad78  MOV dword ptr [ESP + 0x70],ECX
006cad7c  PUSH 0x140
006cad81  LEA EDX,[ESP + 0x50]
006cad85  LEA ECX,[ESP + 0x20]
006cad89  PUSH EDX
006cad8a  MOV dword ptr [ESP + 0x3c],ESI
006cad8e  MOV dword ptr [ESP + 0x50],0x1f4
006cad96  MOV dword ptr [ESP + 0x54],0x38
006cad9e  MOV dword ptr [ESP + 0x7c],ESI
006cada2  MOV dword ptr [ESP + 0x84],ECX
006cada9  MOV ECX,dword ptr [EAX]
006cadab  PUSH EAX
006cadac  CALL dword ptr [ECX + 0x18]
006cadaf  MOV ESI,EAX
006cadb1  TEST ESI,ESI
006cadb3  POP EDI
006cadb4  JGE 0x006cadc4
006cadb6  PUSH EBP
006cadb7  PUSH 0x8af58c
006cadbc  CALL 0x006ca3d0
006cadc1  ADD ESP,0x8
006cadc4  MOV EAX,ESI
006cadc6  POP ESI
006cadc7  POP EBP
006cadc8  ADD ESP,0x78
006cadcb  RET 0x50
