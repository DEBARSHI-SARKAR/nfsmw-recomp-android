005b0c90  PUSH ESI
005b0c91  MOV ESI,dword ptr [ESP + 0x8]
005b0c95  LEA EAX,[ECX + 0x514c]
005b0c9b  MOV EDX,0x20
005b0ca0  CMP dword ptr [EAX],ESI
005b0ca2  JNZ 0x005b0caa
005b0ca4  MOV dword ptr [EAX],0x0
005b0caa  ADD EAX,0x8
005b0cad  DEC EDX
005b0cae  JNZ 0x005b0ca0
005b0cb0  MOV EAX,dword ptr [ECX + 0x5148]
005b0cb6  MOV dword ptr [ECX + EAX*0x8 + 0x514c],ESI
005b0cbd  MOV EDX,dword ptr [ECX + 0x5148]
005b0cc3  MOV EAX,dword ptr [ESP + 0xc]
005b0cc7  MOV dword ptr [ECX + EDX*0x8 + 0x5150],EAX
005b0cce  MOV EDX,dword ptr [ECX + 0x5148]
005b0cd4  INC EDX
005b0cd5  AND EDX,0x8000001f
005b0cdb  JNS 0x005b0ce2
005b0cdd  DEC EDX
005b0cde  OR EDX,0xffffffe0
005b0ce1  INC EDX
005b0ce2  MOV dword ptr [ECX + 0x5148],EDX
005b0ce8  POP ESI
005b0ce9  RET 0x8
