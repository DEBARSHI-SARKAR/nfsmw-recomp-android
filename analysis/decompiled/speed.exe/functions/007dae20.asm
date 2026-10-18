007dae20  PUSH EBP
007dae21  MOV EBP,ESP
007dae23  PUSH -0x1
007dae25  PUSH 0x8bd3d8
007dae2a  PUSH 0x7cd5e4
007dae2f  MOV EAX,FS:[0x0]
007dae35  PUSH EAX
007dae36  MOV dword ptr FS:[0x0],ESP
007dae3d  ADD ESP,-0x58
007dae40  MOV EAX,[0x00906980]
007dae45  MOV dword ptr [EBP + -0x4c],EAX
007dae48  PUSH EBX
007dae49  PUSH ESI
007dae4a  PUSH EDI
007dae4b  MOV dword ptr [EBP + -0x18],ESP
007dae4e  CMP dword ptr [0x009bad94],0x0
007dae55  JNZ 0x007dae94
007dae57  PUSH 0x1
007dae59  PUSH 0x8bd0fc
007dae5e  PUSH 0x1
007dae60  PUSH 0x8bd0fc
007dae65  PUSH 0x0
007dae67  PUSH 0x0
007dae69  CALL dword ptr [0x0089024c]
007dae6f  TEST EAX,EAX
007dae71  JZ 0x007dae7f
007dae73  MOV dword ptr [0x009bad94],0x1
007dae7d  JMP 0x007dae94
007dae7f  CALL dword ptr [0x00890188]
007dae85  CMP EAX,0x78
007dae88  JNZ 0x007dae94
007dae8a  MOV dword ptr [0x009bad94],0x2
007dae94  CMP dword ptr [EBP + 0x14],0x0
007dae98  JLE 0x007daead
007dae9a  MOV EAX,dword ptr [EBP + 0x14]
007dae9d  PUSH EAX
007dae9e  MOV ECX,dword ptr [EBP + 0x10]
007daea1  PUSH ECX
007daea2  CALL 0x007db390
007daea7  ADD ESP,0x8
007daeaa  MOV dword ptr [EBP + 0x14],EAX
007daead  CMP dword ptr [EBP + 0x1c],0x0
007daeb1  JLE 0x007daec6
007daeb3  MOV EDX,dword ptr [EBP + 0x1c]
007daeb6  PUSH EDX
007daeb7  MOV EAX,dword ptr [EBP + 0x18]
007daeba  PUSH EAX
007daebb  CALL 0x007db390
007daec0  ADD ESP,0x8
007daec3  MOV dword ptr [EBP + 0x1c],EAX
007daec6  CMP dword ptr [0x009bad94],0x2
007daecd  JZ 0x007daedc
007daecf  CMP dword ptr [0x009bad94],0x0
007daed6  JNZ 0x007dafe9
007daedc  MOV dword ptr [EBP + -0x20],0x0
007daee3  MOV dword ptr [EBP + -0x28],0x0
007daeea  CMP dword ptr [EBP + 0x8],0x0
007daeee  JNZ 0x007daef9
007daef0  MOV ECX,dword ptr [0x009bada0]
007daef6  MOV dword ptr [EBP + 0x8],ECX
007daef9  CMP dword ptr [EBP + 0x20],0x0
007daefd  JNZ 0x007daf08
007daeff  MOV EDX,dword ptr [0x009badb0]
007daf05  MOV dword ptr [EBP + 0x20],EDX
007daf08  MOV EAX,dword ptr [EBP + 0x8]
007daf0b  PUSH EAX
007daf0c  CALL 0x007e3780
007daf11  ADD ESP,0x4
007daf14  MOV dword ptr [EBP + -0x1c],EAX
007daf17  CMP dword ptr [EBP + -0x1c],-0x1
007daf1b  JNZ 0x007daf24
007daf1d  XOR EAX,EAX
007daf1f  JMP 0x007db373
007daf24  MOV ECX,dword ptr [EBP + -0x1c]
007daf27  CMP ECX,dword ptr [EBP + 0x20]
007daf2a  JZ 0x007daf9e
007daf2c  PUSH 0x0
007daf2e  PUSH 0x0
007daf30  LEA EDX,[EBP + 0x14]
007daf33  PUSH EDX
007daf34  MOV EAX,dword ptr [EBP + 0x10]
007daf37  PUSH EAX
007daf38  MOV ECX,dword ptr [EBP + -0x1c]
007daf3b  PUSH ECX
007daf3c  MOV EDX,dword ptr [EBP + 0x20]
007daf3f  PUSH EDX
007daf40  CALL 0x007e37e0
007daf45  ADD ESP,0x18
007daf48  MOV dword ptr [EBP + -0x20],EAX
007daf4b  CMP dword ptr [EBP + -0x20],0x0
007daf4f  JNZ 0x007daf58
007daf51  XOR EAX,EAX
007daf53  JMP 0x007db373
007daf58  PUSH 0x0
007daf5a  PUSH 0x0
007daf5c  LEA EAX,[EBP + 0x1c]
007daf5f  PUSH EAX
007daf60  MOV ECX,dword ptr [EBP + 0x18]
007daf63  PUSH ECX
007daf64  MOV EDX,dword ptr [EBP + -0x1c]
007daf67  PUSH EDX
007daf68  MOV EAX,dword ptr [EBP + 0x20]
007daf6b  PUSH EAX
007daf6c  CALL 0x007e37e0
007daf71  ADD ESP,0x18
007daf74  MOV dword ptr [EBP + -0x28],EAX
007daf77  CMP dword ptr [EBP + -0x28],0x0
007daf7b  JNZ 0x007daf92
007daf7d  PUSH 0x2
007daf7f  MOV ECX,dword ptr [EBP + -0x20]
007daf82  PUSH ECX
007daf83  CALL 0x007c7290
007daf88  ADD ESP,0x8
007daf8b  XOR EAX,EAX
007daf8d  JMP 0x007db373
007daf92  MOV EDX,dword ptr [EBP + -0x20]
007daf95  MOV dword ptr [EBP + 0x10],EDX
007daf98  MOV EAX,dword ptr [EBP + -0x28]
007daf9b  MOV dword ptr [EBP + 0x18],EAX
007daf9e  MOV ECX,dword ptr [EBP + 0x1c]
007dafa1  PUSH ECX
007dafa2  MOV EDX,dword ptr [EBP + 0x18]
007dafa5  PUSH EDX
007dafa6  MOV EAX,dword ptr [EBP + 0x14]
007dafa9  PUSH EAX
007dafaa  MOV ECX,dword ptr [EBP + 0x10]
007dafad  PUSH ECX
007dafae  MOV EDX,dword ptr [EBP + 0xc]
007dafb1  PUSH EDX
007dafb2  MOV EAX,dword ptr [EBP + 0x8]
007dafb5  PUSH EAX
007dafb6  CALL dword ptr [0x00890248]
007dafbc  MOV dword ptr [EBP + -0x24],EAX
007dafbf  CMP dword ptr [EBP + -0x20],0x0
007dafc3  JZ 0x007dafe1
007dafc5  PUSH 0x2
007dafc7  MOV ECX,dword ptr [EBP + -0x20]
007dafca  PUSH ECX
007dafcb  CALL 0x007c7290
007dafd0  ADD ESP,0x8
007dafd3  PUSH 0x2
007dafd5  MOV EDX,dword ptr [EBP + -0x28]
007dafd8  PUSH EDX
007dafd9  CALL 0x007c7290
007dafde  ADD ESP,0x8
007dafe1  MOV EAX,dword ptr [EBP + -0x24]
007dafe4  JMP 0x007db373
007dafe9  CMP dword ptr [0x009bad94],0x1
007daff0  JNZ 0x007db371
007daff6  MOV dword ptr [EBP + -0x38],0x0
007daffd  MOV dword ptr [EBP + -0x3c],0x0
007db004  MOV dword ptr [EBP + -0x34],0x0
007db00b  CMP dword ptr [EBP + 0x20],0x0
007db00f  JNZ 0x007db019
007db011  MOV EAX,[0x009badb0]
007db016  MOV dword ptr [EBP + 0x20],EAX
007db019  CMP dword ptr [EBP + 0x14],0x0
007db01d  JZ 0x007db029
007db01f  CMP dword ptr [EBP + 0x1c],0x0
007db023  JNZ 0x007db193
007db029  MOV ECX,dword ptr [EBP + 0x14]
007db02c  CMP ECX,dword ptr [EBP + 0x1c]
007db02f  JNZ 0x007db03b
007db031  MOV EAX,0x2
007db036  JMP 0x007db373
007db03b  CMP dword ptr [EBP + 0x1c],0x1
007db03f  JLE 0x007db04b
007db041  MOV EAX,0x1
007db046  JMP 0x007db373
007db04b  CMP dword ptr [EBP + 0x14],0x1
007db04f  JLE 0x007db05b
007db051  MOV EAX,0x3
007db056  JMP 0x007db373
007db05b  LEA EDX,[EBP + -0x60]
007db05e  PUSH EDX
007db05f  MOV EAX,dword ptr [EBP + 0x20]
007db062  PUSH EAX
007db063  CALL dword ptr [0x00890244]
007db069  TEST EAX,EAX
007db06b  JNZ 0x007db074
007db06d  XOR EAX,EAX
007db06f  JMP 0x007db373
007db074  CMP dword ptr [EBP + 0x14],0x0
007db078  JNZ 0x007db080
007db07a  CMP dword ptr [EBP + 0x1c],0x1
007db07e  JZ 0x007db0ad
007db080  CMP dword ptr [EBP + 0x14],0x1
007db084  JNZ 0x007db08c
007db086  CMP dword ptr [EBP + 0x1c],0x0
007db08a  JZ 0x007db0ad
007db08c  PUSH 0x8bd394
007db091  PUSH 0x0
007db093  PUSH 0xe6
007db098  PUSH 0x8bd38c
007db09d  PUSH 0x2
007db09f  CALL 0x007d2670
007db0a4  ADD ESP,0x14
007db0a7  CMP EAX,0x1
007db0aa  JNZ 0x007db0ad
007db0ac  INT3
007db0ad  CMP dword ptr [EBP + 0x14],0x0
007db0b1  JLE 0x007db120
007db0b3  CMP dword ptr [EBP + -0x60],0x2
007db0b7  JNC 0x007db0c3
007db0b9  MOV EAX,0x3
007db0be  JMP 0x007db373
007db0c3  LEA EDX,[EBP + -0x5a]
007db0c6  MOV dword ptr [EBP + -0x48],EDX
007db0c9  JMP 0x007db0d4
007db0cb  MOV EAX,dword ptr [EBP + -0x48]
007db0ce  ADD EAX,0x2
007db0d1  MOV dword ptr [EBP + -0x48],EAX
007db0d4  MOV ECX,dword ptr [EBP + -0x48]
007db0d7  MOVZX EDX,byte ptr [ECX]
007db0da  TEST EDX,EDX
007db0dc  JZ 0x007db116
007db0de  MOV EAX,dword ptr [EBP + -0x48]
007db0e1  MOVZX ECX,byte ptr [EAX + 0x1]
007db0e5  TEST ECX,ECX
007db0e7  JZ 0x007db116
007db0e9  MOV EDX,dword ptr [EBP + 0x10]
007db0ec  MOVZX EAX,byte ptr [EDX]
007db0ef  MOV ECX,dword ptr [EBP + -0x48]
007db0f2  MOVZX EDX,byte ptr [ECX]
007db0f5  CMP EAX,EDX
007db0f7  JL 0x007db114
007db0f9  MOV EAX,dword ptr [EBP + 0x10]
007db0fc  MOVZX ECX,byte ptr [EAX]
007db0ff  MOV EDX,dword ptr [EBP + -0x48]
007db102  MOVZX EAX,byte ptr [EDX + 0x1]
007db106  CMP ECX,EAX
007db108  JG 0x007db114
007db10a  MOV EAX,0x2
007db10f  JMP 0x007db373
007db114  JMP 0x007db0cb
007db116  MOV EAX,0x3
007db11b  JMP 0x007db373
007db120  CMP dword ptr [EBP + 0x1c],0x0
007db124  JLE 0x007db193
007db126  CMP dword ptr [EBP + -0x60],0x2
007db12a  JNC 0x007db136
007db12c  MOV EAX,0x1
007db131  JMP 0x007db373
007db136  LEA ECX,[EBP + -0x5a]
007db139  MOV dword ptr [EBP + -0x48],ECX
007db13c  JMP 0x007db147
007db13e  MOV EDX,dword ptr [EBP + -0x48]
007db141  ADD EDX,0x2
007db144  MOV dword ptr [EBP + -0x48],EDX
007db147  MOV EAX,dword ptr [EBP + -0x48]
007db14a  MOVZX ECX,byte ptr [EAX]
007db14d  TEST ECX,ECX
007db14f  JZ 0x007db189
007db151  MOV EDX,dword ptr [EBP + -0x48]
007db154  MOVZX EAX,byte ptr [EDX + 0x1]
007db158  TEST EAX,EAX
007db15a  JZ 0x007db189
007db15c  MOV ECX,dword ptr [EBP + 0x18]
007db15f  MOVZX EDX,byte ptr [ECX]
007db162  MOV EAX,dword ptr [EBP + -0x48]
007db165  MOVZX ECX,byte ptr [EAX]
007db168  CMP EDX,ECX
007db16a  JL 0x007db187
007db16c  MOV EDX,dword ptr [EBP + 0x18]
007db16f  MOVZX EAX,byte ptr [EDX]
007db172  MOV ECX,dword ptr [EBP + -0x48]
007db175  MOVZX EDX,byte ptr [ECX + 0x1]
007db179  CMP EAX,EDX
007db17b  JG 0x007db187
007db17d  MOV EAX,0x2
007db182  JMP 0x007db373
007db187  JMP 0x007db13e
007db189  MOV EAX,0x1
007db18e  JMP 0x007db373
007db193  PUSH 0x0
007db195  PUSH 0x0
007db197  MOV EAX,dword ptr [EBP + 0x14]
007db19a  PUSH EAX
007db19b  MOV ECX,dword ptr [EBP + 0x10]
007db19e  PUSH ECX
007db19f  PUSH 0x9
007db1a1  MOV EDX,dword ptr [EBP + 0x20]
007db1a4  PUSH EDX
007db1a5  CALL dword ptr [0x008900fc]
007db1ab  MOV dword ptr [EBP + -0x30],EAX
007db1ae  CMP dword ptr [EBP + -0x30],0x0
007db1b2  JNZ 0x007db1bb
007db1b4  XOR EAX,EAX
007db1b6  JMP 0x007db373
007db1bb  MOV dword ptr [EBP + -0x4],0x0
007db1c2  MOV EAX,dword ptr [EBP + -0x30]
007db1c5  SHL EAX,0x1
007db1c7  ADD EAX,0x3
007db1ca  AND EAX,0xfffffffc
007db1cd  CALL 0x007c94b0
007db1d2  MOV dword ptr [EBP + -0x64],ESP
007db1d5  MOV dword ptr [EBP + -0x18],ESP
007db1d8  MOV EAX,dword ptr [EBP + -0x64]
007db1db  MOV dword ptr [EBP + -0x40],EAX
007db1de  MOV dword ptr [EBP + -0x4],0xffffffff
007db1e5  JMP 0x007db203
007db203  CMP dword ptr [EBP + -0x40],0x0
007db207  JNZ 0x007db23c
007db209  PUSH 0x121
007db20e  PUSH 0x8bd38c
007db213  PUSH 0x2
007db215  MOV ECX,dword ptr [EBP + -0x30]
007db218  SHL ECX,0x1
007db21a  PUSH ECX
007db21b  CALL 0x007c6700
007db220  ADD ESP,0x10
007db223  MOV dword ptr [EBP + -0x40],EAX
007db226  CMP dword ptr [EBP + -0x40],0x0
007db22a  JNZ 0x007db233
007db22c  XOR EAX,EAX
007db22e  JMP 0x007db373
007db233  MOV EDX,dword ptr [EBP + -0x38]
007db236  ADD EDX,0x1
007db239  MOV dword ptr [EBP + -0x38],EDX
007db23c  MOV EAX,dword ptr [EBP + -0x30]
007db23f  PUSH EAX
007db240  MOV ECX,dword ptr [EBP + -0x40]
007db243  PUSH ECX
007db244  MOV EDX,dword ptr [EBP + 0x14]
007db247  PUSH EDX
007db248  MOV EAX,dword ptr [EBP + 0x10]
007db24b  PUSH EAX
007db24c  PUSH 0x1
007db24e  MOV ECX,dword ptr [EBP + 0x20]
007db251  PUSH ECX
007db252  CALL dword ptr [0x008900fc]
007db258  TEST EAX,EAX
007db25a  JNZ 0x007db261
007db25c  JMP 0x007db358
007db261  PUSH 0x0
007db263  PUSH 0x0
007db265  MOV EDX,dword ptr [EBP + 0x1c]
007db268  PUSH EDX
007db269  MOV EAX,dword ptr [EBP + 0x18]
007db26c  PUSH EAX
007db26d  PUSH 0x9
007db26f  MOV ECX,dword ptr [EBP + 0x20]
007db272  PUSH ECX
007db273  CALL dword ptr [0x008900fc]
007db279  MOV dword ptr [EBP + -0x44],EAX
007db27c  CMP dword ptr [EBP + -0x44],0x0
007db280  JNZ 0x007db287
007db282  JMP 0x007db358
007db287  MOV dword ptr [EBP + -0x4],0x1
007db28e  MOV EAX,dword ptr [EBP + -0x44]
007db291  SHL EAX,0x1
007db293  ADD EAX,0x3
007db296  AND EAX,0xfffffffc
007db299  CALL 0x007c94b0
007db29e  MOV dword ptr [EBP + -0x68],ESP
007db2a1  MOV dword ptr [EBP + -0x18],ESP
007db2a4  MOV EDX,dword ptr [EBP + -0x68]
007db2a7  MOV dword ptr [EBP + -0x2c],EDX
007db2aa  MOV dword ptr [EBP + -0x4],0xffffffff
007db2b1  JMP 0x007db2cf
007db2cf  CMP dword ptr [EBP + -0x2c],0x0
007db2d3  JNZ 0x007db303
007db2d5  PUSH 0x144
007db2da  PUSH 0x8bd38c
007db2df  PUSH 0x2
007db2e1  MOV EAX,dword ptr [EBP + -0x44]
007db2e4  SHL EAX,0x1
007db2e6  PUSH EAX
007db2e7  CALL 0x007c6700
007db2ec  ADD ESP,0x10
007db2ef  MOV dword ptr [EBP + -0x2c],EAX
007db2f2  CMP dword ptr [EBP + -0x2c],0x0
007db2f6  JNZ 0x007db2fa
007db2f8  JMP 0x007db358
007db2fa  MOV ECX,dword ptr [EBP + -0x3c]
007db2fd  ADD ECX,0x1
007db300  MOV dword ptr [EBP + -0x3c],ECX
007db303  MOV EDX,dword ptr [EBP + -0x44]
007db306  PUSH EDX
007db307  MOV EAX,dword ptr [EBP + -0x2c]
007db30a  PUSH EAX
007db30b  MOV ECX,dword ptr [EBP + 0x1c]
007db30e  PUSH ECX
007db30f  MOV EDX,dword ptr [EBP + 0x18]
007db312  PUSH EDX
007db313  PUSH 0x1
007db315  MOV EAX,dword ptr [EBP + 0x20]
007db318  PUSH EAX
007db319  CALL dword ptr [0x008900fc]
007db31f  TEST EAX,EAX
007db321  JZ 0x007db344
007db323  MOV ECX,dword ptr [EBP + -0x44]
007db326  PUSH ECX
007db327  MOV EDX,dword ptr [EBP + -0x2c]
007db32a  PUSH EDX
007db32b  MOV EAX,dword ptr [EBP + -0x30]
007db32e  PUSH EAX
007db32f  MOV ECX,dword ptr [EBP + -0x40]
007db332  PUSH ECX
007db333  MOV EDX,dword ptr [EBP + 0xc]
007db336  PUSH EDX
007db337  MOV EAX,dword ptr [EBP + 0x8]
007db33a  PUSH EAX
007db33b  CALL dword ptr [0x0089024c]
007db341  MOV dword ptr [EBP + -0x34],EAX
007db344  CMP dword ptr [EBP + -0x3c],0x0
007db348  JZ 0x007db358
007db34a  PUSH 0x2
007db34c  MOV ECX,dword ptr [EBP + -0x2c]
007db34f  PUSH ECX
007db350  CALL 0x007c7290
007db355  ADD ESP,0x8
007db358  CMP dword ptr [EBP + -0x38],0x0
007db35c  JZ 0x007db36c
007db35e  PUSH 0x2
007db360  MOV EDX,dword ptr [EBP + -0x40]
007db363  PUSH EDX
007db364  CALL 0x007c7290
007db369  ADD ESP,0x8
007db36c  MOV EAX,dword ptr [EBP + -0x34]
007db36f  JMP 0x007db373
007db371  XOR EAX,EAX
007db373  LEA ESP,[EBP + -0x74]
007db376  MOV ECX,dword ptr [EBP + -0x10]
007db379  MOV dword ptr FS:[0x0],ECX
007db380  MOV ECX,dword ptr [EBP + -0x4c]
007db383  CALL 0x007d6cb0
007db388  POP EDI
007db389  POP ESI
007db38a  POP EBX
007db38b  MOV ESP,EBP
007db38d  POP EBP
007db38e  RET
