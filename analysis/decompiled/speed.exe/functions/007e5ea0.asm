007e5ea0  PUSH EBP
007e5ea1  MOV EBP,ESP
007e5ea3  SUB ESP,0x78
007e5ea6  MOV EAX,[0x00906980]
007e5eab  MOV dword ptr [EBP + -0x28],EAX
007e5eae  MOV word ptr [EBP + -0x5c],0x4d10
007e5eb4  MOV word ptr [EBP + -0x44],0x4d
007e5eba  MOV word ptr [EBP + -0x6c],0x9a
007e5ec0  MOV dword ptr [EBP + -0x68],0x134312f4
007e5ec7  MOV byte ptr [EBP + -0x40],0xcc
007e5ecb  MOV byte ptr [EBP + -0x3f],0xcc
007e5ecf  MOV byte ptr [EBP + -0x3e],0xcc
007e5ed3  MOV byte ptr [EBP + -0x3d],0xcc
007e5ed7  MOV byte ptr [EBP + -0x3c],0xcc
007e5edb  MOV byte ptr [EBP + -0x3b],0xcc
007e5edf  MOV byte ptr [EBP + -0x3a],0xcc
007e5ee3  MOV byte ptr [EBP + -0x39],0xcc
007e5ee7  MOV byte ptr [EBP + -0x38],0xcc
007e5eeb  MOV byte ptr [EBP + -0x37],0xcc
007e5eef  MOV byte ptr [EBP + -0x36],0xfb
007e5ef3  MOV byte ptr [EBP + -0x35],0x3f
007e5ef7  MOV dword ptr [EBP + -0x20],0x1
007e5efe  MOV AX,word ptr [EBP + 0x10]
007e5f02  MOV word ptr [EBP + -0x10],AX
007e5f06  MOV ECX,dword ptr [EBP + 0xc]
007e5f09  MOV dword ptr [EBP + -0x24],ECX
007e5f0c  MOV EDX,dword ptr [EBP + 0x8]
007e5f0f  MOV dword ptr [EBP + -0x70],EDX
007e5f12  MOVZX EAX,word ptr [EBP + -0x10]
007e5f16  AND EAX,0x8000
007e5f1b  MOV word ptr [EBP + -0x4c],AX
007e5f1f  MOVZX ECX,word ptr [EBP + -0x10]
007e5f23  AND ECX,0x7fff
007e5f29  MOV word ptr [EBP + -0x10],CX
007e5f2d  MOVZX EDX,word ptr [EBP + -0x4c]
007e5f31  TEST EDX,EDX
007e5f33  JZ 0x007e5f3e
007e5f35  MOV EAX,dword ptr [EBP + 0x1c]
007e5f38  MOV byte ptr [EAX + 0x2],0x2d
007e5f3c  JMP 0x007e5f45
007e5f3e  MOV ECX,dword ptr [EBP + 0x1c]
007e5f41  MOV byte ptr [ECX + 0x2],0x20
007e5f45  MOVZX EDX,word ptr [EBP + -0x10]
007e5f49  TEST EDX,EDX
007e5f4b  JNZ 0x007e5f87
007e5f4d  CMP dword ptr [EBP + -0x24],0x0
007e5f51  JNZ 0x007e5f87
007e5f53  CMP dword ptr [EBP + -0x70],0x0
007e5f57  JNZ 0x007e5f87
007e5f59  MOV EAX,dword ptr [EBP + 0x1c]
007e5f5c  MOV word ptr [EAX],0x0
007e5f61  MOV ECX,dword ptr [EBP + 0x1c]
007e5f64  MOV byte ptr [ECX + 0x2],0x20
007e5f68  MOV EDX,dword ptr [EBP + 0x1c]
007e5f6b  MOV byte ptr [EDX + 0x3],0x1
007e5f6f  MOV EAX,dword ptr [EBP + 0x1c]
007e5f72  MOV byte ptr [EAX + 0x4],0x30
007e5f76  MOV ECX,dword ptr [EBP + 0x1c]
007e5f79  MOV byte ptr [ECX + 0x5],0x0
007e5f7d  MOV EAX,0x1
007e5f82  JMP 0x007e636e
007e5f87  MOVZX EDX,word ptr [EBP + -0x10]
007e5f8b  CMP EDX,0x7fff
007e5f91  JNZ 0x007e6075
007e5f97  MOV EAX,dword ptr [EBP + 0x1c]
007e5f9a  MOV word ptr [EAX],0x1
007e5f9f  CMP dword ptr [EBP + -0x24],0x80000000
007e5fa6  JNZ 0x007e5fae
007e5fa8  CMP dword ptr [EBP + -0x70],0x0
007e5fac  JZ 0x007e5fe0
007e5fae  MOV ECX,dword ptr [EBP + -0x24]
007e5fb1  AND ECX,0x40000000
007e5fb7  JNZ 0x007e5fe0
007e5fb9  PUSH 0x8bf13c
007e5fbe  MOV EDX,dword ptr [EBP + 0x1c]
007e5fc1  ADD EDX,0x4
007e5fc4  PUSH EDX
007e5fc5  CALL 0x007d0bd0
007e5fca  ADD ESP,0x8
007e5fcd  MOV EAX,dword ptr [EBP + 0x1c]
007e5fd0  MOV byte ptr [EAX + 0x3],0x6
007e5fd4  MOV dword ptr [EBP + -0x20],0x0
007e5fdb  JMP 0x007e6070
007e5fe0  MOVZX ECX,word ptr [EBP + -0x4c]
007e5fe4  TEST ECX,ECX
007e5fe6  JZ 0x007e601b
007e5fe8  CMP dword ptr [EBP + -0x24],0xc0000000
007e5fef  JNZ 0x007e601b
007e5ff1  CMP dword ptr [EBP + -0x70],0x0
007e5ff5  JNZ 0x007e601b
007e5ff7  PUSH 0x8bf134
007e5ffc  MOV EDX,dword ptr [EBP + 0x1c]
007e5fff  ADD EDX,0x4
007e6002  PUSH EDX
007e6003  CALL 0x007d0bd0
007e6008  ADD ESP,0x8
007e600b  MOV EAX,dword ptr [EBP + 0x1c]
007e600e  MOV byte ptr [EAX + 0x3],0x5
007e6012  MOV dword ptr [EBP + -0x20],0x0
007e6019  JMP 0x007e6070
007e601b  CMP dword ptr [EBP + -0x24],0x80000000
007e6022  JNZ 0x007e604e
007e6024  CMP dword ptr [EBP + -0x70],0x0
007e6028  JNZ 0x007e604e
007e602a  PUSH 0x8bf12c
007e602f  MOV ECX,dword ptr [EBP + 0x1c]
007e6032  ADD ECX,0x4
007e6035  PUSH ECX
007e6036  CALL 0x007d0bd0
007e603b  ADD ESP,0x8
007e603e  MOV EDX,dword ptr [EBP + 0x1c]
007e6041  MOV byte ptr [EDX + 0x3],0x5
007e6045  MOV dword ptr [EBP + -0x20],0x0
007e604c  JMP 0x007e6070
007e604e  PUSH 0x8bf124
007e6053  MOV EAX,dword ptr [EBP + 0x1c]
007e6056  ADD EAX,0x4
007e6059  PUSH EAX
007e605a  CALL 0x007d0bd0
007e605f  ADD ESP,0x8
007e6062  MOV ECX,dword ptr [EBP + 0x1c]
007e6065  MOV byte ptr [ECX + 0x3],0x6
007e6069  MOV dword ptr [EBP + -0x20],0x0
007e6070  JMP 0x007e636b
007e6075  MOVZX EDX,word ptr [EBP + -0x10]
007e6079  SAR EDX,0x8
007e607c  MOV word ptr [EBP + -0x60],DX
007e6080  MOVZX EAX,word ptr [EBP + -0x10]
007e6084  AND EAX,0xff
007e6089  MOV word ptr [EBP + -0x74],AX
007e608d  MOV ECX,dword ptr [EBP + -0x24]
007e6090  SHR ECX,0x18
007e6093  MOV word ptr [EBP + -0x48],CX
007e6097  MOVZX EDX,word ptr [EBP + -0x5c]
007e609b  MOVZX EAX,word ptr [EBP + -0x10]
007e609f  IMUL EDX,EAX
007e60a2  MOVZX ECX,word ptr [EBP + -0x44]
007e60a6  MOVZX EAX,word ptr [EBP + -0x60]
007e60aa  IMUL ECX,EAX
007e60ad  ADD EDX,ECX
007e60af  MOVZX ECX,word ptr [EBP + -0x6c]
007e60b3  MOVZX EAX,word ptr [EBP + -0x48]
007e60b7  IMUL ECX,EAX
007e60ba  ADD EDX,ECX
007e60bc  SUB EDX,dword ptr [EBP + -0x68]
007e60bf  MOV dword ptr [EBP + -0x64],EDX
007e60c2  MOV ECX,dword ptr [EBP + -0x64]
007e60c5  SAR ECX,0x10
007e60c8  MOV word ptr [EBP + -0xc],CX
007e60cc  MOV DX,word ptr [EBP + -0x10]
007e60d0  MOV word ptr [EBP + -0x4e],DX
007e60d4  MOV EAX,dword ptr [EBP + -0x24]
007e60d7  MOV dword ptr [EBP + -0x52],EAX
007e60da  MOV ECX,dword ptr [EBP + -0x70]
007e60dd  MOV dword ptr [EBP + -0x56],ECX
007e60e0  MOV word ptr [EBP + -0x58],0x0
007e60e6  PUSH 0x1
007e60e8  MOVSX EDX,word ptr [EBP + -0xc]
007e60ec  NEG EDX
007e60ee  PUSH EDX
007e60ef  LEA EAX,[EBP + -0x58]
007e60f2  PUSH EAX
007e60f3  CALL 0x007e6e60
007e60f8  ADD ESP,0xc
007e60fb  MOVZX ECX,word ptr [EBP + -0x4e]
007e60ff  CMP ECX,0x3fff
007e6105  JL 0x007e6123
007e6107  MOV DX,word ptr [EBP + -0xc]
007e610b  ADD DX,0x1
007e610f  MOV word ptr [EBP + -0xc],DX
007e6113  LEA EAX,[EBP + -0x40]
007e6116  PUSH EAX
007e6117  LEA ECX,[EBP + -0x58]
007e611a  PUSH ECX
007e611b  CALL 0x007e6a70
007e6120  ADD ESP,0x8
007e6123  MOV EDX,dword ptr [EBP + 0x1c]
007e6126  MOV AX,word ptr [EBP + -0xc]
007e612a  MOV word ptr [EDX],AX
007e612d  MOV ECX,dword ptr [EBP + 0x18]
007e6130  AND ECX,0x1
007e6133  JZ 0x007e6173
007e6135  MOVSX EDX,word ptr [EBP + -0xc]
007e6139  ADD EDX,dword ptr [EBP + 0x14]
007e613c  MOV dword ptr [EBP + 0x14],EDX
007e613f  CMP dword ptr [EBP + 0x14],0x0
007e6143  JG 0x007e6173
007e6145  MOV EAX,dword ptr [EBP + 0x1c]
007e6148  MOV word ptr [EAX],0x0
007e614d  MOV ECX,dword ptr [EBP + 0x1c]
007e6150  MOV byte ptr [ECX + 0x2],0x20
007e6154  MOV EDX,dword ptr [EBP + 0x1c]
007e6157  MOV byte ptr [EDX + 0x3],0x1
007e615b  MOV EAX,dword ptr [EBP + 0x1c]
007e615e  MOV byte ptr [EAX + 0x4],0x30
007e6162  MOV ECX,dword ptr [EBP + 0x1c]
007e6165  MOV byte ptr [ECX + 0x5],0x0
007e6169  MOV EAX,0x1
007e616e  JMP 0x007e636e
007e6173  CMP dword ptr [EBP + 0x14],0x15
007e6177  JLE 0x007e6180
007e6179  MOV dword ptr [EBP + 0x14],0x15
007e6180  MOVZX EDX,word ptr [EBP + -0x4e]
007e6184  SUB EDX,0x3ffe
007e618a  MOV dword ptr [EBP + -0x14],EDX
007e618d  MOV word ptr [EBP + -0x4e],0x0
007e6193  MOV dword ptr [EBP + -0x18],0x0
007e619a  JMP 0x007e61a5
007e619c  MOV EAX,dword ptr [EBP + -0x18]
007e619f  ADD EAX,0x1
007e61a2  MOV dword ptr [EBP + -0x18],EAX
007e61a5  CMP dword ptr [EBP + -0x18],0x8
007e61a9  JGE 0x007e61b9
007e61ab  LEA ECX,[EBP + -0x58]
007e61ae  PUSH ECX
007e61af  CALL 0x007e5c80
007e61b4  ADD ESP,0x4
007e61b7  JMP 0x007e619c
007e61b9  CMP dword ptr [EBP + -0x14],0x0
007e61bd  JGE 0x007e61ec
007e61bf  MOV EDX,dword ptr [EBP + -0x14]
007e61c2  NEG EDX
007e61c4  AND EDX,0xff
007e61ca  MOV dword ptr [EBP + -0x78],EDX
007e61cd  JMP 0x007e61d8
007e61cf  MOV EAX,dword ptr [EBP + -0x78]
007e61d2  SUB EAX,0x1
007e61d5  MOV dword ptr [EBP + -0x78],EAX
007e61d8  CMP dword ptr [EBP + -0x78],0x0
007e61dc  JLE 0x007e61ec
007e61de  LEA ECX,[EBP + -0x58]
007e61e1  PUSH ECX
007e61e2  CALL 0x007e5ce0
007e61e7  ADD ESP,0x4
007e61ea  JMP 0x007e61cf
007e61ec  MOV EDX,dword ptr [EBP + 0x1c]
007e61ef  ADD EDX,0x4
007e61f2  MOV dword ptr [EBP + -0x4],EDX
007e61f5  MOV EAX,dword ptr [EBP + 0x14]
007e61f8  ADD EAX,0x1
007e61fb  MOV dword ptr [EBP + -0x8],EAX
007e61fe  JMP 0x007e6209
007e6200  MOV ECX,dword ptr [EBP + -0x8]
007e6203  SUB ECX,0x1
007e6206  MOV dword ptr [EBP + -0x8],ECX
007e6209  CMP dword ptr [EBP + -0x8],0x0
007e620d  JLE 0x007e6270
007e620f  MOV EDX,dword ptr [EBP + -0x58]
007e6212  MOV dword ptr [EBP + -0x34],EDX
007e6215  MOV EAX,dword ptr [EBP + -0x54]
007e6218  MOV dword ptr [EBP + -0x30],EAX
007e621b  MOV ECX,dword ptr [EBP + -0x50]
007e621e  MOV dword ptr [EBP + -0x2c],ECX
007e6221  LEA EDX,[EBP + -0x58]
007e6224  PUSH EDX
007e6225  CALL 0x007e5c80
007e622a  ADD ESP,0x4
007e622d  LEA EAX,[EBP + -0x58]
007e6230  PUSH EAX
007e6231  CALL 0x007e5c80
007e6236  ADD ESP,0x4
007e6239  LEA ECX,[EBP + -0x34]
007e623c  PUSH ECX
007e623d  LEA EDX,[EBP + -0x58]
007e6240  PUSH EDX
007e6241  CALL 0x007e5bd0
007e6246  ADD ESP,0x8
007e6249  LEA EAX,[EBP + -0x58]
007e624c  PUSH EAX
007e624d  CALL 0x007e5c80
007e6252  ADD ESP,0x4
007e6255  MOVZX ECX,byte ptr [EBP + -0x4d]
007e6259  ADD ECX,0x30
007e625c  MOV EDX,dword ptr [EBP + -0x4]
007e625f  MOV byte ptr [EDX],CL
007e6261  MOV EAX,dword ptr [EBP + -0x4]
007e6264  ADD EAX,0x1
007e6267  MOV dword ptr [EBP + -0x4],EAX
007e626a  MOV byte ptr [EBP + -0x4d],0x0
007e626e  JMP 0x007e6200
007e6270  MOV ECX,dword ptr [EBP + -0x4]
007e6273  SUB ECX,0x1
007e6276  MOV dword ptr [EBP + -0x4],ECX
007e6279  MOV EDX,dword ptr [EBP + -0x4]
007e627c  MOV AL,byte ptr [EDX]
007e627e  MOV byte ptr [EBP + -0x19],AL
007e6281  MOV ECX,dword ptr [EBP + -0x4]
007e6284  SUB ECX,0x1
007e6287  MOV dword ptr [EBP + -0x4],ECX
007e628a  MOVSX EDX,byte ptr [EBP + -0x19]
007e628e  CMP EDX,0x35
007e6291  JL 0x007e62ef
007e6293  JMP 0x007e629e
007e6295  MOV EAX,dword ptr [EBP + -0x4]
007e6298  SUB EAX,0x1
007e629b  MOV dword ptr [EBP + -0x4],EAX
007e629e  MOV ECX,dword ptr [EBP + 0x1c]
007e62a1  ADD ECX,0x4
007e62a4  CMP dword ptr [EBP + -0x4],ECX
007e62a7  JC 0x007e62bc
007e62a9  MOV EDX,dword ptr [EBP + -0x4]
007e62ac  MOVSX EAX,byte ptr [EDX]
007e62af  CMP EAX,0x39
007e62b2  JNZ 0x007e62bc
007e62b4  MOV ECX,dword ptr [EBP + -0x4]
007e62b7  MOV byte ptr [ECX],0x30
007e62ba  JMP 0x007e6295
007e62bc  MOV EDX,dword ptr [EBP + 0x1c]
007e62bf  ADD EDX,0x4
007e62c2  CMP dword ptr [EBP + -0x4],EDX
007e62c5  JNC 0x007e62e0
007e62c7  MOV EAX,dword ptr [EBP + -0x4]
007e62ca  ADD EAX,0x1
007e62cd  MOV dword ptr [EBP + -0x4],EAX
007e62d0  MOV ECX,dword ptr [EBP + 0x1c]
007e62d3  MOV DX,word ptr [ECX]
007e62d6  ADD DX,0x1
007e62da  MOV EAX,dword ptr [EBP + 0x1c]
007e62dd  MOV word ptr [EAX],DX
007e62e0  MOV ECX,dword ptr [EBP + -0x4]
007e62e3  MOV DL,byte ptr [ECX]
007e62e5  ADD DL,0x1
007e62e8  MOV EAX,dword ptr [EBP + -0x4]
007e62eb  MOV byte ptr [EAX],DL
007e62ed  JMP 0x007e6348
007e62ef  JMP 0x007e62fa
007e62f1  MOV ECX,dword ptr [EBP + -0x4]
007e62f4  SUB ECX,0x1
007e62f7  MOV dword ptr [EBP + -0x4],ECX
007e62fa  MOV EDX,dword ptr [EBP + 0x1c]
007e62fd  ADD EDX,0x4
007e6300  CMP dword ptr [EBP + -0x4],EDX
007e6303  JC 0x007e6312
007e6305  MOV EAX,dword ptr [EBP + -0x4]
007e6308  MOVSX ECX,byte ptr [EAX]
007e630b  CMP ECX,0x30
007e630e  JNZ 0x007e6312
007e6310  JMP 0x007e62f1
007e6312  MOV EDX,dword ptr [EBP + 0x1c]
007e6315  ADD EDX,0x4
007e6318  CMP dword ptr [EBP + -0x4],EDX
007e631b  JNC 0x007e6348
007e631d  MOV EAX,dword ptr [EBP + 0x1c]
007e6320  MOV word ptr [EAX],0x0
007e6325  MOV ECX,dword ptr [EBP + 0x1c]
007e6328  MOV byte ptr [ECX + 0x2],0x20
007e632c  MOV EDX,dword ptr [EBP + 0x1c]
007e632f  MOV byte ptr [EDX + 0x3],0x1
007e6333  MOV EAX,dword ptr [EBP + 0x1c]
007e6336  MOV byte ptr [EAX + 0x4],0x30
007e633a  MOV ECX,dword ptr [EBP + 0x1c]
007e633d  MOV byte ptr [ECX + 0x5],0x0
007e6341  MOV EAX,0x1
007e6346  JMP 0x007e636e
007e6348  MOV EDX,dword ptr [EBP + 0x1c]
007e634b  ADD EDX,0x4
007e634e  MOV EAX,dword ptr [EBP + -0x4]
007e6351  SUB EAX,EDX
007e6353  ADD EAX,0x1
007e6356  MOV ECX,dword ptr [EBP + 0x1c]
007e6359  MOV byte ptr [ECX + 0x3],AL
007e635c  MOV EDX,dword ptr [EBP + 0x1c]
007e635f  MOVSX EAX,byte ptr [EDX + 0x3]
007e6363  MOV ECX,dword ptr [EBP + 0x1c]
007e6366  MOV byte ptr [ECX + EAX*0x1 + 0x4],0x0
007e636b  MOV EAX,dword ptr [EBP + -0x20]
007e636e  MOV ECX,dword ptr [EBP + -0x28]
007e6371  CALL 0x007d6cb0
007e6376  MOV ESP,EBP
007e6378  POP EBP
007e6379  RET
