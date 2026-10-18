0041ead0  MOV EDX,dword ptr [ECX + 0x2c]
0041ead3  LEA EAX,[ECX + 0x18]
0041ead6  PUSH ESI
0041ead7  CMP dword ptr [EDX],EAX
0041ead9  JNZ 0x0041eae0
0041eadb  MOV ESI,dword ptr [EAX + 0x4]
0041eade  MOV dword ptr [EDX],ESI
0041eae0  MOV EDX,dword ptr [EAX]
0041eae2  XOR ESI,ESI
0041eae4  CMP EDX,ESI
0041eae6  PUSH EDI
0041eae7  JZ 0x0041eaef
0041eae9  MOV EDI,dword ptr [EAX + 0x4]
0041eaec  MOV dword ptr [EDX + 0x4],EDI
0041eaef  MOV EDX,dword ptr [EAX + 0x4]
0041eaf2  CMP EDX,ESI
0041eaf4  JZ 0x0041eafa
0041eaf6  MOV EDI,dword ptr [EAX]
0041eaf8  MOV dword ptr [EDX],EDI
0041eafa  MOV dword ptr [EAX + 0x4],ESI
0041eafd  MOV dword ptr [EAX],ESI
0041eaff  MOV EAX,dword ptr [ECX + 0x14]
0041eb02  CMP dword ptr [EAX],ECX
0041eb04  POP EDI
0041eb05  JNZ 0x0041eb0c
0041eb07  MOV EDX,dword ptr [ECX + 0x4]
0041eb0a  MOV dword ptr [EAX],EDX
0041eb0c  MOV EAX,dword ptr [ECX]
0041eb0e  CMP EAX,ESI
0041eb10  JZ 0x0041eb18
0041eb12  MOV EDX,dword ptr [ECX + 0x4]
0041eb15  MOV dword ptr [EAX + 0x4],EDX
0041eb18  MOV EAX,dword ptr [ECX + 0x4]
0041eb1b  CMP EAX,ESI
0041eb1d  JZ 0x0041eb23
0041eb1f  MOV EDX,dword ptr [ECX]
0041eb21  MOV dword ptr [EAX],EDX
0041eb23  MOV dword ptr [ECX + 0x4],ESI
0041eb26  MOV dword ptr [ECX],ESI
0041eb28  POP ESI
0041eb29  RET
