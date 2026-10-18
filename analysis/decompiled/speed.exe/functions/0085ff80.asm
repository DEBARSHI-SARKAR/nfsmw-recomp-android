0085ff80  PUSH EBP
0085ff81  MOV EBP,ESP
0085ff83  MOV EAX,dword ptr [EBP + 0xc]
0085ff86  MOV ECX,dword ptr [EAX + 0xc]
0085ff89  AND ECX,0x40
0085ff8c  JZ 0x0085ffa6
0085ff8e  MOV EDX,dword ptr [EBP + 0xc]
0085ff91  CMP dword ptr [EDX + 0x8],0x0
0085ff95  JNZ 0x0085ffa6
0085ff97  MOV EAX,dword ptr [EBP + 0x10]
0085ff9a  MOV ECX,dword ptr [EAX]
0085ff9c  ADD ECX,0x1
0085ff9f  MOV EDX,dword ptr [EBP + 0x10]
0085ffa2  MOV dword ptr [EDX],ECX
0085ffa4  JMP 0x0085ffda
0085ffa6  MOV EAX,dword ptr [EBP + 0xc]
0085ffa9  PUSH EAX
0085ffaa  MOV CX,word ptr [EBP + 0x8]
0085ffae  PUSH ECX
0085ffaf  CALL 0x00860b70
0085ffb4  ADD ESP,0x8
0085ffb7  MOVZX EDX,AX
0085ffba  CMP EDX,0xffff
0085ffc0  JNZ 0x0085ffcd
0085ffc2  MOV EAX,dword ptr [EBP + 0x10]
0085ffc5  MOV dword ptr [EAX],0xffffffff
0085ffcb  JMP 0x0085ffda
0085ffcd  MOV ECX,dword ptr [EBP + 0x10]
0085ffd0  MOV EDX,dword ptr [ECX]
0085ffd2  ADD EDX,0x1
0085ffd5  MOV EAX,dword ptr [EBP + 0x10]
0085ffd8  MOV dword ptr [EAX],EDX
0085ffda  POP EBP
0085ffdb  RET
