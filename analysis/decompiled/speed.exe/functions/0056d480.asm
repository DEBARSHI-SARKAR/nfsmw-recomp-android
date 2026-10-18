0056d480  MOV AL,0x1
0056d482  XOR DL,DL
0056d484  MOV byte ptr [ECX],AL
0056d486  MOV byte ptr [ECX + 0x1],AL
0056d489  MOV byte ptr [ECX + 0x2],AL
0056d48c  MOV byte ptr [ECX + 0x3],AL
0056d48f  MOV byte ptr [ECX + 0x5],AL
0056d492  MOV byte ptr [ECX + 0x6],AL
0056d495  MOV byte ptr [ECX + 0x10],DL
0056d498  MOV dword ptr [ECX + 0xc],0x2
0056d49f  MOV byte ptr [ECX + 0x11],DL
0056d4a2  MOV byte ptr [ECX + 0x12],AL
0056d4a5  RET
