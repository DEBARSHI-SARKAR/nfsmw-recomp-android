00860b70  PUSH EBP
00860b71  MOV EBP,ESP
00860b73  SUB ESP,0x20
00860b76  MOV EAX,[0x00906980]
00860b7b  MOV dword ptr [EBP + -0xc],EAX
00860b7e  MOV EAX,dword ptr [EBP + 0xc]
00860b81  MOV ECX,dword ptr [EAX + 0xc]
00860b84  AND ECX,0x40
00860b87  JNZ 0x00860c90
00860b8d  MOV EDX,dword ptr [EBP + 0xc]
00860b90  CMP dword ptr [EDX + 0x10],-0x1
00860b94  JZ 0x00860bb7
00860b96  MOV EAX,dword ptr [EBP + 0xc]
00860b99  MOV ECX,dword ptr [EAX + 0x10]
00860b9c  SAR ECX,0x5
00860b9f  MOV EDX,dword ptr [EBP + 0xc]
00860ba2  MOV EAX,dword ptr [EDX + 0x10]
00860ba5  AND EAX,0x1f
00860ba8  IMUL EAX,EAX,0x24
00860bab  ADD EAX,dword ptr [ECX*0x4 + 0x9c5340]
00860bb2  MOV dword ptr [EBP + -0x18],EAX
00860bb5  JMP 0x00860bbe
00860bb7  MOV dword ptr [EBP + -0x18],0x906808
00860bbe  MOV ECX,dword ptr [EBP + -0x18]
00860bc1  MOVSX EDX,byte ptr [ECX + 0x4]
00860bc5  AND EDX,0x80
00860bcb  JZ 0x00860c90
00860bd1  MOV AX,word ptr [EBP + 0x8]
00860bd5  PUSH EAX
00860bd6  LEA ECX,[EBP + -0x14]
00860bd9  PUSH ECX
00860bda  CALL 0x007df050
00860bdf  ADD ESP,0x8
00860be2  MOV dword ptr [EBP + -0x8],EAX
00860be5  CMP dword ptr [EBP + -0x8],-0x1
00860be9  JNZ 0x00860bff
00860beb  CALL 0x007cb270
00860bf0  MOV dword ptr [EAX],0x2a
00860bf6  OR AX,0xffff
00860bfa  JMP 0x00860ce6
00860bff  MOV dword ptr [EBP + -0x4],0x0
00860c06  JMP 0x00860c11
00860c08  MOV EDX,dword ptr [EBP + -0x4]
00860c0b  ADD EDX,0x1
00860c0e  MOV dword ptr [EBP + -0x4],EDX
00860c11  MOV EAX,dword ptr [EBP + -0x4]
00860c14  CMP EAX,dword ptr [EBP + -0x8]
00860c17  JGE 0x00860c85
00860c19  MOV ECX,dword ptr [EBP + 0xc]
00860c1c  MOV EDX,dword ptr [ECX + 0x4]
00860c1f  SUB EDX,0x1
00860c22  MOV EAX,dword ptr [EBP + 0xc]
00860c25  MOV dword ptr [EAX + 0x4],EDX
00860c28  MOV ECX,dword ptr [EBP + 0xc]
00860c2b  CMP dword ptr [ECX + 0x4],0x0
00860c2f  JL 0x00860c5f
00860c31  MOV EDX,dword ptr [EBP + 0xc]
00860c34  MOV EAX,dword ptr [EDX]
00860c36  MOV ECX,dword ptr [EBP + -0x4]
00860c39  MOV DL,byte ptr [EBP + ECX*0x1 + -0x14]
00860c3d  MOV byte ptr [EAX],DL
00860c3f  MOV EAX,dword ptr [EBP + 0xc]
00860c42  MOV ECX,dword ptr [EAX]
00860c44  MOVSX EDX,byte ptr [ECX]
00860c47  AND EDX,0xff
00860c4d  MOV dword ptr [EBP + -0x1c],EDX
00860c50  MOV EAX,dword ptr [EBP + 0xc]
00860c53  MOV ECX,dword ptr [EAX]
00860c55  ADD ECX,0x1
00860c58  MOV EDX,dword ptr [EBP + 0xc]
00860c5b  MOV dword ptr [EDX],ECX
00860c5d  JMP 0x00860c77
00860c5f  MOV EAX,dword ptr [EBP + 0xc]
00860c62  PUSH EAX
00860c63  MOV ECX,dword ptr [EBP + -0x4]
00860c66  MOVSX EDX,byte ptr [EBP + ECX*0x1 + -0x14]
00860c6b  PUSH EDX
00860c6c  CALL 0x007d47d0
00860c71  ADD ESP,0x8
00860c74  MOV dword ptr [EBP + -0x1c],EAX
00860c77  CMP dword ptr [EBP + -0x1c],-0x1
00860c7b  JNZ 0x00860c83
00860c7d  OR AX,0xffff
00860c81  JMP 0x00860ce6
00860c83  JMP 0x00860c08
00860c85  MOVZX EAX,word ptr [EBP + 0x8]
00860c89  AND EAX,0xffff
00860c8e  JMP 0x00860ce6
00860c90  MOV EAX,dword ptr [EBP + 0xc]
00860c93  MOV ECX,dword ptr [EAX + 0x4]
00860c96  SUB ECX,0x2
00860c99  MOV EDX,dword ptr [EBP + 0xc]
00860c9c  MOV dword ptr [EDX + 0x4],ECX
00860c9f  MOV EAX,dword ptr [EBP + 0xc]
00860ca2  CMP dword ptr [EAX + 0x4],0x0
00860ca6  JL 0x00860cd5
00860ca8  MOV ECX,dword ptr [EBP + 0xc]
00860cab  MOV EDX,dword ptr [ECX]
00860cad  MOV AX,word ptr [EBP + 0x8]
00860cb1  MOV word ptr [EDX],AX
00860cb4  MOVZX ECX,word ptr [EBP + 0x8]
00860cb8  AND ECX,0xffff
00860cbe  MOV word ptr [EBP + -0x1e],CX
00860cc2  MOV EDX,dword ptr [EBP + 0xc]
00860cc5  MOV EAX,dword ptr [EDX]
00860cc7  ADD EAX,0x2
00860cca  MOV ECX,dword ptr [EBP + 0xc]
00860ccd  MOV dword ptr [ECX],EAX
00860ccf  MOV AX,word ptr [EBP + -0x1e]
00860cd3  JMP 0x00860ce6
00860cd5  MOV EDX,dword ptr [EBP + 0xc]
00860cd8  PUSH EDX
00860cd9  MOVZX EAX,word ptr [EBP + 0x8]
00860cdd  PUSH EAX
00860cde  CALL 0x00860d20
00860ce3  ADD ESP,0x8
00860ce6  MOV ECX,dword ptr [EBP + -0xc]
00860ce9  CALL 0x007d6cb0
00860cee  MOV ESP,EBP
00860cf0  POP EBP
00860cf1  RET
