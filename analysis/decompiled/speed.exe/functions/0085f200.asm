0085f200  PUSH EBP
0085f201  MOV EBP,ESP
0085f203  SUB ESP,0x4b0
0085f209  MOV EAX,[0x00906980]
0085f20e  MOV dword ptr [EBP + -0x34],EAX
0085f211  MOV dword ptr [EBP + -0x24],0x0
0085f218  MOV dword ptr [EBP + 0xfffffbc4],0x0
0085f222  MOV dword ptr [EBP + 0xfffffbb4],0x0
0085f22c  MOV dword ptr [EBP + -0x20],0x0
0085f233  MOV EAX,dword ptr [EBP + 0xc]
0085f236  MOV CX,word ptr [EAX]
0085f239  MOV word ptr [EBP + 0xfffffbbc],CX
0085f240  MOVZX EDX,word ptr [EBP + 0xfffffbbc]
0085f247  MOV EAX,dword ptr [EBP + 0xc]
0085f24a  ADD EAX,0x2
0085f24d  MOV dword ptr [EBP + 0xc],EAX
0085f250  TEST EDX,EDX
0085f252  JZ 0x0085fe6c
0085f258  CMP dword ptr [EBP + 0xfffffbc4],0x0
0085f25f  JL 0x0085fe6c
0085f265  MOVZX ECX,word ptr [EBP + 0xfffffbbc]
0085f26c  CMP ECX,0x20
0085f26f  JL 0x0085f296
0085f271  MOVZX EDX,word ptr [EBP + 0xfffffbbc]
0085f278  CMP EDX,0x78
0085f27b  JG 0x0085f296
0085f27d  MOVZX EAX,word ptr [EBP + 0xfffffbbc]
0085f284  MOVSX ECX,byte ptr [EAX + 0x8bcc30]
0085f28b  AND ECX,0xf
0085f28e  MOV dword ptr [EBP + 0xfffffb64],ECX
0085f294  JMP 0x0085f2a0
0085f296  MOV dword ptr [EBP + 0xfffffb64],0x0
0085f2a0  MOV EDX,dword ptr [EBP + 0xfffffb64]
0085f2a6  MOV dword ptr [EBP + 0xfffffbc0],EDX
0085f2ac  MOV EAX,dword ptr [EBP + 0xfffffbc0]
0085f2b2  MOV ECX,dword ptr [EBP + 0xfffffbb4]
0085f2b8  MOVSX EDX,byte ptr [ECX + EAX*0x8 + 0x8bcc50]
0085f2c0  SAR EDX,0x4
0085f2c3  MOV dword ptr [EBP + 0xfffffbb4],EDX
0085f2c9  MOV EAX,dword ptr [EBP + 0xfffffbb4]
0085f2cf  MOV dword ptr [EBP + 0xfffffb60],EAX
0085f2d5  CMP dword ptr [EBP + 0xfffffb60],0x7
0085f2dc  JA 0x0085fe67
0085f2e2  MOV ECX,dword ptr [EBP + 0xfffffb60]
0085f2e8  JMP dword ptr [ECX*0x4 + 0x85fe7e]
0085f2ef  MOV dword ptr [EBP + -0xc],0x1
0085f2f6  LEA EDX,[EBP + 0xfffffbc4]
0085f2fc  PUSH EDX
0085f2fd  MOV EAX,dword ptr [EBP + 0x8]
0085f300  PUSH EAX
0085f301  MOV CX,word ptr [EBP + 0xfffffbbc]
0085f308  PUSH ECX
0085f309  CALL 0x0085ff80
0085f30e  ADD ESP,0xc
0085f311  JMP 0x0085fe67
0085f316  MOV dword ptr [EBP + -0x2c],0x0
0085f31d  MOV EDX,dword ptr [EBP + -0x2c]
0085f320  MOV dword ptr [EBP + -0x28],EDX
0085f323  MOV EAX,dword ptr [EBP + -0x28]
0085f326  MOV dword ptr [EBP + -0x18],EAX
0085f329  MOV ECX,dword ptr [EBP + -0x18]
0085f32c  MOV dword ptr [EBP + -0x1c],ECX
0085f32f  MOV dword ptr [EBP + -0x10],0x0
0085f336  MOV dword ptr [EBP + -0x30],0xffffffff
0085f33d  MOV dword ptr [EBP + -0xc],0x0
0085f344  JMP 0x0085fe67
0085f349  MOVZX EDX,word ptr [EBP + 0xfffffbbc]
0085f350  MOV dword ptr [EBP + 0xfffffb5c],EDX
0085f356  MOV EAX,dword ptr [EBP + 0xfffffb5c]
0085f35c  SUB EAX,0x20
0085f35f  MOV dword ptr [EBP + 0xfffffb5c],EAX
0085f365  CMP dword ptr [EBP + 0xfffffb5c],0x10
0085f36c  JA 0x0085f3b9
0085f36e  MOV ECX,dword ptr [EBP + 0xfffffb5c]
0085f374  MOVZX EDX,byte ptr [ECX + 0x85feb6]
0085f37b  JMP dword ptr [EDX*0x4 + 0x85fe9e]
0085f382  MOV EAX,dword ptr [EBP + -0x10]
0085f385  OR EAX,0x4
0085f388  MOV dword ptr [EBP + -0x10],EAX
0085f38b  JMP 0x0085f3b9
0085f38d  MOV ECX,dword ptr [EBP + -0x10]
0085f390  OR ECX,0x1
0085f393  MOV dword ptr [EBP + -0x10],ECX
0085f396  JMP 0x0085f3b9
0085f398  MOV EDX,dword ptr [EBP + -0x10]
0085f39b  OR EDX,0x2
0085f39e  MOV dword ptr [EBP + -0x10],EDX
0085f3a1  JMP 0x0085f3b9
0085f3a3  MOV EAX,dword ptr [EBP + -0x10]
0085f3a6  OR EAX,0x80
0085f3ab  MOV dword ptr [EBP + -0x10],EAX
0085f3ae  JMP 0x0085f3b9
0085f3b0  MOV ECX,dword ptr [EBP + -0x10]
0085f3b3  OR ECX,0x8
0085f3b6  MOV dword ptr [EBP + -0x10],ECX
0085f3b9  JMP 0x0085fe67
0085f3be  MOVZX EDX,word ptr [EBP + 0xfffffbbc]
0085f3c5  CMP EDX,0x2a
0085f3c8  JNZ 0x0085f3f2
0085f3ca  LEA EAX,[EBP + 0x10]
0085f3cd  PUSH EAX
0085f3ce  CALL 0x00860090
0085f3d3  ADD ESP,0x4
0085f3d6  MOV dword ptr [EBP + -0x18],EAX
0085f3d9  CMP dword ptr [EBP + -0x18],0x0
0085f3dd  JGE 0x0085f3f0
0085f3df  MOV ECX,dword ptr [EBP + -0x10]
0085f3e2  OR ECX,0x4
0085f3e5  MOV dword ptr [EBP + -0x10],ECX
0085f3e8  MOV EDX,dword ptr [EBP + -0x18]
0085f3eb  NEG EDX
0085f3ed  MOV dword ptr [EBP + -0x18],EDX
0085f3f0  JMP 0x0085f406
0085f3f2  MOV EAX,dword ptr [EBP + -0x18]
0085f3f5  IMUL EAX,EAX,0xa
0085f3f8  MOVZX ECX,word ptr [EBP + 0xfffffbbc]
0085f3ff  LEA EDX,[EAX + ECX*0x1 + -0x30]
0085f403  MOV dword ptr [EBP + -0x18],EDX
0085f406  JMP 0x0085fe67
0085f40b  MOV dword ptr [EBP + -0x30],0x0
0085f412  JMP 0x0085fe67
0085f417  MOVZX EAX,word ptr [EBP + 0xfffffbbc]
0085f41e  CMP EAX,0x2a
0085f421  JNZ 0x0085f441
0085f423  LEA ECX,[EBP + 0x10]
0085f426  PUSH ECX
0085f427  CALL 0x00860090
0085f42c  ADD ESP,0x4
0085f42f  MOV dword ptr [EBP + -0x30],EAX
0085f432  CMP dword ptr [EBP + -0x30],0x0
0085f436  JGE 0x0085f43f
0085f438  MOV dword ptr [EBP + -0x30],0xffffffff
0085f43f  JMP 0x0085f455
0085f441  MOV EDX,dword ptr [EBP + -0x30]
0085f444  IMUL EDX,EDX,0xa
0085f447  MOVZX EAX,word ptr [EBP + 0xfffffbbc]
0085f44e  LEA ECX,[EDX + EAX*0x1 + -0x30]
0085f452  MOV dword ptr [EBP + -0x30],ECX
0085f455  JMP 0x0085fe67
0085f45a  MOVZX EDX,word ptr [EBP + 0xfffffbbc]
0085f461  MOV dword ptr [EBP + 0xfffffb58],EDX
0085f467  MOV EAX,dword ptr [EBP + 0xfffffb58]
0085f46d  SUB EAX,0x49
0085f470  MOV dword ptr [EBP + 0xfffffb58],EAX
0085f476  CMP dword ptr [EBP + 0xfffffb58],0x2e
0085f47d  JA 0x0085f56e
0085f483  MOV ECX,dword ptr [EBP + 0xfffffb58]
0085f489  MOVZX EDX,byte ptr [ECX + 0x85fedb]
0085f490  JMP dword ptr [EDX*0x4 + 0x85fec7]
0085f497  MOV EAX,dword ptr [EBP + -0x10]
0085f49a  OR EAX,0x10
0085f49d  MOV dword ptr [EBP + -0x10],EAX
0085f4a0  JMP 0x0085f56e
0085f4a5  MOV ECX,dword ptr [EBP + 0xc]
0085f4a8  MOVZX EDX,word ptr [ECX]
0085f4ab  CMP EDX,0x36
0085f4ae  JNZ 0x0085f4d5
0085f4b0  MOV EAX,dword ptr [EBP + 0xc]
0085f4b3  MOVZX ECX,word ptr [EAX + 0x2]
0085f4b7  CMP ECX,0x34
0085f4ba  JNZ 0x0085f4d5
0085f4bc  MOV EDX,dword ptr [EBP + 0xc]
0085f4bf  ADD EDX,0x4
0085f4c2  MOV dword ptr [EBP + 0xc],EDX
0085f4c5  MOV EAX,dword ptr [EBP + -0x10]
0085f4c8  OR EAX,0x8000
0085f4cd  MOV dword ptr [EBP + -0x10],EAX
0085f4d0  JMP 0x0085f555
0085f4d5  MOV ECX,dword ptr [EBP + 0xc]
0085f4d8  MOVZX EDX,word ptr [ECX]
0085f4db  CMP EDX,0x33
0085f4de  JNZ 0x0085f502
0085f4e0  MOV EAX,dword ptr [EBP + 0xc]
0085f4e3  MOVZX ECX,word ptr [EAX + 0x2]
0085f4e7  CMP ECX,0x32
0085f4ea  JNZ 0x0085f502
0085f4ec  MOV EDX,dword ptr [EBP + 0xc]
0085f4ef  ADD EDX,0x4
0085f4f2  MOV dword ptr [EBP + 0xc],EDX
0085f4f5  MOV EAX,dword ptr [EBP + -0x10]
0085f4f8  AND EAX,0xffff7fff
0085f4fd  MOV dword ptr [EBP + -0x10],EAX
0085f500  JMP 0x0085f555
0085f502  MOV ECX,dword ptr [EBP + 0xc]
0085f505  MOVZX EDX,word ptr [ECX]
0085f508  CMP EDX,0x64
0085f50b  JZ 0x0085f544
0085f50d  MOV EAX,dword ptr [EBP + 0xc]
0085f510  MOVZX ECX,word ptr [EAX]
0085f513  CMP ECX,0x69
0085f516  JZ 0x0085f544
0085f518  MOV EDX,dword ptr [EBP + 0xc]
0085f51b  MOVZX EAX,word ptr [EDX]
0085f51e  CMP EAX,0x6f
0085f521  JZ 0x0085f544
0085f523  MOV ECX,dword ptr [EBP + 0xc]
0085f526  MOVZX EDX,word ptr [ECX]
0085f529  CMP EDX,0x75
0085f52c  JZ 0x0085f544
0085f52e  MOV EAX,dword ptr [EBP + 0xc]
0085f531  MOVZX ECX,word ptr [EAX]
0085f534  CMP ECX,0x78
0085f537  JZ 0x0085f544
0085f539  MOV EDX,dword ptr [EBP + 0xc]
0085f53c  MOVZX EAX,word ptr [EDX]
0085f53f  CMP EAX,0x58
0085f542  JNZ 0x0085f546
0085f544  JMP 0x0085f555
0085f546  MOV dword ptr [EBP + 0xfffffbb4],0x0
0085f550  JMP 0x0085f2ef
0085f555  JMP 0x0085f56e
0085f557  MOV ECX,dword ptr [EBP + -0x10]
0085f55a  OR ECX,0x20
0085f55d  MOV dword ptr [EBP + -0x10],ECX
0085f560  JMP 0x0085f56e
0085f562  MOV EDX,dword ptr [EBP + -0x10]
0085f565  OR EDX,0x800
0085f56b  MOV dword ptr [EBP + -0x10],EDX
0085f56e  JMP 0x0085fe67
0085f573  MOVZX EAX,word ptr [EBP + 0xfffffbbc]
0085f57a  MOV dword ptr [EBP + 0xfffffb54],EAX
0085f580  MOV ECX,dword ptr [EBP + 0xfffffb54]
0085f586  SUB ECX,0x43
0085f589  MOV dword ptr [EBP + 0xfffffb54],ECX
0085f58f  CMP dword ptr [EBP + 0xfffffb54],0x35
0085f596  JA 0x0085fc9d
0085f59c  MOV EDX,dword ptr [EBP + 0xfffffb54]
0085f5a2  MOVZX EAX,byte ptr [EDX + 0x85ff46]
0085f5a9  JMP dword ptr [EAX*0x4 + 0x85ff0a]
0085f5b0  MOV ECX,dword ptr [EBP + -0x10]
0085f5b3  AND ECX,0x830
0085f5b9  JNZ 0x0085f5c4
0085f5bb  MOV EDX,dword ptr [EBP + -0x10]
0085f5be  OR EDX,0x20
0085f5c1  MOV dword ptr [EBP + -0x10],EDX
0085f5c4  MOV dword ptr [EBP + -0xc],0x1
0085f5cb  LEA EAX,[EBP + 0x10]
0085f5ce  PUSH EAX
0085f5cf  CALL 0x00860090
0085f5d4  ADD ESP,0x4
0085f5d7  MOV word ptr [EBP + 0xfffffbb8],AX
0085f5de  MOV ECX,dword ptr [EBP + -0x10]
0085f5e1  AND ECX,0x20
0085f5e4  JZ 0x0085f629
0085f5e6  MOVZX EDX,word ptr [EBP + 0xfffffbb8]
0085f5ed  AND EDX,0xff
0085f5f3  MOV byte ptr [EBP + 0xfffffbac],DL
0085f5f9  MOV byte ptr [EBP + 0xfffffbad],0x0
0085f600  MOV EAX,[0x00907258]
0085f605  PUSH EAX
0085f606  LEA ECX,[EBP + 0xfffffbac]
0085f60c  PUSH ECX
0085f60d  LEA EDX,[EBP + 0xfffffbc8]
0085f613  PUSH EDX
0085f614  CALL 0x00860930
0085f619  ADD ESP,0xc
0085f61c  TEST EAX,EAX
0085f61e  JGE 0x0085f627
0085f620  MOV dword ptr [EBP + -0x28],0x1
0085f627  JMP 0x0085f637
0085f629  MOV AX,word ptr [EBP + 0xfffffbb8]
0085f630  MOV word ptr [EBP + 0xfffffbc8],AX
0085f637  LEA ECX,[EBP + 0xfffffbc8]
0085f63d  MOV dword ptr [EBP + -0x4],ECX
0085f640  MOV dword ptr [EBP + -0x24],0x1
0085f647  JMP 0x0085fc9d
0085f64c  LEA EDX,[EBP + 0x10]
0085f64f  PUSH EDX
0085f650  CALL 0x00860090
0085f655  ADD ESP,0x4
0085f658  MOV dword ptr [EBP + 0xfffffba8],EAX
0085f65e  CMP dword ptr [EBP + 0xfffffba8],0x0
0085f665  JZ 0x0085f673
0085f667  MOV EAX,dword ptr [EBP + 0xfffffba8]
0085f66d  CMP dword ptr [EAX + 0x4],0x0
0085f671  JNZ 0x0085f68d
0085f673  MOV ECX,dword ptr [0x00906ab0]
0085f679  MOV dword ptr [EBP + -0x4],ECX
0085f67c  MOV EDX,dword ptr [EBP + -0x4]
0085f67f  PUSH EDX
0085f680  CALL 0x007d0cd0
0085f685  ADD ESP,0x4
0085f688  MOV dword ptr [EBP + -0x24],EAX
0085f68b  JMP 0x0085f6dc
0085f68d  MOV EAX,dword ptr [EBP + -0x10]
0085f690  AND EAX,0x800
0085f695  JZ 0x0085f6bd
0085f697  MOV ECX,dword ptr [EBP + 0xfffffba8]
0085f69d  MOV EDX,dword ptr [ECX + 0x4]
0085f6a0  MOV dword ptr [EBP + -0x4],EDX
0085f6a3  MOV EAX,dword ptr [EBP + 0xfffffba8]
0085f6a9  MOVSX EAX,word ptr [EAX]
0085f6ac  CDQ
0085f6ad  SUB EAX,EDX
0085f6af  SAR EAX,0x1
0085f6b1  MOV dword ptr [EBP + -0x24],EAX
0085f6b4  MOV dword ptr [EBP + -0xc],0x1
0085f6bb  JMP 0x0085f6dc
0085f6bd  MOV dword ptr [EBP + -0xc],0x0
0085f6c4  MOV ECX,dword ptr [EBP + 0xfffffba8]
0085f6ca  MOV EDX,dword ptr [ECX + 0x4]
0085f6cd  MOV dword ptr [EBP + -0x4],EDX
0085f6d0  MOV EAX,dword ptr [EBP + 0xfffffba8]
0085f6d6  MOVSX ECX,word ptr [EAX]
0085f6d9  MOV dword ptr [EBP + -0x24],ECX
0085f6dc  JMP 0x0085fc9d
0085f6e1  MOV EDX,dword ptr [EBP + -0x10]
0085f6e4  AND EDX,0x830
0085f6ea  JNZ 0x0085f6f5
0085f6ec  MOV EAX,dword ptr [EBP + -0x10]
0085f6ef  OR EAX,0x20
0085f6f2  MOV dword ptr [EBP + -0x10],EAX
0085f6f5  CMP dword ptr [EBP + -0x30],-0x1
0085f6f9  JNZ 0x0085f707
0085f6fb  MOV dword ptr [EBP + 0xfffffb50],0x7fffffff
0085f705  JMP 0x0085f710
0085f707  MOV ECX,dword ptr [EBP + -0x30]
0085f70a  MOV dword ptr [EBP + 0xfffffb50],ECX
0085f710  MOV EDX,dword ptr [EBP + 0xfffffb50]
0085f716  MOV dword ptr [EBP + 0xfffffba0],EDX
0085f71c  LEA EAX,[EBP + 0x10]
0085f71f  PUSH EAX
0085f720  CALL 0x00860090
0085f725  ADD ESP,0x4
0085f728  MOV dword ptr [EBP + -0x4],EAX
0085f72b  MOV ECX,dword ptr [EBP + -0x10]
0085f72e  AND ECX,0x20
0085f731  JZ 0x0085f7b2
0085f733  CMP dword ptr [EBP + -0x4],0x0
0085f737  JNZ 0x0085f742
0085f739  MOV EDX,dword ptr [0x00906ab0]
0085f73f  MOV dword ptr [EBP + -0x4],EDX
0085f742  MOV EAX,dword ptr [EBP + -0x4]
0085f745  MOV dword ptr [EBP + 0xfffffba4],EAX
0085f74b  MOV dword ptr [EBP + -0x24],0x0
0085f752  JMP 0x0085f75d
0085f754  MOV ECX,dword ptr [EBP + -0x24]
0085f757  ADD ECX,0x1
0085f75a  MOV dword ptr [EBP + -0x24],ECX
0085f75d  MOV EDX,dword ptr [EBP + -0x24]
0085f760  CMP EDX,dword ptr [EBP + 0xfffffba0]
0085f766  JGE 0x0085f7b0
0085f768  MOV EAX,dword ptr [EBP + 0xfffffba4]
0085f76e  MOVSX ECX,byte ptr [EAX]
0085f771  TEST ECX,ECX
0085f773  JZ 0x0085f7b0
0085f775  MOV EDX,dword ptr [EBP + 0xfffffba4]
0085f77b  MOVZX EAX,byte ptr [EDX]
0085f77e  MOV ECX,dword ptr [0x00907294]
0085f784  MOVZX EDX,word ptr [ECX + EAX*0x2]
0085f788  AND EDX,0x8000
0085f78e  JZ 0x0085f79f
0085f790  MOV EAX,dword ptr [EBP + 0xfffffba4]
0085f796  ADD EAX,0x1
0085f799  MOV dword ptr [EBP + 0xfffffba4],EAX
0085f79f  MOV ECX,dword ptr [EBP + 0xfffffba4]
0085f7a5  ADD ECX,0x1
0085f7a8  MOV dword ptr [EBP + 0xfffffba4],ECX
0085f7ae  JMP 0x0085f754
0085f7b0  JMP 0x0085f816
0085f7b2  CMP dword ptr [EBP + -0x4],0x0
0085f7b6  JNZ 0x0085f7c1
0085f7b8  MOV EDX,dword ptr [0x00906ab4]
0085f7be  MOV dword ptr [EBP + -0x4],EDX
0085f7c1  MOV dword ptr [EBP + -0xc],0x1
0085f7c8  MOV EAX,dword ptr [EBP + -0x4]
0085f7cb  MOV dword ptr [EBP + 0xfffffb9c],EAX
0085f7d1  MOV ECX,dword ptr [EBP + 0xfffffba0]
0085f7d7  MOV EDX,dword ptr [EBP + 0xfffffba0]
0085f7dd  SUB EDX,0x1
0085f7e0  MOV dword ptr [EBP + 0xfffffba0],EDX
0085f7e6  TEST ECX,ECX
0085f7e8  JZ 0x0085f808
0085f7ea  MOV EAX,dword ptr [EBP + 0xfffffb9c]
0085f7f0  MOVZX ECX,word ptr [EAX]
0085f7f3  TEST ECX,ECX
0085f7f5  JZ 0x0085f808
0085f7f7  MOV EDX,dword ptr [EBP + 0xfffffb9c]
0085f7fd  ADD EDX,0x2
0085f800  MOV dword ptr [EBP + 0xfffffb9c],EDX
0085f806  JMP 0x0085f7d1
0085f808  MOV EAX,dword ptr [EBP + 0xfffffb9c]
0085f80e  SUB EAX,dword ptr [EBP + -0x4]
0085f811  SAR EAX,0x1
0085f813  MOV dword ptr [EBP + -0x24],EAX
0085f816  JMP 0x0085fc9d
0085f81b  LEA ECX,[EBP + 0x10]
0085f81e  PUSH ECX
0085f81f  CALL 0x00860090
0085f824  ADD ESP,0x4
0085f827  MOV dword ptr [EBP + 0xfffffb98],EAX
0085f82d  MOV EDX,dword ptr [EBP + -0x10]
0085f830  AND EDX,0x20
0085f833  JZ 0x0085f847
0085f835  MOV EAX,dword ptr [EBP + 0xfffffb98]
0085f83b  MOV CX,word ptr [EBP + 0xfffffbc4]
0085f842  MOV word ptr [EAX],CX
0085f845  JMP 0x0085f855
0085f847  MOV EDX,dword ptr [EBP + 0xfffffb98]
0085f84d  MOV EAX,dword ptr [EBP + 0xfffffbc4]
0085f853  MOV dword ptr [EDX],EAX
0085f855  MOV dword ptr [EBP + -0x28],0x1
0085f85c  JMP 0x0085fc9d
0085f861  MOV dword ptr [EBP + -0x2c],0x1
0085f868  MOVZX ECX,word ptr [EBP + 0xfffffbbc]
0085f86f  ADD ECX,0x20
0085f872  MOV word ptr [EBP + 0xfffffbbc],CX
0085f879  MOV EDX,dword ptr [EBP + -0x10]
0085f87c  OR EDX,0x40
0085f87f  MOV dword ptr [EBP + -0x10],EDX
0085f882  LEA EAX,[EBP + 0xfffffbc8]
0085f888  MOV dword ptr [EBP + -0x4],EAX
0085f88b  CMP dword ptr [EBP + -0x30],0x0
0085f88f  JGE 0x0085f89a
0085f891  MOV dword ptr [EBP + -0x30],0x6
0085f898  JMP 0x0085f8c5
0085f89a  CMP dword ptr [EBP + -0x30],0x0
0085f89e  JNZ 0x0085f8b5
0085f8a0  MOVZX ECX,word ptr [EBP + 0xfffffbbc]
0085f8a7  CMP ECX,0x67
0085f8aa  JNZ 0x0085f8b5
0085f8ac  MOV dword ptr [EBP + -0x30],0x1
0085f8b3  JMP 0x0085f8c5
0085f8b5  CMP dword ptr [EBP + -0x30],0x200
0085f8bc  JLE 0x0085f8c5
0085f8be  MOV dword ptr [EBP + -0x30],0x200
0085f8c5  CMP dword ptr [EBP + -0x30],0xa3
0085f8cc  JLE 0x0085f904
0085f8ce  PUSH 0x300
0085f8d3  PUSH 0x8c7b98
0085f8d8  PUSH 0x2
0085f8da  MOV EDX,dword ptr [EBP + -0x30]
0085f8dd  ADD EDX,0x15d
0085f8e3  PUSH EDX
0085f8e4  CALL 0x007c6700
0085f8e9  ADD ESP,0x10
0085f8ec  MOV dword ptr [EBP + -0x20],EAX
0085f8ef  CMP dword ptr [EBP + -0x20],0x0
0085f8f3  JZ 0x0085f8fd
0085f8f5  MOV EAX,dword ptr [EBP + -0x20]
0085f8f8  MOV dword ptr [EBP + -0x4],EAX
0085f8fb  JMP 0x0085f904
0085f8fd  MOV dword ptr [EBP + -0x30],0xa3
0085f904  MOV ECX,dword ptr [EBP + 0x10]
0085f907  ADD ECX,0x8
0085f90a  MOV dword ptr [EBP + 0x10],ECX
0085f90d  MOV EDX,dword ptr [EBP + 0x10]
0085f910  MOV EAX,dword ptr [EDX + -0x8]
0085f913  MOV ECX,dword ptr [EDX + -0x4]
0085f916  MOV dword ptr [EBP + 0xfffffb90],EAX
0085f91c  MOV dword ptr [EBP + 0xfffffb94],ECX
0085f922  MOV EDX,dword ptr [EBP + -0x2c]
0085f925  PUSH EDX
0085f926  MOV EAX,dword ptr [EBP + -0x30]
0085f929  PUSH EAX
0085f92a  MOVSX ECX,byte ptr [EBP + 0xfffffbbc]
0085f931  PUSH ECX
0085f932  MOV EDX,dword ptr [EBP + -0x4]
0085f935  PUSH EDX
0085f936  LEA EAX,[EBP + 0xfffffb90]
0085f93c  PUSH EAX
0085f93d  CALL dword ptr [0x009068d0]
0085f943  ADD ESP,0x14
0085f946  MOV ECX,dword ptr [EBP + -0x10]
0085f949  AND ECX,0x80
0085f94f  JZ 0x0085f964
0085f951  CMP dword ptr [EBP + -0x30],0x0
0085f955  JNZ 0x0085f964
0085f957  MOV EDX,dword ptr [EBP + -0x4]
0085f95a  PUSH EDX
0085f95b  CALL dword ptr [0x009068dc]
0085f961  ADD ESP,0x4
0085f964  MOVZX EAX,word ptr [EBP + 0xfffffbbc]
0085f96b  CMP EAX,0x67
0085f96e  JNZ 0x0085f988
0085f970  MOV ECX,dword ptr [EBP + -0x10]
0085f973  AND ECX,0x80
0085f979  JNZ 0x0085f988
0085f97b  MOV EDX,dword ptr [EBP + -0x4]
0085f97e  PUSH EDX
0085f97f  CALL dword ptr [0x009068d4]
0085f985  ADD ESP,0x4
0085f988  MOV EAX,dword ptr [EBP + -0x4]
0085f98b  MOVSX ECX,byte ptr [EAX]
0085f98e  CMP ECX,0x2d
0085f991  JNZ 0x0085f9a8
0085f993  MOV EDX,dword ptr [EBP + -0x10]
0085f996  OR EDX,0x100
0085f99c  MOV dword ptr [EBP + -0x10],EDX
0085f99f  MOV EAX,dword ptr [EBP + -0x4]
0085f9a2  ADD EAX,0x1
0085f9a5  MOV dword ptr [EBP + -0x4],EAX
0085f9a8  MOV ECX,dword ptr [EBP + -0x4]
0085f9ab  PUSH ECX
0085f9ac  CALL 0x007d0cd0
0085f9b1  ADD ESP,0x4
0085f9b4  MOV dword ptr [EBP + -0x24],EAX
0085f9b7  JMP 0x0085fc9d
0085f9bc  MOV EDX,dword ptr [EBP + -0x10]
0085f9bf  OR EDX,0x40
0085f9c2  MOV dword ptr [EBP + -0x10],EDX
0085f9c5  MOV dword ptr [EBP + -0x8],0xa
0085f9cc  JMP 0x0085fa3e
0085f9ce  MOV dword ptr [EBP + -0x8],0xa
0085f9d5  JMP 0x0085fa3e
0085f9d7  MOV dword ptr [EBP + -0x30],0x8
0085f9de  MOV dword ptr [EBP + 0xfffffbb0],0x7
0085f9e8  JMP 0x0085f9f4
0085f9ea  MOV dword ptr [EBP + 0xfffffbb0],0x27
0085f9f4  MOV dword ptr [EBP + -0x8],0x10
0085f9fb  MOV EAX,dword ptr [EBP + -0x10]
0085f9fe  AND EAX,0x80
0085fa03  JZ 0x0085fa1f
0085fa05  MOV word ptr [EBP + -0x14],0x30
0085fa0b  MOV ECX,dword ptr [EBP + 0xfffffbb0]
0085fa11  ADD ECX,0x51
0085fa14  MOV word ptr [EBP + -0x12],CX
0085fa18  MOV dword ptr [EBP + -0x1c],0x2
0085fa1f  JMP 0x0085fa3e
0085fa21  MOV dword ptr [EBP + -0x8],0x8
0085fa28  MOV EDX,dword ptr [EBP + -0x10]
0085fa2b  AND EDX,0x80
0085fa31  JZ 0x0085fa3e
0085fa33  MOV EAX,dword ptr [EBP + -0x10]
0085fa36  OR EAX,0x200
0085fa3b  MOV dword ptr [EBP + -0x10],EAX
0085fa3e  MOV ECX,dword ptr [EBP + -0x10]
0085fa41  AND ECX,0x8000
0085fa47  JZ 0x0085fa66
0085fa49  LEA EDX,[EBP + 0x10]
0085fa4c  PUSH EDX
0085fa4d  CALL 0x008600b0
0085fa52  ADD ESP,0x4
0085fa55  MOV dword ptr [EBP + 0xfffffb80],EAX
0085fa5b  MOV dword ptr [EBP + 0xfffffb84],EDX
0085fa61  JMP 0x0085faef
0085fa66  MOV EAX,dword ptr [EBP + -0x10]
0085fa69  AND EAX,0x20
0085fa6c  JZ 0x0085fab2
0085fa6e  MOV ECX,dword ptr [EBP + -0x10]
0085fa71  AND ECX,0x40
0085fa74  JZ 0x0085fa94
0085fa76  LEA EDX,[EBP + 0x10]
0085fa79  PUSH EDX
0085fa7a  CALL 0x00860090
0085fa7f  ADD ESP,0x4
0085fa82  MOVSX EAX,AX
0085fa85  CDQ
0085fa86  MOV dword ptr [EBP + 0xfffffb80],EAX
0085fa8c  MOV dword ptr [EBP + 0xfffffb84],EDX
0085fa92  JMP 0x0085fab0
0085fa94  LEA EAX,[EBP + 0x10]
0085fa97  PUSH EAX
0085fa98  CALL 0x00860090
0085fa9d  ADD ESP,0x4
0085faa0  MOVZX EAX,AX
0085faa3  CDQ
0085faa4  MOV dword ptr [EBP + 0xfffffb80],EAX
0085faaa  MOV dword ptr [EBP + 0xfffffb84],EDX
0085fab0  JMP 0x0085faef
0085fab2  MOV ECX,dword ptr [EBP + -0x10]
0085fab5  AND ECX,0x40
0085fab8  JZ 0x0085fad5
0085faba  LEA EDX,[EBP + 0x10]
0085fabd  PUSH EDX
0085fabe  CALL 0x00860090
0085fac3  ADD ESP,0x4
0085fac6  CDQ
0085fac7  MOV dword ptr [EBP + 0xfffffb80],EAX
0085facd  MOV dword ptr [EBP + 0xfffffb84],EDX
0085fad3  JMP 0x0085faef
0085fad5  LEA EAX,[EBP + 0x10]
0085fad8  PUSH EAX
0085fad9  CALL 0x00860090
0085fade  ADD ESP,0x4
0085fae1  XOR ECX,ECX
0085fae3  MOV dword ptr [EBP + 0xfffffb80],EAX
0085fae9  MOV dword ptr [EBP + 0xfffffb84],ECX
0085faef  MOV EDX,dword ptr [EBP + -0x10]
0085faf2  AND EDX,0x40
0085faf5  JZ 0x0085fb38
0085faf7  CMP dword ptr [EBP + 0xfffffb84],0x0
0085fafe  JG 0x0085fb38
0085fb00  JL 0x0085fb0b
0085fb02  CMP dword ptr [EBP + 0xfffffb80],0x0
0085fb09  JNC 0x0085fb38
0085fb0b  MOV EAX,dword ptr [EBP + 0xfffffb80]
0085fb11  NEG EAX
0085fb13  MOV ECX,dword ptr [EBP + 0xfffffb84]
0085fb19  ADC ECX,0x0
0085fb1c  NEG ECX
0085fb1e  MOV dword ptr [EBP + 0xfffffb78],EAX
0085fb24  MOV dword ptr [EBP + 0xfffffb7c],ECX
0085fb2a  MOV EDX,dword ptr [EBP + -0x10]
0085fb2d  OR EDX,0x100
0085fb33  MOV dword ptr [EBP + -0x10],EDX
0085fb36  JMP 0x0085fb50
0085fb38  MOV EAX,dword ptr [EBP + 0xfffffb80]
0085fb3e  MOV dword ptr [EBP + 0xfffffb78],EAX
0085fb44  MOV ECX,dword ptr [EBP + 0xfffffb84]
0085fb4a  MOV dword ptr [EBP + 0xfffffb7c],ECX
0085fb50  MOV EDX,dword ptr [EBP + -0x10]
0085fb53  AND EDX,0x8000
0085fb59  JNZ 0x0085fb76
0085fb5b  MOV EAX,dword ptr [EBP + 0xfffffb78]
0085fb61  MOV ECX,dword ptr [EBP + 0xfffffb7c]
0085fb67  AND ECX,0x0
0085fb6a  MOV dword ptr [EBP + 0xfffffb78],EAX
0085fb70  MOV dword ptr [EBP + 0xfffffb7c],ECX
0085fb76  CMP dword ptr [EBP + -0x30],0x0
0085fb7a  JGE 0x0085fb85
0085fb7c  MOV dword ptr [EBP + -0x30],0x1
0085fb83  JMP 0x0085fb9e
0085fb85  MOV EDX,dword ptr [EBP + -0x10]
0085fb88  AND EDX,0xfffffff7
0085fb8b  MOV dword ptr [EBP + -0x10],EDX
0085fb8e  CMP dword ptr [EBP + -0x30],0x200
0085fb95  JLE 0x0085fb9e
0085fb97  MOV dword ptr [EBP + -0x30],0x200
0085fb9e  MOV EAX,dword ptr [EBP + 0xfffffb78]
0085fba4  OR EAX,dword ptr [EBP + 0xfffffb7c]
0085fbaa  JNZ 0x0085fbb3
0085fbac  MOV dword ptr [EBP + -0x1c],0x0
0085fbb3  LEA ECX,[EBP + 0xfffffdc7]
0085fbb9  MOV dword ptr [EBP + -0x4],ECX
0085fbbc  MOV EDX,dword ptr [EBP + -0x30]
0085fbbf  MOV EAX,dword ptr [EBP + -0x30]
0085fbc2  SUB EAX,0x1
0085fbc5  MOV dword ptr [EBP + -0x30],EAX
0085fbc8  TEST EDX,EDX
0085fbca  JG 0x0085fbda
0085fbcc  MOV ECX,dword ptr [EBP + 0xfffffb78]
0085fbd2  OR ECX,dword ptr [EBP + 0xfffffb7c]
0085fbd8  JZ 0x0085fc55
0085fbda  MOV EAX,dword ptr [EBP + -0x8]
0085fbdd  CDQ
0085fbde  PUSH EDX
0085fbdf  PUSH EAX
0085fbe0  MOV EDX,dword ptr [EBP + 0xfffffb7c]
0085fbe6  PUSH EDX
0085fbe7  MOV EAX,dword ptr [EBP + 0xfffffb78]
0085fbed  PUSH EAX
0085fbee  CALL 0x007dcac0
0085fbf3  ADD EAX,0x30
0085fbf6  MOV dword ptr [EBP + 0xfffffb8c],EAX
0085fbfc  MOV EAX,dword ptr [EBP + -0x8]
0085fbff  CDQ
0085fc00  PUSH EDX
0085fc01  PUSH EAX
0085fc02  MOV ECX,dword ptr [EBP + 0xfffffb7c]
0085fc08  PUSH ECX
0085fc09  MOV EDX,dword ptr [EBP + 0xfffffb78]
0085fc0f  PUSH EDX
0085fc10  CALL 0x007dcb40
0085fc15  MOV dword ptr [EBP + 0xfffffb78],EAX
0085fc1b  MOV dword ptr [EBP + 0xfffffb7c],EDX
0085fc21  CMP dword ptr [EBP + 0xfffffb8c],0x39
0085fc28  JLE 0x0085fc3c
0085fc2a  MOV EAX,dword ptr [EBP + 0xfffffb8c]
0085fc30  ADD EAX,dword ptr [EBP + 0xfffffbb0]
0085fc36  MOV dword ptr [EBP + 0xfffffb8c],EAX
0085fc3c  MOV ECX,dword ptr [EBP + -0x4]
0085fc3f  MOV DL,byte ptr [EBP + 0xfffffb8c]
0085fc45  MOV byte ptr [ECX],DL
0085fc47  MOV EAX,dword ptr [EBP + -0x4]
0085fc4a  SUB EAX,0x1
0085fc4d  MOV dword ptr [EBP + -0x4],EAX
0085fc50  JMP 0x0085fbbc
0085fc55  LEA ECX,[EBP + 0xfffffdc7]
0085fc5b  SUB ECX,dword ptr [EBP + -0x4]
0085fc5e  MOV dword ptr [EBP + -0x24],ECX
0085fc61  MOV EDX,dword ptr [EBP + -0x4]
0085fc64  ADD EDX,0x1
0085fc67  MOV dword ptr [EBP + -0x4],EDX
0085fc6a  MOV EAX,dword ptr [EBP + -0x10]
0085fc6d  AND EAX,0x200
0085fc72  JZ 0x0085fc9d
0085fc74  MOV ECX,dword ptr [EBP + -0x4]
0085fc77  MOVSX EDX,byte ptr [ECX]
0085fc7a  CMP EDX,0x30
0085fc7d  JNZ 0x0085fc85
0085fc7f  CMP dword ptr [EBP + -0x24],0x0
0085fc83  JNZ 0x0085fc9d
0085fc85  MOV EAX,dword ptr [EBP + -0x4]
0085fc88  SUB EAX,0x1
0085fc8b  MOV dword ptr [EBP + -0x4],EAX
0085fc8e  MOV ECX,dword ptr [EBP + -0x4]
0085fc91  MOV byte ptr [ECX],0x30
0085fc94  MOV EDX,dword ptr [EBP + -0x24]
0085fc97  ADD EDX,0x1
0085fc9a  MOV dword ptr [EBP + -0x24],EDX
0085fc9d  CMP dword ptr [EBP + -0x28],0x0
0085fca1  JNZ 0x0085fe4c
0085fca7  MOV EAX,dword ptr [EBP + -0x10]
0085fcaa  AND EAX,0x40
0085fcad  JZ 0x0085fcf5
0085fcaf  MOV ECX,dword ptr [EBP + -0x10]
0085fcb2  AND ECX,0x100
0085fcb8  JZ 0x0085fcc9
0085fcba  MOV word ptr [EBP + -0x14],0x2d
0085fcc0  MOV dword ptr [EBP + -0x1c],0x1
0085fcc7  JMP 0x0085fcf5
0085fcc9  MOV EDX,dword ptr [EBP + -0x10]
0085fccc  AND EDX,0x1
0085fccf  JZ 0x0085fce0
0085fcd1  MOV word ptr [EBP + -0x14],0x2b
0085fcd7  MOV dword ptr [EBP + -0x1c],0x1
0085fcde  JMP 0x0085fcf5
0085fce0  MOV EAX,dword ptr [EBP + -0x10]
0085fce3  AND EAX,0x2
0085fce6  JZ 0x0085fcf5
0085fce8  MOV word ptr [EBP + -0x14],0x20
0085fcee  MOV dword ptr [EBP + -0x1c],0x1
0085fcf5  MOV ECX,dword ptr [EBP + -0x18]
0085fcf8  SUB ECX,dword ptr [EBP + -0x24]
0085fcfb  SUB ECX,dword ptr [EBP + -0x1c]
0085fcfe  MOV dword ptr [EBP + 0xfffffb74],ECX
0085fd04  MOV EDX,dword ptr [EBP + -0x10]
0085fd07  AND EDX,0xc
0085fd0a  JNZ 0x0085fd28
0085fd0c  LEA EAX,[EBP + 0xfffffbc4]
0085fd12  PUSH EAX
0085fd13  MOV ECX,dword ptr [EBP + 0x8]
0085fd16  PUSH ECX
0085fd17  MOV EDX,dword ptr [EBP + 0xfffffb74]
0085fd1d  PUSH EDX
0085fd1e  PUSH 0x20
0085fd20  CALL 0x0085ffe0
0085fd25  ADD ESP,0x10
0085fd28  LEA EAX,[EBP + 0xfffffbc4]
0085fd2e  PUSH EAX
0085fd2f  MOV ECX,dword ptr [EBP + 0x8]
0085fd32  PUSH ECX
0085fd33  MOV EDX,dword ptr [EBP + -0x1c]
0085fd36  PUSH EDX
0085fd37  LEA EAX,[EBP + -0x14]
0085fd3a  PUSH EAX
0085fd3b  CALL 0x00860020
0085fd40  ADD ESP,0x10
0085fd43  MOV ECX,dword ptr [EBP + -0x10]
0085fd46  AND ECX,0x8
0085fd49  JZ 0x0085fd6f
0085fd4b  MOV EDX,dword ptr [EBP + -0x10]
0085fd4e  AND EDX,0x4
0085fd51  JNZ 0x0085fd6f
0085fd53  LEA EAX,[EBP + 0xfffffbc4]
0085fd59  PUSH EAX
0085fd5a  MOV ECX,dword ptr [EBP + 0x8]
0085fd5d  PUSH ECX
0085fd5e  MOV EDX,dword ptr [EBP + 0xfffffb74]
0085fd64  PUSH EDX
0085fd65  PUSH 0x30
0085fd67  CALL 0x0085ffe0
0085fd6c  ADD ESP,0x10
0085fd6f  CMP dword ptr [EBP + -0xc],0x0
0085fd73  JNZ 0x0085fe0d
0085fd79  CMP dword ptr [EBP + -0x24],0x0
0085fd7d  JLE 0x0085fe0d
0085fd83  MOV EAX,dword ptr [EBP + -0x4]
0085fd86  MOV dword ptr [EBP + 0xfffffb70],EAX
0085fd8c  MOV ECX,dword ptr [EBP + -0x24]
0085fd8f  MOV dword ptr [EBP + 0xfffffb6c],ECX
0085fd95  MOV EDX,dword ptr [EBP + 0xfffffb6c]
0085fd9b  MOV EAX,dword ptr [EBP + 0xfffffb6c]
0085fda1  SUB EAX,0x1
0085fda4  MOV dword ptr [EBP + 0xfffffb6c],EAX
0085fdaa  TEST EDX,EDX
0085fdac  JLE 0x0085fe0b
0085fdae  MOV ECX,dword ptr [0x00907258]
0085fdb4  PUSH ECX
0085fdb5  MOV EDX,dword ptr [EBP + 0xfffffb70]
0085fdbb  PUSH EDX
0085fdbc  LEA EAX,[EBP + 0xfffffbb8]
0085fdc2  PUSH EAX
0085fdc3  CALL 0x00860930
0085fdc8  ADD ESP,0xc
0085fdcb  MOV dword ptr [EBP + 0xfffffb68],EAX
0085fdd1  CMP dword ptr [EBP + 0xfffffb68],0x0
0085fdd8  JG 0x0085fddc
0085fdda  JMP 0x0085fe0b
0085fddc  LEA ECX,[EBP + 0xfffffbc4]
0085fde2  PUSH ECX
0085fde3  MOV EDX,dword ptr [EBP + 0x8]
0085fde6  PUSH EDX
0085fde7  MOV AX,word ptr [EBP + 0xfffffbb8]
0085fdee  PUSH EAX
0085fdef  CALL 0x0085ff80
0085fdf4  ADD ESP,0xc
0085fdf7  MOV ECX,dword ptr [EBP + 0xfffffb70]
0085fdfd  ADD ECX,dword ptr [EBP + 0xfffffb68]
0085fe03  MOV dword ptr [EBP + 0xfffffb70],ECX
0085fe09  JMP 0x0085fd95
0085fe0b  JMP 0x0085fe28
0085fe0d  LEA EDX,[EBP + 0xfffffbc4]
0085fe13  PUSH EDX
0085fe14  MOV EAX,dword ptr [EBP + 0x8]
0085fe17  PUSH EAX
0085fe18  MOV ECX,dword ptr [EBP + -0x24]
0085fe1b  PUSH ECX
0085fe1c  MOV EDX,dword ptr [EBP + -0x4]
0085fe1f  PUSH EDX
0085fe20  CALL 0x00860020
0085fe25  ADD ESP,0x10
0085fe28  MOV EAX,dword ptr [EBP + -0x10]
0085fe2b  AND EAX,0x4
0085fe2e  JZ 0x0085fe4c
0085fe30  LEA ECX,[EBP + 0xfffffbc4]
0085fe36  PUSH ECX
0085fe37  MOV EDX,dword ptr [EBP + 0x8]
0085fe3a  PUSH EDX
0085fe3b  MOV EAX,dword ptr [EBP + 0xfffffb74]
0085fe41  PUSH EAX
0085fe42  PUSH 0x20
0085fe44  CALL 0x0085ffe0
0085fe49  ADD ESP,0x10
0085fe4c  CMP dword ptr [EBP + -0x20],0x0
0085fe50  JZ 0x0085fe67
0085fe52  PUSH 0x2
0085fe54  MOV ECX,dword ptr [EBP + -0x20]
0085fe57  PUSH ECX
0085fe58  CALL 0x007c7290
0085fe5d  ADD ESP,0x8
0085fe60  MOV dword ptr [EBP + -0x20],0x0
0085fe67  JMP 0x0085f233
0085fe6c  MOV EAX,dword ptr [EBP + 0xfffffbc4]
0085fe72  MOV ECX,dword ptr [EBP + -0x34]
0085fe75  CALL 0x007d6cb0
0085fe7a  MOV ESP,EBP
0085fe7c  POP EBP
0085fe7d  RET
