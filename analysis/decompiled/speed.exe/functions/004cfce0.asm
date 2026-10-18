004cfce0  MOV EDX,dword ptr [ESP + 0x4]
004cfce4  MOV EAX,dword ptr [ESP + 0xc]
004cfce8  MOV dword ptr [ECX + 0x8],EDX
004cfceb  MOV dword ptr [ECX + 0x10],EAX
004cfcee  MOV EAX,dword ptr [ESP + 0x8]
004cfcf2  LEA EDX,[ECX + 0x4]
004cfcf5  PUSH EDX
004cfcf6  MOV dword ptr [ECX + 0xc],EAX
004cfcf9  CALL 0x004cf520
004cfcfe  RET 0xc
