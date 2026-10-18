0051bb80  PUSH ESI
0051bb81  PUSH EDI
0051bb82  MOV EDI,ECX
0051bb84  MOV ESI,dword ptr [EDI + 0x2c]
0051bb87  TEST ESI,ESI
0051bb89  JZ 0x0051bbb7
0051bb8b  OR dword ptr [ESI + 0x1c],0x400000
0051bb92  MOV dword ptr [ESI + 0x60],0x57f813f7
0051bb99  MOV ECX,dword ptr [0x0091dd08]
0051bb9f  TEST ECX,ECX
0051bba1  JZ 0x0051bba8
0051bba3  MOV EAX,dword ptr [ECX]
0051bba5  PUSH ESI
0051bba6  CALL dword ptr [EAX]
0051bba8  MOV ECX,dword ptr [ESI + 0x1c]
0051bbab  AND ECX,0xfffffffd
0051bbae  OR ECX,0x400000
0051bbb4  MOV dword ptr [ESI + 0x1c],ECX
0051bbb7  MOV EDX,dword ptr [0x0091ca20]
0051bbbd  MOV EAX,dword ptr [EDX]
0051bbbf  MOV EAX,dword ptr [EAX + 0x3c]
0051bbc2  MOV ESI,dword ptr [EDI + 0x30]
0051bbc5  NEG EAX
0051bbc7  SBB EAX,EAX
0051bbc9  AND EAX,0x20421a02
0051bbce  ADD EAX,0xf6bbd534
0051bbd3  TEST ESI,ESI
0051bbd5  JZ 0x0051bbfe
0051bbd7  OR dword ptr [ESI + 0x1c],0x400000
0051bbde  MOV dword ptr [ESI + 0x60],EAX
0051bbe1  MOV ECX,dword ptr [0x0091dd08]
0051bbe7  TEST ECX,ECX
0051bbe9  JZ 0x0051bbf0
0051bbeb  MOV EDX,dword ptr [ECX]
0051bbed  PUSH ESI
0051bbee  CALL dword ptr [EDX]
0051bbf0  MOV EAX,dword ptr [ESI + 0x1c]
0051bbf3  AND EAX,0xfffffffd
0051bbf6  OR EAX,0x400000
0051bbfb  MOV dword ptr [ESI + 0x1c],EAX
0051bbfe  POP EDI
0051bbff  POP ESI
0051bc00  RET
