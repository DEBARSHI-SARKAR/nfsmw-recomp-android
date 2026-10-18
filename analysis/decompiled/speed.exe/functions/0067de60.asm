0067de60  SUB ESP,0xac
0067de66  PUSH EBX
0067de67  MOV EBX,dword ptr [ESP + 0xbc]
0067de6e  PUSH EBP
0067de6f  PUSH ESI
0067de70  PUSH EDI
0067de71  MOV EDI,dword ptr [ESP + 0xc4]
0067de78  MOV EBP,dword ptr [ESP + 0xcc]
0067de7f  MOV ECX,EBX
0067de81  SUB ECX,EDI
0067de83  MOV EAX,0x2aaaaaab
0067de88  IMUL ECX
0067de8a  SAR EDX,0x2
0067de8d  MOV EAX,EDX
0067de8f  SHR EAX,0x1f
0067de92  ADD EAX,EDX
0067de94  CDQ
0067de95  SUB EAX,EDX
0067de97  SAR EAX,0x1
0067de99  PUSH EBP
0067de9a  LEA EAX,[EAX + EAX*0x2]
0067de9d  ADD EBX,-0x18
0067dea0  LEA ESI,[EDI + EAX*0x8]
0067dea3  PUSH EBX
0067dea4  PUSH ESI
0067dea5  PUSH EDI
0067dea6  CALL 0x0067b060
0067deab  ADD ESP,0x10
0067deae  CMP EDI,ESI
0067deb0  LEA EBX,[ESI + 0x18]
0067deb3  JNC 0x0067dede
0067deb5  LEA EAX,[ESI + -0x18]
0067deb8  PUSH ESI
0067deb9  PUSH EAX
0067deba  MOV dword ptr [ESP + 0x18],EAX
0067debe  CALL EBP
0067dec0  ADD ESP,0x8
0067dec3  TEST AL,AL
0067dec5  JNZ 0x0067dede
0067dec7  MOV ECX,dword ptr [ESP + 0x10]
0067decb  PUSH ECX
0067decc  PUSH ESI
0067decd  CALL EBP
0067decf  ADD ESP,0x8
0067ded2  TEST AL,AL
0067ded4  JNZ 0x0067dede
0067ded6  MOV ESI,dword ptr [ESP + 0x10]
0067deda  CMP EDI,ESI
0067dedc  JC 0x0067deb5
0067dede  MOV EDI,dword ptr [ESP + 0xc8]
0067dee5  CMP EBX,EDI
0067dee7  JNC 0x0067df0d
0067dee9  LEA ESP,[ESP]
0067def0  PUSH ESI
0067def1  PUSH EBX
0067def2  CALL EBP
0067def4  ADD ESP,0x8
0067def7  TEST AL,AL
0067def9  JNZ 0x0067df0d
0067defb  PUSH EBX
0067defc  PUSH ESI
0067defd  CALL EBP
0067deff  ADD ESP,0x8
0067df02  TEST AL,AL
0067df04  JNZ 0x0067df0d
0067df06  ADD EBX,0x18
0067df09  CMP EBX,EDI
0067df0b  JC 0x0067def0
0067df0d  MOV EBP,ESI
0067df0f  MOV EDI,EBX
0067df11  MOV dword ptr [ESP + 0x10],EBP
0067df15  JMP 0x0067df20
0067df20  CMP EDI,dword ptr [ESP + 0xc8]
0067df27  JNC 0x0067e003
0067df2d  LEA ECX,[ECX]
0067df30  PUSH EDI
0067df31  PUSH ESI
0067df32  CALL dword ptr [ESP + 0xd4]
0067df39  ADD ESP,0x8
0067df3c  TEST AL,AL
0067df3e  JNZ 0x0067dff1
0067df44  PUSH ESI
0067df45  PUSH EDI
0067df46  CALL dword ptr [ESP + 0xd4]
0067df4d  ADD ESP,0x8
0067df50  TEST AL,AL
0067df52  JNZ 0x0067e003
0067df58  MOV EAX,EBX
0067df5a  MOV EDX,EAX
0067df5c  MOV ECX,dword ptr [EDX]
0067df5e  MOV EBP,dword ptr [EDX + 0x4]
0067df61  MOV dword ptr [ESP + 0x90],EBP
0067df68  MOV EBP,dword ptr [EDX + 0x8]
0067df6b  MOV dword ptr [ESP + 0x94],EBP
0067df72  MOV EBP,dword ptr [EDX + 0xc]
0067df75  MOV dword ptr [ESP + 0x98],EBP
0067df7c  MOV EBP,dword ptr [EDX + 0x10]
0067df7f  MOV EDX,dword ptr [EDX + 0x14]
0067df82  MOV dword ptr [ESP + 0xa0],EDX
0067df89  MOV dword ptr [ESP + 0x9c],EBP
0067df90  MOV EDX,EDI
0067df92  MOV EBP,dword ptr [EDX]
0067df94  MOV dword ptr [EAX],EBP
0067df96  MOV EBP,dword ptr [EDX + 0x4]
0067df99  MOV dword ptr [EAX + 0x4],EBP
0067df9c  MOV EBP,dword ptr [EDX + 0x8]
0067df9f  MOV dword ptr [EAX + 0x8],EBP
0067dfa2  MOV EBP,dword ptr [EDX + 0xc]
0067dfa5  MOV dword ptr [EAX + 0xc],EBP
0067dfa8  MOV EBP,dword ptr [EDX + 0x10]
0067dfab  MOV dword ptr [EAX + 0x10],EBP
0067dfae  MOV EDX,dword ptr [EDX + 0x14]
0067dfb1  MOV EBP,dword ptr [ESP + 0x10]
0067dfb5  MOV dword ptr [EAX + 0x14],EDX
0067dfb8  MOV EDX,dword ptr [ESP + 0x94]
0067dfbf  MOV EAX,EDI
0067dfc1  MOV dword ptr [EAX],ECX
0067dfc3  MOV ECX,dword ptr [ESP + 0x90]
0067dfca  MOV dword ptr [EAX + 0x4],ECX
0067dfcd  MOV ECX,dword ptr [ESP + 0x98]
0067dfd4  MOV dword ptr [EAX + 0x8],EDX
0067dfd7  MOV EDX,dword ptr [ESP + 0x9c]
0067dfde  MOV dword ptr [EAX + 0xc],ECX
0067dfe1  MOV ECX,dword ptr [ESP + 0xa0]
0067dfe8  MOV dword ptr [EAX + 0x10],EDX
0067dfeb  ADD EBX,0x18
0067dfee  MOV dword ptr [EAX + 0x14],ECX
0067dff1  MOV EAX,dword ptr [ESP + 0xc8]
0067dff8  ADD EDI,0x18
0067dffb  CMP EDI,EAX
0067dffd  JC 0x0067df30
0067e003  CMP EBP,dword ptr [ESP + 0xc4]
0067e00a  JBE 0x0067e0e2
0067e010  ADD EBP,-0x18
0067e013  PUSH ESI
0067e014  PUSH EBP
0067e015  CALL dword ptr [ESP + 0xd4]
0067e01c  ADD ESP,0x8
0067e01f  TEST AL,AL
0067e021  JNZ 0x0067e0ba
0067e027  PUSH EBP
0067e028  PUSH ESI
0067e029  CALL dword ptr [ESP + 0xd4]
0067e030  ADD ESP,0x8
0067e033  TEST AL,AL
0067e035  JNZ 0x0067e0d7
0067e03b  SUB ESI,0x18
0067e03e  MOV EDX,ESI
0067e040  MOV EAX,dword ptr [EDX]
0067e042  MOV ECX,dword ptr [EDX + 0x4]
0067e045  MOV dword ptr [ESP + 0x5c],EAX
0067e049  MOV EAX,dword ptr [EDX + 0x8]
0067e04c  MOV dword ptr [ESP + 0x64],EAX
0067e050  MOV dword ptr [ESP + 0x60],ECX
0067e054  MOV ECX,dword ptr [EDX + 0xc]
0067e057  MOV EAX,dword ptr [EDX + 0x10]
0067e05a  MOV dword ptr [ESP + 0x68],ECX
0067e05e  MOV ECX,dword ptr [EDX + 0x14]
0067e061  MOV dword ptr [ESP + 0x6c],EAX
0067e065  MOV dword ptr [ESP + 0x70],ECX
0067e069  MOV EDX,EBP
0067e06b  MOV ECX,dword ptr [EDX]
0067e06d  MOV EAX,ESI
0067e06f  MOV dword ptr [EAX],ECX
0067e071  MOV ECX,dword ptr [EDX + 0x4]
0067e074  MOV dword ptr [EAX + 0x4],ECX
0067e077  MOV ECX,dword ptr [EDX + 0x8]
0067e07a  MOV dword ptr [EAX + 0x8],ECX
0067e07d  MOV ECX,dword ptr [EDX + 0xc]
0067e080  MOV dword ptr [EAX + 0xc],ECX
0067e083  MOV ECX,dword ptr [EDX + 0x10]
0067e086  MOV dword ptr [EAX + 0x10],ECX
0067e089  MOV EDX,dword ptr [EDX + 0x14]
0067e08c  MOV ECX,dword ptr [ESP + 0x5c]
0067e090  MOV dword ptr [EAX + 0x14],EDX
0067e093  MOV EDX,dword ptr [ESP + 0x60]
0067e097  MOV EAX,EBP
0067e099  MOV dword ptr [EAX],ECX
0067e09b  MOV ECX,dword ptr [ESP + 0x64]
0067e09f  MOV dword ptr [EAX + 0x4],EDX
0067e0a2  MOV EDX,dword ptr [ESP + 0x68]
0067e0a6  MOV dword ptr [EAX + 0x8],ECX
0067e0a9  MOV ECX,dword ptr [ESP + 0x6c]
0067e0ad  MOV dword ptr [EAX + 0xc],EDX
0067e0b0  MOV EDX,dword ptr [ESP + 0x70]
0067e0b4  MOV dword ptr [EAX + 0x10],ECX
0067e0b7  MOV dword ptr [EAX + 0x14],EDX
0067e0ba  MOV EAX,dword ptr [ESP + 0x10]
0067e0be  MOV ECX,dword ptr [ESP + 0xc4]
0067e0c5  SUB EAX,0x18
0067e0c8  SUB EBP,0x18
0067e0cb  CMP ECX,EAX
0067e0cd  MOV dword ptr [ESP + 0x10],EAX
0067e0d1  JC 0x0067e013
0067e0d7  MOV EBP,dword ptr [ESP + 0x10]
0067e0db  CMP EBP,dword ptr [ESP + 0xc4]
0067e0e2  MOV EAX,dword ptr [ESP + 0xc8]
0067e0e9  JNZ 0x0067e231
0067e0ef  CMP EDI,EAX
0067e0f1  JZ 0x0067e3cb
0067e0f7  CMP EBX,EDI
0067e0f9  JZ 0x0067e191
0067e0ff  MOV ECX,ESI
0067e101  MOV EAX,dword ptr [ECX]
0067e103  MOV EDX,dword ptr [ECX + 0x4]
0067e106  MOV dword ptr [ESP + 0xa8],EDX
0067e10d  MOV EDX,dword ptr [ECX + 0x8]
0067e110  MOV dword ptr [ESP + 0xac],EDX
0067e117  MOV EDX,dword ptr [ECX + 0xc]
0067e11a  MOV dword ptr [ESP + 0xb0],EDX
0067e121  MOV EDX,dword ptr [ECX + 0x10]
0067e124  MOV ECX,dword ptr [ECX + 0x14]
0067e127  MOV dword ptr [ESP + 0xb4],EDX
0067e12e  MOV dword ptr [ESP + 0xb8],ECX
0067e135  MOV EDX,EBX
0067e137  MOV EBP,dword ptr [EDX]
0067e139  MOV ECX,ESI
0067e13b  MOV dword ptr [ECX],EBP
0067e13d  MOV EBP,dword ptr [EDX + 0x4]
0067e140  MOV dword ptr [ECX + 0x4],EBP
0067e143  MOV EBP,dword ptr [EDX + 0x8]
0067e146  MOV dword ptr [ECX + 0x8],EBP
0067e149  MOV EBP,dword ptr [EDX + 0xc]
0067e14c  MOV dword ptr [ECX + 0xc],EBP
0067e14f  MOV EBP,dword ptr [EDX + 0x10]
0067e152  MOV dword ptr [ECX + 0x10],EBP
0067e155  MOV EDX,dword ptr [EDX + 0x14]
0067e158  MOV dword ptr [ECX + 0x14],EDX
0067e15b  MOV EDX,dword ptr [ESP + 0xa8]
0067e162  MOV ECX,EBX
0067e164  MOV dword ptr [ECX],EAX
0067e166  MOV EAX,dword ptr [ESP + 0xac]
0067e16d  MOV dword ptr [ECX + 0x4],EDX
0067e170  MOV EDX,dword ptr [ESP + 0xb0]
0067e177  MOV dword ptr [ECX + 0x8],EAX
0067e17a  MOV EAX,dword ptr [ESP + 0xb4]
0067e181  MOV dword ptr [ECX + 0xc],EDX
0067e184  MOV EDX,dword ptr [ESP + 0xb8]
0067e18b  MOV dword ptr [ECX + 0x10],EAX
0067e18e  MOV dword ptr [ECX + 0x14],EDX
0067e191  MOV ECX,ESI
0067e193  MOV EDX,ECX
0067e195  MOV EBP,dword ptr [EDX]
0067e197  MOV dword ptr [ESP + 0x74],EBP
0067e19b  MOV EBP,dword ptr [EDX + 0x4]
0067e19e  MOV dword ptr [ESP + 0x78],EBP
0067e1a2  MOV EBP,dword ptr [EDX + 0x8]
0067e1a5  MOV dword ptr [ESP + 0x7c],EBP
0067e1a9  MOV EBP,dword ptr [EDX + 0xc]
0067e1ac  MOV dword ptr [ESP + 0x80],EBP
0067e1b3  MOV EBP,dword ptr [EDX + 0x10]
0067e1b6  MOV EDX,dword ptr [EDX + 0x14]
0067e1b9  MOV dword ptr [ESP + 0x88],EDX
0067e1c0  MOV EAX,EDI
0067e1c2  MOV dword ptr [ESP + 0x84],EBP
0067e1c9  MOV EDX,EAX
0067e1cb  MOV EBP,dword ptr [EDX]
0067e1cd  MOV dword ptr [ECX],EBP
0067e1cf  MOV EBP,dword ptr [EDX + 0x4]
0067e1d2  MOV dword ptr [ECX + 0x4],EBP
0067e1d5  MOV EBP,dword ptr [EDX + 0x8]
0067e1d8  MOV dword ptr [ECX + 0x8],EBP
0067e1db  MOV EBP,dword ptr [EDX + 0xc]
0067e1de  MOV dword ptr [ECX + 0xc],EBP
0067e1e1  MOV EBP,dword ptr [EDX + 0x10]
0067e1e4  MOV dword ptr [ECX + 0x10],EBP
0067e1e7  MOV EDX,dword ptr [EDX + 0x14]
0067e1ea  MOV EBP,dword ptr [ESP + 0x10]
0067e1ee  MOV dword ptr [ECX + 0x14],EDX
0067e1f1  MOV ECX,dword ptr [ESP + 0x74]
0067e1f5  MOV EDX,dword ptr [ESP + 0x78]
0067e1f9  MOV dword ptr [EAX],ECX
0067e1fb  MOV ECX,dword ptr [ESP + 0x7c]
0067e1ff  MOV dword ptr [EAX + 0x4],EDX
0067e202  MOV EDX,dword ptr [ESP + 0x80]
0067e209  MOV dword ptr [EAX + 0x8],ECX
0067e20c  MOV ECX,dword ptr [ESP + 0x84]
0067e213  MOV dword ptr [EAX + 0xc],EDX
0067e216  MOV EDX,dword ptr [ESP + 0x88]
0067e21d  ADD EBX,0x18
0067e220  ADD ESI,0x18
0067e223  MOV dword ptr [EAX + 0x10],ECX
0067e226  ADD EDI,0x18
0067e229  MOV dword ptr [EAX + 0x14],EDX
0067e22c  JMP 0x0067df20
0067e231  SUB EBP,0x18
0067e234  CMP EDI,EAX
0067e236  MOV dword ptr [ESP + 0x10],EBP
0067e23a  JNZ 0x0067e347
0067e240  SUB ESI,0x18
0067e243  CMP EBP,ESI
0067e245  JZ 0x0067e2c3
0067e247  MOV EAX,EBP
0067e249  MOV ECX,dword ptr [EAX]
0067e24b  MOV EDX,dword ptr [EAX + 0x4]
0067e24e  MOV dword ptr [ESP + 0x14],ECX
0067e252  MOV ECX,dword ptr [EAX + 0x8]
0067e255  MOV dword ptr [ESP + 0x1c],ECX
0067e259  MOV dword ptr [ESP + 0x18],EDX
0067e25d  MOV EDX,dword ptr [EAX + 0xc]
0067e260  MOV ECX,dword ptr [EAX + 0x10]
0067e263  MOV dword ptr [ESP + 0x20],EDX
0067e267  MOV EDX,dword ptr [EAX + 0x14]
0067e26a  MOV dword ptr [ESP + 0x24],ECX
0067e26e  MOV dword ptr [ESP + 0x28],EDX
0067e272  MOV EAX,ESI
0067e274  MOV EDX,dword ptr [EAX]
0067e276  MOV ECX,EBP
0067e278  MOV dword ptr [ECX],EDX
0067e27a  MOV EDX,dword ptr [EAX + 0x4]
0067e27d  MOV dword ptr [ECX + 0x4],EDX
0067e280  MOV EDX,dword ptr [EAX + 0x8]
0067e283  MOV dword ptr [ECX + 0x8],EDX
0067e286  MOV EDX,dword ptr [EAX + 0xc]
0067e289  MOV dword ptr [ECX + 0xc],EDX
0067e28c  MOV EDX,dword ptr [EAX + 0x10]
0067e28f  MOV dword ptr [ECX + 0x10],EDX
0067e292  MOV EAX,dword ptr [EAX + 0x14]
0067e295  MOV EDX,dword ptr [ESP + 0x14]
0067e299  MOV dword ptr [ECX + 0x14],EAX
0067e29c  MOV EAX,dword ptr [ESP + 0x18]
0067e2a0  MOV ECX,ESI
0067e2a2  MOV dword ptr [ECX],EDX
0067e2a4  MOV EDX,dword ptr [ESP + 0x1c]
0067e2a8  MOV dword ptr [ECX + 0x4],EAX
0067e2ab  MOV EAX,dword ptr [ESP + 0x20]
0067e2af  MOV dword ptr [ECX + 0x8],EDX
0067e2b2  MOV EDX,dword ptr [ESP + 0x24]
0067e2b6  MOV dword ptr [ECX + 0xc],EAX
0067e2b9  MOV EAX,dword ptr [ESP + 0x28]
0067e2bd  MOV dword ptr [ECX + 0x10],EDX
0067e2c0  MOV dword ptr [ECX + 0x14],EAX
0067e2c3  MOV ECX,ESI
0067e2c5  MOV EDX,dword ptr [ECX]
0067e2c7  MOV EAX,dword ptr [ECX + 0x4]
0067e2ca  MOV dword ptr [ESP + 0x2c],EDX
0067e2ce  MOV EDX,dword ptr [ECX + 0x8]
0067e2d1  MOV dword ptr [ESP + 0x34],EDX
0067e2d5  MOV dword ptr [ESP + 0x30],EAX
0067e2d9  MOV EAX,dword ptr [ECX + 0xc]
0067e2dc  MOV EDX,dword ptr [ECX + 0x10]
0067e2df  MOV dword ptr [ESP + 0x38],EAX
0067e2e3  MOV EAX,dword ptr [ECX + 0x14]
0067e2e6  MOV dword ptr [ESP + 0x3c],EDX
0067e2ea  MOV dword ptr [ESP + 0x40],EAX
0067e2ee  SUB EBX,0x18
0067e2f1  MOV ECX,EBX
0067e2f3  MOV EAX,dword ptr [ECX]
0067e2f5  MOV EDX,ESI
0067e2f7  MOV dword ptr [EDX],EAX
0067e2f9  MOV EAX,dword ptr [ECX + 0x4]
0067e2fc  MOV dword ptr [EDX + 0x4],EAX
0067e2ff  MOV EAX,dword ptr [ECX + 0x8]
0067e302  MOV dword ptr [EDX + 0x8],EAX
0067e305  MOV EAX,dword ptr [ECX + 0xc]
0067e308  MOV dword ptr [EDX + 0xc],EAX
0067e30b  MOV EAX,dword ptr [ECX + 0x10]
0067e30e  MOV dword ptr [EDX + 0x10],EAX
0067e311  MOV ECX,dword ptr [ECX + 0x14]
0067e314  MOV EAX,dword ptr [ESP + 0x2c]
0067e318  MOV dword ptr [EDX + 0x14],ECX
0067e31b  MOV ECX,dword ptr [ESP + 0x30]
0067e31f  MOV EDX,EBX
0067e321  MOV dword ptr [EDX],EAX
0067e323  MOV EAX,dword ptr [ESP + 0x34]
0067e327  MOV dword ptr [EDX + 0x4],ECX
0067e32a  MOV ECX,dword ptr [ESP + 0x38]
0067e32e  MOV dword ptr [EDX + 0x8],EAX
0067e331  MOV EAX,dword ptr [ESP + 0x3c]
0067e335  MOV dword ptr [EDX + 0xc],ECX
0067e338  MOV ECX,dword ptr [ESP + 0x40]
0067e33c  MOV dword ptr [EDX + 0x10],EAX
0067e33f  MOV dword ptr [EDX + 0x14],ECX
0067e342  JMP 0x0067df20
0067e347  MOV EDX,EDI
0067e349  MOV EAX,dword ptr [EDX]
0067e34b  MOV ECX,dword ptr [EDX + 0x4]
0067e34e  MOV dword ptr [ESP + 0x44],EAX
0067e352  MOV EAX,dword ptr [EDX + 0x8]
0067e355  MOV dword ptr [ESP + 0x4c],EAX
0067e359  MOV dword ptr [ESP + 0x48],ECX
0067e35d  MOV ECX,dword ptr [EDX + 0xc]
0067e360  MOV EAX,dword ptr [EDX + 0x10]
0067e363  MOV dword ptr [ESP + 0x50],ECX
0067e367  MOV ECX,dword ptr [EDX + 0x14]
0067e36a  MOV dword ptr [ESP + 0x54],EAX
0067e36e  MOV dword ptr [ESP + 0x58],ECX
0067e372  MOV EDX,EBP
0067e374  MOV ECX,dword ptr [EDX]
0067e376  MOV EAX,EDI
0067e378  MOV dword ptr [EAX],ECX
0067e37a  MOV ECX,dword ptr [EDX + 0x4]
0067e37d  MOV dword ptr [EAX + 0x4],ECX
0067e380  MOV ECX,dword ptr [EDX + 0x8]
0067e383  MOV dword ptr [EAX + 0x8],ECX
0067e386  MOV ECX,dword ptr [EDX + 0xc]
0067e389  MOV dword ptr [EAX + 0xc],ECX
0067e38c  MOV ECX,dword ptr [EDX + 0x10]
0067e38f  MOV dword ptr [EAX + 0x10],ECX
0067e392  MOV EDX,dword ptr [EDX + 0x14]
0067e395  MOV ECX,dword ptr [ESP + 0x44]
0067e399  MOV dword ptr [EAX + 0x14],EDX
0067e39c  MOV EDX,dword ptr [ESP + 0x48]
0067e3a0  MOV EAX,EBP
0067e3a2  MOV dword ptr [EAX],ECX
0067e3a4  MOV ECX,dword ptr [ESP + 0x4c]
0067e3a8  MOV dword ptr [EAX + 0x4],EDX
0067e3ab  MOV EDX,dword ptr [ESP + 0x50]
0067e3af  MOV dword ptr [EAX + 0x8],ECX
0067e3b2  MOV ECX,dword ptr [ESP + 0x54]
0067e3b6  MOV dword ptr [EAX + 0xc],EDX
0067e3b9  MOV EDX,dword ptr [ESP + 0x58]
0067e3bd  MOV dword ptr [EAX + 0x10],ECX
0067e3c0  MOV dword ptr [EAX + 0x14],EDX
0067e3c3  ADD EDI,0x18
0067e3c6  JMP 0x0067df20
0067e3cb  MOV EAX,dword ptr [ESP + 0xc0]
0067e3d2  POP EDI
0067e3d3  MOV dword ptr [EAX],ESI
0067e3d5  POP ESI
0067e3d6  POP EBP
0067e3d7  MOV dword ptr [EAX + 0x4],EBX
0067e3da  POP EBX
0067e3db  ADD ESP,0xac
0067e3e1  RET
