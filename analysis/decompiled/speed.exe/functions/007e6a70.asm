007e6a70  PUSH EBP
007e6a71  MOV EBP,ESP
007e6a73  SUB ESP,0x4c
007e6a76  MOV EAX,[0x00906980]
007e6a7b  MOV dword ptr [EBP + -0x1c],EAX
007e6a7e  MOV word ptr [EBP + -0x14],0x0
007e6a84  MOV dword ptr [EBP + -0x2c],0x0
007e6a8b  MOV dword ptr [EBP + -0x28],0x0
007e6a92  MOV dword ptr [EBP + -0x24],0x0
007e6a99  MOV dword ptr [EBP + -0x20],0x0
007e6aa0  MOV EAX,dword ptr [EBP + 0x8]
007e6aa3  MOV CX,word ptr [EAX + 0xa]
007e6aa7  MOV word ptr [EBP + -0x18],CX
007e6aab  MOV EDX,dword ptr [EBP + 0xc]
007e6aae  MOV AX,word ptr [EDX + 0xa]
007e6ab2  MOV word ptr [EBP + -0x30],AX
007e6ab6  MOVZX ECX,word ptr [EBP + -0x18]
007e6aba  MOVZX EDX,word ptr [EBP + -0x30]
007e6abe  XOR ECX,EDX
007e6ac0  AND ECX,0x8000
007e6ac6  MOV word ptr [EBP + -0x14],CX
007e6aca  MOVZX EAX,word ptr [EBP + -0x18]
007e6ace  AND EAX,0x7fff
007e6ad3  MOV word ptr [EBP + -0x18],AX
007e6ad7  MOVZX ECX,word ptr [EBP + -0x30]
007e6adb  AND ECX,0x7fff
007e6ae1  MOV word ptr [EBP + -0x30],CX
007e6ae5  MOVZX EDX,word ptr [EBP + -0x18]
007e6ae9  MOVZX EAX,word ptr [EBP + -0x30]
007e6aed  ADD EDX,EAX
007e6aef  MOV word ptr [EBP + -0x10],DX
007e6af3  MOVZX ECX,word ptr [EBP + -0x18]
007e6af7  CMP ECX,0x7fff
007e6afd  JGE 0x007e6b16
007e6aff  MOVZX EDX,word ptr [EBP + -0x30]
007e6b03  CMP EDX,0x7fff
007e6b09  JGE 0x007e6b16
007e6b0b  MOVZX EAX,word ptr [EBP + -0x10]
007e6b0f  CMP EAX,0xbffd
007e6b14  JLE 0x007e6b48
007e6b16  MOVZX ECX,word ptr [EBP + -0x14]
007e6b1a  NEG ECX
007e6b1c  SBB ECX,ECX
007e6b1e  AND ECX,0x80000000
007e6b24  ADD ECX,0x7fff8000
007e6b2a  MOV EDX,dword ptr [EBP + 0x8]
007e6b2d  MOV dword ptr [EDX + 0x8],ECX
007e6b30  MOV EAX,dword ptr [EBP + 0x8]
007e6b33  MOV dword ptr [EAX + 0x4],0x0
007e6b3a  MOV ECX,dword ptr [EBP + 0x8]
007e6b3d  MOV dword ptr [ECX],0x0
007e6b43  JMP 0x007e6e53
007e6b48  MOVZX EDX,word ptr [EBP + -0x10]
007e6b4c  CMP EDX,0x3fbf
007e6b52  JG 0x007e6b76
007e6b54  MOV EAX,dword ptr [EBP + 0x8]
007e6b57  MOV dword ptr [EAX + 0x8],0x0
007e6b5e  MOV ECX,dword ptr [EBP + 0x8]
007e6b61  MOV dword ptr [ECX + 0x4],0x0
007e6b68  MOV EDX,dword ptr [EBP + 0x8]
007e6b6b  MOV dword ptr [EDX],0x0
007e6b71  JMP 0x007e6e53
007e6b76  MOVZX EAX,word ptr [EBP + -0x18]
007e6b7a  TEST EAX,EAX
007e6b7c  JNZ 0x007e6bb6
007e6b7e  MOV CX,word ptr [EBP + -0x10]
007e6b82  ADD CX,0x1
007e6b86  MOV word ptr [EBP + -0x10],CX
007e6b8a  MOV EDX,dword ptr [EBP + 0x8]
007e6b8d  MOV EAX,dword ptr [EDX + 0x8]
007e6b90  AND EAX,0x7fffffff
007e6b95  JNZ 0x007e6bb6
007e6b97  MOV ECX,dword ptr [EBP + 0x8]
007e6b9a  CMP dword ptr [ECX + 0x4],0x0
007e6b9e  JNZ 0x007e6bb6
007e6ba0  MOV EDX,dword ptr [EBP + 0x8]
007e6ba3  CMP dword ptr [EDX],0x0
007e6ba6  JNZ 0x007e6bb6
007e6ba8  MOV EAX,dword ptr [EBP + 0x8]
007e6bab  MOV word ptr [EAX + 0xa],0x0
007e6bb1  JMP 0x007e6e53
007e6bb6  MOVZX ECX,word ptr [EBP + -0x30]
007e6bba  TEST ECX,ECX
007e6bbc  JNZ 0x007e6c0b
007e6bbe  MOV DX,word ptr [EBP + -0x10]
007e6bc2  ADD DX,0x1
007e6bc6  MOV word ptr [EBP + -0x10],DX
007e6bca  MOV EAX,dword ptr [EBP + 0xc]
007e6bcd  MOV ECX,dword ptr [EAX + 0x8]
007e6bd0  AND ECX,0x7fffffff
007e6bd6  JNZ 0x007e6c0b
007e6bd8  MOV EDX,dword ptr [EBP + 0xc]
007e6bdb  CMP dword ptr [EDX + 0x4],0x0
007e6bdf  JNZ 0x007e6c0b
007e6be1  MOV EAX,dword ptr [EBP + 0xc]
007e6be4  CMP dword ptr [EAX],0x0
007e6be7  JNZ 0x007e6c0b
007e6be9  MOV ECX,dword ptr [EBP + 0x8]
007e6bec  MOV dword ptr [ECX + 0x8],0x0
007e6bf3  MOV EDX,dword ptr [EBP + 0x8]
007e6bf6  MOV dword ptr [EDX + 0x4],0x0
007e6bfd  MOV EAX,dword ptr [EBP + 0x8]
007e6c00  MOV dword ptr [EAX],0x0
007e6c06  JMP 0x007e6e53
007e6c0b  MOV dword ptr [EBP + -0xc],0x0
007e6c12  MOV dword ptr [EBP + -0x4],0x0
007e6c19  JMP 0x007e6c24
007e6c1b  MOV ECX,dword ptr [EBP + -0x4]
007e6c1e  ADD ECX,0x1
007e6c21  MOV dword ptr [EBP + -0x4],ECX
007e6c24  CMP dword ptr [EBP + -0x4],0x5
007e6c28  JGE 0x007e6cdf
007e6c2e  MOV EDX,dword ptr [EBP + -0x4]
007e6c31  SHL EDX,0x1
007e6c33  MOV dword ptr [EBP + -0x8],EDX
007e6c36  MOV dword ptr [EBP + -0x34],0x8
007e6c3d  MOV EAX,0x5
007e6c42  SUB EAX,dword ptr [EBP + -0x4]
007e6c45  MOV dword ptr [EBP + -0x38],EAX
007e6c48  JMP 0x007e6c53
007e6c4a  MOV ECX,dword ptr [EBP + -0x38]
007e6c4d  SUB ECX,0x1
007e6c50  MOV dword ptr [EBP + -0x38],ECX
007e6c53  CMP dword ptr [EBP + -0x38],0x0
007e6c57  JLE 0x007e6cd1
007e6c59  MOV EDX,dword ptr [EBP + 0x8]
007e6c5c  ADD EDX,dword ptr [EBP + -0x8]
007e6c5f  MOV dword ptr [EBP + -0x3c],EDX
007e6c62  MOV EAX,dword ptr [EBP + 0xc]
007e6c65  ADD EAX,dword ptr [EBP + -0x34]
007e6c68  MOV dword ptr [EBP + -0x40],EAX
007e6c6b  MOV ECX,dword ptr [EBP + -0xc]
007e6c6e  LEA EDX,[EBP + ECX*0x1 + -0x28]
007e6c72  MOV dword ptr [EBP + -0x48],EDX
007e6c75  MOV EAX,dword ptr [EBP + -0x3c]
007e6c78  MOVZX ECX,word ptr [EAX]
007e6c7b  MOV EDX,dword ptr [EBP + -0x40]
007e6c7e  MOVZX EAX,word ptr [EDX]
007e6c81  IMUL ECX,EAX
007e6c84  MOV dword ptr [EBP + -0x4c],ECX
007e6c87  MOV ECX,dword ptr [EBP + -0x48]
007e6c8a  PUSH ECX
007e6c8b  MOV EDX,dword ptr [EBP + -0x4c]
007e6c8e  PUSH EDX
007e6c8f  MOV EAX,dword ptr [EBP + -0x48]
007e6c92  MOV ECX,dword ptr [EAX]
007e6c94  PUSH ECX
007e6c95  CALL 0x007e5b90
007e6c9a  ADD ESP,0xc
007e6c9d  MOV dword ptr [EBP + -0x44],EAX
007e6ca0  CMP dword ptr [EBP + -0x44],0x0
007e6ca4  JZ 0x007e6cba
007e6ca6  MOV EDX,dword ptr [EBP + -0xc]
007e6ca9  MOV AX,word ptr [EBP + EDX*0x1 + -0x24]
007e6cae  ADD AX,0x1
007e6cb2  MOV ECX,dword ptr [EBP + -0xc]
007e6cb5  MOV word ptr [EBP + ECX*0x1 + -0x24],AX
007e6cba  MOV EDX,dword ptr [EBP + -0x8]
007e6cbd  ADD EDX,0x2
007e6cc0  MOV dword ptr [EBP + -0x8],EDX
007e6cc3  MOV EAX,dword ptr [EBP + -0x34]
007e6cc6  SUB EAX,0x2
007e6cc9  MOV dword ptr [EBP + -0x34],EAX
007e6ccc  JMP 0x007e6c4a
007e6cd1  MOV ECX,dword ptr [EBP + -0xc]
007e6cd4  ADD ECX,0x2
007e6cd7  MOV dword ptr [EBP + -0xc],ECX
007e6cda  JMP 0x007e6c1b
007e6cdf  MOVZX EDX,word ptr [EBP + -0x10]
007e6ce3  SUB EDX,0x3ffe
007e6ce9  MOV word ptr [EBP + -0x10],DX
007e6ced  MOVSX EAX,word ptr [EBP + -0x10]
007e6cf1  TEST EAX,EAX
007e6cf3  JLE 0x007e6d1a
007e6cf5  MOV ECX,dword ptr [EBP + -0x20]
007e6cf8  AND ECX,0x80000000
007e6cfe  JNZ 0x007e6d1a
007e6d00  LEA EDX,[EBP + -0x28]
007e6d03  PUSH EDX
007e6d04  CALL 0x007e5c80
007e6d09  ADD ESP,0x4
007e6d0c  MOV AX,word ptr [EBP + -0x10]
007e6d10  SUB AX,0x1
007e6d14  MOV word ptr [EBP + -0x10],AX
007e6d18  JMP 0x007e6ced
007e6d1a  MOVSX ECX,word ptr [EBP + -0x10]
007e6d1e  TEST ECX,ECX
007e6d20  JG 0x007e6d73
007e6d22  MOV DX,word ptr [EBP + -0x10]
007e6d26  SUB DX,0x1
007e6d2a  MOV word ptr [EBP + -0x10],DX
007e6d2e  MOVSX EAX,word ptr [EBP + -0x10]
007e6d32  TEST EAX,EAX
007e6d34  JGE 0x007e6d62
007e6d36  MOVZX ECX,word ptr [EBP + -0x28]
007e6d3a  AND ECX,0x1
007e6d3d  JZ 0x007e6d48
007e6d3f  MOV EDX,dword ptr [EBP + -0x2c]
007e6d42  ADD EDX,0x1
007e6d45  MOV dword ptr [EBP + -0x2c],EDX
007e6d48  LEA EAX,[EBP + -0x28]
007e6d4b  PUSH EAX
007e6d4c  CALL 0x007e5ce0
007e6d51  ADD ESP,0x4
007e6d54  MOV CX,word ptr [EBP + -0x10]
007e6d58  ADD CX,0x1
007e6d5c  MOV word ptr [EBP + -0x10],CX
007e6d60  JMP 0x007e6d2e
007e6d62  CMP dword ptr [EBP + -0x2c],0x0
007e6d66  JZ 0x007e6d73
007e6d68  MOVZX EDX,word ptr [EBP + -0x28]
007e6d6c  OR EDX,0x1
007e6d6f  MOV word ptr [EBP + -0x28],DX
007e6d73  MOVZX EAX,word ptr [EBP + -0x28]
007e6d77  CMP EAX,0x8000
007e6d7c  JG 0x007e6d8f
007e6d7e  MOV ECX,dword ptr [EBP + -0x28]
007e6d81  AND ECX,0x1ffff
007e6d87  CMP ECX,0x18000
007e6d8d  JNZ 0x007e6deb
007e6d8f  CMP dword ptr [EBP + -0x26],-0x1
007e6d93  JNZ 0x007e6de2
007e6d95  MOV dword ptr [EBP + -0x26],0x0
007e6d9c  CMP dword ptr [EBP + -0x22],-0x1
007e6da0  JNZ 0x007e6dd7
007e6da2  MOV dword ptr [EBP + -0x22],0x0
007e6da9  MOVZX EDX,word ptr [EBP + -0x1e]
007e6dad  CMP EDX,0xffff
007e6db3  JNZ 0x007e6dc9
007e6db5  MOV word ptr [EBP + -0x1e],0x8000
007e6dbb  MOV AX,word ptr [EBP + -0x10]
007e6dbf  ADD AX,0x1
007e6dc3  MOV word ptr [EBP + -0x10],AX
007e6dc7  JMP 0x007e6dd5
007e6dc9  MOV CX,word ptr [EBP + -0x1e]
007e6dcd  ADD CX,0x1
007e6dd1  MOV word ptr [EBP + -0x1e],CX
007e6dd5  JMP 0x007e6de0
007e6dd7  MOV EDX,dword ptr [EBP + -0x22]
007e6dda  ADD EDX,0x1
007e6ddd  MOV dword ptr [EBP + -0x22],EDX
007e6de0  JMP 0x007e6deb
007e6de2  MOV EAX,dword ptr [EBP + -0x26]
007e6de5  ADD EAX,0x1
007e6de8  MOV dword ptr [EBP + -0x26],EAX
007e6deb  MOVZX ECX,word ptr [EBP + -0x10]
007e6def  CMP ECX,0x7fff
007e6df5  JL 0x007e6e26
007e6df7  MOVZX EDX,word ptr [EBP + -0x14]
007e6dfb  NEG EDX
007e6dfd  SBB EDX,EDX
007e6dff  AND EDX,0x80000000
007e6e05  ADD EDX,0x7fff8000
007e6e0b  MOV EAX,dword ptr [EBP + 0x8]
007e6e0e  MOV dword ptr [EAX + 0x8],EDX
007e6e11  MOV ECX,dword ptr [EBP + 0x8]
007e6e14  MOV dword ptr [ECX + 0x4],0x0
007e6e1b  MOV EDX,dword ptr [EBP + 0x8]
007e6e1e  MOV dword ptr [EDX],0x0
007e6e24  JMP 0x007e6e53
007e6e26  MOV EAX,dword ptr [EBP + 0x8]
007e6e29  MOV CX,word ptr [EBP + -0x26]
007e6e2d  MOV word ptr [EAX],CX
007e6e30  MOV EDX,dword ptr [EBP + 0x8]
007e6e33  MOV EAX,dword ptr [EBP + -0x24]
007e6e36  MOV dword ptr [EDX + 0x2],EAX
007e6e39  MOV ECX,dword ptr [EBP + 0x8]
007e6e3c  MOV EDX,dword ptr [EBP + -0x20]
007e6e3f  MOV dword ptr [ECX + 0x6],EDX
007e6e42  MOVZX EAX,word ptr [EBP + -0x10]
007e6e46  MOVZX ECX,word ptr [EBP + -0x14]
007e6e4a  OR EAX,ECX
007e6e4c  MOV EDX,dword ptr [EBP + 0x8]
007e6e4f  MOV word ptr [EDX + 0xa],AX
007e6e53  MOV ECX,dword ptr [EBP + -0x1c]
007e6e56  CALL 0x007d6cb0
007e6e5b  MOV ESP,EBP
007e6e5d  POP EBP
007e6e5e  RET
