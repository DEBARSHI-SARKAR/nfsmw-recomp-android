0063fbb0  PUSH ESI
0063fbb1  MOV ESI,ECX
0063fbb3  MOV EAX,dword ptr [ESI + 0xc]
0063fbb6  TEST EAX,EAX
0063fbb8  JLE 0x0063fbc7
0063fbba  MOV ECX,EAX
0063fbbc  LEA ESP,[ESP]
0063fbc0  DEC ECX
0063fbc1  DEC EAX
0063fbc2  JNZ 0x0063fbc0
0063fbc4  MOV dword ptr [ESI + 0xc],ECX
0063fbc7  MOV EAX,dword ptr [ESI + 0x4]
0063fbca  TEST EAX,EAX
0063fbcc  JZ 0x0063fbef
0063fbce  MOV ECX,dword ptr [ESI + 0x8]
0063fbd1  MOV EDX,dword ptr [ESI]
0063fbd3  PUSH ECX
0063fbd4  PUSH EAX
0063fbd5  MOV ECX,ESI
0063fbd7  CALL dword ptr [EDX + 0x8]
0063fbda  MOV dword ptr [ESI + 0x4],0x0
0063fbe1  MOV dword ptr [ESI + 0x8],0x0
0063fbe8  MOV dword ptr [ESI + 0xc],0x0
0063fbef  POP ESI
0063fbf0  RET
