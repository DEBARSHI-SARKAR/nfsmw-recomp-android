0056d660  PUSH EBX
0056d661  XOR EBX,EBX
0056d663  PUSH ESI
0056d664  MOV ESI,ECX
0056d666  MOV dword ptr [ESI],EBX
0056d668  LEA ECX,[ESI + 0x28]
0056d66b  MOV dword ptr [ESI + 0x4],0x3f800000
0056d672  MOV dword ptr [ESI + 0x8],EBX
0056d675  MOV dword ptr [ESI + 0xc],EBX
0056d678  MOV byte ptr [ESI + 0x10],BL
0056d67b  CALL 0x0056d5e0
0056d680  MOV byte ptr [ESI + 0x19],BL
0056d683  MOV byte ptr [ESI + 0x22],BL
0056d686  MOV dword ptr [ESI + 0x1c],0xffffffff
0056d68d  MOV dword ptr [ESI + 0x24],0x42ff0000
0056d694  MOV AL,0x1
0056d696  MOV byte ptr [ESI + 0x14],AL
0056d699  MOV byte ptr [ESI + 0x15],AL
0056d69c  MOV byte ptr [ESI + 0x16],AL
0056d69f  MOV byte ptr [ESI + 0x18],AL
0056d6a2  MOV byte ptr [ESI + 0x20],AL
0056d6a5  MOV byte ptr [ESI + 0x23],AL
0056d6a8  MOV ECX,0x2
0056d6ad  MOV byte ptr [ESI + 0x21],CL
0056d6b0  CMP dword ptr [0x008f41c0],EBX
0056d6b6  SETNZ DL
0056d6b9  MOV byte ptr [ESI + 0x17],DL
0056d6bc  MOV dword ptr [ESI + 0x64],EBX
0056d6bf  MOV byte ptr [ESI + 0x6c],BL
0056d6c2  MOV byte ptr [ESI + 0x6d],BL
0056d6c5  MOV byte ptr [ESI + 0x5c],AL
0056d6c8  MOV byte ptr [ESI + 0x5d],AL
0056d6cb  MOV byte ptr [ESI + 0x5e],AL
0056d6ce  MOV byte ptr [ESI + 0x5f],AL
0056d6d1  MOV byte ptr [ESI + 0x61],AL
0056d6d4  MOV byte ptr [ESI + 0x62],AL
0056d6d7  MOV byte ptr [ESI + 0x60],AL
0056d6da  MOV byte ptr [ESI + 0x63],AL
0056d6dd  MOV dword ptr [ESI + 0x68],ECX
0056d6e0  MOV byte ptr [ESI + 0x6e],AL
0056d6e3  MOV dword ptr [ESI + 0x78],EBX
0056d6e6  MOV byte ptr [ESI + 0x80],BL
0056d6ec  MOV byte ptr [ESI + 0x81],BL
0056d6f2  MOV byte ptr [ESI + 0x70],AL
0056d6f5  MOV byte ptr [ESI + 0x71],AL
0056d6f8  MOV byte ptr [ESI + 0x72],AL
0056d6fb  MOV byte ptr [ESI + 0x73],AL
0056d6fe  MOV byte ptr [ESI + 0x75],AL
0056d701  MOV byte ptr [ESI + 0x76],AL
0056d704  MOV byte ptr [ESI + 0x74],AL
0056d707  MOV byte ptr [ESI + 0x77],AL
0056d70a  MOV dword ptr [ESI + 0x7c],ECX
0056d70d  MOV byte ptr [ESI + 0x82],AL
0056d713  POP ESI
0056d714  POP EBX
0056d715  RET
