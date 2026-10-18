005fa520  MOV EAX,dword ptr [ECX + 0x3c]
005fa523  XOR EDX,EDX
005fa525  CMP EAX,EDX
005fa527  JZ 0x005fa569
005fa529  MOV dword ptr [EAX],ECX
005fa52b  PUSH ESI
005fa52c  LEA ESI,[EAX + 0x50]
005fa52f  MOV dword ptr [EAX + 0x4],ESI
005fa532  MOV dword ptr [EAX + 0x8],EDX
005fa535  MOV dword ptr [EAX + 0x20],EDX
005fa538  MOV dword ptr [EAX + 0x38],EDX
005fa53b  MOV dword ptr [EAX + 0xc],EDX
005fa53e  MOV dword ptr [EAX + 0x24],EDX
005fa541  MOV dword ptr [EAX + 0x3c],EDX
005fa544  MOV dword ptr [EAX + 0x10],EDX
005fa547  MOV dword ptr [EAX + 0x28],EDX
005fa54a  MOV dword ptr [EAX + 0x40],EDX
005fa54d  MOV dword ptr [EAX + 0x14],EDX
005fa550  MOV dword ptr [EAX + 0x2c],EDX
005fa553  MOV dword ptr [EAX + 0x44],EDX
005fa556  MOV dword ptr [EAX + 0x18],EDX
005fa559  MOV dword ptr [EAX + 0x30],EDX
005fa55c  MOV dword ptr [EAX + 0x48],EDX
005fa55f  MOV dword ptr [EAX + 0x1c],EDX
005fa562  MOV dword ptr [EAX + 0x34],EDX
005fa565  MOV dword ptr [EAX + 0x4c],EDX
005fa568  POP ESI
005fa569  MOV EAX,dword ptr [ECX + 0x3c]
005fa56c  MOV dword ptr [ECX + 0x38],EAX
005fa56f  MOV ECX,dword ptr [ECX + 0x30]
005fa572  PUSH ECX
005fa573  MOV ECX,EAX
005fa575  CALL 0x005fa270
005fa57a  RET
