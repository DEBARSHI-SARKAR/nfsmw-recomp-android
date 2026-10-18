0066fba0  MOV AL,byte ptr [ECX + 0x2d]
0066fba3  TEST AL,AL
0066fba5  JNZ 0x0066fbac
0066fba7  MOV EAX,dword ptr [ECX]
0066fba9  JMP dword ptr [EAX + 0x18]
0066fbac  RET 0x4
