0076a780  MOV EDX,dword ptr [ESP + 0x4]
0076a784  MOV EAX,dword ptr [EDX]
0076a786  PUSH EBX
0076a787  PUSH ESI
0076a788  MOV ESI,dword ptr [EAX + 0x8]
0076a78b  MOV dword ptr [EDX],ESI
0076a78d  MOV ESI,dword ptr [EAX + 0x8]
0076a790  MOV BL,byte ptr [ESI + 0x15]
0076a793  TEST BL,BL
0076a795  JNZ 0x0076a79a
0076a797  MOV dword ptr [ESI + 0x4],EDX
0076a79a  MOV ESI,dword ptr [EDX + 0x4]
0076a79d  MOV dword ptr [EAX + 0x4],ESI
0076a7a0  MOV ECX,dword ptr [ECX + 0x4]
0076a7a3  CMP EDX,dword ptr [ECX + 0x4]
0076a7a6  JNZ 0x0076a7b6
0076a7a8  MOV dword ptr [ECX + 0x4],EAX
0076a7ab  POP ESI
0076a7ac  MOV dword ptr [EAX + 0x8],EDX
0076a7af  MOV dword ptr [EDX + 0x4],EAX
0076a7b2  POP EBX
0076a7b3  RET 0x4
0076a7b6  MOV ECX,dword ptr [EDX + 0x4]
0076a7b9  CMP EDX,dword ptr [ECX + 0x8]
0076a7bc  JNZ 0x0076a7cc
0076a7be  MOV dword ptr [ECX + 0x8],EAX
0076a7c1  POP ESI
0076a7c2  MOV dword ptr [EAX + 0x8],EDX
0076a7c5  MOV dword ptr [EDX + 0x4],EAX
0076a7c8  POP EBX
0076a7c9  RET 0x4
0076a7cc  MOV dword ptr [ECX],EAX
0076a7ce  POP ESI
0076a7cf  MOV dword ptr [EAX + 0x8],EDX
0076a7d2  MOV dword ptr [EDX + 0x4],EAX
0076a7d5  POP EBX
0076a7d6  RET 0x4
