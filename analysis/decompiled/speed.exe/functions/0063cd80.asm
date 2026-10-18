0063cd80  MOV EAX,[0x0091f150]
0063cd85  SUB ESP,0x240
0063cd8b  PUSH EBX
0063cd8c  PUSH EBP
0063cd8d  PUSH ESI
0063cd8e  XOR ESI,ESI
0063cd90  CMP EAX,ESI
0063cd92  PUSH EDI
0063cd93  MOV EDI,ECX
0063cd95  JZ 0x0063cded
0063cd97  LEA ECX,[EAX + 0x4]
0063cd9a  TEST ECX,ECX
0063cd9c  JZ 0x0063cded
0063cd9e  ADD EAX,0x114
0063cda3  CMP EAX,ESI
0063cda5  JZ 0x0063eac0
0063cdab  PUSH EAX
0063cdac  CALL 0x00460bc0
0063cdb1  ADD ESP,0x4
0063cdb4  CMP EAX,0x6006c8bc
0063cdb9  JA 0x0063de43
0063cdbf  JZ 0x0063de6a
0063cdc5  CMP EAX,0x3f5996e0
0063cdca  JA 0x0063d615
0063cdd0  JZ 0x0063d202
0063cdd6  CMP EAX,0x2829b425
0063cddb  JZ 0x0063cdf4
0063cddd  CMP EAX,0x2e19c5a5
0063cde2  JZ 0x0063de6a
0063cde8  JMP 0x0063eac0
0063cded  MOV EAX,0x890978
0063cdf2  JMP 0x0063cdab
0063cdf4  MOV EAX,0x2
0063cdf9  MOV ECX,0x3
0063cdfe  MOV EDI,0x4
0063ce03  MOV EBX,0x5
0063ce08  MOV EDX,0x1
0063ce0d  MOV dword ptr [ESP + 0x10],EAX
0063ce11  MOV dword ptr [ESP + 0x14],ESI
0063ce15  MOV dword ptr [ESP + 0x18],EDX
0063ce19  MOV dword ptr [ESP + 0x1c],ESI
0063ce1d  MOV dword ptr [ESP + 0x20],ESI
0063ce21  MOV dword ptr [ESP + 0x24],ESI
0063ce25  MOV dword ptr [ESP + 0x28],EAX
0063ce29  MOV dword ptr [ESP + 0x2c],ESI
0063ce2d  MOV dword ptr [ESP + 0x30],ESI
0063ce31  MOV dword ptr [ESP + 0x34],ESI
0063ce35  MOV dword ptr [ESP + 0x38],ESI
0063ce39  MOV dword ptr [ESP + 0x3c],ESI
0063ce3d  MOV dword ptr [ESP + 0x40],EDI
0063ce41  MOV dword ptr [ESP + 0x44],ESI
0063ce45  MOV dword ptr [ESP + 0x48],ESI
0063ce49  MOV dword ptr [ESP + 0x4c],ESI
0063ce4d  MOV dword ptr [ESP + 0x50],ESI
0063ce51  MOV dword ptr [ESP + 0x54],ESI
0063ce55  MOV dword ptr [ESP + 0x58],EBX
0063ce59  MOV dword ptr [ESP + 0x5c],ESI
0063ce5d  MOV dword ptr [ESP + 0x60],ESI
0063ce61  MOV dword ptr [ESP + 0x64],ESI
0063ce65  MOV dword ptr [ESP + 0x68],ESI
0063ce69  MOV dword ptr [ESP + 0x6c],ESI
0063ce6d  MOV dword ptr [ESP + 0x70],EAX
0063ce71  MOV dword ptr [ESP + 0x74],ESI
0063ce75  MOV dword ptr [ESP + 0x78],0x6
0063ce7d  MOV dword ptr [ESP + 0x7c],ESI
0063ce81  MOV dword ptr [ESP + 0x80],ESI
0063ce88  MOV dword ptr [ESP + 0x84],ESI
0063ce8f  MOV dword ptr [ESP + 0x88],EAX
0063ce96  MOV dword ptr [ESP + 0x8c],ESI
0063ce9d  MOV dword ptr [ESP + 0x90],EDI
0063cea4  MOV dword ptr [ESP + 0x94],ESI
0063ceab  MOV dword ptr [ESP + 0x98],ESI
0063ceb2  MOV dword ptr [ESP + 0x9c],ESI
0063ceb9  MOV dword ptr [ESP + 0xa0],EAX
0063cec0  MOV dword ptr [ESP + 0xa4],ESI
0063cec7  MOV dword ptr [ESP + 0xa8],0x7
0063ced2  MOV dword ptr [ESP + 0xac],ESI
0063ced9  MOV dword ptr [ESP + 0xb0],ESI
0063cee0  MOV dword ptr [ESP + 0xb4],ESI
0063cee7  MOV dword ptr [ESP + 0xb8],EAX
0063ceee  MOV dword ptr [ESP + 0xbc],ESI
0063cef5  MOV dword ptr [ESP + 0xc0],EAX
0063cefc  MOV dword ptr [ESP + 0xc4],ESI
0063cf03  MOV dword ptr [ESP + 0xc8],ESI
0063cf0a  MOV dword ptr [ESP + 0xcc],ESI
0063cf11  MOV dword ptr [ESP + 0xd0],EAX
0063cf18  MOV dword ptr [ESP + 0xd4],ESI
0063cf1f  MOV dword ptr [ESP + 0xd8],EBX
0063cf26  MOV dword ptr [ESP + 0xdc],ESI
0063cf2d  MOV dword ptr [ESP + 0xe0],ESI
0063cf34  MOV dword ptr [ESP + 0xe4],ESI
0063cf3b  MOV dword ptr [ESP + 0xe8],EAX
0063cf42  MOV dword ptr [ESP + 0xec],ESI
0063cf49  MOV dword ptr [ESP + 0xf0],ECX
0063cf50  MOV dword ptr [ESP + 0xf4],ESI
0063cf57  MOV dword ptr [ESP + 0xf8],ESI
0063cf5e  MOV dword ptr [ESP + 0xfc],ESI
0063cf65  MOV dword ptr [ESP + 0x100],ECX
0063cf6c  MOV dword ptr [ESP + 0x104],ESI
0063cf73  MOV dword ptr [ESP + 0x108],ESI
0063cf7a  MOV dword ptr [ESP + 0x10c],ESI
0063cf81  MOV dword ptr [ESP + 0x110],ESI
0063cf88  MOV dword ptr [ESP + 0x114],ESI
0063cf8f  MOV dword ptr [ESP + 0x118],ECX
0063cf96  MOV dword ptr [ESP + 0x11c],ESI
0063cf9d  MOV dword ptr [ESP + 0x120],EAX
0063cfa4  MOV dword ptr [ESP + 0x124],ESI
0063cfab  MOV dword ptr [ESP + 0x128],ESI
0063cfb2  MOV dword ptr [ESP + 0x12c],ESI
0063cfb9  MOV dword ptr [ESP + 0x130],ECX
0063cfc0  MOV dword ptr [ESP + 0x134],ESI
0063cfc7  MOV dword ptr [ESP + 0x138],ECX
0063cfce  MOV dword ptr [ESP + 0x13c],ESI
0063cfd5  MOV dword ptr [ESP + 0x150],EDX
0063cfdc  MOV dword ptr [ESP + 0x1f8],EDX
0063cfe3  MOV dword ptr [ESP + 0x21c],EDX
0063cfea  MOV dword ptr [ESP + 0x234],EDX
0063cff1  XOR EDX,EDX
0063cff3  MOV dword ptr [ESP + 0x238],EDX
0063cffa  MOV dword ptr [ESP + 0x23c],EDX
0063d001  MOV dword ptr [ESP + 0x240],EDX
0063d008  MOV dword ptr [ESP + 0x244],EDX
0063d00f  MOV dword ptr [ESP + 0x248],EDX
0063d016  MOV dword ptr [ESP + 0x148],ECX
0063d01d  MOV dword ptr [ESP + 0x1c0],EAX
0063d024  MOV dword ptr [ESP + 0x1d8],ECX
0063d02b  MOV dword ptr [ESP + 0x1e0],ECX
0063d032  MOV dword ptr [ESP + 0x1f0],ECX
0063d039  MOV dword ptr [ESP + 0x208],ECX
0063d040  MOV dword ptr [ESP + 0x220],ECX
0063d047  MOV dword ptr [ESP + 0x228],EAX
0063d04e  MOV dword ptr [ESP + 0x140],ESI
0063d055  MOV dword ptr [ESP + 0x144],ESI
0063d05c  MOV dword ptr [ESP + 0x14c],ESI
0063d063  MOV dword ptr [ESP + 0x154],ESI
0063d06a  MOV dword ptr [ESP + 0x158],ESI
0063d071  MOV dword ptr [ESP + 0x15c],ESI
0063d078  MOV dword ptr [ESP + 0x160],ESI
0063d07f  MOV dword ptr [ESP + 0x164],ESI
0063d086  MOV dword ptr [ESP + 0x168],ESI
0063d08d  MOV dword ptr [ESP + 0x16c],ESI
0063d094  MOV dword ptr [ESP + 0x170],ESI
0063d09b  MOV dword ptr [ESP + 0x174],ESI
0063d0a2  MOV dword ptr [ESP + 0x178],ESI
0063d0a9  MOV dword ptr [ESP + 0x17c],ESI
0063d0b0  MOV dword ptr [ESP + 0x180],ESI
0063d0b7  MOV dword ptr [ESP + 0x184],ESI
0063d0be  MOV dword ptr [ESP + 0x188],ESI
0063d0c5  MOV dword ptr [ESP + 0x18c],ESI
0063d0cc  MOV dword ptr [ESP + 0x190],ESI
0063d0d3  MOV dword ptr [ESP + 0x194],ESI
0063d0da  MOV dword ptr [ESP + 0x198],ESI
0063d0e1  MOV dword ptr [ESP + 0x19c],ESI
0063d0e8  MOV dword ptr [ESP + 0x1a0],ESI
0063d0ef  MOV dword ptr [ESP + 0x1a4],ESI
0063d0f6  MOV dword ptr [ESP + 0x1a8],ESI
0063d0fd  MOV dword ptr [ESP + 0x1ac],ESI
0063d104  MOV dword ptr [ESP + 0x1b0],ESI
0063d10b  MOV dword ptr [ESP + 0x1b4],ESI
0063d112  MOV dword ptr [ESP + 0x1b8],ESI
0063d119  MOV dword ptr [ESP + 0x1bc],ESI
0063d120  MOV dword ptr [ESP + 0x1c4],ESI
0063d127  MOV dword ptr [ESP + 0x1c8],0x8
0063d132  MOV dword ptr [ESP + 0x1cc],ESI
0063d139  MOV dword ptr [ESP + 0x1d0],ESI
0063d140  MOV dword ptr [ESP + 0x1d4],ESI
0063d147  MOV dword ptr [ESP + 0x1dc],ESI
0063d14e  MOV dword ptr [ESP + 0x1e4],EDI
0063d155  MOV dword ptr [ESP + 0x1e8],ESI
0063d15c  MOV dword ptr [ESP + 0x1ec],ESI
0063d163  MOV dword ptr [ESP + 0x1f4],ESI
0063d16a  MOV dword ptr [ESP + 0x1fc],EBX
0063d171  MOV dword ptr [ESP + 0x200],ESI
0063d178  MOV dword ptr [ESP + 0x204],ESI
0063d17f  MOV dword ptr [ESP + 0x20c],ESI
0063d186  MOV dword ptr [ESP + 0x210],ESI
0063d18d  MOV dword ptr [ESP + 0x214],EDI
0063d194  MOV dword ptr [ESP + 0x218],ESI
0063d19b  MOV dword ptr [ESP + 0x224],ESI
0063d1a2  MOV dword ptr [ESP + 0x22c],EBX
0063d1a9  MOV dword ptr [ESP + 0x230],ESI
0063d1b0  MOV dword ptr [ESP + 0x24c],EDX
0063d1b7  MOV EAX,0x91f440
0063d1bc  LEA ECX,[ESP + 0x1c]
0063d1c0  LEA EDX,[ECX + -0xc]
0063d1c3  MOV EDI,dword ptr [EDX]
0063d1c5  LEA ESI,[EAX + -0xc]
0063d1c8  MOV dword ptr [ESI],EDI
0063d1ca  MOV EDI,dword ptr [EDX + 0x4]
0063d1cd  MOV EDX,dword ptr [EDX + 0x8]
0063d1d0  MOV dword ptr [ESI + 0x4],EDI
0063d1d3  MOV dword ptr [ESI + 0x8],EDX
0063d1d6  MOV EDX,ECX
0063d1d8  MOV EDI,dword ptr [EDX]
0063d1da  MOV ESI,EAX
0063d1dc  MOV dword ptr [ESI],EDI
0063d1de  MOV EDI,dword ptr [EDX + 0x4]
0063d1e1  MOV EDX,dword ptr [EDX + 0x8]
0063d1e4  ADD EAX,0x34
0063d1e7  MOV dword ptr [ESI + 0x4],EDI
0063d1ea  ADD ECX,0x18
0063d1ed  CMP EAX,0x91f920
0063d1f2  MOV dword ptr [ESI + 0x8],EDX
0063d1f5  JL 0x0063d1c0
0063d1f7  POP EDI
0063d1f8  POP ESI
0063d1f9  POP EBP
0063d1fa  POP EBX
0063d1fb  ADD ESP,0x240
0063d201  RET
0063d202  MOV EAX,0x2
0063d207  MOV ECX,0x3
0063d20c  MOV EDX,0x1
0063d211  MOV EDI,0x4
0063d216  MOV EBX,0x5
0063d21b  MOV EBP,0x6
0063d220  MOV dword ptr [ESP + 0x10],EDI
0063d224  MOV dword ptr [ESP + 0x14],ESI
0063d228  MOV dword ptr [ESP + 0x18],EAX
0063d22c  MOV dword ptr [ESP + 0x1c],ESI
0063d230  MOV dword ptr [ESP + 0x20],ESI
0063d234  MOV dword ptr [ESP + 0x24],ESI
0063d238  MOV dword ptr [ESP + 0x28],EBX
0063d23c  MOV dword ptr [ESP + 0x2c],ESI
0063d240  MOV dword ptr [ESP + 0x30],EAX
0063d244  MOV dword ptr [ESP + 0x34],ESI
0063d248  MOV dword ptr [ESP + 0x38],ESI
0063d24c  MOV dword ptr [ESP + 0x3c],ESI
0063d250  MOV dword ptr [ESP + 0x40],EDI
0063d254  MOV dword ptr [ESP + 0x44],ESI
0063d258  MOV dword ptr [ESP + 0x48],ESI
0063d25c  MOV dword ptr [ESP + 0x4c],ESI
0063d260  MOV dword ptr [ESP + 0x50],ESI
0063d264  MOV dword ptr [ESP + 0x54],ESI
0063d268  MOV dword ptr [ESP + 0x58],EBX
0063d26c  MOV dword ptr [ESP + 0x5c],ESI
0063d270  MOV dword ptr [ESP + 0x60],ESI
0063d274  MOV dword ptr [ESP + 0x64],ESI
0063d278  MOV dword ptr [ESP + 0x68],ESI
0063d27c  MOV dword ptr [ESP + 0x6c],ESI
0063d280  MOV dword ptr [ESP + 0x70],EAX
0063d284  MOV dword ptr [ESP + 0x74],ESI
0063d288  MOV dword ptr [ESP + 0x78],ESI
0063d28c  MOV dword ptr [ESP + 0x7c],ESI
0063d290  MOV dword ptr [ESP + 0x80],ESI
0063d297  MOV dword ptr [ESP + 0x84],ESI
0063d29e  MOV dword ptr [ESP + 0x88],EAX
0063d2a5  MOV dword ptr [ESP + 0x8c],ESI
0063d2ac  MOV dword ptr [ESP + 0x90],EAX
0063d2b3  MOV dword ptr [ESP + 0x94],ESI
0063d2ba  MOV dword ptr [ESP + 0x98],ESI
0063d2c1  MOV dword ptr [ESP + 0x9c],ESI
0063d2c8  MOV dword ptr [ESP + 0xa0],EAX
0063d2cf  MOV dword ptr [ESP + 0xa4],ESI
0063d2d6  MOV dword ptr [ESP + 0xa8],EDX
0063d2dd  MOV dword ptr [ESP + 0xac],ESI
0063d2e4  MOV dword ptr [ESP + 0xb0],ESI
0063d2eb  MOV dword ptr [ESP + 0xb4],ESI
0063d2f2  MOV dword ptr [ESP + 0xb8],0x7
0063d2fd  MOV dword ptr [ESP + 0xbc],ESI
0063d304  MOV dword ptr [ESP + 0xc0],EDX
0063d30b  MOV dword ptr [ESP + 0xc4],ESI
0063d312  MOV dword ptr [ESP + 0xc8],ESI
0063d319  MOV dword ptr [ESP + 0xcc],ESI
0063d320  MOV dword ptr [ESP + 0xd0],EBP
0063d327  MOV dword ptr [ESP + 0xd4],ESI
0063d32e  MOV dword ptr [ESP + 0xd8],EDX
0063d335  MOV dword ptr [ESP + 0xdc],ESI
0063d33c  MOV dword ptr [ESP + 0xe0],ESI
0063d343  MOV dword ptr [ESP + 0xe4],ESI
0063d34a  MOV dword ptr [ESP + 0xe8],EAX
0063d351  MOV dword ptr [ESP + 0xec],ESI
0063d358  MOV dword ptr [ESP + 0xf0],EBP
0063d35f  MOV dword ptr [ESP + 0xf4],ESI
0063d366  MOV dword ptr [ESP + 0xf8],ESI
0063d36d  MOV dword ptr [ESP + 0xfc],ESI
0063d374  MOV dword ptr [ESP + 0x100],ECX
0063d37b  MOV dword ptr [ESP + 0x104],ESI
0063d382  MOV dword ptr [ESP + 0x108],ESI
0063d389  MOV dword ptr [ESP + 0x10c],ESI
0063d390  MOV dword ptr [ESP + 0x110],ESI
0063d397  MOV dword ptr [ESP + 0x114],ESI
0063d39e  MOV dword ptr [ESP + 0x118],ECX
0063d3a5  MOV dword ptr [ESP + 0x11c],ESI
0063d3ac  MOV dword ptr [ESP + 0x120],EAX
0063d3b3  MOV dword ptr [ESP + 0x124],ESI
0063d3ba  MOV dword ptr [ESP + 0x128],ESI
0063d3c1  MOV dword ptr [ESP + 0x12c],ESI
0063d3c8  MOV dword ptr [ESP + 0x130],ECX
0063d3cf  MOV dword ptr [ESP + 0x134],ESI
0063d3d6  MOV dword ptr [ESP + 0x138],ECX
0063d3dd  MOV dword ptr [ESP + 0x160],EAX
0063d3e4  MOV dword ptr [ESP + 0x178],EAX
0063d3eb  MOV dword ptr [ESP + 0x190],EAX
0063d3f2  MOV dword ptr [ESP + 0x1a8],EAX
0063d3f9  MOV dword ptr [ESP + 0x1c0],EAX
0063d400  MOV dword ptr [ESP + 0x228],EAX
0063d407  XOR EAX,EAX
0063d409  MOV dword ptr [ESP + 0x238],EAX
0063d410  MOV dword ptr [ESP + 0x23c],EAX
0063d417  MOV dword ptr [ESP + 0x240],EAX
0063d41e  MOV dword ptr [ESP + 0x244],EAX
0063d425  MOV dword ptr [ESP + 0x248],EAX
0063d42c  MOV dword ptr [ESP + 0x148],ECX
0063d433  MOV dword ptr [ESP + 0x198],ECX
0063d43a  MOV dword ptr [ESP + 0x1d8],ECX
0063d441  MOV dword ptr [ESP + 0x1e0],ECX
0063d448  MOV dword ptr [ESP + 0x1f0],ECX
0063d44f  MOV dword ptr [ESP + 0x208],ECX
0063d456  MOV dword ptr [ESP + 0x220],ECX
0063d45d  MOV dword ptr [ESP + 0x24c],EAX
0063d464  MOV dword ptr [ESP + 0x13c],ESI
0063d46b  MOV dword ptr [ESP + 0x140],ESI
0063d472  MOV dword ptr [ESP + 0x144],ESI
0063d479  MOV dword ptr [ESP + 0x14c],ESI
0063d480  MOV dword ptr [ESP + 0x150],EDX
0063d487  MOV dword ptr [ESP + 0x154],ESI
0063d48e  MOV dword ptr [ESP + 0x158],ESI
0063d495  MOV dword ptr [ESP + 0x15c],ESI
0063d49c  MOV dword ptr [ESP + 0x164],ESI
0063d4a3  MOV dword ptr [ESP + 0x168],0x8
0063d4ae  MOV dword ptr [ESP + 0x16c],ESI
0063d4b5  MOV dword ptr [ESP + 0x170],ESI
0063d4bc  MOV dword ptr [ESP + 0x174],ESI
0063d4c3  MOV dword ptr [ESP + 0x17c],ESI
0063d4ca  MOV dword ptr [ESP + 0x180],EDI
0063d4d1  MOV dword ptr [ESP + 0x184],ESI
0063d4d8  MOV dword ptr [ESP + 0x188],ESI
0063d4df  MOV dword ptr [ESP + 0x18c],ESI
0063d4e6  MOV dword ptr [ESP + 0x194],ESI
0063d4ed  MOV dword ptr [ESP + 0x19c],ESI
0063d4f4  MOV dword ptr [ESP + 0x1a0],ESI
0063d4fb  MOV dword ptr [ESP + 0x1a4],ESI
0063d502  MOV dword ptr [ESP + 0x1ac],ESI
0063d509  MOV dword ptr [ESP + 0x1b0],EBX
0063d510  MOV dword ptr [ESP + 0x1b4],ESI
0063d517  MOV dword ptr [ESP + 0x1b8],ESI
0063d51e  MOV dword ptr [ESP + 0x1bc],ESI
0063d525  MOV dword ptr [ESP + 0x1c4],ESI
0063d52c  MOV dword ptr [ESP + 0x1c8],0x7
0063d537  MOV dword ptr [ESP + 0x1cc],ESI
0063d53e  MOV dword ptr [ESP + 0x1d0],ESI
0063d545  MOV dword ptr [ESP + 0x1d4],ESI
0063d54c  MOV dword ptr [ESP + 0x1dc],ESI
0063d553  MOV dword ptr [ESP + 0x1e4],EDI
0063d55a  MOV dword ptr [ESP + 0x1e8],ESI
0063d561  MOV dword ptr [ESP + 0x1ec],ESI
0063d568  MOV dword ptr [ESP + 0x1f4],ESI
0063d56f  MOV dword ptr [ESP + 0x1f8],EDX
0063d576  MOV dword ptr [ESP + 0x1fc],EBX
0063d57d  MOV dword ptr [ESP + 0x200],ESI
0063d584  MOV dword ptr [ESP + 0x204],ESI
0063d58b  MOV dword ptr [ESP + 0x20c],ESI
0063d592  MOV dword ptr [ESP + 0x210],ESI
0063d599  MOV dword ptr [ESP + 0x214],EDI
0063d5a0  MOV dword ptr [ESP + 0x218],ESI
0063d5a7  MOV dword ptr [ESP + 0x21c],EDX
0063d5ae  MOV dword ptr [ESP + 0x224],ESI
0063d5b5  MOV dword ptr [ESP + 0x22c],EBX
0063d5bc  MOV dword ptr [ESP + 0x230],ESI
0063d5c3  MOV dword ptr [ESP + 0x234],EDX
0063d5ca  MOV EAX,0x91f440
0063d5cf  LEA ECX,[ESP + 0x1c]
0063d5d3  LEA EDX,[ECX + -0xc]
0063d5d6  MOV EDI,dword ptr [EDX]
0063d5d8  LEA ESI,[EAX + -0xc]
0063d5db  MOV dword ptr [ESI],EDI
0063d5dd  MOV EDI,dword ptr [EDX + 0x4]
0063d5e0  MOV EDX,dword ptr [EDX + 0x8]
0063d5e3  MOV dword ptr [ESI + 0x4],EDI
0063d5e6  MOV dword ptr [ESI + 0x8],EDX
0063d5e9  MOV EDX,ECX
0063d5eb  MOV EDI,dword ptr [EDX]
0063d5ed  MOV ESI,EAX
0063d5ef  MOV dword ptr [ESI],EDI
0063d5f1  MOV EDI,dword ptr [EDX + 0x4]
0063d5f4  MOV EDX,dword ptr [EDX + 0x8]
0063d5f7  ADD EAX,0x34
0063d5fa  MOV dword ptr [ESI + 0x4],EDI
0063d5fd  ADD ECX,0x18
0063d600  CMP EAX,0x91f920
0063d605  MOV dword ptr [ESI + 0x8],EDX
0063d608  JL 0x0063d5d3
0063d60a  POP EDI
0063d60b  POP ESI
0063d60c  POP EBP
0063d60d  POP EBX
0063d60e  ADD ESP,0x240
0063d614  RET
0063d615  CMP EAX,0x48c6c364
0063d61a  JZ 0x0063da42
0063d620  CMP EAX,0x5fb6ccba
0063d625  JNZ 0x0063eac0
0063d62b  MOV EAX,0x2
0063d630  MOV ECX,0x3
0063d635  MOV EDI,0x4
0063d63a  MOV EDX,0x1
0063d63f  MOV EBP,0x6
0063d644  MOV EBX,0x5
0063d649  MOV dword ptr [ESP + 0x10],EDI
0063d64d  MOV dword ptr [ESP + 0x14],ESI
0063d651  MOV dword ptr [ESP + 0x18],EDX
0063d655  MOV dword ptr [ESP + 0x1c],EAX
0063d659  MOV dword ptr [ESP + 0x20],ESI
0063d65d  MOV dword ptr [ESP + 0x24],ESI
0063d661  MOV dword ptr [ESP + 0x28],EBP
0063d665  MOV dword ptr [ESP + 0x2c],ESI
0063d669  MOV dword ptr [ESP + 0x30],EAX
0063d66d  MOV dword ptr [ESP + 0x34],EAX
0063d671  MOV dword ptr [ESP + 0x38],ESI
0063d675  MOV dword ptr [ESP + 0x3c],EAX
0063d679  MOV dword ptr [ESP + 0x40],EDI
0063d67d  MOV dword ptr [ESP + 0x44],ESI
0063d681  MOV dword ptr [ESP + 0x48],ESI
0063d685  MOV dword ptr [ESP + 0x4c],ESI
0063d689  MOV dword ptr [ESP + 0x50],ESI
0063d68d  MOV dword ptr [ESP + 0x54],ESI
0063d691  MOV dword ptr [ESP + 0x58],EBX
0063d695  MOV dword ptr [ESP + 0x5c],ESI
0063d699  MOV dword ptr [ESP + 0x60],ESI
0063d69d  MOV dword ptr [ESP + 0x64],ESI
0063d6a1  MOV dword ptr [ESP + 0x68],ESI
0063d6a5  MOV dword ptr [ESP + 0x6c],ESI
0063d6a9  MOV dword ptr [ESP + 0x70],EAX
0063d6ad  MOV dword ptr [ESP + 0x74],ESI
0063d6b1  MOV dword ptr [ESP + 0x78],EDX
0063d6b5  MOV dword ptr [ESP + 0x7c],ESI
0063d6b9  MOV dword ptr [ESP + 0x80],ESI
0063d6c0  MOV dword ptr [ESP + 0x84],ESI
0063d6c7  MOV dword ptr [ESP + 0x88],EAX
0063d6ce  MOV dword ptr [ESP + 0x8c],ESI
0063d6d5  MOV dword ptr [ESP + 0x90],ECX
0063d6dc  MOV dword ptr [ESP + 0x94],ESI
0063d6e3  MOV dword ptr [ESP + 0x98],ESI
0063d6ea  MOV dword ptr [ESP + 0x9c],ESI
0063d6f1  MOV dword ptr [ESP + 0xa0],EAX
0063d6f8  MOV dword ptr [ESP + 0xa4],ESI
0063d6ff  MOV dword ptr [ESP + 0xa8],0x7
0063d70a  MOV dword ptr [ESP + 0xac],ESI
0063d711  MOV dword ptr [ESP + 0xb0],ESI
0063d718  MOV dword ptr [ESP + 0xb4],ESI
0063d71f  MOV dword ptr [ESP + 0xb8],EAX
0063d726  MOV dword ptr [ESP + 0xbc],ESI
0063d72d  MOV dword ptr [ESP + 0xc0],EBX
0063d734  MOV dword ptr [ESP + 0xc4],EAX
0063d73b  MOV dword ptr [ESP + 0xc8],ESI
0063d742  MOV dword ptr [ESP + 0xcc],0xb
0063d74d  MOV dword ptr [ESP + 0xd0],EAX
0063d754  MOV dword ptr [ESP + 0xd4],ESI
0063d75b  MOV dword ptr [ESP + 0xd8],EDI
0063d762  MOV dword ptr [ESP + 0xdc],EAX
0063d769  MOV dword ptr [ESP + 0xe0],ESI
0063d770  MOV dword ptr [ESP + 0xe4],0xa
0063d77b  MOV dword ptr [ESP + 0xe8],EAX
0063d782  MOV dword ptr [ESP + 0xec],ESI
0063d789  MOV dword ptr [ESP + 0xf0],EBP
0063d790  MOV dword ptr [ESP + 0xf4],ESI
0063d797  MOV dword ptr [ESP + 0xf8],ESI
0063d79e  MOV dword ptr [ESP + 0xfc],ESI
0063d7a5  MOV dword ptr [ESP + 0x100],ECX
0063d7ac  MOV dword ptr [ESP + 0x104],ESI
0063d7b3  MOV dword ptr [ESP + 0x108],ESI
0063d7ba  MOV dword ptr [ESP + 0x10c],ESI
0063d7c1  MOV dword ptr [ESP + 0x110],ESI
0063d7c8  MOV dword ptr [ESP + 0x114],ESI
0063d7cf  MOV dword ptr [ESP + 0x118],ECX
0063d7d6  MOV dword ptr [ESP + 0x11c],ESI
0063d7dd  MOV dword ptr [ESP + 0x120],EAX
0063d7e4  MOV dword ptr [ESP + 0x124],ESI
0063d7eb  MOV dword ptr [ESP + 0x128],ESI
0063d7f2  MOV dword ptr [ESP + 0x12c],ESI
0063d7f9  MOV dword ptr [ESP + 0x130],ECX
0063d800  MOV dword ptr [ESP + 0x134],ESI
0063d807  MOV dword ptr [ESP + 0x138],ECX
0063d80e  MOV dword ptr [ESP + 0x1c0],EAX
0063d815  MOV dword ptr [ESP + 0x228],EAX
0063d81c  XOR EAX,EAX
0063d81e  MOV dword ptr [ESP + 0x238],EAX
0063d825  MOV dword ptr [ESP + 0x23c],EAX
0063d82c  MOV dword ptr [ESP + 0x240],EAX
0063d833  MOV dword ptr [ESP + 0x244],EAX
0063d83a  MOV dword ptr [ESP + 0x248],EAX
0063d841  MOV dword ptr [ESP + 0x148],ECX
0063d848  MOV dword ptr [ESP + 0x1d8],ECX
0063d84f  MOV dword ptr [ESP + 0x1e0],ECX
0063d856  MOV dword ptr [ESP + 0x1f0],ECX
0063d85d  MOV dword ptr [ESP + 0x208],ECX
0063d864  MOV dword ptr [ESP + 0x220],ECX
0063d86b  MOV dword ptr [ESP + 0x24c],EAX
0063d872  MOV dword ptr [ESP + 0x13c],ESI
0063d879  MOV dword ptr [ESP + 0x140],ESI
0063d880  MOV dword ptr [ESP + 0x144],ESI
0063d887  MOV dword ptr [ESP + 0x14c],ESI
0063d88e  MOV dword ptr [ESP + 0x150],EDX
0063d895  MOV dword ptr [ESP + 0x154],ESI
0063d89c  MOV dword ptr [ESP + 0x158],ESI
0063d8a3  MOV dword ptr [ESP + 0x15c],ESI
0063d8aa  MOV dword ptr [ESP + 0x160],ESI
0063d8b1  MOV dword ptr [ESP + 0x164],ESI
0063d8b8  MOV dword ptr [ESP + 0x168],ESI
0063d8bf  MOV dword ptr [ESP + 0x16c],ESI
0063d8c6  MOV dword ptr [ESP + 0x170],ESI
0063d8cd  MOV dword ptr [ESP + 0x174],ESI
0063d8d4  MOV dword ptr [ESP + 0x178],ESI
0063d8db  MOV dword ptr [ESP + 0x17c],ESI
0063d8e2  MOV dword ptr [ESP + 0x180],ESI
0063d8e9  MOV dword ptr [ESP + 0x184],ESI
0063d8f0  MOV dword ptr [ESP + 0x188],ESI
0063d8f7  MOV dword ptr [ESP + 0x18c],ESI
0063d8fe  MOV dword ptr [ESP + 0x190],ESI
0063d905  MOV dword ptr [ESP + 0x194],ESI
0063d90c  MOV dword ptr [ESP + 0x198],ESI
0063d913  MOV dword ptr [ESP + 0x19c],ESI
0063d91a  MOV dword ptr [ESP + 0x1a0],ESI
0063d921  MOV dword ptr [ESP + 0x1a4],ESI
0063d928  MOV dword ptr [ESP + 0x1a8],ESI
0063d92f  MOV dword ptr [ESP + 0x1ac],ESI
0063d936  MOV dword ptr [ESP + 0x1b0],ESI
0063d93d  MOV dword ptr [ESP + 0x1b4],ESI
0063d944  MOV dword ptr [ESP + 0x1b8],ESI
0063d94b  MOV dword ptr [ESP + 0x1bc],ESI
0063d952  MOV dword ptr [ESP + 0x1c4],ESI
0063d959  MOV dword ptr [ESP + 0x1c8],0x9
0063d964  MOV dword ptr [ESP + 0x1cc],ESI
0063d96b  MOV dword ptr [ESP + 0x1d0],ESI
0063d972  MOV dword ptr [ESP + 0x1d4],ESI
0063d979  MOV dword ptr [ESP + 0x1dc],ESI
0063d980  MOV dword ptr [ESP + 0x1e4],ESI
0063d987  MOV dword ptr [ESP + 0x1e8],ESI
0063d98e  MOV dword ptr [ESP + 0x1ec],ESI
0063d995  MOV dword ptr [ESP + 0x1f4],ESI
0063d99c  MOV dword ptr [ESP + 0x1f8],EDX
0063d9a3  MOV dword ptr [ESP + 0x1fc],ESI
0063d9aa  MOV dword ptr [ESP + 0x200],ESI
0063d9b1  MOV dword ptr [ESP + 0x204],ESI
0063d9b8  MOV dword ptr [ESP + 0x20c],ESI
0063d9bf  MOV dword ptr [ESP + 0x210],ESI
0063d9c6  MOV dword ptr [ESP + 0x214],ESI
0063d9cd  MOV dword ptr [ESP + 0x218],ESI
0063d9d4  MOV dword ptr [ESP + 0x21c],ESI
0063d9db  MOV dword ptr [ESP + 0x224],ESI
0063d9e2  MOV dword ptr [ESP + 0x22c],ESI
0063d9e9  MOV dword ptr [ESP + 0x230],ESI
0063d9f0  MOV dword ptr [ESP + 0x234],ESI
0063d9f7  MOV EAX,0x91f440
0063d9fc  LEA ECX,[ESP + 0x1c]
0063da00  LEA EDX,[ECX + -0xc]
0063da03  MOV EDI,dword ptr [EDX]
0063da05  LEA ESI,[EAX + -0xc]
0063da08  MOV dword ptr [ESI],EDI
0063da0a  MOV EDI,dword ptr [EDX + 0x4]
0063da0d  MOV EDX,dword ptr [EDX + 0x8]
0063da10  MOV dword ptr [ESI + 0x4],EDI
0063da13  MOV dword ptr [ESI + 0x8],EDX
0063da16  MOV EDX,ECX
0063da18  MOV EDI,dword ptr [EDX]
0063da1a  MOV ESI,EAX
0063da1c  MOV dword ptr [ESI],EDI
0063da1e  MOV EDI,dword ptr [EDX + 0x4]
0063da21  MOV EDX,dword ptr [EDX + 0x8]
0063da24  ADD EAX,0x34
0063da27  MOV dword ptr [ESI + 0x4],EDI
0063da2a  ADD ECX,0x18
0063da2d  CMP EAX,0x91f920
0063da32  MOV dword ptr [ESI + 0x8],EDX
0063da35  JL 0x0063da00
0063da37  POP EDI
0063da38  POP ESI
0063da39  POP EBP
0063da3a  POP EBX
0063da3b  ADD ESP,0x240
0063da41  RET
0063da42  MOV EAX,0x2
0063da47  MOV EDI,0x4
0063da4c  MOV EBX,0x5
0063da51  MOV EDX,0x1
0063da56  MOV dword ptr [ESP + 0x10],EAX
0063da5a  MOV dword ptr [ESP + 0x14],ESI
0063da5e  MOV dword ptr [ESP + 0x18],ESI
0063da62  MOV dword ptr [ESP + 0x1c],ESI
0063da66  MOV dword ptr [ESP + 0x20],ESI
0063da6a  MOV dword ptr [ESP + 0x24],ESI
0063da6e  MOV dword ptr [ESP + 0x28],EAX
0063da72  MOV dword ptr [ESP + 0x2c],ESI
0063da76  MOV dword ptr [ESP + 0x30],EAX
0063da7a  MOV dword ptr [ESP + 0x34],ESI
0063da7e  MOV dword ptr [ESP + 0x38],ESI
0063da82  MOV dword ptr [ESP + 0x3c],ESI
0063da86  MOV dword ptr [ESP + 0x40],EDI
0063da8a  MOV dword ptr [ESP + 0x44],ESI
0063da8e  MOV dword ptr [ESP + 0x48],ESI
0063da92  MOV dword ptr [ESP + 0x4c],ESI
0063da96  MOV dword ptr [ESP + 0x50],ESI
0063da9a  MOV dword ptr [ESP + 0x54],ESI
0063da9e  MOV dword ptr [ESP + 0x58],EBX
0063daa2  MOV dword ptr [ESP + 0x5c],ESI
0063daa6  MOV dword ptr [ESP + 0x60],ESI
0063daaa  MOV dword ptr [ESP + 0x64],ESI
0063daae  MOV dword ptr [ESP + 0x68],ESI
0063dab2  MOV dword ptr [ESP + 0x6c],ESI
0063dab6  MOV dword ptr [ESP + 0x70],EAX
0063daba  MOV dword ptr [ESP + 0x74],ESI
0063dabe  MOV dword ptr [ESP + 0x78],EDI
0063dac2  MOV dword ptr [ESP + 0x7c],ESI
0063dac6  MOV dword ptr [ESP + 0x80],ESI
0063dacd  MOV dword ptr [ESP + 0x84],ESI
0063dad4  MOV dword ptr [ESP + 0x88],EAX
0063dadb  MOV dword ptr [ESP + 0x8c],ESI
0063dae2  MOV dword ptr [ESP + 0x90],EDX
0063dae9  MOV dword ptr [ESP + 0x94],ESI
0063daf0  MOV dword ptr [ESP + 0x98],ESI
0063daf7  MOV dword ptr [ESP + 0x9c],ESI
0063dafe  MOV dword ptr [ESP + 0xa0],EAX
0063db05  MOV dword ptr [ESP + 0xa4],ESI
0063db0c  MOV dword ptr [ESP + 0xa8],EBX
0063db13  MOV dword ptr [ESP + 0xac],ESI
0063db1a  MOV dword ptr [ESP + 0xb0],ESI
0063db21  MOV dword ptr [ESP + 0xb4],ESI
0063db28  MOV dword ptr [ESP + 0xb8],ESI
0063db2f  MOV dword ptr [ESP + 0xbc],ESI
0063db36  MOV dword ptr [ESP + 0xc0],ESI
0063db3d  MOV dword ptr [ESP + 0xc4],ESI
0063db44  MOV dword ptr [ESP + 0xc8],ESI
0063db4b  MOV dword ptr [ESP + 0xcc],ESI
0063db52  MOV dword ptr [ESP + 0xd0],ESI
0063db59  MOV dword ptr [ESP + 0xd4],ESI
0063db60  MOV dword ptr [ESP + 0xd8],ESI
0063db67  MOV dword ptr [ESP + 0xdc],ESI
0063db6e  MOV dword ptr [ESP + 0xe0],ESI
0063db75  MOV dword ptr [ESP + 0xe4],ESI
0063db7c  MOV dword ptr [ESP + 0xe8],ESI
0063db83  MOV dword ptr [ESP + 0xec],ESI
0063db8a  MOV dword ptr [ESP + 0xf0],ESI
0063db91  MOV dword ptr [ESP + 0xf4],ESI
0063db98  MOV dword ptr [ESP + 0xf8],ESI
0063db9f  MOV dword ptr [ESP + 0xfc],ESI
0063dba6  MOV dword ptr [ESP + 0x100],ESI
0063dbad  MOV dword ptr [ESP + 0x104],ESI
0063dbb4  MOV dword ptr [ESP + 0x108],ESI
0063dbbb  MOV dword ptr [ESP + 0x10c],ESI
0063dbc2  MOV dword ptr [ESP + 0x110],ESI
0063dbc9  MOV dword ptr [ESP + 0x114],ESI
0063dbd0  MOV dword ptr [ESP + 0x118],ESI
0063dbd7  MOV dword ptr [ESP + 0x11c],ESI
0063dbde  MOV dword ptr [ESP + 0x120],ESI
0063dbe5  MOV dword ptr [ESP + 0x124],ESI
0063dbec  MOV dword ptr [ESP + 0x128],ESI
0063dbf3  MOV dword ptr [ESP + 0x12c],ESI
0063dbfa  MOV dword ptr [ESP + 0x130],ESI
0063dc01  MOV dword ptr [ESP + 0x134],ESI
0063dc08  MOV dword ptr [ESP + 0x138],ESI
0063dc0f  MOV dword ptr [ESP + 0x13c],ESI
0063dc16  MOV dword ptr [ESP + 0x140],ESI
0063dc1d  MOV dword ptr [ESP + 0x1c0],EAX
0063dc24  XOR EAX,EAX
0063dc26  MOV dword ptr [ESP + 0x238],EAX
0063dc2d  MOV dword ptr [ESP + 0x23c],EAX
0063dc34  MOV dword ptr [ESP + 0x240],EAX
0063dc3b  MOV dword ptr [ESP + 0x244],EAX
0063dc42  MOV dword ptr [ESP + 0x248],EAX
0063dc49  MOV dword ptr [ESP + 0x24c],EAX
0063dc50  MOV dword ptr [ESP + 0x144],ESI
0063dc57  MOV dword ptr [ESP + 0x148],ESI
0063dc5e  MOV dword ptr [ESP + 0x14c],ESI
0063dc65  MOV dword ptr [ESP + 0x150],ESI
0063dc6c  MOV dword ptr [ESP + 0x154],ESI
0063dc73  MOV dword ptr [ESP + 0x158],ESI
0063dc7a  MOV dword ptr [ESP + 0x15c],ESI
0063dc81  MOV dword ptr [ESP + 0x160],ESI
0063dc88  MOV dword ptr [ESP + 0x164],ESI
0063dc8f  MOV dword ptr [ESP + 0x168],ESI
0063dc96  MOV dword ptr [ESP + 0x16c],ESI
0063dc9d  MOV dword ptr [ESP + 0x170],ESI
0063dca4  MOV dword ptr [ESP + 0x174],ESI
0063dcab  MOV dword ptr [ESP + 0x178],ESI
0063dcb2  MOV dword ptr [ESP + 0x17c],ESI
0063dcb9  MOV dword ptr [ESP + 0x180],ESI
0063dcc0  MOV dword ptr [ESP + 0x184],ESI
0063dcc7  MOV dword ptr [ESP + 0x188],ESI
0063dcce  MOV dword ptr [ESP + 0x18c],ESI
0063dcd5  MOV dword ptr [ESP + 0x190],ESI
0063dcdc  MOV dword ptr [ESP + 0x194],ESI
0063dce3  MOV dword ptr [ESP + 0x198],ESI
0063dcea  MOV dword ptr [ESP + 0x19c],ESI
0063dcf1  MOV dword ptr [ESP + 0x1a0],ESI
0063dcf8  MOV dword ptr [ESP + 0x1a4],ESI
0063dcff  MOV dword ptr [ESP + 0x1a8],ESI
0063dd06  MOV dword ptr [ESP + 0x1ac],ESI
0063dd0d  MOV dword ptr [ESP + 0x1b0],ESI
0063dd14  MOV dword ptr [ESP + 0x1b4],ESI
0063dd1b  MOV dword ptr [ESP + 0x1b8],ESI
0063dd22  MOV dword ptr [ESP + 0x1bc],ESI
0063dd29  MOV dword ptr [ESP + 0x1c4],ESI
0063dd30  MOV dword ptr [ESP + 0x1c8],0x3
0063dd3b  MOV dword ptr [ESP + 0x1cc],ESI
0063dd42  MOV dword ptr [ESP + 0x1d0],ESI
0063dd49  MOV dword ptr [ESP + 0x1d4],ESI
0063dd50  MOV dword ptr [ESP + 0x1d8],ESI
0063dd57  MOV dword ptr [ESP + 0x1dc],ESI
0063dd5e  MOV dword ptr [ESP + 0x1e0],ESI
0063dd65  MOV dword ptr [ESP + 0x1e4],EDI
0063dd6c  MOV dword ptr [ESP + 0x1e8],ESI
0063dd73  MOV dword ptr [ESP + 0x1ec],ESI
0063dd7a  MOV dword ptr [ESP + 0x1f0],ESI
0063dd81  MOV dword ptr [ESP + 0x1f4],ESI
0063dd88  MOV dword ptr [ESP + 0x1f8],ESI
0063dd8f  MOV dword ptr [ESP + 0x1fc],EBX
0063dd96  MOV dword ptr [ESP + 0x200],ESI
0063dd9d  MOV dword ptr [ESP + 0x204],ESI
0063dda4  MOV dword ptr [ESP + 0x208],ESI
0063ddab  MOV dword ptr [ESP + 0x20c],ESI
0063ddb2  MOV dword ptr [ESP + 0x210],ESI
0063ddb9  MOV dword ptr [ESP + 0x214],EDI
0063ddc0  MOV dword ptr [ESP + 0x218],ESI
0063ddc7  MOV dword ptr [ESP + 0x21c],EDX
0063ddce  MOV dword ptr [ESP + 0x220],ESI
0063ddd5  MOV dword ptr [ESP + 0x224],ESI
0063dddc  MOV dword ptr [ESP + 0x228],ESI
0063dde3  MOV dword ptr [ESP + 0x22c],EBX
0063ddea  MOV dword ptr [ESP + 0x230],ESI
0063ddf1  MOV dword ptr [ESP + 0x234],EDX
0063ddf8  MOV EAX,0x91f440
0063ddfd  LEA ECX,[ESP + 0x1c]
0063de01  LEA EDX,[ECX + -0xc]
0063de04  MOV EDI,dword ptr [EDX]
0063de06  LEA ESI,[EAX + -0xc]
0063de09  MOV dword ptr [ESI],EDI
0063de0b  MOV EDI,dword ptr [EDX + 0x4]
0063de0e  MOV EDX,dword ptr [EDX + 0x8]
0063de11  MOV dword ptr [ESI + 0x4],EDI
0063de14  MOV dword ptr [ESI + 0x8],EDX
0063de17  MOV EDX,ECX
0063de19  MOV EDI,dword ptr [EDX]
0063de1b  MOV ESI,EAX
0063de1d  MOV dword ptr [ESI],EDI
0063de1f  MOV EDI,dword ptr [EDX + 0x4]
0063de22  MOV EDX,dword ptr [EDX + 0x8]
0063de25  ADD EAX,0x34
0063de28  MOV dword ptr [ESI + 0x4],EDI
0063de2b  ADD ECX,0x18
0063de2e  CMP EAX,0x91f920
0063de33  MOV dword ptr [ESI + 0x8],EDX
0063de36  JL 0x0063de01
0063de38  POP EDI
0063de39  POP ESI
0063de3a  POP EBP
0063de3b  POP EBX
0063de3c  ADD ESP,0x240
0063de42  RET
0063de43  CMP EAX,0xadde9f04
0063de48  JA 0x0063eaaa
0063de4e  JZ 0x0063e698
0063de54  CMP EAX,0x79046f57
0063de59  JZ 0x0063e282
0063de5f  CMP EAX,0x89e99e26
0063de64  JNZ 0x0063eac0
0063de6a  MOV EAX,0x2
0063de6f  MOV ECX,0x7
0063de74  MOV EBP,0x6
0063de79  MOV dword ptr [ESP + 0x34],ECX
0063de7d  MOV EDI,0x4
0063de82  MOV EBX,0x5
0063de87  MOV dword ptr [ESP + 0xd8],ECX
0063de8e  MOV ECX,0x3
0063de93  MOV EDX,0x1
0063de98  MOV dword ptr [ESP + 0x10],EAX
0063de9c  MOV dword ptr [ESP + 0x14],ESI
0063dea0  MOV dword ptr [ESP + 0x18],EDX
0063dea4  MOV dword ptr [ESP + 0x1c],EBP
0063dea8  MOV dword ptr [ESP + 0x20],ESI
0063deac  MOV dword ptr [ESP + 0x24],EAX
0063deb0  MOV dword ptr [ESP + 0x28],EAX
0063deb4  MOV dword ptr [ESP + 0x2c],ESI
0063deb8  MOV dword ptr [ESP + 0x30],ESI
0063debc  MOV dword ptr [ESP + 0x38],ESI
0063dec0  MOV dword ptr [ESP + 0x3c],EAX
0063dec4  MOV dword ptr [ESP + 0x40],EDI
0063dec8  MOV dword ptr [ESP + 0x44],ESI
0063decc  MOV dword ptr [ESP + 0x48],ESI
0063ded0  MOV dword ptr [ESP + 0x4c],ESI
0063ded4  MOV dword ptr [ESP + 0x50],ESI
0063ded8  MOV dword ptr [ESP + 0x54],ESI
0063dedc  MOV dword ptr [ESP + 0x58],EBX
0063dee0  MOV dword ptr [ESP + 0x5c],ESI
0063dee4  MOV dword ptr [ESP + 0x60],ESI
0063dee8  MOV dword ptr [ESP + 0x64],ESI
0063deec  MOV dword ptr [ESP + 0x68],ESI
0063def0  MOV dword ptr [ESP + 0x6c],ESI
0063def4  MOV dword ptr [ESP + 0x70],EAX
0063def8  MOV dword ptr [ESP + 0x74],ESI
0063defc  MOV dword ptr [ESP + 0x78],EBX
0063df00  MOV dword ptr [ESP + 0x7c],ESI
0063df04  MOV dword ptr [ESP + 0x80],ESI
0063df0b  MOV dword ptr [ESP + 0x84],ESI
0063df12  MOV dword ptr [ESP + 0x88],EAX
0063df19  MOV dword ptr [ESP + 0x8c],ESI
0063df20  MOV dword ptr [ESP + 0x90],EAX
0063df27  MOV dword ptr [ESP + 0x94],ESI
0063df2e  MOV dword ptr [ESP + 0x98],ESI
0063df35  MOV dword ptr [ESP + 0x9c],ESI
0063df3c  MOV dword ptr [ESP + 0xa0],EAX
0063df43  MOV dword ptr [ESP + 0xa4],ESI
0063df4a  MOV dword ptr [ESP + 0xa8],EDI
0063df51  MOV dword ptr [ESP + 0xac],ESI
0063df58  MOV dword ptr [ESP + 0xb0],ESI
0063df5f  MOV dword ptr [ESP + 0xb4],ESI
0063df66  MOV dword ptr [ESP + 0xb8],EAX
0063df6d  MOV dword ptr [ESP + 0xbc],ESI
0063df74  MOV dword ptr [ESP + 0xc0],EBP
0063df7b  MOV dword ptr [ESP + 0xc4],ESI
0063df82  MOV dword ptr [ESP + 0xc8],ESI
0063df89  MOV dword ptr [ESP + 0xcc],ESI
0063df90  MOV dword ptr [ESP + 0xd0],EAX
0063df97  MOV dword ptr [ESP + 0xd4],ESI
0063df9e  MOV dword ptr [ESP + 0xdc],ESI
0063dfa5  MOV dword ptr [ESP + 0xe0],ESI
0063dfac  MOV dword ptr [ESP + 0xe4],ESI
0063dfb3  MOV dword ptr [ESP + 0xe8],EAX
0063dfba  MOV dword ptr [ESP + 0xec],ESI
0063dfc1  MOV dword ptr [ESP + 0xf0],0x8
0063dfcc  MOV dword ptr [ESP + 0xf4],ESI
0063dfd3  MOV dword ptr [ESP + 0xf8],ESI
0063dfda  MOV dword ptr [ESP + 0xfc],ESI
0063dfe1  MOV dword ptr [ESP + 0x100],ECX
0063dfe8  MOV dword ptr [ESP + 0x104],ESI
0063dfef  MOV dword ptr [ESP + 0x108],ESI
0063dff6  MOV dword ptr [ESP + 0x10c],ESI
0063dffd  MOV dword ptr [ESP + 0x110],ESI
0063e004  MOV dword ptr [ESP + 0x114],ESI
0063e00b  MOV dword ptr [ESP + 0x118],ECX
0063e012  MOV dword ptr [ESP + 0x11c],ESI
0063e019  MOV dword ptr [ESP + 0x120],EAX
0063e020  MOV dword ptr [ESP + 0x124],ESI
0063e027  MOV dword ptr [ESP + 0x128],ESI
0063e02e  MOV dword ptr [ESP + 0x12c],ESI
0063e035  MOV dword ptr [ESP + 0x130],ECX
0063e03c  MOV dword ptr [ESP + 0x134],ESI
0063e043  MOV dword ptr [ESP + 0x190],EAX
0063e04a  MOV dword ptr [ESP + 0x1c0],EAX
0063e051  MOV dword ptr [ESP + 0x228],EAX
0063e058  XOR EAX,EAX
0063e05a  MOV dword ptr [ESP + 0x238],EAX
0063e061  MOV dword ptr [ESP + 0x23c],EAX
0063e068  MOV dword ptr [ESP + 0x240],EAX
0063e06f  MOV dword ptr [ESP + 0x244],EAX
0063e076  MOV dword ptr [ESP + 0x248],EAX
0063e07d  MOV dword ptr [ESP + 0x138],ECX
0063e084  MOV dword ptr [ESP + 0x148],ECX
0063e08b  MOV dword ptr [ESP + 0x198],ECX
0063e092  MOV dword ptr [ESP + 0x1d8],ECX
0063e099  MOV dword ptr [ESP + 0x1e0],ECX
0063e0a0  MOV dword ptr [ESP + 0x1f0],ECX
0063e0a7  MOV dword ptr [ESP + 0x208],ECX
0063e0ae  MOV dword ptr [ESP + 0x220],ECX
0063e0b5  MOV dword ptr [ESP + 0x24c],EAX
0063e0bc  MOV dword ptr [ESP + 0x13c],ESI
0063e0c3  MOV dword ptr [ESP + 0x140],ESI
0063e0ca  MOV dword ptr [ESP + 0x144],ESI
0063e0d1  MOV dword ptr [ESP + 0x14c],ESI
0063e0d8  MOV dword ptr [ESP + 0x150],EDX
0063e0df  MOV dword ptr [ESP + 0x154],ESI
0063e0e6  MOV dword ptr [ESP + 0x158],ESI
0063e0ed  MOV dword ptr [ESP + 0x15c],ESI
0063e0f4  MOV dword ptr [ESP + 0x160],ESI
0063e0fb  MOV dword ptr [ESP + 0x164],ESI
0063e102  MOV dword ptr [ESP + 0x168],ESI
0063e109  MOV dword ptr [ESP + 0x16c],ESI
0063e110  MOV dword ptr [ESP + 0x170],ESI
0063e117  MOV dword ptr [ESP + 0x174],ESI
0063e11e  MOV dword ptr [ESP + 0x178],ESI
0063e125  MOV dword ptr [ESP + 0x17c],ESI
0063e12c  MOV dword ptr [ESP + 0x180],ESI
0063e133  MOV dword ptr [ESP + 0x184],ESI
0063e13a  MOV dword ptr [ESP + 0x188],ESI
0063e141  MOV dword ptr [ESP + 0x18c],ESI
0063e148  MOV dword ptr [ESP + 0x194],ESI
0063e14f  MOV dword ptr [ESP + 0x19c],ESI
0063e156  MOV dword ptr [ESP + 0x1a0],ESI
0063e15d  MOV dword ptr [ESP + 0x1a4],ESI
0063e164  MOV dword ptr [ESP + 0x1a8],ESI
0063e16b  MOV dword ptr [ESP + 0x1ac],ESI
0063e172  MOV dword ptr [ESP + 0x1b0],ESI
0063e179  MOV dword ptr [ESP + 0x1b4],ESI
0063e180  MOV dword ptr [ESP + 0x1b8],ESI
0063e187  MOV dword ptr [ESP + 0x1bc],ESI
0063e18e  MOV dword ptr [ESP + 0x1c4],ESI
0063e195  MOV dword ptr [ESP + 0x1c8],0x9
0063e1a0  MOV dword ptr [ESP + 0x1cc],ESI
0063e1a7  MOV dword ptr [ESP + 0x1d0],ESI
0063e1ae  MOV dword ptr [ESP + 0x1d4],ESI
0063e1b5  MOV dword ptr [ESP + 0x1dc],ESI
0063e1bc  MOV dword ptr [ESP + 0x1e4],EDI
0063e1c3  MOV dword ptr [ESP + 0x1e8],ESI
0063e1ca  MOV dword ptr [ESP + 0x1ec],ESI
0063e1d1  MOV dword ptr [ESP + 0x1f4],ESI
0063e1d8  MOV dword ptr [ESP + 0x1f8],EDX
0063e1df  MOV dword ptr [ESP + 0x1fc],EBX
0063e1e6  MOV dword ptr [ESP + 0x200],ESI
0063e1ed  MOV dword ptr [ESP + 0x204],ESI
0063e1f4  MOV dword ptr [ESP + 0x20c],ESI
0063e1fb  MOV dword ptr [ESP + 0x210],ESI
0063e202  MOV dword ptr [ESP + 0x214],EDI
0063e209  MOV dword ptr [ESP + 0x218],ESI
0063e210  MOV dword ptr [ESP + 0x21c],EDX
0063e217  MOV dword ptr [ESP + 0x224],ESI
0063e21e  MOV dword ptr [ESP + 0x22c],EBX
0063e225  MOV dword ptr [ESP + 0x230],ESI
0063e22c  MOV dword ptr [ESP + 0x234],EDX
0063e233  MOV EAX,0x91f440
0063e238  LEA ECX,[ESP + 0x1c]
0063e23c  LEA ESP,[ESP]
0063e240  LEA EDX,[ECX + -0xc]
0063e243  MOV EDI,dword ptr [EDX]
0063e245  LEA ESI,[EAX + -0xc]
0063e248  MOV dword ptr [ESI],EDI
0063e24a  MOV EDI,dword ptr [EDX + 0x4]
0063e24d  MOV EDX,dword ptr [EDX + 0x8]
0063e250  MOV dword ptr [ESI + 0x4],EDI
0063e253  MOV dword ptr [ESI + 0x8],EDX
0063e256  MOV EDX,ECX
0063e258  MOV EDI,dword ptr [EDX]
0063e25a  MOV ESI,EAX
0063e25c  MOV dword ptr [ESI],EDI
0063e25e  MOV EDI,dword ptr [EDX + 0x4]
0063e261  MOV EDX,dword ptr [EDX + 0x8]
0063e264  ADD EAX,0x34
0063e267  MOV dword ptr [ESI + 0x4],EDI
0063e26a  ADD ECX,0x18
0063e26d  CMP EAX,0x91f920
0063e272  MOV dword ptr [ESI + 0x8],EDX
0063e275  JL 0x0063e240
0063e277  POP EDI
0063e278  POP ESI
0063e279  POP EBP
0063e27a  POP EBX
0063e27b  ADD ESP,0x240
0063e281  RET
0063e282  MOV EAX,0x2
0063e287  MOV ECX,0x3
0063e28c  MOV EDX,0x1
0063e291  MOV EDI,0x4
0063e296  MOV EBX,0x5
0063e29b  MOV dword ptr [ESP + 0x10],EAX
0063e29f  MOV dword ptr [ESP + 0x14],ESI
0063e2a3  MOV dword ptr [ESP + 0x18],EDX
0063e2a7  MOV dword ptr [ESP + 0x1c],ESI
0063e2ab  MOV dword ptr [ESP + 0x20],ESI
0063e2af  MOV dword ptr [ESP + 0x24],ESI
0063e2b3  MOV dword ptr [ESP + 0x28],EAX
0063e2b7  MOV dword ptr [ESP + 0x2c],ESI
0063e2bb  MOV dword ptr [ESP + 0x30],ESI
0063e2bf  MOV dword ptr [ESP + 0x34],ESI
0063e2c3  MOV dword ptr [ESP + 0x38],ESI
0063e2c7  MOV dword ptr [ESP + 0x3c],ESI
0063e2cb  MOV dword ptr [ESP + 0x40],EDI
0063e2cf  MOV dword ptr [ESP + 0x44],ESI
0063e2d3  MOV dword ptr [ESP + 0x48],ESI
0063e2d7  MOV dword ptr [ESP + 0x4c],ESI
0063e2db  MOV dword ptr [ESP + 0x50],ESI
0063e2df  MOV dword ptr [ESP + 0x54],ESI
0063e2e3  MOV dword ptr [ESP + 0x58],EBX
0063e2e7  MOV dword ptr [ESP + 0x5c],ESI
0063e2eb  MOV dword ptr [ESP + 0x60],ESI
0063e2ef  MOV dword ptr [ESP + 0x64],ESI
0063e2f3  MOV dword ptr [ESP + 0x68],ESI
0063e2f7  MOV dword ptr [ESP + 0x6c],ESI
0063e2fb  MOV dword ptr [ESP + 0x70],EAX
0063e2ff  MOV dword ptr [ESP + 0x74],ESI
0063e303  MOV dword ptr [ESP + 0x78],0x7
0063e30b  MOV dword ptr [ESP + 0x7c],ESI
0063e30f  MOV dword ptr [ESP + 0x80],ESI
0063e316  MOV dword ptr [ESP + 0x84],ESI
0063e31d  MOV dword ptr [ESP + 0x88],EAX
0063e324  MOV dword ptr [ESP + 0x8c],ESI
0063e32b  MOV dword ptr [ESP + 0x90],EAX
0063e332  MOV dword ptr [ESP + 0x94],ESI
0063e339  MOV dword ptr [ESP + 0x98],ESI
0063e340  MOV dword ptr [ESP + 0x9c],ESI
0063e347  MOV dword ptr [ESP + 0xa0],EAX
0063e34e  MOV dword ptr [ESP + 0xa4],ESI
0063e355  MOV dword ptr [ESP + 0xa8],0xa
0063e360  MOV dword ptr [ESP + 0xac],ESI
0063e367  MOV dword ptr [ESP + 0xb0],ESI
0063e36e  MOV dword ptr [ESP + 0xb4],ESI
0063e375  MOV dword ptr [ESP + 0xb8],EAX
0063e37c  MOV dword ptr [ESP + 0xbc],ESI
0063e383  MOV dword ptr [ESP + 0xc0],0x9
0063e38e  MOV dword ptr [ESP + 0xc4],ESI
0063e395  MOV dword ptr [ESP + 0xc8],ESI
0063e39c  MOV dword ptr [ESP + 0xcc],ESI
0063e3a3  MOV dword ptr [ESP + 0xd0],EAX
0063e3aa  MOV dword ptr [ESP + 0xd4],ESI
0063e3b1  MOV dword ptr [ESP + 0xd8],0x6
0063e3bc  MOV dword ptr [ESP + 0xdc],ESI
0063e3c3  MOV dword ptr [ESP + 0xe0],ESI
0063e3ca  MOV dword ptr [ESP + 0xe4],ESI
0063e3d1  MOV dword ptr [ESP + 0xe8],EAX
0063e3d8  MOV dword ptr [ESP + 0xec],ESI
0063e3df  MOV dword ptr [ESP + 0xf0],ECX
0063e3e6  MOV dword ptr [ESP + 0xf4],ESI
0063e3ed  MOV dword ptr [ESP + 0xf8],ESI
0063e3f4  MOV dword ptr [ESP + 0xfc],ESI
0063e3fb  MOV dword ptr [ESP + 0x100],ECX
0063e402  MOV dword ptr [ESP + 0x104],ESI
0063e409  MOV dword ptr [ESP + 0x108],ESI
0063e410  MOV dword ptr [ESP + 0x10c],ESI
0063e417  MOV dword ptr [ESP + 0x110],ESI
0063e41e  MOV dword ptr [ESP + 0x114],ESI
0063e425  MOV dword ptr [ESP + 0x118],ECX
0063e42c  MOV dword ptr [ESP + 0x11c],ESI
0063e433  MOV dword ptr [ESP + 0x120],EAX
0063e43a  MOV dword ptr [ESP + 0x124],ESI
0063e441  MOV dword ptr [ESP + 0x128],ESI
0063e448  MOV dword ptr [ESP + 0x12c],ESI
0063e44f  MOV dword ptr [ESP + 0x130],ECX
0063e456  MOV dword ptr [ESP + 0x134],ESI
0063e45d  MOV dword ptr [ESP + 0x138],ECX
0063e464  MOV dword ptr [ESP + 0x13c],ESI
0063e46b  MOV dword ptr [ESP + 0x190],EAX
0063e472  MOV dword ptr [ESP + 0x1a8],EAX
0063e479  MOV dword ptr [ESP + 0x1c0],EAX
0063e480  MOV dword ptr [ESP + 0x228],EAX
0063e487  XOR EAX,EAX
0063e489  MOV dword ptr [ESP + 0x238],EAX
0063e490  MOV dword ptr [ESP + 0x23c],EAX
0063e497  MOV dword ptr [ESP + 0x240],EAX
0063e49e  MOV dword ptr [ESP + 0x244],EAX
0063e4a5  MOV dword ptr [ESP + 0x248],EAX
0063e4ac  MOV dword ptr [ESP + 0x148],ECX
0063e4b3  MOV dword ptr [ESP + 0x1d8],ECX
0063e4ba  MOV dword ptr [ESP + 0x1e0],ECX
0063e4c1  MOV dword ptr [ESP + 0x1f0],ECX
0063e4c8  MOV dword ptr [ESP + 0x208],ECX
0063e4cf  MOV dword ptr [ESP + 0x220],ECX
0063e4d6  MOV dword ptr [ESP + 0x24c],EAX
0063e4dd  MOV dword ptr [ESP + 0x140],ESI
0063e4e4  MOV dword ptr [ESP + 0x144],ESI
0063e4eb  MOV dword ptr [ESP + 0x14c],ESI
0063e4f2  MOV dword ptr [ESP + 0x150],EDX
0063e4f9  MOV dword ptr [ESP + 0x154],ESI
0063e500  MOV dword ptr [ESP + 0x158],ESI
0063e507  MOV dword ptr [ESP + 0x15c],ESI
0063e50e  MOV dword ptr [ESP + 0x160],ESI
0063e515  MOV dword ptr [ESP + 0x164],ESI
0063e51c  MOV dword ptr [ESP + 0x168],ESI
0063e523  MOV dword ptr [ESP + 0x16c],ESI
0063e52a  MOV dword ptr [ESP + 0x170],ESI
0063e531  MOV dword ptr [ESP + 0x174],ESI
0063e538  MOV dword ptr [ESP + 0x178],ESI
0063e53f  MOV dword ptr [ESP + 0x17c],ESI
0063e546  MOV dword ptr [ESP + 0x180],ESI
0063e54d  MOV dword ptr [ESP + 0x184],ESI
0063e554  MOV dword ptr [ESP + 0x188],ESI
0063e55b  MOV dword ptr [ESP + 0x18c],ESI
0063e562  MOV dword ptr [ESP + 0x194],ESI
0063e569  MOV dword ptr [ESP + 0x198],EDI
0063e570  MOV dword ptr [ESP + 0x19c],ESI
0063e577  MOV dword ptr [ESP + 0x1a0],ESI
0063e57e  MOV dword ptr [ESP + 0x1a4],ESI
0063e585  MOV dword ptr [ESP + 0x1ac],ESI
0063e58c  MOV dword ptr [ESP + 0x1b0],EBX
0063e593  MOV dword ptr [ESP + 0x1b4],ESI
0063e59a  MOV dword ptr [ESP + 0x1b8],ESI
0063e5a1  MOV dword ptr [ESP + 0x1bc],ESI
0063e5a8  MOV dword ptr [ESP + 0x1c4],ESI
0063e5af  MOV dword ptr [ESP + 0x1c8],0x8
0063e5ba  MOV dword ptr [ESP + 0x1cc],ESI
0063e5c1  MOV dword ptr [ESP + 0x1d0],ESI
0063e5c8  MOV dword ptr [ESP + 0x1d4],ESI
0063e5cf  MOV dword ptr [ESP + 0x1dc],ESI
0063e5d6  MOV dword ptr [ESP + 0x1e4],EDI
0063e5dd  MOV dword ptr [ESP + 0x1e8],ESI
0063e5e4  MOV dword ptr [ESP + 0x1ec],ESI
0063e5eb  MOV dword ptr [ESP + 0x1f4],ESI
0063e5f2  MOV dword ptr [ESP + 0x1f8],EDX
0063e5f9  MOV dword ptr [ESP + 0x1fc],EBX
0063e600  MOV dword ptr [ESP + 0x200],ESI
0063e607  MOV dword ptr [ESP + 0x204],ESI
0063e60e  MOV dword ptr [ESP + 0x20c],ESI
0063e615  MOV dword ptr [ESP + 0x210],ESI
0063e61c  MOV dword ptr [ESP + 0x214],EDI
0063e623  MOV dword ptr [ESP + 0x218],ESI
0063e62a  MOV dword ptr [ESP + 0x21c],EDX
0063e631  MOV dword ptr [ESP + 0x224],ESI
0063e638  MOV dword ptr [ESP + 0x22c],EBX
0063e63f  MOV dword ptr [ESP + 0x230],ESI
0063e646  MOV dword ptr [ESP + 0x234],EDX
0063e64d  MOV EAX,0x91f440
0063e652  LEA ECX,[ESP + 0x1c]
0063e656  LEA EDX,[ECX + -0xc]
0063e659  MOV EDI,dword ptr [EDX]
0063e65b  LEA ESI,[EAX + -0xc]
0063e65e  MOV dword ptr [ESI],EDI
0063e660  MOV EDI,dword ptr [EDX + 0x4]
0063e663  MOV EDX,dword ptr [EDX + 0x8]
0063e666  MOV dword ptr [ESI + 0x4],EDI
0063e669  MOV dword ptr [ESI + 0x8],EDX
0063e66c  MOV EDX,ECX
0063e66e  MOV EDI,dword ptr [EDX]
0063e670  MOV ESI,EAX
0063e672  MOV dword ptr [ESI],EDI
0063e674  MOV EDI,dword ptr [EDX + 0x4]
0063e677  MOV EDX,dword ptr [EDX + 0x8]
0063e67a  ADD EAX,0x34
0063e67d  MOV dword ptr [ESI + 0x4],EDI
0063e680  ADD ECX,0x18
0063e683  CMP EAX,0x91f920
0063e688  MOV dword ptr [ESI + 0x8],EDX
0063e68b  JL 0x0063e656
0063e68d  POP EDI
0063e68e  POP ESI
0063e68f  POP EBP
0063e690  POP EBX
0063e691  ADD ESP,0x240
0063e697  RET
0063e698  MOV EAX,0x2
0063e69d  MOV EDX,0x8
0063e6a2  MOV ECX,0x9
0063e6a7  MOV EDI,0x4
0063e6ac  MOV EBX,0x5
0063e6b1  MOV dword ptr [ESP + 0x10],EDX
0063e6b5  MOV dword ptr [ESP + 0x14],ESI
0063e6b9  MOV dword ptr [ESP + 0x18],ESI
0063e6bd  MOV dword ptr [ESP + 0x1c],ESI
0063e6c1  MOV dword ptr [ESP + 0x20],ESI
0063e6c5  MOV dword ptr [ESP + 0x24],ESI
0063e6c9  MOV dword ptr [ESP + 0x28],ECX
0063e6cd  MOV dword ptr [ESP + 0x2c],ESI
0063e6d1  MOV dword ptr [ESP + 0x30],ESI
0063e6d5  MOV dword ptr [ESP + 0x34],ESI
0063e6d9  MOV dword ptr [ESP + 0x38],ESI
0063e6dd  MOV dword ptr [ESP + 0x3c],ESI
0063e6e1  MOV dword ptr [ESP + 0x40],EDI
0063e6e5  MOV dword ptr [ESP + 0x44],ESI
0063e6e9  MOV dword ptr [ESP + 0x48],ESI
0063e6ed  MOV dword ptr [ESP + 0x4c],ESI
0063e6f1  MOV dword ptr [ESP + 0x50],ESI
0063e6f5  MOV dword ptr [ESP + 0x54],ESI
0063e6f9  MOV dword ptr [ESP + 0x58],EBX
0063e6fd  MOV dword ptr [ESP + 0x5c],ESI
0063e701  MOV dword ptr [ESP + 0x60],ESI
0063e705  MOV dword ptr [ESP + 0x64],ESI
0063e709  MOV dword ptr [ESP + 0x68],ESI
0063e70d  MOV dword ptr [ESP + 0x6c],ESI
0063e711  MOV dword ptr [ESP + 0x70],EAX
0063e715  MOV dword ptr [ESP + 0x74],ESI
0063e719  MOV dword ptr [ESP + 0x78],0x7
0063e721  MOV dword ptr [ESP + 0x7c],ESI
0063e725  MOV dword ptr [ESP + 0x80],ESI
0063e72c  MOV dword ptr [ESP + 0x84],ESI
0063e733  MOV dword ptr [ESP + 0x88],EAX
0063e73a  MOV dword ptr [ESP + 0x8c],ESI
0063e741  MOV dword ptr [ESP + 0x90],0x3
0063e74c  MOV dword ptr [ESP + 0x94],ESI
0063e753  MOV dword ptr [ESP + 0x98],ESI
0063e75a  MOV dword ptr [ESP + 0x9c],ESI
0063e761  MOV dword ptr [ESP + 0xa0],EAX
0063e768  MOV dword ptr [ESP + 0xa4],ESI
0063e76f  MOV dword ptr [ESP + 0xa8],EBX
0063e776  MOV dword ptr [ESP + 0xac],ESI
0063e77d  MOV dword ptr [ESP + 0xb0],ESI
0063e784  MOV dword ptr [ESP + 0xb4],ESI
0063e78b  MOV dword ptr [ESP + 0xb8],EAX
0063e792  MOV dword ptr [ESP + 0xbc],ESI
0063e799  MOV dword ptr [ESP + 0xc0],ESI
0063e7a0  MOV dword ptr [ESP + 0xc4],EAX
0063e7a7  MOV dword ptr [ESP + 0xc8],ESI
0063e7ae  MOV dword ptr [ESP + 0xcc],ECX
0063e7b5  MOV dword ptr [ESP + 0xd0],EAX
0063e7bc  MOV dword ptr [ESP + 0xd4],ESI
0063e7c3  MOV dword ptr [ESP + 0xd8],0x1
0063e7ce  MOV dword ptr [ESP + 0xdc],EAX
0063e7d5  MOV dword ptr [ESP + 0xe0],ESI
0063e7dc  MOV dword ptr [ESP + 0xe4],EDX
0063e7e3  MOV dword ptr [ESP + 0xe8],ESI
0063e7ea  MOV dword ptr [ESP + 0xec],ESI
0063e7f1  MOV dword ptr [ESP + 0xf0],ESI
0063e7f8  MOV dword ptr [ESP + 0xf4],ESI
0063e7ff  MOV dword ptr [ESP + 0xf8],ESI
0063e806  MOV dword ptr [ESP + 0xfc],ESI
0063e80d  MOV dword ptr [ESP + 0x100],EAX
0063e814  MOV dword ptr [ESP + 0x104],ESI
0063e81b  MOV dword ptr [ESP + 0x108],EDI
0063e822  MOV dword ptr [ESP + 0x10c],ESI
0063e829  MOV dword ptr [ESP + 0x110],ESI
0063e830  MOV dword ptr [ESP + 0x114],ESI
0063e837  MOV dword ptr [ESP + 0x118],ESI
0063e83e  MOV dword ptr [ESP + 0x11c],ESI
0063e845  MOV dword ptr [ESP + 0x120],ESI
0063e84c  MOV dword ptr [ESP + 0x124],ESI
0063e853  MOV dword ptr [ESP + 0x128],ESI
0063e85a  MOV dword ptr [ESP + 0x12c],ESI
0063e861  MOV dword ptr [ESP + 0x130],EAX
0063e868  MOV dword ptr [ESP + 0x134],ESI
0063e86f  MOV dword ptr [ESP + 0x138],EAX
0063e876  MOV dword ptr [ESP + 0x13c],ESI
0063e87d  MOV dword ptr [ESP + 0x1c0],EAX
0063e884  XOR EAX,EAX
0063e886  MOV dword ptr [ESP + 0x238],EAX
0063e88d  MOV dword ptr [ESP + 0x23c],EAX
0063e894  MOV dword ptr [ESP + 0x240],EAX
0063e89b  MOV dword ptr [ESP + 0x244],EAX
0063e8a2  MOV dword ptr [ESP + 0x248],EAX
0063e8a9  MOV dword ptr [ESP + 0x220],ECX
0063e8b0  MOV dword ptr [ESP + 0x24c],EAX
0063e8b7  MOV dword ptr [ESP + 0x140],ESI
0063e8be  MOV dword ptr [ESP + 0x144],ESI
0063e8c5  MOV dword ptr [ESP + 0x148],ESI
0063e8cc  MOV dword ptr [ESP + 0x14c],ESI
0063e8d3  MOV dword ptr [ESP + 0x150],ESI
0063e8da  MOV dword ptr [ESP + 0x154],ESI
0063e8e1  MOV dword ptr [ESP + 0x158],ESI
0063e8e8  MOV dword ptr [ESP + 0x15c],ESI
0063e8ef  MOV dword ptr [ESP + 0x160],ESI
0063e8f6  MOV dword ptr [ESP + 0x164],ESI
0063e8fd  MOV dword ptr [ESP + 0x168],ESI
0063e904  MOV dword ptr [ESP + 0x16c],ESI
0063e90b  MOV dword ptr [ESP + 0x170],ESI
0063e912  MOV dword ptr [ESP + 0x174],ESI
0063e919  MOV dword ptr [ESP + 0x178],ESI
0063e920  MOV dword ptr [ESP + 0x17c],ESI
0063e927  MOV dword ptr [ESP + 0x180],ESI
0063e92e  MOV dword ptr [ESP + 0x184],ESI
0063e935  MOV dword ptr [ESP + 0x188],ESI
0063e93c  MOV dword ptr [ESP + 0x18c],ESI
0063e943  MOV dword ptr [ESP + 0x190],ESI
0063e94a  MOV dword ptr [ESP + 0x194],ESI
0063e951  MOV dword ptr [ESP + 0x198],ESI
0063e958  MOV dword ptr [ESP + 0x19c],ESI
0063e95f  MOV dword ptr [ESP + 0x1a0],ESI
0063e966  MOV dword ptr [ESP + 0x1a4],ESI
0063e96d  MOV dword ptr [ESP + 0x1a8],ESI
0063e974  MOV dword ptr [ESP + 0x1ac],ESI
0063e97b  MOV dword ptr [ESP + 0x1b0],ESI
0063e982  MOV dword ptr [ESP + 0x1b4],ESI
0063e989  MOV dword ptr [ESP + 0x1b8],ESI
0063e990  MOV dword ptr [ESP + 0x1bc],ESI
0063e997  MOV dword ptr [ESP + 0x1c4],ESI
0063e99e  MOV dword ptr [ESP + 0x1c8],0x6
0063e9a9  MOV dword ptr [ESP + 0x1cc],ESI
0063e9b0  MOV dword ptr [ESP + 0x1d0],ESI
0063e9b7  MOV dword ptr [ESP + 0x1d4],ESI
0063e9be  MOV dword ptr [ESP + 0x1d8],EDI
0063e9c5  MOV dword ptr [ESP + 0x1dc],ESI
0063e9cc  MOV dword ptr [ESP + 0x1e0],ESI
0063e9d3  MOV dword ptr [ESP + 0x1e4],ESI
0063e9da  MOV dword ptr [ESP + 0x1e8],ESI
0063e9e1  MOV dword ptr [ESP + 0x1ec],ESI
0063e9e8  MOV dword ptr [ESP + 0x1f0],EBX
0063e9ef  MOV dword ptr [ESP + 0x1f4],ESI
0063e9f6  MOV dword ptr [ESP + 0x1f8],ESI
0063e9fd  MOV dword ptr [ESP + 0x1fc],ESI
0063ea04  MOV dword ptr [ESP + 0x200],ESI
0063ea0b  MOV dword ptr [ESP + 0x204],ESI
0063ea12  MOV dword ptr [ESP + 0x208],EDX
0063ea19  MOV dword ptr [ESP + 0x20c],ESI
0063ea20  MOV dword ptr [ESP + 0x210],ESI
0063ea27  MOV dword ptr [ESP + 0x214],ESI
0063ea2e  MOV dword ptr [ESP + 0x218],ESI
0063ea35  MOV dword ptr [ESP + 0x21c],ESI
0063ea3c  MOV dword ptr [ESP + 0x224],ESI
0063ea43  MOV dword ptr [ESP + 0x228],ESI
0063ea4a  MOV dword ptr [ESP + 0x22c],ESI
0063ea51  MOV dword ptr [ESP + 0x230],ESI
0063ea58  MOV dword ptr [ESP + 0x234],ESI
0063ea5f  MOV EAX,0x91f440
0063ea64  LEA ECX,[ESP + 0x1c]
0063ea68  LEA EDX,[ECX + -0xc]
0063ea6b  MOV EDI,dword ptr [EDX]
0063ea6d  LEA ESI,[EAX + -0xc]
0063ea70  MOV dword ptr [ESI],EDI
0063ea72  MOV EDI,dword ptr [EDX + 0x4]
0063ea75  MOV EDX,dword ptr [EDX + 0x8]
0063ea78  MOV dword ptr [ESI + 0x4],EDI
0063ea7b  MOV dword ptr [ESI + 0x8],EDX
0063ea7e  MOV EDX,ECX
0063ea80  MOV EDI,dword ptr [EDX]
0063ea82  MOV ESI,EAX
0063ea84  MOV dword ptr [ESI],EDI
0063ea86  MOV EDI,dword ptr [EDX + 0x4]
0063ea89  MOV EDX,dword ptr [EDX + 0x8]
0063ea8c  ADD EAX,0x34
0063ea8f  MOV dword ptr [ESI + 0x4],EDI
0063ea92  ADD ECX,0x18
0063ea95  CMP EAX,0x91f920
0063ea9a  MOV dword ptr [ESI + 0x8],EDX
0063ea9d  JL 0x0063ea68
0063ea9f  POP EDI
0063eaa0  POP ESI
0063eaa1  POP EBP
0063eaa2  POP EBX
0063eaa3  ADD ESP,0x240
0063eaa9  RET
0063eaaa  CMP EAX,0xb7c24363
0063eaaf  JZ 0x0063f432
0063eab5  CMP EAX,0xb84bc4e5
0063eaba  JZ 0x0063f023
0063eac0  MOV ECX,EDI
0063eac2  CALL 0x00628530
0063eac7  MOV EBX,0x5
0063eacc  TEST AL,AL
0063eace  MOV EAX,0x2
0063ead3  MOV EDX,0x1
0063ead8  MOV EDI,0x4
0063eadd  MOV dword ptr [ESP + 0x74],ESI
0063eae1  MOV dword ptr [ESP + 0x6c],ESI
0063eae5  MOV dword ptr [ESP + 0x68],ESI
0063eae9  MOV dword ptr [ESP + 0x64],ESI
0063eaed  MOV dword ptr [ESP + 0x60],ESI
0063eaf1  MOV dword ptr [ESP + 0x5c],ESI
0063eaf5  MOV dword ptr [ESP + 0x54],ESI
0063eaf9  MOV dword ptr [ESP + 0x50],ESI
0063eafd  MOV dword ptr [ESP + 0x4c],ESI
0063eb01  MOV dword ptr [ESP + 0x48],ESI
0063eb05  MOV dword ptr [ESP + 0x44],ESI
0063eb09  MOV dword ptr [ESP + 0x3c],ESI
0063eb0d  MOV dword ptr [ESP + 0x38],ESI
0063eb11  MOV dword ptr [ESP + 0x34],ESI
0063eb15  MOV dword ptr [ESP + 0x2c],ESI
0063eb19  MOV dword ptr [ESP + 0x24],ESI
0063eb1d  MOV dword ptr [ESP + 0x20],ESI
0063eb21  MOV dword ptr [ESP + 0x1c],ESI
0063eb25  MOV dword ptr [ESP + 0x18],ESI
0063eb29  MOV dword ptr [ESP + 0x14],ESI
0063eb2d  MOV dword ptr [ESP + 0x58],EBX
0063eb31  MOV dword ptr [ESP + 0x40],EDI
0063eb35  MOV dword ptr [ESP + 0x70],EAX
0063eb39  MOV dword ptr [ESP + 0x30],EAX
0063eb3d  MOV dword ptr [ESP + 0x28],EAX
0063eb41  MOV dword ptr [ESP + 0x10],EAX
0063eb45  MOV dword ptr [ESP + 0xe8],EAX
0063eb4c  MOV dword ptr [ESP + 0xe4],ESI
0063eb53  MOV dword ptr [ESP + 0xe0],ESI
0063eb5a  MOV dword ptr [ESP + 0xdc],ESI
0063eb61  MOV dword ptr [ESP + 0xd4],ESI
0063eb68  MOV dword ptr [ESP + 0xcc],ESI
0063eb6f  MOV dword ptr [ESP + 0xc8],ESI
0063eb76  MOV dword ptr [ESP + 0xc4],ESI
0063eb7d  MOV dword ptr [ESP + 0xbc],ESI
0063eb84  MOV dword ptr [ESP + 0xb4],ESI
0063eb8b  MOV dword ptr [ESP + 0xb0],ESI
0063eb92  MOV dword ptr [ESP + 0xac],ESI
0063eb99  MOV dword ptr [ESP + 0xa8],0x6
0063eba4  MOV dword ptr [ESP + 0xa4],ESI
0063ebab  MOV dword ptr [ESP + 0xa0],EAX
0063ebb2  MOV dword ptr [ESP + 0x9c],ESI
0063ebb9  MOV dword ptr [ESP + 0x98],ESI
0063ebc0  MOV dword ptr [ESP + 0x94],ESI
0063ebc7  MOV dword ptr [ESP + 0x8c],ESI
0063ebce  MOV dword ptr [ESP + 0x88],EAX
0063ebd5  MOV dword ptr [ESP + 0x84],ESI
0063ebdc  MOV dword ptr [ESP + 0x80],ESI
0063ebe3  MOV dword ptr [ESP + 0x7c],ESI
0063ebe7  MOV dword ptr [ESP + 0x78],EDX
0063ebeb  MOV dword ptr [ESP + 0x144],ESI
0063ebf2  MOV dword ptr [ESP + 0x140],ESI
0063ebf9  MOV dword ptr [ESP + 0x13c],ESI
0063ec00  MOV dword ptr [ESP + 0x134],ESI
0063ec07  MOV dword ptr [ESP + 0x12c],ESI
0063ec0e  MOV dword ptr [ESP + 0x128],ESI
0063ec15  MOV dword ptr [ESP + 0x124],ESI
0063ec1c  MOV dword ptr [ESP + 0x11c],ESI
0063ec23  MOV dword ptr [ESP + 0x114],ESI
0063ec2a  MOV dword ptr [ESP + 0x110],ESI
0063ec31  MOV dword ptr [ESP + 0x10c],ESI
0063ec38  MOV dword ptr [ESP + 0x108],ESI
0063ec3f  MOV dword ptr [ESP + 0x104],ESI
0063ec46  MOV dword ptr [ESP + 0xfc],ESI
0063ec4d  MOV dword ptr [ESP + 0xf8],ESI
0063ec54  MOV dword ptr [ESP + 0xf4],ESI
0063ec5b  MOV dword ptr [ESP + 0xf0],EBX
0063ec62  MOV dword ptr [ESP + 0xec],ESI
0063ec69  MOV dword ptr [ESP + 0x18c],ESI
0063ec70  MOV dword ptr [ESP + 0x188],ESI
0063ec77  MOV dword ptr [ESP + 0x184],ESI
0063ec7e  MOV dword ptr [ESP + 0x180],ESI
0063ec85  MOV dword ptr [ESP + 0x17c],ESI
0063ec8c  MOV dword ptr [ESP + 0x178],ESI
0063ec93  MOV dword ptr [ESP + 0x174],ESI
0063ec9a  MOV dword ptr [ESP + 0x170],ESI
0063eca1  MOV dword ptr [ESP + 0x16c],ESI
0063eca8  MOV dword ptr [ESP + 0x168],ESI
0063ecaf  MOV dword ptr [ESP + 0x164],ESI
0063ecb6  MOV dword ptr [ESP + 0x160],ESI
0063ecbd  MOV dword ptr [ESP + 0x15c],ESI
0063ecc4  MOV dword ptr [ESP + 0x158],ESI
0063eccb  MOV dword ptr [ESP + 0x154],ESI
0063ecd2  MOV dword ptr [ESP + 0x14c],ESI
0063ecd9  MOV dword ptr [ESP + 0x1d0],ESI
0063ece0  MOV dword ptr [ESP + 0x1cc],ESI
0063ece7  MOV dword ptr [ESP + 0x1c4],ESI
0063ecee  MOV dword ptr [ESP + 0x1c0],EAX
0063ecf5  MOV dword ptr [ESP + 0x1bc],ESI
0063ecfc  MOV dword ptr [ESP + 0x1b8],ESI
0063ed03  MOV dword ptr [ESP + 0x1b4],ESI
0063ed0a  MOV dword ptr [ESP + 0x1b0],ESI
0063ed11  MOV dword ptr [ESP + 0x1ac],ESI
0063ed18  MOV dword ptr [ESP + 0x1a8],ESI
0063ed1f  MOV dword ptr [ESP + 0x1a4],ESI
0063ed26  MOV dword ptr [ESP + 0x1a0],ESI
0063ed2d  MOV dword ptr [ESP + 0x19c],ESI
0063ed34  MOV dword ptr [ESP + 0x194],ESI
0063ed3b  MOV dword ptr [ESP + 0x204],ESI
0063ed42  MOV dword ptr [ESP + 0x200],ESI
0063ed49  MOV dword ptr [ESP + 0x1f4],ESI
0063ed50  MOV dword ptr [ESP + 0x1ec],ESI
0063ed57  MOV dword ptr [ESP + 0x1e8],ESI
0063ed5e  MOV dword ptr [ESP + 0x1dc],ESI
0063ed65  MOV dword ptr [ESP + 0x1d4],ESI
0063ed6c  MOV dword ptr [ESP + 0x224],ESI
0063ed73  MOV dword ptr [ESP + 0x218],ESI
0063ed7a  MOV dword ptr [ESP + 0x20c],ESI
0063ed81  MOV dword ptr [ESP + 0x230],ESI
0063ed88  JZ 0x0063eed9
0063ed8e  MOV dword ptr [ESP + 0x120],EAX
0063ed95  MOV dword ptr [ESP + 0x190],EAX
0063ed9c  MOV dword ptr [ESP + 0x228],EAX
0063eda3  XOR EAX,EAX
0063eda5  MOV dword ptr [ESP + 0x238],EAX
0063edac  MOV ECX,0x3
0063edb1  MOV dword ptr [ESP + 0x23c],EAX
0063edb8  MOV dword ptr [ESP + 0x240],EAX
0063edbf  MOV dword ptr [ESP + 0x244],EAX
0063edc6  MOV dword ptr [ESP + 0x248],EAX
0063edcd  MOV dword ptr [ESP + 0x90],ECX
0063edd4  MOV dword ptr [ESP + 0x100],ECX
0063eddb  MOV dword ptr [ESP + 0x118],ECX
0063ede2  MOV dword ptr [ESP + 0x130],ECX
0063ede9  MOV dword ptr [ESP + 0x138],ECX
0063edf0  MOV dword ptr [ESP + 0x148],ECX
0063edf7  MOV dword ptr [ESP + 0x1d8],ECX
0063edfe  MOV dword ptr [ESP + 0x1e0],ECX
0063ee05  MOV dword ptr [ESP + 0x1f0],ECX
0063ee0c  MOV dword ptr [ESP + 0x208],ECX
0063ee13  MOV dword ptr [ESP + 0x220],ECX
0063ee1a  MOV dword ptr [ESP + 0x24c],EAX
0063ee21  MOV dword ptr [ESP + 0xb8],ESI
0063ee28  MOV dword ptr [ESP + 0xc0],ESI
0063ee2f  MOV dword ptr [ESP + 0xd0],ESI
0063ee36  MOV dword ptr [ESP + 0xd8],ESI
0063ee3d  MOV dword ptr [ESP + 0x150],EDX
0063ee44  MOV dword ptr [ESP + 0x198],EDI
0063ee4b  MOV dword ptr [ESP + 0x1c8],0x7
0063ee56  MOV dword ptr [ESP + 0x1e4],EDI
0063ee5d  MOV dword ptr [ESP + 0x1f8],EDX
0063ee64  MOV dword ptr [ESP + 0x1fc],EBX
0063ee6b  MOV dword ptr [ESP + 0x210],ESI
0063ee72  MOV dword ptr [ESP + 0x214],EDI
0063ee79  MOV dword ptr [ESP + 0x21c],EDX
0063ee80  MOV dword ptr [ESP + 0x22c],EBX
0063ee87  MOV dword ptr [ESP + 0x234],EDX
0063ee8e  MOV EAX,0x91f440
0063ee93  LEA ECX,[ESP + 0x1c]
0063ee97  LEA EDX,[ECX + -0xc]
0063ee9a  MOV EDI,dword ptr [EDX]
0063ee9c  LEA ESI,[EAX + -0xc]
0063ee9f  MOV dword ptr [ESI],EDI
0063eea1  MOV EDI,dword ptr [EDX + 0x4]
0063eea4  MOV EDX,dword ptr [EDX + 0x8]
0063eea7  MOV dword ptr [ESI + 0x4],EDI
0063eeaa  MOV dword ptr [ESI + 0x8],EDX
0063eead  MOV EDX,ECX
0063eeaf  MOV EDI,dword ptr [EDX]
0063eeb1  MOV ESI,EAX
0063eeb3  MOV dword ptr [ESI],EDI
0063eeb5  MOV EDI,dword ptr [EDX + 0x4]
0063eeb8  MOV EDX,dword ptr [EDX + 0x8]
0063eebb  ADD EAX,0x34
0063eebe  MOV dword ptr [ESI + 0x4],EDI
0063eec1  ADD ECX,0x18
0063eec4  CMP EAX,0x91f920
0063eec9  MOV dword ptr [ESI + 0x8],EDX
0063eecc  JL 0x0063ee97
0063eece  POP EDI
0063eecf  POP ESI
0063eed0  POP EBP
0063eed1  POP EBX
0063eed2  ADD ESP,0x240
0063eed8  RET
0063eed9  XOR EAX,EAX
0063eedb  MOV dword ptr [ESP + 0x238],EAX
0063eee2  MOV dword ptr [ESP + 0x23c],EAX
0063eee9  MOV dword ptr [ESP + 0x240],EAX
0063eef0  MOV dword ptr [ESP + 0x244],EAX
0063eef7  MOV dword ptr [ESP + 0x248],EAX
0063eefe  MOV dword ptr [ESP + 0x24c],EAX
0063ef05  MOV dword ptr [ESP + 0x90],0x3
0063ef10  MOV dword ptr [ESP + 0xb8],EBX
0063ef17  MOV dword ptr [ESP + 0xc0],EDX
0063ef1e  MOV dword ptr [ESP + 0xd0],EDI
0063ef25  MOV dword ptr [ESP + 0xd8],EDX
0063ef2c  MOV dword ptr [ESP + 0x100],ESI
0063ef33  MOV dword ptr [ESP + 0x118],ESI
0063ef3a  MOV dword ptr [ESP + 0x120],ESI
0063ef41  MOV dword ptr [ESP + 0x130],ESI
0063ef48  MOV dword ptr [ESP + 0x138],ESI
0063ef4f  MOV dword ptr [ESP + 0x148],ESI
0063ef56  MOV dword ptr [ESP + 0x150],ESI
0063ef5d  MOV dword ptr [ESP + 0x190],ESI
0063ef64  MOV dword ptr [ESP + 0x198],ESI
0063ef6b  MOV dword ptr [ESP + 0x1c8],0x9
0063ef76  MOV dword ptr [ESP + 0x1d8],EDI
0063ef7d  MOV dword ptr [ESP + 0x1e0],ESI
0063ef84  MOV dword ptr [ESP + 0x1e4],ESI
0063ef8b  MOV dword ptr [ESP + 0x1f0],EBX
0063ef92  MOV dword ptr [ESP + 0x1f8],ESI
0063ef99  MOV dword ptr [ESP + 0x1fc],ESI
0063efa0  MOV dword ptr [ESP + 0x208],EDI
0063efa7  MOV dword ptr [ESP + 0x210],EDX
0063efae  MOV dword ptr [ESP + 0x214],ESI
0063efb5  MOV dword ptr [ESP + 0x21c],ESI
0063efbc  MOV dword ptr [ESP + 0x220],EBX
0063efc3  MOV dword ptr [ESP + 0x228],EDX
0063efca  MOV dword ptr [ESP + 0x22c],ESI
0063efd1  MOV dword ptr [ESP + 0x234],ESI
0063efd8  MOV EAX,0x91f440
0063efdd  LEA ECX,[ESP + 0x1c]
0063efe1  LEA EDX,[ECX + -0xc]
0063efe4  MOV EDI,dword ptr [EDX]
0063efe6  LEA ESI,[EAX + -0xc]
0063efe9  MOV dword ptr [ESI],EDI
0063efeb  MOV EDI,dword ptr [EDX + 0x4]
0063efee  MOV EDX,dword ptr [EDX + 0x8]
0063eff1  MOV dword ptr [ESI + 0x4],EDI
0063eff4  MOV dword ptr [ESI + 0x8],EDX
0063eff7  MOV EDX,ECX
0063eff9  MOV EDI,dword ptr [EDX]
0063effb  MOV ESI,EAX
0063effd  MOV dword ptr [ESI],EDI
0063efff  MOV EDI,dword ptr [EDX + 0x4]
0063f002  MOV EDX,dword ptr [EDX + 0x8]
0063f005  ADD EAX,0x34
0063f008  MOV dword ptr [ESI + 0x4],EDI
0063f00b  ADD ECX,0x18
0063f00e  CMP EAX,0x91f920
0063f013  MOV dword ptr [ESI + 0x8],EDX
0063f016  JL 0x0063efe1
0063f018  POP EDI
0063f019  POP ESI
0063f01a  POP EBP
0063f01b  POP EBX
0063f01c  ADD ESP,0x240
0063f022  RET
0063f023  MOV EAX,0x2
0063f028  MOV EDI,0x4
0063f02d  MOV EBX,0x5
0063f032  MOV dword ptr [ESP + 0x10],0x8
0063f03a  MOV dword ptr [ESP + 0x14],ESI
0063f03e  MOV dword ptr [ESP + 0x18],ESI
0063f042  MOV dword ptr [ESP + 0x1c],ESI
0063f046  MOV dword ptr [ESP + 0x20],ESI
0063f04a  MOV dword ptr [ESP + 0x24],ESI
0063f04e  MOV dword ptr [ESP + 0x28],0x9
0063f056  MOV dword ptr [ESP + 0x2c],ESI
0063f05a  MOV dword ptr [ESP + 0x30],ESI
0063f05e  MOV dword ptr [ESP + 0x34],ESI
0063f062  MOV dword ptr [ESP + 0x38],ESI
0063f066  MOV dword ptr [ESP + 0x3c],ESI
0063f06a  MOV dword ptr [ESP + 0x40],EDI
0063f06e  MOV dword ptr [ESP + 0x44],ESI
0063f072  MOV dword ptr [ESP + 0x48],ESI
0063f076  MOV dword ptr [ESP + 0x4c],ESI
0063f07a  MOV dword ptr [ESP + 0x50],ESI
0063f07e  MOV dword ptr [ESP + 0x54],ESI
0063f082  MOV dword ptr [ESP + 0x58],EBX
0063f086  MOV dword ptr [ESP + 0x5c],ESI
0063f08a  MOV dword ptr [ESP + 0x60],ESI
0063f08e  MOV dword ptr [ESP + 0x64],ESI
0063f092  MOV dword ptr [ESP + 0x68],ESI
0063f096  MOV dword ptr [ESP + 0x6c],ESI
0063f09a  MOV dword ptr [ESP + 0x70],EAX
0063f09e  MOV dword ptr [ESP + 0x74],ESI
0063f0a2  MOV dword ptr [ESP + 0x78],EDI
0063f0a6  MOV dword ptr [ESP + 0x7c],ESI
0063f0aa  MOV dword ptr [ESP + 0x80],ESI
0063f0b1  MOV dword ptr [ESP + 0x84],ESI
0063f0b8  MOV dword ptr [ESP + 0x88],EAX
0063f0bf  MOV dword ptr [ESP + 0x8c],ESI
0063f0c6  MOV dword ptr [ESP + 0x90],0x3
0063f0d1  MOV dword ptr [ESP + 0x94],ESI
0063f0d8  MOV dword ptr [ESP + 0x98],ESI
0063f0df  MOV dword ptr [ESP + 0x9c],ESI
0063f0e6  MOV dword ptr [ESP + 0xa0],EAX
0063f0ed  MOV dword ptr [ESP + 0xa4],ESI
0063f0f4  MOV dword ptr [ESP + 0xa8],EBX
0063f0fb  MOV dword ptr [ESP + 0xac],ESI
0063f102  MOV dword ptr [ESP + 0xb0],ESI
0063f109  MOV dword ptr [ESP + 0xb4],ESI
0063f110  MOV dword ptr [ESP + 0xb8],EAX
0063f117  MOV dword ptr [ESP + 0xbc],ESI
0063f11e  MOV dword ptr [ESP + 0xc0],ESI
0063f125  MOV dword ptr [ESP + 0xc4],ESI
0063f12c  MOV dword ptr [ESP + 0xc8],ESI
0063f133  MOV dword ptr [ESP + 0xcc],ESI
0063f13a  MOV dword ptr [ESP + 0xd0],EAX
0063f141  MOV dword ptr [ESP + 0xd4],ESI
0063f148  MOV dword ptr [ESP + 0xd8],0x1
0063f153  MOV dword ptr [ESP + 0xdc],ESI
0063f15a  MOV dword ptr [ESP + 0xe0],ESI
0063f161  MOV dword ptr [ESP + 0xe4],ESI
0063f168  MOV dword ptr [ESP + 0xe8],ESI
0063f16f  MOV dword ptr [ESP + 0xec],ESI
0063f176  MOV dword ptr [ESP + 0xf0],ESI
0063f17d  MOV dword ptr [ESP + 0xf4],ESI
0063f184  MOV dword ptr [ESP + 0xf8],ESI
0063f18b  MOV dword ptr [ESP + 0xfc],ESI
0063f192  MOV dword ptr [ESP + 0x100],ESI
0063f199  MOV dword ptr [ESP + 0x104],ESI
0063f1a0  MOV dword ptr [ESP + 0x108],ESI
0063f1a7  MOV dword ptr [ESP + 0x10c],ESI
0063f1ae  MOV dword ptr [ESP + 0x110],ESI
0063f1b5  MOV dword ptr [ESP + 0x114],ESI
0063f1bc  MOV dword ptr [ESP + 0x118],ESI
0063f1c3  MOV dword ptr [ESP + 0x11c],ESI
0063f1ca  MOV dword ptr [ESP + 0x120],ESI
0063f1d1  MOV dword ptr [ESP + 0x124],ESI
0063f1d8  MOV dword ptr [ESP + 0x128],ESI
0063f1df  MOV dword ptr [ESP + 0x12c],ESI
0063f1e6  MOV dword ptr [ESP + 0x130],ESI
0063f1ed  MOV dword ptr [ESP + 0x134],ESI
0063f1f4  MOV dword ptr [ESP + 0x138],ESI
0063f1fb  MOV dword ptr [ESP + 0x13c],ESI
0063f202  MOV dword ptr [ESP + 0x140],ESI
0063f209  MOV dword ptr [ESP + 0x144],ESI
0063f210  MOV dword ptr [ESP + 0x1c0],EAX
0063f217  MOV dword ptr [ESP + 0x1c8],EAX
0063f21e  XOR EAX,EAX
0063f220  MOV dword ptr [ESP + 0x238],EAX
0063f227  MOV dword ptr [ESP + 0x23c],EAX
0063f22e  MOV dword ptr [ESP + 0x240],EAX
0063f235  MOV dword ptr [ESP + 0x244],EAX
0063f23c  MOV dword ptr [ESP + 0x248],EAX
0063f243  MOV dword ptr [ESP + 0x24c],EAX
0063f24a  MOV dword ptr [ESP + 0x148],ESI
0063f251  MOV dword ptr [ESP + 0x14c],ESI
0063f258  MOV dword ptr [ESP + 0x150],ESI
0063f25f  MOV dword ptr [ESP + 0x154],ESI
0063f266  MOV dword ptr [ESP + 0x158],ESI
0063f26d  MOV dword ptr [ESP + 0x15c],ESI
0063f274  MOV dword ptr [ESP + 0x160],ESI
0063f27b  MOV dword ptr [ESP + 0x164],ESI
0063f282  MOV dword ptr [ESP + 0x168],ESI
0063f289  MOV dword ptr [ESP + 0x16c],ESI
0063f290  MOV dword ptr [ESP + 0x170],ESI
0063f297  MOV dword ptr [ESP + 0x174],ESI
0063f29e  MOV dword ptr [ESP + 0x178],ESI
0063f2a5  MOV dword ptr [ESP + 0x17c],ESI
0063f2ac  MOV dword ptr [ESP + 0x180],ESI
0063f2b3  MOV dword ptr [ESP + 0x184],ESI
0063f2ba  MOV dword ptr [ESP + 0x188],ESI
0063f2c1  MOV dword ptr [ESP + 0x18c],ESI
0063f2c8  MOV dword ptr [ESP + 0x190],ESI
0063f2cf  MOV dword ptr [ESP + 0x194],ESI
0063f2d6  MOV dword ptr [ESP + 0x198],ESI
0063f2dd  MOV dword ptr [ESP + 0x19c],ESI
0063f2e4  MOV dword ptr [ESP + 0x1a0],ESI
0063f2eb  MOV dword ptr [ESP + 0x1a4],ESI
0063f2f2  MOV dword ptr [ESP + 0x1a8],ESI
0063f2f9  MOV dword ptr [ESP + 0x1ac],ESI
0063f300  MOV dword ptr [ESP + 0x1b0],ESI
0063f307  MOV dword ptr [ESP + 0x1b4],ESI
0063f30e  MOV dword ptr [ESP + 0x1b8],ESI
0063f315  MOV dword ptr [ESP + 0x1bc],ESI
0063f31c  MOV dword ptr [ESP + 0x1c4],ESI
0063f323  MOV dword ptr [ESP + 0x1cc],ESI
0063f32a  MOV dword ptr [ESP + 0x1d0],ESI
0063f331  MOV dword ptr [ESP + 0x1d4],ESI
0063f338  MOV dword ptr [ESP + 0x1d8],EDI
0063f33f  MOV dword ptr [ESP + 0x1dc],ESI
0063f346  MOV dword ptr [ESP + 0x1e0],ESI
0063f34d  MOV dword ptr [ESP + 0x1e4],ESI
0063f354  MOV dword ptr [ESP + 0x1e8],ESI
0063f35b  MOV dword ptr [ESP + 0x1ec],ESI
0063f362  MOV dword ptr [ESP + 0x1f0],EBX
0063f369  MOV dword ptr [ESP + 0x1f4],ESI
0063f370  MOV dword ptr [ESP + 0x1f8],ESI
0063f377  MOV dword ptr [ESP + 0x1fc],ESI
0063f37e  MOV dword ptr [ESP + 0x200],ESI
0063f385  MOV dword ptr [ESP + 0x204],ESI
0063f38c  MOV dword ptr [ESP + 0x208],ESI
0063f393  MOV dword ptr [ESP + 0x20c],ESI
0063f39a  MOV dword ptr [ESP + 0x210],ESI
0063f3a1  MOV dword ptr [ESP + 0x214],ESI
0063f3a8  MOV dword ptr [ESP + 0x218],ESI
0063f3af  MOV dword ptr [ESP + 0x21c],ESI
0063f3b6  MOV dword ptr [ESP + 0x220],ESI
0063f3bd  MOV dword ptr [ESP + 0x224],ESI
0063f3c4  MOV dword ptr [ESP + 0x228],ESI
0063f3cb  MOV dword ptr [ESP + 0x22c],ESI
0063f3d2  MOV dword ptr [ESP + 0x230],ESI
0063f3d9  MOV dword ptr [ESP + 0x234],ESI
0063f3e0  MOV EAX,0x91f440
0063f3e5  LEA ECX,[ESP + 0x1c]
0063f3e9  LEA ESP,[ESP]
0063f3f0  LEA EDX,[ECX + -0xc]
0063f3f3  MOV EDI,dword ptr [EDX]
0063f3f5  LEA ESI,[EAX + -0xc]
0063f3f8  MOV dword ptr [ESI],EDI
0063f3fa  MOV EDI,dword ptr [EDX + 0x4]
0063f3fd  MOV EDX,dword ptr [EDX + 0x8]
0063f400  MOV dword ptr [ESI + 0x4],EDI
0063f403  MOV dword ptr [ESI + 0x8],EDX
0063f406  MOV EDX,ECX
0063f408  MOV EDI,dword ptr [EDX]
0063f40a  MOV ESI,EAX
0063f40c  MOV dword ptr [ESI],EDI
0063f40e  MOV EDI,dword ptr [EDX + 0x4]
0063f411  MOV EDX,dword ptr [EDX + 0x8]
0063f414  ADD EAX,0x34
0063f417  MOV dword ptr [ESI + 0x4],EDI
0063f41a  ADD ECX,0x18
0063f41d  CMP EAX,0x91f920
0063f422  MOV dword ptr [ESI + 0x8],EDX
0063f425  JL 0x0063f3f0
0063f427  POP EDI
0063f428  POP ESI
0063f429  POP EBP
0063f42a  POP EBX
0063f42b  ADD ESP,0x240
0063f431  RET
0063f432  MOV EAX,0x2
0063f437  MOV ECX,0x3
0063f43c  MOV EDX,0x1
0063f441  MOV EDI,0x4
0063f446  MOV EBX,0x5
0063f44b  MOV dword ptr [ESP + 0x10],EAX
0063f44f  MOV dword ptr [ESP + 0x14],ESI
0063f453  MOV dword ptr [ESP + 0x18],EDX
0063f457  MOV dword ptr [ESP + 0x1c],ESI
0063f45b  MOV dword ptr [ESP + 0x20],ESI
0063f45f  MOV dword ptr [ESP + 0x24],ESI
0063f463  MOV dword ptr [ESP + 0x28],EAX
0063f467  MOV dword ptr [ESP + 0x2c],ESI
0063f46b  MOV dword ptr [ESP + 0x30],ESI
0063f46f  MOV dword ptr [ESP + 0x34],ESI
0063f473  MOV dword ptr [ESP + 0x38],ESI
0063f477  MOV dword ptr [ESP + 0x3c],ESI
0063f47b  MOV dword ptr [ESP + 0x40],ECX
0063f47f  MOV dword ptr [ESP + 0x44],ESI
0063f483  MOV dword ptr [ESP + 0x48],ECX
0063f487  MOV dword ptr [ESP + 0x4c],ESI
0063f48b  MOV dword ptr [ESP + 0x50],ESI
0063f48f  MOV dword ptr [ESP + 0x54],ESI
0063f493  MOV dword ptr [ESP + 0x58],ECX
0063f497  MOV dword ptr [ESP + 0x5c],ESI
0063f49b  MOV dword ptr [ESP + 0x60],EDX
0063f49f  MOV dword ptr [ESP + 0x64],ESI
0063f4a3  MOV dword ptr [ESP + 0x68],ESI
0063f4a7  MOV dword ptr [ESP + 0x6c],ESI
0063f4ab  MOV dword ptr [ESP + 0x70],EAX
0063f4af  MOV dword ptr [ESP + 0x74],ESI
0063f4b3  MOV dword ptr [ESP + 0x78],0x6
0063f4bb  MOV dword ptr [ESP + 0x7c],ESI
0063f4bf  MOV dword ptr [ESP + 0x80],ESI
0063f4c6  MOV dword ptr [ESP + 0x84],ESI
0063f4cd  MOV dword ptr [ESP + 0x88],EAX
0063f4d4  MOV dword ptr [ESP + 0x8c],ESI
0063f4db  MOV dword ptr [ESP + 0x90],EDI
0063f4e2  MOV dword ptr [ESP + 0x94],ESI
0063f4e9  MOV dword ptr [ESP + 0x98],ESI
0063f4f0  MOV dword ptr [ESP + 0x9c],ESI
0063f4f7  MOV dword ptr [ESP + 0xa0],EAX
0063f4fe  MOV dword ptr [ESP + 0xa4],ESI
0063f505  MOV dword ptr [ESP + 0xa8],0x7
0063f510  MOV dword ptr [ESP + 0xac],ESI
0063f517  MOV dword ptr [ESP + 0xb0],ESI
0063f51e  MOV dword ptr [ESP + 0xb4],ESI
0063f525  MOV dword ptr [ESP + 0xb8],EAX
0063f52c  MOV dword ptr [ESP + 0xbc],ESI
0063f533  MOV dword ptr [ESP + 0xc0],EAX
0063f53a  MOV dword ptr [ESP + 0xc4],ESI
0063f541  MOV dword ptr [ESP + 0xc8],ESI
0063f548  MOV dword ptr [ESP + 0xcc],ESI
0063f54f  MOV dword ptr [ESP + 0xd0],EAX
0063f556  MOV dword ptr [ESP + 0xd4],ESI
0063f55d  MOV dword ptr [ESP + 0xd8],EBX
0063f564  MOV dword ptr [ESP + 0xdc],ESI
0063f56b  MOV dword ptr [ESP + 0xe0],ESI
0063f572  MOV dword ptr [ESP + 0xe4],ESI
0063f579  MOV dword ptr [ESP + 0xe8],EAX
0063f580  MOV dword ptr [ESP + 0xec],ESI
0063f587  MOV dword ptr [ESP + 0xf0],ECX
0063f58e  MOV dword ptr [ESP + 0xf4],ESI
0063f595  MOV dword ptr [ESP + 0xf8],ESI
0063f59c  MOV dword ptr [ESP + 0xfc],ESI
0063f5a3  MOV dword ptr [ESP + 0x100],ESI
0063f5aa  MOV dword ptr [ESP + 0x104],ESI
0063f5b1  MOV dword ptr [ESP + 0x108],ESI
0063f5b8  MOV dword ptr [ESP + 0x10c],ESI
0063f5bf  MOV dword ptr [ESP + 0x110],ESI
0063f5c6  MOV dword ptr [ESP + 0x114],ESI
0063f5cd  MOV dword ptr [ESP + 0x118],ESI
0063f5d4  MOV dword ptr [ESP + 0x11c],ESI
0063f5db  MOV dword ptr [ESP + 0x120],ESI
0063f5e2  MOV dword ptr [ESP + 0x124],ESI
0063f5e9  MOV dword ptr [ESP + 0x128],ESI
0063f5f0  MOV dword ptr [ESP + 0x12c],ESI
0063f5f7  MOV dword ptr [ESP + 0x130],ESI
0063f5fe  MOV dword ptr [ESP + 0x134],ESI
0063f605  MOV dword ptr [ESP + 0x138],ESI
0063f60c  MOV dword ptr [ESP + 0x13c],ESI
0063f613  MOV dword ptr [ESP + 0x1c0],EAX
0063f61a  MOV dword ptr [ESP + 0x228],EAX
0063f621  XOR EAX,EAX
0063f623  MOV dword ptr [ESP + 0x238],EAX
0063f62a  MOV dword ptr [ESP + 0x23c],EAX
0063f631  MOV dword ptr [ESP + 0x240],EAX
0063f638  MOV dword ptr [ESP + 0x244],EAX
0063f63f  MOV dword ptr [ESP + 0x248],EAX
0063f646  MOV dword ptr [ESP + 0x1d8],ECX
0063f64d  MOV dword ptr [ESP + 0x1e0],ECX
0063f654  MOV dword ptr [ESP + 0x1f0],ECX
0063f65b  MOV dword ptr [ESP + 0x208],ECX
0063f662  MOV dword ptr [ESP + 0x220],ECX
0063f669  MOV dword ptr [ESP + 0x24c],EAX
0063f670  MOV dword ptr [ESP + 0x140],ESI
0063f677  MOV dword ptr [ESP + 0x144],ESI
0063f67e  MOV dword ptr [ESP + 0x148],ESI
0063f685  MOV dword ptr [ESP + 0x14c],ESI
0063f68c  MOV dword ptr [ESP + 0x150],ESI
0063f693  MOV dword ptr [ESP + 0x154],ESI
0063f69a  MOV dword ptr [ESP + 0x158],ESI
0063f6a1  MOV dword ptr [ESP + 0x15c],ESI
0063f6a8  MOV dword ptr [ESP + 0x160],ESI
0063f6af  MOV dword ptr [ESP + 0x164],ESI
0063f6b6  MOV dword ptr [ESP + 0x168],ESI
0063f6bd  MOV dword ptr [ESP + 0x16c],ESI
0063f6c4  MOV dword ptr [ESP + 0x170],ESI
0063f6cb  MOV dword ptr [ESP + 0x174],ESI
0063f6d2  MOV dword ptr [ESP + 0x178],ESI
0063f6d9  MOV dword ptr [ESP + 0x17c],ESI
0063f6e0  MOV dword ptr [ESP + 0x180],ESI
0063f6e7  MOV dword ptr [ESP + 0x184],ESI
0063f6ee  MOV dword ptr [ESP + 0x188],ESI
0063f6f5  MOV dword ptr [ESP + 0x18c],ESI
0063f6fc  MOV dword ptr [ESP + 0x190],ESI
0063f703  MOV dword ptr [ESP + 0x194],ESI
0063f70a  MOV dword ptr [ESP + 0x198],ESI
0063f711  MOV dword ptr [ESP + 0x19c],ESI
0063f718  MOV dword ptr [ESP + 0x1a0],ESI
0063f71f  MOV dword ptr [ESP + 0x1a4],ESI
0063f726  MOV dword ptr [ESP + 0x1a8],ESI
0063f72d  MOV dword ptr [ESP + 0x1ac],ESI
0063f734  MOV dword ptr [ESP + 0x1b0],ESI
0063f73b  MOV dword ptr [ESP + 0x1b4],ESI
0063f742  MOV dword ptr [ESP + 0x1b8],ESI
0063f749  MOV dword ptr [ESP + 0x1bc],ESI
0063f750  MOV dword ptr [ESP + 0x1c4],ESI
0063f757  MOV dword ptr [ESP + 0x1c8],0x8
0063f762  MOV dword ptr [ESP + 0x1cc],ESI
0063f769  MOV dword ptr [ESP + 0x1d0],ESI
0063f770  MOV dword ptr [ESP + 0x1d4],ESI
0063f777  MOV dword ptr [ESP + 0x1dc],ESI
0063f77e  MOV dword ptr [ESP + 0x1e4],EDI
0063f785  MOV dword ptr [ESP + 0x1e8],ESI
0063f78c  MOV dword ptr [ESP + 0x1ec],ESI
0063f793  MOV dword ptr [ESP + 0x1f4],ESI
0063f79a  MOV dword ptr [ESP + 0x1f8],EDX
0063f7a1  MOV dword ptr [ESP + 0x1fc],EBX
0063f7a8  MOV dword ptr [ESP + 0x200],ESI
0063f7af  MOV dword ptr [ESP + 0x204],ESI
0063f7b6  MOV dword ptr [ESP + 0x20c],ESI
0063f7bd  MOV dword ptr [ESP + 0x210],ESI
0063f7c4  MOV dword ptr [ESP + 0x214],EDI
0063f7cb  MOV dword ptr [ESP + 0x218],ESI
0063f7d2  MOV dword ptr [ESP + 0x21c],EDX
0063f7d9  MOV dword ptr [ESP + 0x224],ESI
0063f7e0  MOV dword ptr [ESP + 0x22c],EBX
0063f7e7  MOV dword ptr [ESP + 0x230],ESI
0063f7ee  MOV dword ptr [ESP + 0x234],EDX
0063f7f5  MOV EAX,0x91f440
0063f7fa  LEA ECX,[ESP + 0x1c]
0063f7fe  MOV EDI,EDI
0063f800  LEA EDX,[ECX + -0xc]
0063f803  MOV EDI,dword ptr [EDX]
0063f805  LEA ESI,[EAX + -0xc]
0063f808  MOV dword ptr [ESI],EDI
0063f80a  MOV EDI,dword ptr [EDX + 0x4]
0063f80d  MOV EDX,dword ptr [EDX + 0x8]
0063f810  MOV dword ptr [ESI + 0x4],EDI
0063f813  MOV dword ptr [ESI + 0x8],EDX
0063f816  MOV EDX,ECX
0063f818  MOV EDI,dword ptr [EDX]
0063f81a  MOV ESI,EAX
0063f81c  MOV dword ptr [ESI],EDI
0063f81e  MOV EDI,dword ptr [EDX + 0x4]
0063f821  MOV EDX,dword ptr [EDX + 0x8]
0063f824  ADD EAX,0x34
0063f827  MOV dword ptr [ESI + 0x4],EDI
0063f82a  ADD ECX,0x18
0063f82d  CMP EAX,0x91f920
0063f832  MOV dword ptr [ESI + 0x8],EDX
0063f835  JL 0x0063f800
0063f837  POP EDI
0063f838  POP ESI
0063f839  POP EBP
0063f83a  POP EBX
0063f83b  ADD ESP,0x240
0063f841  RET
