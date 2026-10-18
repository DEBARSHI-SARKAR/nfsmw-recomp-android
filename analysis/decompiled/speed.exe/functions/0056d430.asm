0056d430  MOV AL,0x1
0056d432  XOR EDX,EDX
0056d434  MOV byte ptr [ECX],AL
0056d436  MOV byte ptr [ECX + 0x1],AL
0056d439  MOV byte ptr [ECX + 0x2],AL
0056d43c  MOV byte ptr [ECX + 0x3],AL
0056d43f  MOV byte ptr [ECX + 0x5],AL
0056d442  MOV byte ptr [ECX + 0x6],AL
0056d445  MOV byte ptr [ECX + 0x4],AL
0056d448  MOV byte ptr [ECX + 0x7],AL
0056d44b  MOV dword ptr [ECX + 0x8],EDX
0056d44e  MOV byte ptr [ECX + 0x10],DL
0056d451  MOV dword ptr [ECX + 0xc],0x2
0056d458  MOV byte ptr [ECX + 0x11],DL
0056d45b  MOV byte ptr [ECX + 0x12],AL
0056d45e  RET
