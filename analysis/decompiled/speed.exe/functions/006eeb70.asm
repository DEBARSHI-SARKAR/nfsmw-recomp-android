006eeb70  SUB ESP,0x40
006eeb73  PUSH EBX
006eeb74  MOV EBX,ECX
006eeb76  MOV EAX,dword ptr [EBX + -0xc]
006eeb79  PUSH ESI
006eeb7a  LEA ESI,[EBX + -0xc]
006eeb7d  PUSH EDI
006eeb7e  MOV ECX,ESI
006eeb80  CALL dword ptr [EAX + 0xc]
006eeb83  MOV EDI,dword ptr [ESP + 0x54]
006eeb87  MOV dword ptr [EDI + 0x50],EAX
006eeb8a  MOV ECX,dword ptr [EBX + -0x4]
006eeb8d  MOV dword ptr [EDI + 0x54],ECX
006eeb90  MOV EDX,dword ptr [ESI]
006eeb92  LEA EAX,[ESP + 0xc]
006eeb96  PUSH EAX
006eeb97  MOV ECX,ESI
006eeb99  CALL dword ptr [EDX + 0x3c]
006eeb9c  MOV EDX,dword ptr [ESP + 0x3c]
006eeba0  MOV EAX,dword ptr [ESP + 0x40]
006eeba4  MOV ECX,EDI
006eeba6  MOV dword ptr [ECX],EDX
006eeba8  MOV EDX,dword ptr [ESP + 0x44]
006eebac  MOV dword ptr [ECX + 0x4],EAX
006eebaf  MOV EAX,dword ptr [ESP + 0x48]
006eebb3  MOV dword ptr [ECX + 0x8],EDX
006eebb6  MOV EDX,dword ptr [ESP + 0x2c]
006eebba  MOV dword ptr [ECX + 0xc],EAX
006eebbd  MOV EAX,dword ptr [ESP + 0x30]
006eebc1  LEA ECX,[EDI + 0x10]
006eebc4  MOV dword ptr [ECX],EDX
006eebc6  MOV EDX,dword ptr [ESP + 0x34]
006eebca  MOV dword ptr [ECX + 0x4],EAX
006eebcd  MOV EAX,dword ptr [ESP + 0x38]
006eebd1  MOV dword ptr [ECX + 0x8],EDX
006eebd4  MOV dword ptr [ECX + 0xc],EAX
006eebd7  MOV EDX,dword ptr [ESI]
006eebd9  LEA EAX,[EDI + 0x20]
006eebdc  PUSH EAX
006eebdd  MOV ECX,ESI
006eebdf  CALL dword ptr [EDX + 0x34]
006eebe2  MOV EDX,dword ptr [ESI]
006eebe4  LEA EAX,[EDI + 0x30]
006eebe7  PUSH EAX
006eebe8  MOV ECX,ESI
006eebea  CALL dword ptr [EDX + 0x38]
006eebed  MOV EBX,dword ptr [EBX + 0x1c]
006eebf0  TEST EBX,EBX
006eebf2  MOV AL,0x1
006eebf4  JZ 0x006eebfc
006eebf6  MOV ECX,dword ptr [EBX + 0x8]
006eebf9  MOV dword ptr [EDI + 0x48],ECX
006eebfc  POP EDI
006eebfd  POP ESI
006eebfe  POP EBX
006eebff  ADD ESP,0x40
006eec02  RET 0x8
