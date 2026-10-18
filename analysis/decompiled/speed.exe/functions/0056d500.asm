0056d500  MOV AL,0x1
0056d502  XOR EDX,EDX
0056d504  MOV byte ptr [ECX],AL
0056d506  MOV byte ptr [ECX + 0x1],AL
0056d509  MOV byte ptr [ECX + 0x2],AL
0056d50c  MOV byte ptr [ECX + 0x4],AL
0056d50f  MOV byte ptr [ECX + 0xc],AL
0056d512  MOV byte ptr [ECX + 0xf],AL
0056d515  MOV byte ptr [ECX + 0x5],DL
0056d518  MOV dword ptr [ECX + 0x8],0xffffffff
0056d51f  MOV byte ptr [ECX + 0xd],0x2
0056d523  MOV byte ptr [ECX + 0xe],DL
0056d526  MOV dword ptr [ECX + 0x10],0x42ff0000
0056d52d  CMP dword ptr [0x008f41c0],EDX
0056d533  SETNZ AL
0056d536  MOV byte ptr [ECX + 0x3],AL
0056d539  RET
