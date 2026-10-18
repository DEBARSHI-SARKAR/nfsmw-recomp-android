0085de10  PUSH EBP
0085de11  MOV EBP,ESP
0085de13  SUB ESP,0x150
0085de19  MOV EAX,[0x00906980]
0085de1e  MOV dword ptr [EBP + -0x8],EAX
0085de21  LEA EAX,[EBP + 0xfffffeb8]
0085de27  PUSH EAX
0085de28  MOV ECX,dword ptr [EBP + 0x8]
0085de2b  PUSH ECX
0085de2c  CALL dword ptr [0x00890100]
0085de32  MOV dword ptr [EBP + -0x4],EAX
0085de35  CMP dword ptr [EBP + -0x4],-0x1
0085de39  JNZ 0x0085dea9
0085de3b  CALL dword ptr [0x00890188]
0085de41  MOV dword ptr [EBP + 0xfffffeb4],EAX
0085de47  MOV EDX,dword ptr [EBP + 0xfffffeb4]
0085de4d  MOV dword ptr [EBP + 0xfffffeb0],EDX
0085de53  MOV EAX,dword ptr [EBP + 0xfffffeb0]
0085de59  SUB EAX,0x2
0085de5c  MOV dword ptr [EBP + 0xfffffeb0],EAX
0085de62  CMP dword ptr [EBP + 0xfffffeb0],0x10
0085de69  JA 0x0085de99
0085de6b  MOV ECX,dword ptr [EBP + 0xfffffeb0]
0085de71  MOVZX EDX,byte ptr [ECX + 0x85df40]
0085de78  JMP dword ptr [EDX*0x4 + 0x85df34]
0085de7f  CALL 0x007cb270
0085de84  MOV dword ptr [EAX],0x2
0085de8a  JMP 0x0085dea4
0085de8c  CALL 0x007cb270
0085de91  MOV dword ptr [EAX],0xc
0085de97  JMP 0x0085dea4
0085de99  CALL 0x007cb270
0085de9e  MOV dword ptr [EAX],0x16
0085dea4  OR EAX,0xffffffff
0085dea7  JMP 0x0085df28
0085dea9  XOR EAX,EAX
0085deab  CMP dword ptr [EBP + 0xfffffeb8],0x80
0085deb5  SETZ AL
0085deb8  DEC EAX
0085deb9  AND EAX,dword ptr [EBP + 0xfffffeb8]
0085debf  MOV ECX,dword ptr [EBP + 0xc]
0085dec2  MOV dword ptr [ECX],EAX
0085dec4  LEA EDX,[EBP + 0xfffffebc]
0085deca  PUSH EDX
0085decb  CALL 0x0085e0d0
0085ded0  ADD ESP,0x4
0085ded3  MOV ECX,dword ptr [EBP + 0xc]
0085ded6  MOV dword ptr [ECX + 0x4],EAX
0085ded9  LEA EDX,[EBP + 0xfffffec4]
0085dedf  PUSH EDX
0085dee0  CALL 0x0085e0d0
0085dee5  ADD ESP,0x4
0085dee8  MOV ECX,dword ptr [EBP + 0xc]
0085deeb  MOV dword ptr [ECX + 0x8],EAX
0085deee  LEA EDX,[EBP + 0xfffffecc]
0085def4  PUSH EDX
0085def5  CALL 0x0085e0d0
0085defa  ADD ESP,0x4
0085defd  MOV ECX,dword ptr [EBP + 0xc]
0085df00  MOV dword ptr [ECX + 0xc],EAX
0085df03  MOV EDX,dword ptr [EBP + 0xc]
0085df06  MOV EAX,dword ptr [EBP + 0xfffffed8]
0085df0c  MOV dword ptr [EDX + 0x10],EAX
0085df0f  LEA ECX,[EBP + 0xfffffee4]
0085df15  PUSH ECX
0085df16  MOV EDX,dword ptr [EBP + 0xc]
0085df19  ADD EDX,0x14
0085df1c  PUSH EDX
0085df1d  CALL 0x007d0bd0
0085df22  ADD ESP,0x8
0085df25  MOV EAX,dword ptr [EBP + -0x4]
0085df28  MOV ECX,dword ptr [EBP + -0x8]
0085df2b  CALL 0x007d6cb0
0085df30  MOV ESP,EBP
0085df32  POP EBP
0085df33  RET
