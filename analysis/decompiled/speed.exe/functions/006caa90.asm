006caa90  MOV EAX,dword ptr [ESP + 0x8]
006caa94  SUB ESP,0x78
006caa97  PUSH EBX
006caa98  MOV EBX,dword ptr [ESP + 0x80]
006caa9f  PUSH EBP
006caaa0  MOV EBP,dword ptr [ESP + 0x8c]
006caaa7  LEA EDX,[EAX + EBX*0x8 + 0x10]
006caaab  PUSH ESI
006caaac  LEA ESI,[ECX + EDX*0x4]
006caaaf  MOV EDX,dword ptr [ESI]
006caab1  PUSH EDI
006caab2  XOR EDI,EDI
006caab4  TEST EDX,EDX
006caab6  JZ 0x006caac0
006caab8  PUSH EBP
006caab9  PUSH EAX
006caaba  PUSH EBX
006caabb  CALL 0x006ca560
006caac0  MOV EDX,dword ptr [EBP]
006caac3  XOR EBP,EBP
006caac5  CMP EDX,EBP
006caac7  JZ 0x006cac30
006caacd  MOV EAX,dword ptr [ESP + 0xb4]
006caad4  MOV ECX,dword ptr [ESP + 0xb8]
006caadb  MOV dword ptr [ESP + 0x10],EAX
006caadf  MOV EAX,dword ptr [ESP + 0xbc]
006caae6  MOV dword ptr [ESP + 0x18],EAX
006caaea  MOV EAX,dword ptr [ESP + 0xc4]
006caaf1  MOV dword ptr [ESP + 0x14],ECX
006caaf5  MOV ECX,dword ptr [ESP + 0xc0]
006caafc  MOV dword ptr [ESP + 0x20],EAX
006cab00  MOV EAX,dword ptr [ESP + 0xcc]
006cab07  MOV dword ptr [ESP + 0x1c],ECX
006cab0b  MOV ECX,dword ptr [ESP + 0xc8]
006cab12  MOV dword ptr [ESP + 0x28],EAX
006cab16  MOV EAX,dword ptr [ESP + 0xd4]
006cab1d  MOV dword ptr [ESP + 0x24],ECX
006cab21  MOV ECX,dword ptr [ESP + 0xd0]
006cab28  MOV dword ptr [ESP + 0x30],EAX
006cab2c  MOV dword ptr [ESP + 0x2c],ECX
006cab30  MOV ECX,dword ptr [ESP + 0xd8]
006cab37  MOV dword ptr [ESP + 0x34],ECX
006cab3b  MOV EAX,0x1f40
006cab40  MOV dword ptr [ESP + 0x3c],EAX
006cab44  MOV dword ptr [ESP + 0x40],EAX
006cab48  MOV dword ptr [ESP + 0x44],EAX
006cab4c  MOV dword ptr [ESP + 0x48],EAX
006cab50  XOR EAX,EAX
006cab52  MOV ECX,0xe
006cab57  LEA EDI,[ESP + 0x50]
006cab5b  STOSD.REP ES:EDI
006cab5d  MOV EAX,dword ptr [ESP + 0x98]
006cab64  MOV ECX,dword ptr [ESP + 0x9c]
006cab6b  MOV dword ptr [ESP + 0x54],EAX
006cab6f  MOV EAX,dword ptr [ESP + 0xa0]
006cab76  MOV dword ptr [ESP + 0x5c],EAX
006cab7a  MOV EAX,dword ptr [ESP + 0xa8]
006cab81  MOV dword ptr [ESP + 0x64],EAX
006cab85  MOV EAX,dword ptr [ESP + 0xb0]
006cab8c  MOV dword ptr [ESP + 0x58],ECX
006cab90  MOV ECX,dword ptr [ESP + 0xa4]
006cab97  MOV dword ptr [ESP + 0x6c],EAX
006cab9b  LEA EAX,[EAX + EAX*0x2]
006cab9e  MOV dword ptr [ESP + 0x60],ECX
006caba2  MOV ECX,dword ptr [ESP + 0xac]
006caba9  SHL EAX,0x3
006cabac  MOV dword ptr [ESP + 0x7c],EAX
006cabb0  MOV EAX,dword ptr [ESP + 0xdc]
006cabb7  MOV dword ptr [ESP + 0x68],ECX
006cabbb  PUSH EBP
006cabbc  MOV dword ptr [ESP + 0x88],EAX
006cabc3  LEA ECX,[ESP + 0x14]
006cabc7  MOV dword ptr [ESP + 0x74],ECX
006cabcb  PUSH ESI
006cabcc  LEA EAX,[ESP + 0x58]
006cabd0  PUSH EAX
006cabd1  MOV EAX,dword ptr [ESP + 0xec]
006cabd8  LEA ECX,[ESP + 0x24]
006cabdc  MOV dword ptr [ESP + 0x80],ECX
006cabe3  LEA ECX,[ESP + 0x2c]
006cabe7  PUSH EAX
006cabe8  MOV dword ptr [ESP + 0x48],EBP
006cabec  MOV dword ptr [ESP + 0x5c],0x1f4
006cabf4  MOV dword ptr [ESP + 0x60],0x38
006cabfc  MOV dword ptr [ESP + 0x88],EBP
006cac03  MOV dword ptr [ESP + 0x90],ECX
006cac0a  MOV ECX,dword ptr [EDX]
006cac0c  PUSH EDX
006cac0d  CALL dword ptr [ECX + 0x48]
006cac10  MOV EDI,EAX
006cac12  CMP EDI,EBP
006cac14  JGE 0x006cac30
006cac16  PUSH EBX
006cac17  PUSH 0x8af554
006cac1c  CALL 0x006ca3d0
006cac21  ADD ESP,0x8
006cac24  MOV EAX,EDI
006cac26  POP EDI
006cac27  POP ESI
006cac28  POP EBP
006cac29  POP EBX
006cac2a  ADD ESP,0x78
006cac2d  RET 0x58
006cac30  CMP dword ptr [ESI],EBP
006cac32  MOV EAX,0x80004005
006cac37  JZ 0x006cac3b
006cac39  MOV EAX,EDI
006cac3b  POP EDI
006cac3c  POP ESI
006cac3d  POP EBP
006cac3e  POP EBX
006cac3f  ADD ESP,0x78
006cac42  RET 0x58
