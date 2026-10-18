0057fe80  XOR EAX,EAX
0057fe82  PUSH ESI
0057fe83  MOV byte ptr [ECX + 0x5d],AL
0057fe86  MOV byte ptr [ECX + 0x5c],0x3
0057fe8a  MOV byte ptr [ECX + 0x5e],AL
0057fe8d  MOV dword ptr [ECX + 0x60],EAX
0057fe90  MOV byte ptr [ECX + 0x64],AL
0057fe93  CMP dword ptr [0x00926064],EAX
0057fe99  MOV EDX,0x1
0057fe9e  JZ 0x0057feb7
0057fea0  PUSH EBX
0057fea1  MOV dword ptr [ECX + 0x34],EDX
0057fea4  MOV BL,byte ptr [0x00904fbc]
0057feaa  MOV byte ptr [ECX + 0x5d],BL
0057fead  MOV BL,byte ptr [0x00904fd8]
0057feb3  MOV byte ptr [ECX + 0x5c],BL
0057feb6  POP EBX
0057feb7  MOV dword ptr [ECX],EDX
0057feb9  MOV byte ptr [ECX + 0xc],DL
0057febc  MOV byte ptr [ECX + 0xd],DL
0057febf  MOV byte ptr [ECX + 0xf],DL
0057fec2  MOV byte ptr [ECX + 0x2b],DL
0057fec5  MOV byte ptr [ECX + 0x40],DL
0057fec8  MOV byte ptr [ECX + 0x41],DL
0057fecb  MOV dword ptr [ECX + 0x54],EDX
0057fece  MOV byte ptr [ECX + 0x4],0x2
0057fed2  MOV dword ptr [ECX + 0x8],0x3
0057fed9  MOV dword ptr [ECX + 0x68],EAX
0057fedc  MOV dword ptr [ECX + 0x6c],EAX
0057fedf  MOV byte ptr [ECX + 0xe],AL
0057fee2  MOV byte ptr [ECX + 0x38],AL
0057fee5  MOV byte ptr [ECX + 0x10],AL
0057fee8  MOV byte ptr [ECX + 0x39],AL
0057feeb  MOV byte ptr [ECX + 0x3a],AL
0057feee  MOV byte ptr [ECX + 0x3f],AL
0057fef1  MOV byte ptr [ECX + 0x43],AL
0057fef4  MOV byte ptr [ECX + 0x44],AL
0057fef7  MOV dword ptr [ECX + 0x2c],0x6
0057fefe  MOV byte ptr [ECX + 0x42],AL
0057ff01  XOR EDX,EDX
0057ff03  LEA ESI,[ECX + 0x11]
0057ff06  MOV dword ptr [ESI],EDX
0057ff08  MOV dword ptr [ESI + 0x4],EDX
0057ff0b  MOV dword ptr [ESI + 0x8],EDX
0057ff0e  MOV byte ptr [ESI + 0xc],DL
0057ff11  LEA ESI,[ECX + 0x1e]
0057ff14  MOV dword ptr [ESI],EDX
0057ff16  MOV dword ptr [ESI + 0x4],EDX
0057ff19  MOV dword ptr [ESI + 0x8],EDX
0057ff1c  MOV byte ptr [ESI + 0xc],DL
0057ff1f  LEA ESI,[ECX + 0x70]
0057ff22  MOV dword ptr [ESI],EDX
0057ff24  MOV dword ptr [ESI + 0x4],EDX
0057ff27  MOV dword ptr [ESI + 0x8],EDX
0057ff2a  MOV dword ptr [ESI + 0xc],EDX
0057ff2d  MOV dword ptr [ESI + 0x10],EDX
0057ff30  LEA ESI,[ECX + 0x84]
0057ff36  MOV dword ptr [ESI],EDX
0057ff38  MOV dword ptr [ESI + 0x4],EDX
0057ff3b  MOV dword ptr [ESI + 0x8],EDX
0057ff3e  MOV dword ptr [ESI + 0xc],EDX
0057ff41  MOV dword ptr [ESI + 0x10],EDX
0057ff44  LEA ESI,[ECX + 0x98]
0057ff4a  MOV dword ptr [ESI],EDX
0057ff4c  MOV dword ptr [ESI + 0x4],EDX
0057ff4f  MOV dword ptr [ESI + 0x8],EDX
0057ff52  MOV dword ptr [ESI + 0xc],EDX
0057ff55  MOV dword ptr [ESI + 0x10],EDX
0057ff58  LEA ESI,[ECX + 0xac]
0057ff5e  MOV dword ptr [ESI],EDX
0057ff60  MOV dword ptr [ESI + 0x4],EDX
0057ff63  MOV dword ptr [ESI + 0x8],EDX
0057ff66  MOV dword ptr [ESI + 0xc],EDX
0057ff69  MOV dword ptr [ESI + 0x10],EDX
0057ff6c  LEA ESI,[ECX + 0xc0]
0057ff72  MOV dword ptr [ESI],EDX
0057ff74  MOV dword ptr [ESI + 0x4],EDX
0057ff77  MOV dword ptr [ESI + 0x8],EDX
0057ff7a  MOV dword ptr [ESI + 0xc],EDX
0057ff7d  MOV dword ptr [ESI + 0x10],EDX
0057ff80  LEA ESI,[ECX + 0x3b]
0057ff83  MOV word ptr [ESI],DX
0057ff86  MOV byte ptr [ESI + 0x2],DL
0057ff89  LEA ESI,[ECX + 0xe9]
0057ff8f  MOV dword ptr [ESI],EDX
0057ff91  MOV dword ptr [ESI + 0x4],EDX
0057ff94  MOV dword ptr [ESI + 0x8],EDX
0057ff97  MOV dword ptr [ESI + 0xc],EDX
0057ff9a  MOV dword ptr [ESI + 0x10],EDX
0057ff9d  MOV byte ptr [ESI + 0x14],DL
0057ffa0  MOV dword ptr [ECX + 0x4c],EAX
0057ffa3  MOV dword ptr [ECX + 0x50],EAX
0057ffa6  POP ESI
0057ffa7  RET
