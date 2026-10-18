007d3790  PUSH EBP
007d3791  MOV EBP,ESP
007d3793  SUB ESP,0x1cc
007d3799  MOV EAX,[0x00906980]
007d379e  MOV dword ptr [EBP + -0x4],EAX
007d37a1  MOV EAX,dword ptr [EBP + 0x8]
007d37a4  PUSH EAX
007d37a5  LEA ECX,[EBP + 0xffffff50]
007d37ab  PUSH ECX
007d37ac  LEA EDX,[EBP + 0xffffff54]
007d37b2  PUSH EDX
007d37b3  LEA EAX,[EBP + 0xffffff70]
007d37b9  PUSH EAX
007d37ba  MOV ECX,dword ptr [EBP + 0xc]
007d37bd  PUSH ECX
007d37be  CALL 0x007d3c70
007d37c3  ADD ESP,0x14
007d37c6  TEST EAX,EAX
007d37c8  JNZ 0x007d37d1
007d37ca  XOR EAX,EAX
007d37cc  JMP 0x007d3b52
007d37d1  MOV EDX,dword ptr [EBP + 0x8]
007d37d4  IMUL EDX,EDX,0xc
007d37d7  MOV EAX,dword ptr [EDX + 0x906c7c]
007d37dd  PUSH EAX
007d37de  LEA ECX,[EBP + 0xffffff70]
007d37e4  PUSH ECX
007d37e5  CALL 0x007d1120
007d37ea  ADD ESP,0x8
007d37ed  TEST EAX,EAX
007d37ef  JNZ 0x007d3802
007d37f1  MOV EDX,dword ptr [EBP + 0x8]
007d37f4  IMUL EDX,EDX,0xc
007d37f7  MOV EAX,dword ptr [EDX + 0x906c7c]
007d37fd  JMP 0x007d3b52
007d3802  PUSH 0x2e2
007d3807  PUSH 0x8bd0cc
007d380c  PUSH 0x2
007d380e  LEA EAX,[EBP + 0xffffff70]
007d3814  PUSH EAX
007d3815  CALL 0x007d0cd0
007d381a  ADD ESP,0x4
007d381d  ADD EAX,0x1
007d3820  PUSH EAX
007d3821  CALL 0x007c6700
007d3826  ADD ESP,0x10
007d3829  MOV dword ptr [EBP + 0xffffff5c],EAX
007d382f  CMP dword ptr [EBP + 0xffffff5c],0x0
007d3836  JNZ 0x007d383f
007d3838  XOR EAX,EAX
007d383a  JMP 0x007d3b52
007d383f  MOV ECX,dword ptr [EBP + 0x8]
007d3842  IMUL ECX,ECX,0xc
007d3845  MOV EDX,dword ptr [ECX + 0x906c7c]
007d384b  MOV dword ptr [EBP + 0xffffff48],EDX
007d3851  MOV EAX,dword ptr [EBP + 0x8]
007d3854  MOV ECX,dword ptr [EAX*0x4 + 0x9bad98]
007d385b  MOV dword ptr [EBP + 0xffffff4c],ECX
007d3861  PUSH 0x6
007d3863  MOV EDX,dword ptr [EBP + 0x8]
007d3866  IMUL EDX,EDX,0x6
007d3869  ADD EDX,0x9baf00
007d386f  PUSH EDX
007d3870  LEA EAX,[EBP + 0xfffffe40]
007d3876  PUSH EAX
007d3877  CALL 0x007d6d30
007d387c  ADD ESP,0xc
007d387f  MOV ECX,dword ptr [0x009badb0]
007d3885  MOV dword ptr [EBP + 0xffffff60],ECX
007d388b  LEA EDX,[EBP + 0xffffff70]
007d3891  PUSH EDX
007d3892  MOV EAX,dword ptr [EBP + 0xffffff5c]
007d3898  PUSH EAX
007d3899  CALL 0x007d0bd0
007d389e  ADD ESP,0x8
007d38a1  MOV ECX,dword ptr [EBP + 0x8]
007d38a4  IMUL ECX,ECX,0xc
007d38a7  MOV dword ptr [ECX + 0x906c7c],EAX
007d38ad  MOVZX EDX,word ptr [EBP + 0xffffff54]
007d38b4  MOV EAX,dword ptr [EBP + 0x8]
007d38b7  MOV dword ptr [EAX*0x4 + 0x9bad98],EDX
007d38be  PUSH 0x6
007d38c0  LEA ECX,[EBP + 0xffffff54]
007d38c6  PUSH ECX
007d38c7  MOV EDX,dword ptr [EBP + 0x8]
007d38ca  IMUL EDX,EDX,0x6
007d38cd  ADD EDX,0x9baf00
007d38d3  PUSH EDX
007d38d4  CALL 0x007d6d30
007d38d9  ADD ESP,0xc
007d38dc  CMP dword ptr [EBP + 0x8],0x2
007d38e0  JNZ 0x007d3ac5
007d38e6  MOV EAX,dword ptr [EBP + 0xffffff50]
007d38ec  MOV [0x009badb0],EAX
007d38f1  MOV ECX,dword ptr [0x00906b60]
007d38f7  MOV dword ptr [EBP + 0xfffffe34],ECX
007d38fd  MOV EDX,dword ptr [0x00906b64]
007d3903  MOV dword ptr [EBP + 0xfffffe38],EDX
007d3909  MOV dword ptr [EBP + 0xffffff6c],0x0
007d3913  JMP 0x007d3924
007d3915  MOV EAX,dword ptr [EBP + 0xffffff6c]
007d391b  ADD EAX,0x1
007d391e  MOV dword ptr [EBP + 0xffffff6c],EAX
007d3924  CMP dword ptr [EBP + 0xffffff6c],0x5
007d392b  JGE 0x007d39ee
007d3931  MOV ECX,dword ptr [EBP + 0xffffff6c]
007d3937  MOV EDX,dword ptr [0x009badb0]
007d393d  CMP EDX,dword ptr [ECX*0x8 + 0x906b40]
007d3944  JNZ 0x007d3991
007d3946  CMP dword ptr [EBP + 0xffffff6c],0x0
007d394d  JZ 0x007d398f
007d394f  MOV EAX,dword ptr [EBP + 0xffffff6c]
007d3955  MOV ECX,dword ptr [EAX*0x8 + 0x906b40]
007d395c  MOV EDX,dword ptr [EAX*0x8 + 0x906b44]
007d3963  MOV dword ptr [0x00906b40],ECX
007d3969  MOV dword ptr [0x00906b44],EDX
007d396f  MOV EAX,dword ptr [EBP + 0xffffff6c]
007d3975  MOV ECX,dword ptr [EBP + 0xfffffe34]
007d397b  MOV dword ptr [EAX*0x8 + 0x906b40],ECX
007d3982  MOV EDX,dword ptr [EBP + 0xfffffe38]
007d3988  MOV dword ptr [EAX*0x8 + 0x906b44],EDX
007d398f  JMP 0x007d39ee
007d3991  MOV EAX,dword ptr [EBP + 0xffffff6c]
007d3997  MOV ECX,dword ptr [EAX*0x8 + 0x906b40]
007d399e  MOV EDX,dword ptr [EAX*0x8 + 0x906b44]
007d39a5  MOV dword ptr [EBP + 0xffffff64],ECX
007d39ab  MOV dword ptr [EBP + 0xffffff68],EDX
007d39b1  MOV EAX,dword ptr [EBP + 0xffffff6c]
007d39b7  MOV ECX,dword ptr [EBP + 0xfffffe34]
007d39bd  MOV dword ptr [EAX*0x8 + 0x906b40],ECX
007d39c4  MOV EDX,dword ptr [EBP + 0xfffffe38]
007d39ca  MOV dword ptr [EAX*0x8 + 0x906b44],EDX
007d39d1  MOV EAX,dword ptr [EBP + 0xffffff64]
007d39d7  MOV dword ptr [EBP + 0xfffffe34],EAX
007d39dd  MOV ECX,dword ptr [EBP + 0xffffff68]
007d39e3  MOV dword ptr [EBP + 0xfffffe38],ECX
007d39e9  JMP 0x007d3915
007d39ee  CMP dword ptr [EBP + 0xffffff6c],0x5
007d39f5  JNZ 0x007d3ab9
007d39fb  PUSH 0x1
007d39fd  MOV EDX,dword ptr [0x009bada0]
007d3a03  PUSH EDX
007d3a04  MOV EAX,[0x009badb0]
007d3a09  PUSH EAX
007d3a0a  LEA ECX,[EBP + 0xfffffe48]
007d3a10  PUSH ECX
007d3a11  PUSH 0x7f
007d3a13  PUSH 0x8bd000
007d3a18  PUSH 0x1
007d3a1a  CALL 0x007e2560
007d3a1f  ADD ESP,0x1c
007d3a22  TEST EAX,EAX
007d3a24  JZ 0x007d3aa3
007d3a26  MOV dword ptr [EBP + 0xfffffe3c],0x0
007d3a30  JMP 0x007d3a41
007d3a32  MOV EDX,dword ptr [EBP + 0xfffffe3c]
007d3a38  ADD EDX,0x1
007d3a3b  MOV dword ptr [EBP + 0xfffffe3c],EDX
007d3a41  CMP dword ptr [EBP + 0xfffffe3c],0x7f
007d3a48  JNC 0x007d3a6e
007d3a4a  MOV EAX,dword ptr [EBP + 0xfffffe3c]
007d3a50  MOVSX ECX,word ptr [EBP + EAX*0x2 + 0xfffffe48]
007d3a58  AND ECX,0x1ff
007d3a5e  MOV EDX,dword ptr [EBP + 0xfffffe3c]
007d3a64  MOV word ptr [EBP + EDX*0x2 + 0xfffffe48],CX
007d3a6c  JMP 0x007d3a32
007d3a6e  PUSH 0xfe
007d3a73  PUSH 0x8bcf00
007d3a78  LEA EAX,[EBP + 0xfffffe48]
007d3a7e  PUSH EAX
007d3a7f  CALL 0x007e24a0
007d3a84  ADD ESP,0xc
007d3a87  TEST EAX,EAX
007d3a89  JNZ 0x007d3a97
007d3a8b  MOV dword ptr [0x00906b44],0x1
007d3a95  JMP 0x007d3aa1
007d3a97  MOV dword ptr [0x00906b44],0x0
007d3aa1  JMP 0x007d3aad
007d3aa3  MOV dword ptr [0x00906b44],0x0
007d3aad  MOV ECX,dword ptr [0x009badb0]
007d3ab3  MOV dword ptr [0x00906b40],ECX
007d3ab9  MOV EDX,dword ptr [0x00906b44]
007d3abf  MOV dword ptr [0x00906ff0],EDX
007d3ac5  CMP dword ptr [EBP + 0x8],0x1
007d3ac9  JNZ 0x007d3ad6
007d3acb  MOV EAX,dword ptr [EBP + 0xffffff50]
007d3ad1  MOV [0x009badb4],EAX
007d3ad6  MOV ECX,dword ptr [EBP + 0x8]
007d3ad9  IMUL ECX,ECX,0xc
007d3adc  CALL dword ptr [ECX + 0x906c80]
007d3ae2  TEST EAX,EAX
007d3ae4  JZ 0x007d3b29
007d3ae6  MOV EDX,dword ptr [EBP + 0x8]
007d3ae9  IMUL EDX,EDX,0xc
007d3aec  MOV EAX,dword ptr [EBP + 0xffffff48]
007d3af2  MOV dword ptr [EDX + 0x906c7c],EAX
007d3af8  PUSH 0x2
007d3afa  MOV ECX,dword ptr [EBP + 0xffffff5c]
007d3b00  PUSH ECX
007d3b01  CALL 0x007c7290
007d3b06  ADD ESP,0x8
007d3b09  MOV EDX,dword ptr [EBP + 0x8]
007d3b0c  MOV EAX,dword ptr [EBP + 0xffffff4c]
007d3b12  MOV dword ptr [EDX*0x4 + 0x9bad98],EAX
007d3b19  MOV ECX,dword ptr [EBP + 0xffffff60]
007d3b1f  MOV dword ptr [0x009badb0],ECX
007d3b25  XOR EAX,EAX
007d3b27  JMP 0x007d3b52
007d3b29  CMP dword ptr [EBP + 0xffffff48],0x906ae0
007d3b33  JZ 0x007d3b46
007d3b35  PUSH 0x2
007d3b37  MOV EDX,dword ptr [EBP + 0xffffff48]
007d3b3d  PUSH EDX
007d3b3e  CALL 0x007c7290
007d3b43  ADD ESP,0x8
007d3b46  MOV EAX,dword ptr [EBP + 0x8]
007d3b49  IMUL EAX,EAX,0xc
007d3b4c  MOV EAX,dword ptr [EAX + 0x906c7c]
007d3b52  MOV ECX,dword ptr [EBP + -0x4]
007d3b55  CALL 0x007d6cb0
007d3b5a  MOV ESP,EBP
007d3b5c  POP EBP
007d3b5d  RET
