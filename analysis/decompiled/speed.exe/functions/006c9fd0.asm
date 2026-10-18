006c9fd0  SUB ESP,0x10
006c9fd3  PUSH EBX
006c9fd4  PUSH EBP
006c9fd5  PUSH ESI
006c9fd6  PUSH EDI
006c9fd7  LEA EAX,[ESP + 0x14]
006c9fdb  PUSH EAX
006c9fdc  MOV EDI,ECX
006c9fde  CALL 0x007cb9d0
006c9fe3  ADD ESP,0x4
006c9fe6  LEA ESI,[EDI + 0x4728]
006c9fec  MOV EBX,0x8
006c9ff1  XOR ECX,ECX
006c9ff3  MOV EAX,ESI
006c9ff5  MOV EDX,0x2
006c9ffa  LEA EBX,[EBX]
006ca000  MOV dword ptr [EAX + 0x40],ECX
006ca003  MOV dword ptr [EAX],ECX
006ca005  MOV dword ptr [EAX + 0xc0],ECX
006ca00b  MOV dword ptr [EAX + 0x80],ECX
006ca011  MOV dword ptr [EAX + 0x140],ECX
006ca017  MOV dword ptr [EAX + 0x100],ECX
006ca01d  MOV dword ptr [EAX + 0x1c0],ECX
006ca023  MOV dword ptr [EAX + 0x180],ECX
006ca029  ADD EAX,0x20
006ca02c  DEC EDX
006ca02d  JNZ 0x006ca000
006ca02f  ADD ESI,0x4
006ca032  DEC EBX
006ca033  JNZ 0x006c9ff3
006ca035  MOVZX ESI,word ptr [ESP + 0x18]
006ca03a  LEA EDX,[EDI + 0x4938]
006ca040  LEA EAX,[EDI + 0x4930]
006ca046  MOV EDI,dword ptr [ESP + 0x14]
006ca04a  MOV dword ptr [ESP + 0x10],0x2
006ca052  XOR EBX,EBX
006ca054  MOV dword ptr [EAX + -0x8],ECX
006ca057  MOV dword ptr [EAX],ECX
006ca059  MOV dword ptr [EAX + 0xffffd8f0],ECX
006ca05f  MOV dword ptr [EAX + 0x5f8],EDI
006ca065  MOV dword ptr [EAX + 0x600],ESI
006ca06b  MOV dword ptr [EAX + 0x608],EDI
006ca071  MOV dword ptr [EAX + 0x610],ESI
006ca077  MOV dword ptr [EAX + 0x618],ECX
006ca07d  MOV dword ptr [EAX + 0x620],ECX
006ca083  MOV EBP,EDX
006ca085  MOV dword ptr [EBP],EBX
006ca088  MOV dword ptr [EBP + 0x4],EBX
006ca08b  MOV dword ptr [EBP + 0x8],EBX
006ca08e  MOV dword ptr [EBP + 0xc],EBX
006ca091  MOV dword ptr [EBP + 0x10],EBX
006ca094  MOV dword ptr [EBP + 0x14],EBX
006ca097  MOV dword ptr [EBP + 0x18],EBX
006ca09a  MOV dword ptr [EBP + 0x1c],EBX
006ca09d  MOV dword ptr [EBP + 0x20],EBX
006ca0a0  MOV dword ptr [EBP + 0x24],EBX
006ca0a3  MOV EBX,dword ptr [ESP + 0x10]
006ca0a7  ADD EAX,0x4
006ca0aa  ADD EDX,0x28
006ca0ad  DEC EBX
006ca0ae  MOV dword ptr [ESP + 0x10],EBX
006ca0b2  JNZ 0x006ca052
006ca0b4  POP EDI
006ca0b5  POP ESI
006ca0b6  POP EBP
006ca0b7  POP EBX
006ca0b8  ADD ESP,0x10
006ca0bb  RET
