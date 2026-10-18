007cc490  PUSH EBP
007cc491  MOV EBP,ESP
007cc493  SUB ESP,0x14
007cc496  MOV EAX,dword ptr [EBP + 0x18]
007cc499  MOV dword ptr [EAX],0x0
007cc49f  MOV ECX,dword ptr [EBP + 0x14]
007cc4a2  MOV dword ptr [ECX],0x1
007cc4a8  MOV EDX,dword ptr [EBP + 0x8]
007cc4ab  MOV dword ptr [EBP + -0x4],EDX
007cc4ae  CMP dword ptr [EBP + 0xc],0x0
007cc4b2  JZ 0x007cc4c5
007cc4b4  MOV EAX,dword ptr [EBP + 0xc]
007cc4b7  MOV ECX,dword ptr [EBP + 0x10]
007cc4ba  MOV dword ptr [EAX],ECX
007cc4bc  MOV EDX,dword ptr [EBP + 0xc]
007cc4bf  ADD EDX,0x4
007cc4c2  MOV dword ptr [EBP + 0xc],EDX
007cc4c5  MOV dword ptr [EBP + -0x8],0x0
007cc4cc  MOV EAX,dword ptr [EBP + -0x4]
007cc4cf  MOVSX ECX,byte ptr [EAX]
007cc4d2  CMP ECX,0x22
007cc4d5  JNZ 0x007cc4f6
007cc4d7  XOR EDX,EDX
007cc4d9  CMP dword ptr [EBP + -0x8],0x0
007cc4dd  SETZ DL
007cc4e0  MOV dword ptr [EBP + -0x8],EDX
007cc4e3  MOV EAX,dword ptr [EBP + -0x4]
007cc4e6  MOV CL,byte ptr [EAX]
007cc4e8  MOV byte ptr [EBP + -0xd],CL
007cc4eb  MOV EDX,dword ptr [EBP + -0x4]
007cc4ee  ADD EDX,0x1
007cc4f1  MOV dword ptr [EBP + -0x4],EDX
007cc4f4  JMP 0x007cc56c
007cc4f6  MOV EAX,dword ptr [EBP + 0x18]
007cc4f9  MOV ECX,dword ptr [EAX]
007cc4fb  ADD ECX,0x1
007cc4fe  MOV EDX,dword ptr [EBP + 0x18]
007cc501  MOV dword ptr [EDX],ECX
007cc503  CMP dword ptr [EBP + 0x10],0x0
007cc507  JZ 0x007cc51c
007cc509  MOV EAX,dword ptr [EBP + 0x10]
007cc50c  MOV ECX,dword ptr [EBP + -0x4]
007cc50f  MOV DL,byte ptr [ECX]
007cc511  MOV byte ptr [EAX],DL
007cc513  MOV EAX,dword ptr [EBP + 0x10]
007cc516  ADD EAX,0x1
007cc519  MOV dword ptr [EBP + 0x10],EAX
007cc51c  MOV ECX,dword ptr [EBP + -0x4]
007cc51f  MOV DL,byte ptr [ECX]
007cc521  MOV byte ptr [EBP + -0xd],DL
007cc524  MOV EAX,dword ptr [EBP + -0x4]
007cc527  ADD EAX,0x1
007cc52a  MOV dword ptr [EBP + -0x4],EAX
007cc52d  MOVZX ECX,byte ptr [EBP + -0xd]
007cc531  MOVZX EDX,byte ptr [ECX + 0x9c50c1]
007cc538  AND EDX,0x4
007cc53b  JZ 0x007cc56c
007cc53d  MOV EAX,dword ptr [EBP + 0x18]
007cc540  MOV ECX,dword ptr [EAX]
007cc542  ADD ECX,0x1
007cc545  MOV EDX,dword ptr [EBP + 0x18]
007cc548  MOV dword ptr [EDX],ECX
007cc54a  CMP dword ptr [EBP + 0x10],0x0
007cc54e  JZ 0x007cc563
007cc550  MOV EAX,dword ptr [EBP + 0x10]
007cc553  MOV ECX,dword ptr [EBP + -0x4]
007cc556  MOV DL,byte ptr [ECX]
007cc558  MOV byte ptr [EAX],DL
007cc55a  MOV EAX,dword ptr [EBP + 0x10]
007cc55d  ADD EAX,0x1
007cc560  MOV dword ptr [EBP + 0x10],EAX
007cc563  MOV ECX,dword ptr [EBP + -0x4]
007cc566  ADD ECX,0x1
007cc569  MOV dword ptr [EBP + -0x4],ECX
007cc56c  MOVZX EDX,byte ptr [EBP + -0xd]
007cc570  TEST EDX,EDX
007cc572  JZ 0x007cc594
007cc574  CMP dword ptr [EBP + -0x8],0x0
007cc578  JNZ 0x007cc4cc
007cc57e  MOVZX EAX,byte ptr [EBP + -0xd]
007cc582  CMP EAX,0x20
007cc585  JZ 0x007cc594
007cc587  MOVZX ECX,byte ptr [EBP + -0xd]
007cc58b  CMP ECX,0x9
007cc58e  JNZ 0x007cc4cc
007cc594  MOVZX EDX,byte ptr [EBP + -0xd]
007cc598  TEST EDX,EDX
007cc59a  JNZ 0x007cc5a7
007cc59c  MOV EAX,dword ptr [EBP + -0x4]
007cc59f  SUB EAX,0x1
007cc5a2  MOV dword ptr [EBP + -0x4],EAX
007cc5a5  JMP 0x007cc5b4
007cc5a7  CMP dword ptr [EBP + 0x10],0x0
007cc5ab  JZ 0x007cc5b4
007cc5ad  MOV ECX,dword ptr [EBP + 0x10]
007cc5b0  MOV byte ptr [ECX + -0x1],0x0
007cc5b4  MOV dword ptr [EBP + -0x8],0x0
007cc5bb  MOV EDX,dword ptr [EBP + -0x4]
007cc5be  MOVSX EAX,byte ptr [EDX]
007cc5c1  TEST EAX,EAX
007cc5c3  JZ 0x007cc5e6
007cc5c5  MOV ECX,dword ptr [EBP + -0x4]
007cc5c8  MOVSX EDX,byte ptr [ECX]
007cc5cb  CMP EDX,0x20
007cc5ce  JZ 0x007cc5db
007cc5d0  MOV EAX,dword ptr [EBP + -0x4]
007cc5d3  MOVSX ECX,byte ptr [EAX]
007cc5d6  CMP ECX,0x9
007cc5d9  JNZ 0x007cc5e6
007cc5db  MOV EDX,dword ptr [EBP + -0x4]
007cc5de  ADD EDX,0x1
007cc5e1  MOV dword ptr [EBP + -0x4],EDX
007cc5e4  JMP 0x007cc5c5
007cc5e6  MOV EAX,dword ptr [EBP + -0x4]
007cc5e9  MOVSX ECX,byte ptr [EAX]
007cc5ec  TEST ECX,ECX
007cc5ee  JNZ 0x007cc5f5
007cc5f0  JMP 0x007cc7cb
007cc5f5  CMP dword ptr [EBP + 0xc],0x0
007cc5f9  JZ 0x007cc60c
007cc5fb  MOV EDX,dword ptr [EBP + 0xc]
007cc5fe  MOV EAX,dword ptr [EBP + 0x10]
007cc601  MOV dword ptr [EDX],EAX
007cc603  MOV ECX,dword ptr [EBP + 0xc]
007cc606  ADD ECX,0x4
007cc609  MOV dword ptr [EBP + 0xc],ECX
007cc60c  MOV EDX,dword ptr [EBP + 0x14]
007cc60f  MOV EAX,dword ptr [EDX]
007cc611  ADD EAX,0x1
007cc614  MOV ECX,dword ptr [EBP + 0x14]
007cc617  MOV dword ptr [ECX],EAX
007cc619  MOV dword ptr [EBP + -0xc],0x1
007cc620  MOV dword ptr [EBP + -0x14],0x0
007cc627  MOV EDX,dword ptr [EBP + -0x4]
007cc62a  MOVSX EAX,byte ptr [EDX]
007cc62d  CMP EAX,0x5c
007cc630  JNZ 0x007cc646
007cc632  MOV ECX,dword ptr [EBP + -0x4]
007cc635  ADD ECX,0x1
007cc638  MOV dword ptr [EBP + -0x4],ECX
007cc63b  MOV EDX,dword ptr [EBP + -0x14]
007cc63e  ADD EDX,0x1
007cc641  MOV dword ptr [EBP + -0x14],EDX
007cc644  JMP 0x007cc627
007cc646  MOV EAX,dword ptr [EBP + -0x4]
007cc649  MOVSX ECX,byte ptr [EAX]
007cc64c  CMP ECX,0x22
007cc64f  JNZ 0x007cc6a2
007cc651  MOV EAX,dword ptr [EBP + -0x14]
007cc654  XOR EDX,EDX
007cc656  MOV ECX,0x2
007cc65b  DIV ECX
007cc65d  TEST EDX,EDX
007cc65f  JNZ 0x007cc69a
007cc661  CMP dword ptr [EBP + -0x8],0x0
007cc665  JZ 0x007cc687
007cc667  MOV EDX,dword ptr [EBP + -0x4]
007cc66a  MOVSX EAX,byte ptr [EDX + 0x1]
007cc66e  CMP EAX,0x22
007cc671  JNZ 0x007cc67e
007cc673  MOV ECX,dword ptr [EBP + -0x4]
007cc676  ADD ECX,0x1
007cc679  MOV dword ptr [EBP + -0x4],ECX
007cc67c  JMP 0x007cc685
007cc67e  MOV dword ptr [EBP + -0xc],0x0
007cc685  JMP 0x007cc68e
007cc687  MOV dword ptr [EBP + -0xc],0x0
007cc68e  XOR EDX,EDX
007cc690  CMP dword ptr [EBP + -0x8],0x0
007cc694  SETZ DL
007cc697  MOV dword ptr [EBP + -0x8],EDX
007cc69a  MOV EAX,dword ptr [EBP + -0x14]
007cc69d  SHR EAX,0x1
007cc69f  MOV dword ptr [EBP + -0x14],EAX
007cc6a2  MOV ECX,dword ptr [EBP + -0x14]
007cc6a5  MOV EDX,dword ptr [EBP + -0x14]
007cc6a8  SUB EDX,0x1
007cc6ab  MOV dword ptr [EBP + -0x14],EDX
007cc6ae  TEST ECX,ECX
007cc6b0  JZ 0x007cc6d6
007cc6b2  CMP dword ptr [EBP + 0x10],0x0
007cc6b6  JZ 0x007cc6c7
007cc6b8  MOV EAX,dword ptr [EBP + 0x10]
007cc6bb  MOV byte ptr [EAX],0x5c
007cc6be  MOV ECX,dword ptr [EBP + 0x10]
007cc6c1  ADD ECX,0x1
007cc6c4  MOV dword ptr [EBP + 0x10],ECX
007cc6c7  MOV EDX,dword ptr [EBP + 0x18]
007cc6ca  MOV EAX,dword ptr [EDX]
007cc6cc  ADD EAX,0x1
007cc6cf  MOV ECX,dword ptr [EBP + 0x18]
007cc6d2  MOV dword ptr [ECX],EAX
007cc6d4  JMP 0x007cc6a2
007cc6d6  MOV EDX,dword ptr [EBP + -0x4]
007cc6d9  MOVSX EAX,byte ptr [EDX]
007cc6dc  TEST EAX,EAX
007cc6de  JZ 0x007cc6fc
007cc6e0  CMP dword ptr [EBP + -0x8],0x0
007cc6e4  JNZ 0x007cc701
007cc6e6  MOV ECX,dword ptr [EBP + -0x4]
007cc6e9  MOVSX EDX,byte ptr [ECX]
007cc6ec  CMP EDX,0x20
007cc6ef  JZ 0x007cc6fc
007cc6f1  MOV EAX,dword ptr [EBP + -0x4]
007cc6f4  MOVSX ECX,byte ptr [EAX]
007cc6f7  CMP ECX,0x9
007cc6fa  JNZ 0x007cc701
007cc6fc  JMP 0x007cc7a4
007cc701  CMP dword ptr [EBP + -0xc],0x0
007cc705  JZ 0x007cc796
007cc70b  CMP dword ptr [EBP + 0x10],0x0
007cc70f  JZ 0x007cc761
007cc711  MOV EDX,dword ptr [EBP + -0x4]
007cc714  MOVZX EAX,byte ptr [EDX]
007cc717  MOVZX ECX,byte ptr [EAX + 0x9c50c1]
007cc71e  AND ECX,0x4
007cc721  JZ 0x007cc74c
007cc723  MOV EDX,dword ptr [EBP + 0x10]
007cc726  MOV EAX,dword ptr [EBP + -0x4]
007cc729  MOV CL,byte ptr [EAX]
007cc72b  MOV byte ptr [EDX],CL
007cc72d  MOV EDX,dword ptr [EBP + 0x10]
007cc730  ADD EDX,0x1
007cc733  MOV dword ptr [EBP + 0x10],EDX
007cc736  MOV EAX,dword ptr [EBP + -0x4]
007cc739  ADD EAX,0x1
007cc73c  MOV dword ptr [EBP + -0x4],EAX
007cc73f  MOV ECX,dword ptr [EBP + 0x18]
007cc742  MOV EDX,dword ptr [ECX]
007cc744  ADD EDX,0x1
007cc747  MOV EAX,dword ptr [EBP + 0x18]
007cc74a  MOV dword ptr [EAX],EDX
007cc74c  MOV ECX,dword ptr [EBP + 0x10]
007cc74f  MOV EDX,dword ptr [EBP + -0x4]
007cc752  MOV AL,byte ptr [EDX]
007cc754  MOV byte ptr [ECX],AL
007cc756  MOV ECX,dword ptr [EBP + 0x10]
007cc759  ADD ECX,0x1
007cc75c  MOV dword ptr [EBP + 0x10],ECX
007cc75f  JMP 0x007cc789
007cc761  MOV EDX,dword ptr [EBP + -0x4]
007cc764  MOVZX EAX,byte ptr [EDX]
007cc767  MOVZX ECX,byte ptr [EAX + 0x9c50c1]
007cc76e  AND ECX,0x4
007cc771  JZ 0x007cc789
007cc773  MOV EDX,dword ptr [EBP + -0x4]
007cc776  ADD EDX,0x1
007cc779  MOV dword ptr [EBP + -0x4],EDX
007cc77c  MOV EAX,dword ptr [EBP + 0x18]
007cc77f  MOV ECX,dword ptr [EAX]
007cc781  ADD ECX,0x1
007cc784  MOV EDX,dword ptr [EBP + 0x18]
007cc787  MOV dword ptr [EDX],ECX
007cc789  MOV EAX,dword ptr [EBP + 0x18]
007cc78c  MOV ECX,dword ptr [EAX]
007cc78e  ADD ECX,0x1
007cc791  MOV EDX,dword ptr [EBP + 0x18]
007cc794  MOV dword ptr [EDX],ECX
007cc796  MOV EAX,dword ptr [EBP + -0x4]
007cc799  ADD EAX,0x1
007cc79c  MOV dword ptr [EBP + -0x4],EAX
007cc79f  JMP 0x007cc619
007cc7a4  CMP dword ptr [EBP + 0x10],0x0
007cc7a8  JZ 0x007cc7b9
007cc7aa  MOV ECX,dword ptr [EBP + 0x10]
007cc7ad  MOV byte ptr [ECX],0x0
007cc7b0  MOV EDX,dword ptr [EBP + 0x10]
007cc7b3  ADD EDX,0x1
007cc7b6  MOV dword ptr [EBP + 0x10],EDX
007cc7b9  MOV EAX,dword ptr [EBP + 0x18]
007cc7bc  MOV ECX,dword ptr [EAX]
007cc7be  ADD ECX,0x1
007cc7c1  MOV EDX,dword ptr [EBP + 0x18]
007cc7c4  MOV dword ptr [EDX],ECX
007cc7c6  JMP 0x007cc5bb
007cc7cb  CMP dword ptr [EBP + 0xc],0x0
007cc7cf  JZ 0x007cc7e3
007cc7d1  MOV EAX,dword ptr [EBP + 0xc]
007cc7d4  MOV dword ptr [EAX],0x0
007cc7da  MOV ECX,dword ptr [EBP + 0xc]
007cc7dd  ADD ECX,0x4
007cc7e0  MOV dword ptr [EBP + 0xc],ECX
007cc7e3  MOV EDX,dword ptr [EBP + 0x14]
007cc7e6  MOV EAX,dword ptr [EDX]
007cc7e8  ADD EAX,0x1
007cc7eb  MOV ECX,dword ptr [EBP + 0x14]
007cc7ee  MOV dword ptr [ECX],EAX
007cc7f0  MOV ESP,EBP
007cc7f2  POP EBP
007cc7f3  RET
