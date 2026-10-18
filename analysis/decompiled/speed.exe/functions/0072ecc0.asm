0072ecc0  PUSH ESI
0072ecc1  MOV ESI,ECX
0072ecc3  CALL 0x0072b5c0
0072ecc8  MOV dword ptr [ESI + 0x4],EAX
0072eccb  MOV byte ptr [EAX + 0x15],0x1
0072eccf  MOV EAX,dword ptr [ESI + 0x4]
0072ecd2  MOV dword ptr [EAX + 0x4],EAX
0072ecd5  MOV EAX,dword ptr [ESI + 0x4]
0072ecd8  MOV dword ptr [EAX],EAX
0072ecda  MOV EAX,dword ptr [ESI + 0x4]
0072ecdd  MOV dword ptr [EAX + 0x8],EAX
0072ece0  MOV dword ptr [ESI + 0x8],0x0
0072ece7  MOV EAX,ESI
0072ece9  POP ESI
0072ecea  RET 0x8
