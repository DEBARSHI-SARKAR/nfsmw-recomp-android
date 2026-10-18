007d7cb0  PUSH EBP
007d7cb1  MOV EBP,ESP
007d7cb3  SUB ESP,0x5c
007d7cb6  MOV EAX,[0x00906980]
007d7cbb  MOV dword ptr [EBP + -0x4],EAX
007d7cbe  MOV byte ptr [EBP + -0x24],0x0
007d7cc2  MOV byte ptr [EBP + -0x23],0x0
007d7cc6  MOV byte ptr [EBP + -0x22],0x0
007d7cca  MOV byte ptr [EBP + -0x21],0x0
007d7cce  MOV byte ptr [EBP + -0x20],0x0
007d7cd2  MOV byte ptr [EBP + -0x1f],0x0
007d7cd6  MOV byte ptr [EBP + -0x1e],0xf0
007d7cda  MOV byte ptr [EBP + -0x1d],0x7f
007d7cde  MOV byte ptr [EBP + -0x1c],0xff
007d7ce2  MOV byte ptr [EBP + -0x1b],0xff
007d7ce6  MOV byte ptr [EBP + -0x1a],0xff
007d7cea  MOV byte ptr [EBP + -0x19],0xff
007d7cee  MOV byte ptr [EBP + -0x18],0xff
007d7cf2  MOV byte ptr [EBP + -0x17],0xff
007d7cf6  MOV byte ptr [EBP + -0x16],0xef
007d7cfa  MOV byte ptr [EBP + -0x15],0x7f
007d7cfe  MOV byte ptr [EBP + -0x14],0x0
007d7d02  MOV byte ptr [EBP + -0x13],0x0
007d7d06  MOV byte ptr [EBP + -0x12],0x0
007d7d0a  MOV byte ptr [EBP + -0x11],0x0
007d7d0e  MOV byte ptr [EBP + -0x10],0x0
007d7d12  MOV byte ptr [EBP + -0xf],0x0
007d7d16  MOV byte ptr [EBP + -0xe],0x0
007d7d1a  MOV byte ptr [EBP + -0xd],0x0
007d7d1e  MOV byte ptr [EBP + -0x58],0x0
007d7d22  MOV byte ptr [EBP + -0x57],0x0
007d7d26  MOV byte ptr [EBP + -0x56],0x0
007d7d2a  MOV byte ptr [EBP + -0x55],0x0
007d7d2e  MOV byte ptr [EBP + -0x54],0x0
007d7d32  MOV byte ptr [EBP + -0x53],0x0
007d7d36  MOV byte ptr [EBP + -0x52],0xf0
007d7d3a  MOV byte ptr [EBP + -0x51],0xff
007d7d3e  MOV byte ptr [EBP + -0xc],0xff
007d7d42  MOV byte ptr [EBP + -0xb],0xff
007d7d46  MOV byte ptr [EBP + -0xa],0xff
007d7d4a  MOV byte ptr [EBP + -0x9],0xff
007d7d4e  MOV byte ptr [EBP + -0x8],0xff
007d7d52  MOV byte ptr [EBP + -0x7],0xff
007d7d56  MOV byte ptr [EBP + -0x6],0xef
007d7d5a  MOV byte ptr [EBP + -0x5],0xff
007d7d5e  MOV byte ptr [EBP + -0x2c],0x0
007d7d62  MOV byte ptr [EBP + -0x2b],0x0
007d7d66  MOV byte ptr [EBP + -0x2a],0x0
007d7d6a  MOV byte ptr [EBP + -0x29],0x0
007d7d6e  MOV byte ptr [EBP + -0x28],0x0
007d7d72  MOV byte ptr [EBP + -0x27],0x0
007d7d76  MOV byte ptr [EBP + -0x26],0x0
007d7d7a  MOV byte ptr [EBP + -0x25],0x80
007d7d7e  MOV EAX,dword ptr [EBP + 0x14]
007d7d81  MOV dword ptr [EBP + -0x5c],EAX
007d7d84  CMP dword ptr [EBP + -0x5c],0xa1
007d7d8b  JG 0x007d7dbe
007d7d8d  CMP dword ptr [EBP + -0x5c],0xa1
007d7d94  JZ 0x007d82c7
007d7d9a  MOV ECX,dword ptr [EBP + -0x5c]
007d7d9d  SUB ECX,0x2
007d7da0  MOV dword ptr [EBP + -0x5c],ECX
007d7da3  CMP dword ptr [EBP + -0x5c],0x1b
007d7da7  JA 0x007d8645
007d7dad  MOV EDX,dword ptr [EBP + -0x5c]
007d7db0  MOVZX EAX,byte ptr [EDX + 0x7d8685]
007d7db7  JMP dword ptr [EAX*0x4 + 0x7d8651]
007d7dbe  CMP dword ptr [EBP + -0x5c],0x3ea
007d7dc5  JG 0x007d7e35
007d7dc7  CMP dword ptr [EBP + -0x5c],0x3ea
007d7dce  JZ 0x007d8423
007d7dd4  CMP dword ptr [EBP + -0x5c],0xab
007d7ddb  JG 0x007d7e16
007d7ddd  CMP dword ptr [EBP + -0x5c],0xab
007d7de4  JZ 0x007d8229
007d7dea  CMP dword ptr [EBP + -0x5c],0xa2
007d7df1  JZ 0x007d8278
007d7df7  CMP dword ptr [EBP + -0x5c],0xa6
007d7dfe  JZ 0x007d8316
007d7e04  CMP dword ptr [EBP + -0x5c],0xaa
007d7e0b  JZ 0x007d81da
007d7e11  JMP 0x007d8645
007d7e16  CMP dword ptr [EBP + -0x5c],0x3e8
007d7e1d  JZ 0x007d8365
007d7e23  CMP dword ptr [EBP + -0x5c],0x3e9
007d7e2a  JZ 0x007d83c4
007d7e30  JMP 0x007d8645
007d7e35  MOV ECX,dword ptr [EBP + -0x5c]
007d7e38  SUB ECX,0x3eb
007d7e3e  MOV dword ptr [EBP + -0x5c],ECX
007d7e41  CMP dword ptr [EBP + -0x5c],0x4
007d7e45  JA 0x007d8645
007d7e4b  MOV EDX,dword ptr [EBP + -0x5c]
007d7e4e  JMP dword ptr [EDX*0x4 + 0x7d86a1]
007d7e55  MOV dword ptr [EBP + -0x50],0x2
007d7e5c  MOV dword ptr [EBP + -0x4c],0x8a35a4
007d7e63  MOV EAX,dword ptr [EBP + 0x8]
007d7e66  FLD double ptr [EAX]
007d7e68  FSTP double ptr [EBP + -0x48]
007d7e6b  MOV ECX,dword ptr [EBP + 0xc]
007d7e6e  FLD double ptr [ECX]
007d7e70  FSTP double ptr [EBP + -0x40]
007d7e73  MOV EDX,dword ptr [EBP + 0x10]
007d7e76  FLD double ptr [EDX]
007d7e78  FSTP double ptr [EBP + -0x38]
007d7e7b  LEA EAX,[EBP + -0x50]
007d7e7e  PUSH EAX
007d7e7f  CALL dword ptr [0x00906cd0]
007d7e85  ADD ESP,0x4
007d7e88  TEST EAX,EAX
007d7e8a  JNZ 0x007d7e97
007d7e8c  CALL 0x007cb270
007d7e91  MOV dword ptr [EAX],0x22
007d7e97  MOV ECX,dword ptr [EBP + 0x10]
007d7e9a  FLD double ptr [EBP + -0x38]
007d7e9d  FSTP double ptr [ECX]
007d7e9f  JMP 0x007d8645
007d7ea4  MOV dword ptr [EBP + -0x50],0x1
007d7eab  MOV dword ptr [EBP + -0x4c],0x8a35a4
007d7eb2  MOV EDX,dword ptr [EBP + 0x8]
007d7eb5  FLD double ptr [EDX]
007d7eb7  FSTP double ptr [EBP + -0x48]
007d7eba  MOV EAX,dword ptr [EBP + 0xc]
007d7ebd  FLD double ptr [EAX]
007d7ebf  FSTP double ptr [EBP + -0x40]
007d7ec2  MOV ECX,dword ptr [EBP + 0x10]
007d7ec5  FLD double ptr [ECX]
007d7ec7  FSTP double ptr [EBP + -0x38]
007d7eca  LEA EDX,[EBP + -0x50]
007d7ecd  PUSH EDX
007d7ece  CALL dword ptr [0x00906cd0]
007d7ed4  ADD ESP,0x4
007d7ed7  TEST EAX,EAX
007d7ed9  JNZ 0x007d7ee6
007d7edb  CALL 0x007cb270
007d7ee0  MOV dword ptr [EAX],0x21
007d7ee6  MOV EAX,dword ptr [EBP + 0x10]
007d7ee9  FLD double ptr [EBP + -0x38]
007d7eec  FSTP double ptr [EAX]
007d7eee  JMP 0x007d8645
007d7ef3  MOV dword ptr [EBP + -0x50],0x2
007d7efa  MOV dword ptr [EBP + -0x4c],0x8a359c
007d7f01  MOV ECX,dword ptr [EBP + 0x8]
007d7f04  FLD double ptr [ECX]
007d7f06  FSTP double ptr [EBP + -0x48]
007d7f09  MOV EDX,dword ptr [EBP + 0xc]
007d7f0c  FLD double ptr [EDX]
007d7f0e  FSTP double ptr [EBP + -0x40]
007d7f11  MOV EAX,dword ptr [EBP + 0x10]
007d7f14  FLD double ptr [EAX]
007d7f16  FSTP double ptr [EBP + -0x38]
007d7f19  LEA ECX,[EBP + -0x50]
007d7f1c  PUSH ECX
007d7f1d  CALL dword ptr [0x00906cd0]
007d7f23  ADD ESP,0x4
007d7f26  TEST EAX,EAX
007d7f28  JNZ 0x007d7f35
007d7f2a  CALL 0x007cb270
007d7f2f  MOV dword ptr [EAX],0x22
007d7f35  MOV EDX,dword ptr [EBP + 0x10]
007d7f38  FLD double ptr [EBP + -0x38]
007d7f3b  FSTP double ptr [EDX]
007d7f3d  JMP 0x007d8645
007d7f42  MOV dword ptr [EBP + -0x50],0x1
007d7f49  MOV dword ptr [EBP + -0x4c],0x8a359c
007d7f50  MOV EAX,dword ptr [EBP + 0x8]
007d7f53  FLD double ptr [EAX]
007d7f55  FSTP double ptr [EBP + -0x48]
007d7f58  MOV ECX,dword ptr [EBP + 0xc]
007d7f5b  FLD double ptr [ECX]
007d7f5d  FSTP double ptr [EBP + -0x40]
007d7f60  MOV EDX,dword ptr [EBP + 0x10]
007d7f63  FLD double ptr [EDX]
007d7f65  FSTP double ptr [EBP + -0x38]
007d7f68  LEA EAX,[EBP + -0x50]
007d7f6b  PUSH EAX
007d7f6c  CALL dword ptr [0x00906cd0]
007d7f72  ADD ESP,0x4
007d7f75  TEST EAX,EAX
007d7f77  JNZ 0x007d7f84
007d7f79  CALL 0x007cb270
007d7f7e  MOV dword ptr [EAX],0x21
007d7f84  MOV ECX,dword ptr [EBP + 0x10]
007d7f87  FLD double ptr [EBP + -0x38]
007d7f8a  FSTP double ptr [ECX]
007d7f8c  JMP 0x007d8645
007d7f91  MOV dword ptr [EBP + -0x50],0x3
007d7f98  MOV dword ptr [EBP + -0x4c],0x8a35a8
007d7f9f  MOV EDX,dword ptr [EBP + 0x8]
007d7fa2  FLD double ptr [EDX]
007d7fa4  FSTP double ptr [EBP + -0x48]
007d7fa7  MOV EAX,dword ptr [EBP + 0xc]
007d7faa  FLD double ptr [EAX]
007d7fac  FSTP double ptr [EBP + -0x40]
007d7faf  MOV ECX,dword ptr [EBP + 0x10]
007d7fb2  FLD double ptr [ECX]
007d7fb4  FSTP double ptr [EBP + -0x38]
007d7fb7  LEA EDX,[EBP + -0x50]
007d7fba  PUSH EDX
007d7fbb  CALL dword ptr [0x00906cd0]
007d7fc1  ADD ESP,0x4
007d7fc4  TEST EAX,EAX
007d7fc6  JNZ 0x007d7fd3
007d7fc8  CALL 0x007cb270
007d7fcd  MOV dword ptr [EAX],0x22
007d7fd3  MOV EAX,dword ptr [EBP + 0x10]
007d7fd6  FLD double ptr [EBP + -0x38]
007d7fd9  FSTP double ptr [EAX]
007d7fdb  JMP 0x007d8645
007d7fe0  MOV dword ptr [EBP + -0x50],0x4
007d7fe7  MOV dword ptr [EBP + -0x4c],0x8a35a8
007d7fee  MOV ECX,dword ptr [EBP + 0x8]
007d7ff1  FLD double ptr [ECX]
007d7ff3  FSTP double ptr [EBP + -0x48]
007d7ff6  MOV EDX,dword ptr [EBP + 0xc]
007d7ff9  FLD double ptr [EDX]
007d7ffb  FSTP double ptr [EBP + -0x40]
007d7ffe  MOV EAX,dword ptr [EBP + 0x10]
007d8001  FLD double ptr [EAX]
007d8003  FSTP double ptr [EBP + -0x38]
007d8006  LEA ECX,[EBP + -0x50]
007d8009  PUSH ECX
007d800a  CALL dword ptr [0x00906cd0]
007d8010  ADD ESP,0x4
007d8013  MOV EDX,dword ptr [EBP + 0x10]
007d8016  FLD double ptr [EBP + -0x38]
007d8019  FSTP double ptr [EDX]
007d801b  JMP 0x007d8645
007d8020  MOV dword ptr [EBP + -0x50],0x1
007d8027  MOV dword ptr [EBP + -0x4c],0x8a3594
007d802e  MOV EAX,dword ptr [EBP + 0x10]
007d8031  FLD double ptr [0x008942e8]
007d8037  FSTP double ptr [EAX]
007d8039  JMP 0x007d8645
007d803e  MOV dword ptr [EBP + -0x50],0x3
007d8045  MOV dword ptr [EBP + -0x4c],0x8a3594
007d804c  MOV ECX,dword ptr [EBP + 0x8]
007d804f  FLD double ptr [ECX]
007d8051  FSTP double ptr [EBP + -0x48]
007d8054  MOV EDX,dword ptr [EBP + 0xc]
007d8057  FLD double ptr [EDX]
007d8059  FSTP double ptr [EBP + -0x40]
007d805c  MOV EAX,dword ptr [EBP + 0x10]
007d805f  FLD double ptr [EAX]
007d8061  FSTP double ptr [EBP + -0x38]
007d8064  LEA ECX,[EBP + -0x50]
007d8067  PUSH ECX
007d8068  CALL dword ptr [0x00906cd0]
007d806e  ADD ESP,0x4
007d8071  TEST EAX,EAX
007d8073  JNZ 0x007d8080
007d8075  CALL 0x007cb270
007d807a  MOV dword ptr [EAX],0x22
007d8080  MOV EDX,dword ptr [EBP + 0x10]
007d8083  FLD double ptr [EBP + -0x38]
007d8086  FSTP double ptr [EDX]
007d8088  JMP 0x007d8645
007d808d  MOV dword ptr [EBP + -0x50],0x4
007d8094  MOV dword ptr [EBP + -0x4c],0x8a3594
007d809b  MOV EAX,dword ptr [EBP + 0x8]
007d809e  FLD double ptr [EAX]
007d80a0  FSTP double ptr [EBP + -0x48]
007d80a3  MOV ECX,dword ptr [EBP + 0xc]
007d80a6  FLD double ptr [ECX]
007d80a8  FSTP double ptr [EBP + -0x40]
007d80ab  MOV EDX,dword ptr [EBP + 0x10]
007d80ae  FLD double ptr [EDX]
007d80b0  FSTP double ptr [EBP + -0x38]
007d80b3  LEA EAX,[EBP + -0x50]
007d80b6  PUSH EAX
007d80b7  CALL dword ptr [0x00906cd0]
007d80bd  ADD ESP,0x4
007d80c0  MOV ECX,dword ptr [EBP + 0x10]
007d80c3  FLD double ptr [EBP + -0x38]
007d80c6  FSTP double ptr [ECX]
007d80c8  JMP 0x007d8645
007d80cd  MOV dword ptr [EBP + -0x50],0x2
007d80d4  MOV dword ptr [EBP + -0x4c],0x8a3594
007d80db  MOV EDX,dword ptr [EBP + 0x8]
007d80de  FLD double ptr [EDX]
007d80e0  FSTP double ptr [EBP + -0x48]
007d80e3  MOV EAX,dword ptr [EBP + 0xc]
007d80e6  FLD double ptr [EAX]
007d80e8  FSTP double ptr [EBP + -0x40]
007d80eb  MOV ECX,dword ptr [EBP + 0x10]
007d80ee  FLD double ptr [ECX]
007d80f0  FSTP double ptr [EBP + -0x38]
007d80f3  LEA EDX,[EBP + -0x50]
007d80f6  PUSH EDX
007d80f7  CALL dword ptr [0x00906cd0]
007d80fd  ADD ESP,0x4
007d8100  TEST EAX,EAX
007d8102  JNZ 0x007d810f
007d8104  CALL 0x007cb270
007d8109  MOV dword ptr [EAX],0x22
007d810f  MOV EAX,dword ptr [EBP + 0x10]
007d8112  FLD double ptr [EBP + -0x38]
007d8115  FSTP double ptr [EAX]
007d8117  JMP 0x007d8645
007d811c  MOV dword ptr [EBP + -0x50],0x1
007d8123  MOV dword ptr [EBP + -0x4c],0x8a3594
007d812a  MOV ECX,dword ptr [EBP + 0x8]
007d812d  FLD double ptr [ECX]
007d812f  FSTP double ptr [EBP + -0x48]
007d8132  MOV EDX,dword ptr [EBP + 0xc]
007d8135  FLD double ptr [EDX]
007d8137  FSTP double ptr [EBP + -0x40]
007d813a  MOV EAX,dword ptr [EBP + 0x10]
007d813d  FLD double ptr [EAX]
007d813f  FSTP double ptr [EBP + -0x38]
007d8142  LEA ECX,[EBP + -0x50]
007d8145  PUSH ECX
007d8146  CALL dword ptr [0x00906cd0]
007d814c  ADD ESP,0x4
007d814f  TEST EAX,EAX
007d8151  JNZ 0x007d815e
007d8153  CALL 0x007cb270
007d8158  MOV dword ptr [EAX],0x21
007d815e  MOV EDX,dword ptr [EBP + 0x10]
007d8161  FLD double ptr [EBP + -0x38]
007d8164  FSTP double ptr [EDX]
007d8166  JMP 0x007d8645
007d816b  MOV dword ptr [EBP + -0x50],0x1
007d8172  MOV dword ptr [EBP + -0x4c],0x8a3594
007d8179  MOV EAX,dword ptr [EBP + 0x8]
007d817c  FLD double ptr [EAX]
007d817e  FSTP double ptr [EBP + -0x48]
007d8181  MOV ECX,dword ptr [EBP + 0xc]
007d8184  FLD double ptr [ECX]
007d8186  FSTP double ptr [EBP + -0x48]
007d8189  MOV EDX,dword ptr [EBP + 0x8]
007d818c  FLD double ptr [EDX]
007d818e  FMUL double ptr [0x008942e8]
007d8194  MOV EAX,dword ptr [EBP + 0x10]
007d8197  FSTP double ptr [EAX]
007d8199  MOV ECX,dword ptr [EBP + 0x8]
007d819c  FLD double ptr [ECX]
007d819e  FSTP double ptr [EBP + -0x48]
007d81a1  MOV EDX,dword ptr [EBP + 0xc]
007d81a4  FLD double ptr [EDX]
007d81a6  FSTP double ptr [EBP + -0x40]
007d81a9  MOV EAX,dword ptr [EBP + 0x10]
007d81ac  FLD double ptr [EAX]
007d81ae  FSTP double ptr [EBP + -0x38]
007d81b1  LEA ECX,[EBP + -0x50]
007d81b4  PUSH ECX
007d81b5  CALL dword ptr [0x00906cd0]
007d81bb  ADD ESP,0x4
007d81be  TEST EAX,EAX
007d81c0  JNZ 0x007d81cd
007d81c2  CALL 0x007cb270
007d81c7  MOV dword ptr [EAX],0x21
007d81cd  MOV EDX,dword ptr [EBP + 0x10]
007d81d0  FLD double ptr [EBP + -0x38]
007d81d3  FSTP double ptr [EDX]
007d81d5  JMP 0x007d8645
007d81da  MOV dword ptr [EBP + -0x50],0x2
007d81e1  MOV dword ptr [EBP + -0x4c],0x8bd2f0
007d81e8  MOV EAX,dword ptr [EBP + 0x8]
007d81eb  FLD double ptr [EAX]
007d81ed  FSTP double ptr [EBP + -0x48]
007d81f0  MOV ECX,dword ptr [EBP + 0xc]
007d81f3  FLD double ptr [ECX]
007d81f5  FSTP double ptr [EBP + -0x40]
007d81f8  MOV EDX,dword ptr [EBP + 0x10]
007d81fb  FLD double ptr [EDX]
007d81fd  FSTP double ptr [EBP + -0x38]
007d8200  LEA EAX,[EBP + -0x50]
007d8203  PUSH EAX
007d8204  CALL dword ptr [0x00906cd0]
007d820a  ADD ESP,0x4
007d820d  TEST EAX,EAX
007d820f  JNZ 0x007d821c
007d8211  CALL 0x007cb270
007d8216  MOV dword ptr [EAX],0x22
007d821c  MOV ECX,dword ptr [EBP + 0x10]
007d821f  FLD double ptr [EBP + -0x38]
007d8222  FSTP double ptr [ECX]
007d8224  JMP 0x007d8645
007d8229  MOV dword ptr [EBP + -0x50],0x1
007d8230  MOV dword ptr [EBP + -0x4c],0x8bd2f0
007d8237  MOV EDX,dword ptr [EBP + 0x8]
007d823a  FLD double ptr [EDX]
007d823c  FSTP double ptr [EBP + -0x48]
007d823f  MOV EAX,dword ptr [EBP + 0xc]
007d8242  FLD double ptr [EAX]
007d8244  FSTP double ptr [EBP + -0x40]
007d8247  MOV ECX,dword ptr [EBP + 0x10]
007d824a  FLD double ptr [ECX]
007d824c  FSTP double ptr [EBP + -0x38]
007d824f  LEA EDX,[EBP + -0x50]
007d8252  PUSH EDX
007d8253  CALL dword ptr [0x00906cd0]
007d8259  ADD ESP,0x4
007d825c  TEST EAX,EAX
007d825e  JNZ 0x007d826b
007d8260  CALL 0x007cb270
007d8265  MOV dword ptr [EAX],0x21
007d826b  MOV EAX,dword ptr [EBP + 0x10]
007d826e  FLD double ptr [EBP + -0x38]
007d8271  FSTP double ptr [EAX]
007d8273  JMP 0x007d8645
007d8278  MOV dword ptr [EBP + -0x50],0x4
007d827f  MOV dword ptr [EBP + -0x4c],0x8bd2e8
007d8286  MOV ECX,dword ptr [EBP + 0x8]
007d8289  FLD double ptr [ECX]
007d828b  FSTP double ptr [EBP + -0x48]
007d828e  MOV EDX,dword ptr [EBP + 0xc]
007d8291  FLD double ptr [EDX]
007d8293  FSTP double ptr [EBP + -0x40]
007d8296  MOV EAX,dword ptr [EBP + 0x10]
007d8299  FLD double ptr [EAX]
007d829b  FSTP double ptr [EBP + -0x38]
007d829e  LEA ECX,[EBP + -0x50]
007d82a1  PUSH ECX
007d82a2  CALL dword ptr [0x00906cd0]
007d82a8  ADD ESP,0x4
007d82ab  TEST EAX,EAX
007d82ad  JNZ 0x007d82ba
007d82af  CALL 0x007cb270
007d82b4  MOV dword ptr [EAX],0x22
007d82ba  MOV EDX,dword ptr [EBP + 0x10]
007d82bd  FLD double ptr [EBP + -0x38]
007d82c0  FSTP double ptr [EDX]
007d82c2  JMP 0x007d8645
007d82c7  MOV dword ptr [EBP + -0x50],0x3
007d82ce  MOV dword ptr [EBP + -0x4c],0x8bd2e8
007d82d5  MOV EAX,dword ptr [EBP + 0x8]
007d82d8  FLD double ptr [EAX]
007d82da  FSTP double ptr [EBP + -0x48]
007d82dd  MOV ECX,dword ptr [EBP + 0xc]
007d82e0  FLD double ptr [ECX]
007d82e2  FSTP double ptr [EBP + -0x40]
007d82e5  MOV EDX,dword ptr [EBP + 0x10]
007d82e8  FLD double ptr [EDX]
007d82ea  FSTP double ptr [EBP + -0x38]
007d82ed  LEA EAX,[EBP + -0x50]
007d82f0  PUSH EAX
007d82f1  CALL dword ptr [0x00906cd0]
007d82f7  ADD ESP,0x4
007d82fa  TEST EAX,EAX
007d82fc  JNZ 0x007d8309
007d82fe  CALL 0x007cb270
007d8303  MOV dword ptr [EAX],0x22
007d8309  MOV ECX,dword ptr [EBP + 0x10]
007d830c  FLD double ptr [EBP + -0x38]
007d830f  FSTP double ptr [ECX]
007d8311  JMP 0x007d8645
007d8316  MOV dword ptr [EBP + -0x50],0x3
007d831d  MOV dword ptr [EBP + -0x4c],0x8bd2e0
007d8324  MOV EDX,dword ptr [EBP + 0x8]
007d8327  FLD double ptr [EDX]
007d8329  FSTP double ptr [EBP + -0x48]
007d832c  MOV EAX,dword ptr [EBP + 0xc]
007d832f  FLD double ptr [EAX]
007d8331  FSTP double ptr [EBP + -0x40]
007d8334  MOV ECX,dword ptr [EBP + 0x10]
007d8337  FLD double ptr [ECX]
007d8339  FSTP double ptr [EBP + -0x38]
007d833c  LEA EDX,[EBP + -0x50]
007d833f  PUSH EDX
007d8340  CALL dword ptr [0x00906cd0]
007d8346  ADD ESP,0x4
007d8349  TEST EAX,EAX
007d834b  JNZ 0x007d8358
007d834d  CALL 0x007cb270
007d8352  MOV dword ptr [EAX],0x22
007d8358  MOV EAX,dword ptr [EBP + 0x10]
007d835b  FLD double ptr [EBP + -0x38]
007d835e  FSTP double ptr [EAX]
007d8360  JMP 0x007d8645
007d8365  MOV dword ptr [EBP + -0x50],0x1
007d836c  MOV dword ptr [EBP + -0x4c],0x8a35a4
007d8373  MOV ECX,dword ptr [EBP + 0x8]
007d8376  FLD double ptr [ECX]
007d8378  FMUL double ptr [0x008942e8]
007d837e  MOV EDX,dword ptr [EBP + 0x10]
007d8381  FSTP double ptr [EDX]
007d8383  MOV EAX,dword ptr [EBP + 0x8]
007d8386  FLD double ptr [EAX]
007d8388  FSTP double ptr [EBP + -0x48]
007d838b  MOV ECX,dword ptr [EBP + 0xc]
007d838e  FLD double ptr [ECX]
007d8390  FSTP double ptr [EBP + -0x40]
007d8393  MOV EDX,dword ptr [EBP + 0x10]
007d8396  FLD double ptr [EDX]
007d8398  FSTP double ptr [EBP + -0x38]
007d839b  LEA EAX,[EBP + -0x50]
007d839e  PUSH EAX
007d839f  CALL dword ptr [0x00906cd0]
007d83a5  ADD ESP,0x4
007d83a8  TEST EAX,EAX
007d83aa  JNZ 0x007d83b7
007d83ac  CALL 0x007cb270
007d83b1  MOV dword ptr [EAX],0x21
007d83b7  MOV ECX,dword ptr [EBP + 0x10]
007d83ba  FLD double ptr [EBP + -0x38]
007d83bd  FSTP double ptr [ECX]
007d83bf  JMP 0x007d8645
007d83c4  MOV dword ptr [EBP + -0x50],0x1
007d83cb  MOV dword ptr [EBP + -0x4c],0x8a359c
007d83d2  MOV EDX,dword ptr [EBP + 0x8]
007d83d5  FLD double ptr [EDX]
007d83d7  FMUL double ptr [0x008942e8]
007d83dd  MOV EAX,dword ptr [EBP + 0x10]
007d83e0  FSTP double ptr [EAX]
007d83e2  MOV ECX,dword ptr [EBP + 0x8]
007d83e5  FLD double ptr [ECX]
007d83e7  FSTP double ptr [EBP + -0x48]
007d83ea  MOV EDX,dword ptr [EBP + 0xc]
007d83ed  FLD double ptr [EDX]
007d83ef  FSTP double ptr [EBP + -0x40]
007d83f2  MOV EAX,dword ptr [EBP + 0x10]
007d83f5  FLD double ptr [EAX]
007d83f7  FSTP double ptr [EBP + -0x38]
007d83fa  LEA ECX,[EBP + -0x50]
007d83fd  PUSH ECX
007d83fe  CALL dword ptr [0x00906cd0]
007d8404  ADD ESP,0x4
007d8407  TEST EAX,EAX
007d8409  JNZ 0x007d8416
007d840b  CALL 0x007cb270
007d8410  MOV dword ptr [EAX],0x21
007d8416  MOV EDX,dword ptr [EBP + 0x10]
007d8419  FLD double ptr [EBP + -0x38]
007d841c  FSTP double ptr [EDX]
007d841e  JMP 0x007d8645
007d8423  MOV dword ptr [EBP + -0x50],0x1
007d842a  MOV dword ptr [EBP + -0x4c],0x8a35a8
007d8431  MOV EAX,dword ptr [EBP + 0x8]
007d8434  FLD double ptr [EAX]
007d8436  FMUL double ptr [0x008942e8]
007d843c  MOV ECX,dword ptr [EBP + 0x10]
007d843f  FSTP double ptr [ECX]
007d8441  MOV EDX,dword ptr [EBP + 0x8]
007d8444  FLD double ptr [EDX]
007d8446  FSTP double ptr [EBP + -0x48]
007d8449  MOV EAX,dword ptr [EBP + 0xc]
007d844c  FLD double ptr [EAX]
007d844e  FSTP double ptr [EBP + -0x40]
007d8451  MOV ECX,dword ptr [EBP + 0x10]
007d8454  FLD double ptr [ECX]
007d8456  FSTP double ptr [EBP + -0x38]
007d8459  LEA EDX,[EBP + -0x50]
007d845c  PUSH EDX
007d845d  CALL dword ptr [0x00906cd0]
007d8463  ADD ESP,0x4
007d8466  TEST EAX,EAX
007d8468  JNZ 0x007d8475
007d846a  CALL 0x007cb270
007d846f  MOV dword ptr [EAX],0x21
007d8475  MOV EAX,dword ptr [EBP + 0x10]
007d8478  FLD double ptr [EBP + -0x38]
007d847b  FSTP double ptr [EAX]
007d847d  JMP 0x007d8645
007d8482  MOV dword ptr [EBP + -0x50],0x1
007d8489  MOV dword ptr [EBP + -0x4c],0x8a35cc
007d8490  MOV ECX,dword ptr [EBP + 0x8]
007d8493  FLD double ptr [ECX]
007d8495  FMUL double ptr [0x008942e8]
007d849b  MOV EDX,dword ptr [EBP + 0x10]
007d849e  FSTP double ptr [EDX]
007d84a0  MOV EAX,dword ptr [EBP + 0x8]
007d84a3  FLD double ptr [EAX]
007d84a5  FSTP double ptr [EBP + -0x48]
007d84a8  MOV ECX,dword ptr [EBP + 0xc]
007d84ab  FLD double ptr [ECX]
007d84ad  FSTP double ptr [EBP + -0x40]
007d84b0  MOV EDX,dword ptr [EBP + 0x10]
007d84b3  FLD double ptr [EDX]
007d84b5  FSTP double ptr [EBP + -0x38]
007d84b8  LEA EAX,[EBP + -0x50]
007d84bb  PUSH EAX
007d84bc  CALL dword ptr [0x00906cd0]
007d84c2  ADD ESP,0x4
007d84c5  TEST EAX,EAX
007d84c7  JNZ 0x007d84d4
007d84c9  CALL 0x007cb270
007d84ce  MOV dword ptr [EAX],0x21
007d84d4  MOV ECX,dword ptr [EBP + 0x10]
007d84d7  FLD double ptr [EBP + -0x38]
007d84da  FSTP double ptr [ECX]
007d84dc  JMP 0x007d8645
007d84e1  MOV dword ptr [EBP + -0x50],0x1
007d84e8  MOV dword ptr [EBP + -0x4c],0x8a3584
007d84ef  MOV EDX,dword ptr [EBP + 0x8]
007d84f2  FLD double ptr [EDX]
007d84f4  FMUL double ptr [0x008942e8]
007d84fa  MOV EAX,dword ptr [EBP + 0x10]
007d84fd  FSTP double ptr [EAX]
007d84ff  MOV ECX,dword ptr [EBP + 0x8]
007d8502  FLD double ptr [ECX]
007d8504  FSTP double ptr [EBP + -0x48]
007d8507  MOV EDX,dword ptr [EBP + 0xc]
007d850a  FLD double ptr [EDX]
007d850c  FSTP double ptr [EBP + -0x40]
007d850f  MOV EAX,dword ptr [EBP + 0x10]
007d8512  FLD double ptr [EAX]
007d8514  FSTP double ptr [EBP + -0x38]
007d8517  LEA ECX,[EBP + -0x50]
007d851a  PUSH ECX
007d851b  CALL dword ptr [0x00906cd0]
007d8521  ADD ESP,0x4
007d8524  TEST EAX,EAX
007d8526  JNZ 0x007d8533
007d8528  CALL 0x007cb270
007d852d  MOV dword ptr [EAX],0x21
007d8533  MOV EDX,dword ptr [EBP + 0x10]
007d8536  FLD double ptr [EBP + -0x38]
007d8539  FSTP double ptr [EDX]
007d853b  JMP 0x007d8645
007d8540  MOV dword ptr [EBP + -0x50],0x1
007d8547  MOV dword ptr [EBP + -0x4c],0x8a3578
007d854e  MOV EAX,dword ptr [EBP + 0x8]
007d8551  FLD double ptr [EAX]
007d8553  FMUL double ptr [0x008942e8]
007d8559  MOV ECX,dword ptr [EBP + 0x10]
007d855c  FSTP double ptr [ECX]
007d855e  MOV EDX,dword ptr [EBP + 0x8]
007d8561  FLD double ptr [EDX]
007d8563  FSTP double ptr [EBP + -0x48]
007d8566  MOV EAX,dword ptr [EBP + 0xc]
007d8569  FLD double ptr [EAX]
007d856b  FSTP double ptr [EBP + -0x40]
007d856e  MOV ECX,dword ptr [EBP + 0x10]
007d8571  FLD double ptr [ECX]
007d8573  FSTP double ptr [EBP + -0x38]
007d8576  LEA EDX,[EBP + -0x50]
007d8579  PUSH EDX
007d857a  CALL dword ptr [0x00906cd0]
007d8580  ADD ESP,0x4
007d8583  TEST EAX,EAX
007d8585  JNZ 0x007d8592
007d8587  CALL 0x007cb270
007d858c  MOV dword ptr [EAX],0x21
007d8592  MOV EAX,dword ptr [EBP + 0x10]
007d8595  FLD double ptr [EBP + -0x38]
007d8598  FSTP double ptr [EAX]
007d859a  JMP 0x007d8645
007d859f  MOV dword ptr [EBP + -0x50],0x1
007d85a6  MOV dword ptr [EBP + -0x4c],0x8a3594
007d85ad  MOV ECX,dword ptr [EBP + 0x8]
007d85b0  FLD double ptr [ECX]
007d85b2  FSTP double ptr [EBP + -0x48]
007d85b5  MOV EDX,dword ptr [EBP + 0xc]
007d85b8  FLD double ptr [EDX]
007d85ba  FSTP double ptr [EBP + -0x40]
007d85bd  MOV EAX,dword ptr [EBP + 0x10]
007d85c0  FLD double ptr [EAX]
007d85c2  FSTP double ptr [EBP + -0x38]
007d85c5  LEA ECX,[EBP + -0x50]
007d85c8  PUSH ECX
007d85c9  CALL dword ptr [0x00906cd0]
007d85cf  ADD ESP,0x4
007d85d2  TEST EAX,EAX
007d85d4  JNZ 0x007d85e1
007d85d6  CALL 0x007cb270
007d85db  MOV dword ptr [EAX],0x21
007d85e1  MOV EDX,dword ptr [EBP + 0x10]
007d85e4  FLD double ptr [EBP + -0x38]
007d85e7  FSTP double ptr [EDX]
007d85e9  JMP 0x007d8645
007d85eb  MOV dword ptr [EBP + -0x50],0x1
007d85f2  MOV dword ptr [EBP + -0x4c],0x8bd2d8
007d85f9  MOV EAX,dword ptr [EBP + 0x8]
007d85fc  FLD double ptr [EAX]
007d85fe  FMUL double ptr [0x008942e8]
007d8604  MOV ECX,dword ptr [EBP + 0x10]
007d8607  FSTP double ptr [ECX]
007d8609  MOV EDX,dword ptr [EBP + 0x8]
007d860c  FLD double ptr [EDX]
007d860e  FSTP double ptr [EBP + -0x48]
007d8611  MOV EAX,dword ptr [EBP + 0xc]
007d8614  FLD double ptr [EAX]
007d8616  FSTP double ptr [EBP + -0x40]
007d8619  MOV ECX,dword ptr [EBP + 0x10]
007d861c  FLD double ptr [ECX]
007d861e  FSTP double ptr [EBP + -0x38]
007d8621  LEA EDX,[EBP + -0x50]
007d8624  PUSH EDX
007d8625  CALL dword ptr [0x00906cd0]
007d862b  ADD ESP,0x4
007d862e  TEST EAX,EAX
007d8630  JNZ 0x007d863d
007d8632  CALL 0x007cb270
007d8637  MOV dword ptr [EAX],0x21
007d863d  MOV EAX,dword ptr [EBP + 0x10]
007d8640  FLD double ptr [EBP + -0x38]
007d8643  FSTP double ptr [EAX]
007d8645  MOV ECX,dword ptr [EBP + -0x4]
007d8648  CALL 0x007d6cb0
007d864d  MOV ESP,EBP
007d864f  POP EBP
007d8650  RET
