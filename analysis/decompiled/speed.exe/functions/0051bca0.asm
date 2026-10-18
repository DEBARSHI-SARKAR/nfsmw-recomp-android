0051bca0  PUSH ESI
0051bca1  PUSH EDI
0051bca2  MOV EDI,ECX
0051bca4  MOV ESI,dword ptr [EDI + 0x2c]
0051bca7  TEST ESI,ESI
0051bca9  JZ 0x0051bcd7
0051bcab  OR dword ptr [ESI + 0x1c],0x400000
0051bcb2  MOV dword ptr [ESI + 0x60],0x70a7555e
0051bcb9  MOV ECX,dword ptr [0x0091dd08]
0051bcbf  TEST ECX,ECX
0051bcc1  JZ 0x0051bcc8
0051bcc3  MOV EAX,dword ptr [ECX]
0051bcc5  PUSH ESI
0051bcc6  CALL dword ptr [EAX]
0051bcc8  MOV ECX,dword ptr [ESI + 0x1c]
0051bccb  AND ECX,0xfffffffd
0051bcce  OR ECX,0x400000
0051bcd4  MOV dword ptr [ESI + 0x1c],ECX
0051bcd7  MOV EDX,dword ptr [0x0091ca20]
0051bcdd  MOV EAX,dword ptr [EDX]
0051bcdf  MOV EAX,dword ptr [EAX + 0x4c]
0051bce2  MOV ESI,dword ptr [EDI + 0x30]
0051bce5  NEG EAX
0051bce7  SBB EAX,EAX
0051bce9  AND EAX,0x20421a02
0051bcee  ADD EAX,0xf6bbd534
0051bcf3  TEST ESI,ESI
0051bcf5  JZ 0x0051bd1e
0051bcf7  OR dword ptr [ESI + 0x1c],0x400000
0051bcfe  MOV dword ptr [ESI + 0x60],EAX
0051bd01  MOV ECX,dword ptr [0x0091dd08]
0051bd07  TEST ECX,ECX
0051bd09  JZ 0x0051bd10
0051bd0b  MOV EDX,dword ptr [ECX]
0051bd0d  PUSH ESI
0051bd0e  CALL dword ptr [EDX]
0051bd10  MOV EAX,dword ptr [ESI + 0x1c]
0051bd13  AND EAX,0xfffffffd
0051bd16  OR EAX,0x400000
0051bd1b  MOV dword ptr [ESI + 0x1c],EAX
0051bd1e  POP EDI
0051bd1f  POP ESI
0051bd20  RET
