00756900  MOV EAX,ECX
00756902  XOR ECX,ECX
00756904  MOV dword ptr [EAX],EAX
00756906  MOV dword ptr [EAX + 0x4],EAX
00756909  MOV dword ptr [EAX + 0x14],ECX
0075690c  MOV dword ptr [EAX + 0x18],ECX
0075690f  LEA EDX,[EAX + 0x14]
00756912  MOV dword ptr [EDX + 0x8],ECX
00756915  MOV dword ptr [EDX + 0xc],ECX
00756918  ADD EDX,0x8
0075691b  MOV dword ptr [EDX + 0x8],ECX
0075691e  MOV dword ptr [EDX + 0xc],ECX
00756921  MOV dword ptr [EAX + 0x2c],ECX
00756924  MOV dword ptr [EAX + 0x30],ECX
00756927  ADD EDX,0x8
0075692a  LEA EDX,[EAX + 0x2c]
0075692d  MOV dword ptr [EDX + 0x8],ECX
00756930  MOV dword ptr [EDX + 0xc],ECX
00756933  ADD EDX,0x8
00756936  MOV dword ptr [EDX + 0x8],ECX
00756939  MOV dword ptr [EDX + 0xc],ECX
0075693c  MOV dword ptr [EAX + 0x44],ECX
0075693f  MOV dword ptr [EAX + 0x48],ECX
00756942  ADD EDX,0x8
00756945  LEA EDX,[EAX + 0x44]
00756948  MOV dword ptr [EDX + 0x8],ECX
0075694b  MOV dword ptr [EDX + 0xc],ECX
0075694e  ADD EDX,0x8
00756951  MOV dword ptr [EDX + 0x8],ECX
00756954  MOV dword ptr [EDX + 0xc],ECX
00756957  MOV dword ptr [EAX + 0x5c],ECX
0075695a  MOV dword ptr [EAX + 0x60],ECX
0075695d  ADD EDX,0x8
00756960  LEA EDX,[EAX + 0x5c]
00756963  MOV dword ptr [EDX + 0x8],ECX
00756966  MOV dword ptr [EDX + 0xc],ECX
00756969  ADD EDX,0x8
0075696c  MOV dword ptr [EDX + 0x8],ECX
0075696f  MOV dword ptr [EDX + 0xc],ECX
00756972  MOV dword ptr [EAX + 0x74],ECX
00756975  MOV dword ptr [EAX + 0x78],ECX
00756978  ADD EDX,0x8
0075697b  LEA EDX,[EAX + 0x74]
0075697e  MOV dword ptr [EDX + 0x8],ECX
00756981  MOV dword ptr [EDX + 0xc],ECX
00756984  ADD EDX,0x8
00756987  MOV dword ptr [EDX + 0x8],ECX
0075698a  MOV dword ptr [EDX + 0xc],ECX
0075698d  MOV dword ptr [EAX + 0x8c],ECX
00756993  MOV dword ptr [EAX + 0x90],ECX
00756999  ADD EDX,0x8
0075699c  LEA EDX,[EAX + 0x8c]
007569a2  MOV dword ptr [EDX + 0x8],ECX
007569a5  MOV dword ptr [EDX + 0xc],ECX
007569a8  ADD EDX,0x8
007569ab  MOV dword ptr [EDX + 0x8],ECX
007569ae  MOV dword ptr [EDX + 0xc],ECX
007569b1  MOV dword ptr [EAX + 0xa4],ECX
007569b7  MOV dword ptr [EAX + 0xa8],ECX
007569bd  ADD EDX,0x8
007569c0  LEA EDX,[EAX + 0xa4]
007569c6  MOV dword ptr [EDX + 0x8],ECX
007569c9  MOV dword ptr [EDX + 0xc],ECX
007569cc  ADD EDX,0x8
007569cf  MOV dword ptr [EDX + 0x8],ECX
007569d2  MOV dword ptr [EDX + 0xc],ECX
007569d5  ADD EDX,0x8
007569d8  MOV dword ptr [EAX + 0xbc],ECX
007569de  MOV dword ptr [EAX + 0xc0],ECX
007569e4  LEA EDX,[EAX + 0xbc]
007569ea  ADD EDX,0x8
007569ed  MOV dword ptr [EDX],ECX
007569ef  MOV dword ptr [EDX + 0x4],ECX
007569f2  ADD EDX,0x8
007569f5  MOV dword ptr [EDX],ECX
007569f7  MOV dword ptr [EDX + 0x4],ECX
007569fa  LEA EDX,[EAX + 0xd4]
00756a00  MOV dword ptr [EDX],ECX
00756a02  MOV dword ptr [EDX + 0x4],ECX
00756a05  ADD EDX,0x8
00756a08  MOV dword ptr [EDX],ECX
00756a0a  MOV dword ptr [EDX + 0x4],ECX
00756a0d  MOV dword ptr [EDX + 0x8],ECX
00756a10  MOV dword ptr [EDX + 0xc],ECX
00756a13  ADD EDX,0x8
00756a16  MOV dword ptr [EAX + 0xec],ECX
00756a1c  MOV dword ptr [EAX + 0xf0],ECX
00756a22  LEA EDX,[EAX + 0xec]
00756a28  MOV dword ptr [EDX + 0x8],ECX
00756a2b  MOV dword ptr [EDX + 0xc],ECX
00756a2e  ADD EDX,0x8
00756a31  MOV dword ptr [EDX + 0x8],ECX
00756a34  MOV dword ptr [EDX + 0xc],ECX
00756a37  ADD EDX,0x8
00756a3a  LEA EDX,[EAX + 0x104]
00756a40  MOV dword ptr [EDX],ECX
00756a42  MOV dword ptr [EDX + 0x4],ECX
00756a45  ADD EDX,0x8
00756a48  MOV dword ptr [EDX],ECX
00756a4a  MOV dword ptr [EDX + 0x4],ECX
00756a4d  ADD EDX,0x8
00756a50  MOV dword ptr [EDX],ECX
00756a52  MOV dword ptr [EDX + 0x4],ECX
00756a55  RET
