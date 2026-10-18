005edbc0  PUSH ECX
005edbc1  MOV EAX,dword ptr [ESP + 0x8]
005edbc5  PUSH ESI
005edbc6  PUSH EAX
005edbc7  MOV ESI,ECX
005edbc9  CALL 0x00454640
005edbce  ADD ESP,0x4
005edbd1  LEA ECX,[ESP + 0xc]
005edbd5  PUSH ECX
005edbd6  LEA EDX,[ESP + 0x8]
005edbda  PUSH EDX
005edbdb  LEA ECX,[ESI + 0x98]
005edbe1  MOV dword ptr [ESP + 0x14],EAX
005edbe5  CALL 0x005ec420
005edbea  MOV EAX,dword ptr [ESP + 0x4]
005edbee  FLD float ptr [EAX + 0x14]
005edbf1  POP ESI
005edbf2  POP ECX
005edbf3  RET 0x4
