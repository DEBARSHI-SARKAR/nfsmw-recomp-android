007feaa0  PUSH EBP
007feaa1  MOV EBP,ESP
007feaa3  MOV ECX,dword ptr [EBP + 0x10]
007feaa6  TEST ECX,ECX
007feaa8  MOV EDX,dword ptr [EBP + 0x8]
007feaab  JBE 0x007feb1c
007feaad  PUSH EBX
007feaae  PUSH ESI
007feaaf  PUSH EDI
007feab0  MOV EDI,dword ptr [EBP + 0xc]
007feab3  LEA EAX,[EDX + EDI*0x2]
007feab6  ADD EAX,EDI
007feab8  MOV dword ptr [EBP + 0x10],ECX
007feabb  MOVZX ESI,byte ptr [EDX + EDI*0x1]
007feabf  MOVZX ECX,byte ptr [EDX]
007feac2  IMUL ECX,ECX,0x33
007feac5  MOV EBX,ESI
007feac7  IMUL ESI,ESI,0x66
007feaca  IMUL EBX,EBX,0xcd
007fead0  LEA ECX,[ECX + EBX*0x1 + 0x80]
007fead7  SHR ECX,0x8
007feada  MOV byte ptr [EDX + EDI*0x1],CL
007feadd  MOVZX ECX,byte ptr [EDX + EDI*0x2]
007feae1  MOVZX EBX,byte ptr [EAX]
007feae4  IMUL ECX,ECX,0x9a
007feaea  MOV dword ptr [EBP + 0x8],EBX
007feaed  LEA EBX,[ESI + ECX*0x1 + 0x80]
007feaf4  MOV ESI,dword ptr [EBP + 0x8]
007feaf7  IMUL ESI,ESI,0x66
007feafa  SHR EBX,0x8
007feafd  LEA ECX,[ESI + ECX*0x1 + 0x80]
007feb04  SHR ECX,0x8
007feb07  MOV byte ptr [EDX + EDI*0x2],BL
007feb0a  MOV byte ptr [EAX],CL
007feb0c  MOV CL,byte ptr [EBP + 0x8]
007feb0f  INC EDX
007feb10  MOV byte ptr [EAX + EDI*0x1],CL
007feb13  INC EAX
007feb14  DEC dword ptr [EBP + 0x10]
007feb17  JNZ 0x007feabb
007feb19  POP EDI
007feb1a  POP ESI
007feb1b  POP EBX
007feb1c  POP EBP
007feb1d  RET
