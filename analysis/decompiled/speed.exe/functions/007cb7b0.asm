007cb7b0  PUSH EBP
007cb7b1  MOV EBP,ESP
007cb7b3  SUB ESP,0x28
007cb7b6  MOV EAX,dword ptr [EBP + 0x8]
007cb7b9  MOV dword ptr [EBP + -0x18],EAX
007cb7bc  MOV ECX,dword ptr [EBP + 0xc]
007cb7bf  IMUL ECX,dword ptr [EBP + 0x10]
007cb7c3  MOV dword ptr [EBP + -0x10],ECX
007cb7c6  MOV EDX,dword ptr [EBP + -0x10]
007cb7c9  MOV dword ptr [EBP + -0x4],EDX
007cb7cc  CMP dword ptr [EBP + -0x4],0x0
007cb7d0  JNZ 0x007cb7d9
007cb7d2  XOR EAX,EAX
007cb7d4  JMP 0x007cb9bf
007cb7d9  MOV EAX,dword ptr [EBP + 0x14]
007cb7dc  MOV ECX,dword ptr [EAX + 0xc]
007cb7df  AND ECX,0x10c
007cb7e5  JZ 0x007cb7f2
007cb7e7  MOV EDX,dword ptr [EBP + 0x14]
007cb7ea  MOV EAX,dword ptr [EDX + 0x18]
007cb7ed  MOV dword ptr [EBP + -0xc],EAX
007cb7f0  JMP 0x007cb7f9
007cb7f2  MOV dword ptr [EBP + -0xc],0x1000
007cb7f9  CMP dword ptr [EBP + -0x4],0x0
007cb7fd  JZ 0x007cb9bc
007cb803  MOV ECX,dword ptr [EBP + 0x14]
007cb806  MOV EDX,dword ptr [ECX + 0xc]
007cb809  AND EDX,0x108
007cb80f  JZ 0x007cb885
007cb811  MOV EAX,dword ptr [EBP + 0x14]
007cb814  CMP dword ptr [EAX + 0x4],0x0
007cb818  JZ 0x007cb885
007cb81a  MOV ECX,dword ptr [EBP + 0x14]
007cb81d  MOV EDX,dword ptr [EBP + -0x4]
007cb820  CMP EDX,dword ptr [ECX + 0x4]
007cb823  JNC 0x007cb82d
007cb825  MOV EAX,dword ptr [EBP + -0x4]
007cb828  MOV dword ptr [EBP + -0x20],EAX
007cb82b  JMP 0x007cb836
007cb82d  MOV ECX,dword ptr [EBP + 0x14]
007cb830  MOV EDX,dword ptr [ECX + 0x4]
007cb833  MOV dword ptr [EBP + -0x20],EDX
007cb836  MOV EAX,dword ptr [EBP + -0x20]
007cb839  MOV dword ptr [EBP + -0x14],EAX
007cb83c  MOV ECX,dword ptr [EBP + -0x14]
007cb83f  PUSH ECX
007cb840  MOV EDX,dword ptr [EBP + -0x18]
007cb843  PUSH EDX
007cb844  MOV EAX,dword ptr [EBP + 0x14]
007cb847  MOV ECX,dword ptr [EAX]
007cb849  PUSH ECX
007cb84a  CALL 0x007d6d30
007cb84f  ADD ESP,0xc
007cb852  MOV EDX,dword ptr [EBP + -0x4]
007cb855  SUB EDX,dword ptr [EBP + -0x14]
007cb858  MOV dword ptr [EBP + -0x4],EDX
007cb85b  MOV EAX,dword ptr [EBP + 0x14]
007cb85e  MOV ECX,dword ptr [EAX + 0x4]
007cb861  SUB ECX,dword ptr [EBP + -0x14]
007cb864  MOV EDX,dword ptr [EBP + 0x14]
007cb867  MOV dword ptr [EDX + 0x4],ECX
007cb86a  MOV EAX,dword ptr [EBP + 0x14]
007cb86d  MOV ECX,dword ptr [EAX]
007cb86f  ADD ECX,dword ptr [EBP + -0x14]
007cb872  MOV EDX,dword ptr [EBP + 0x14]
007cb875  MOV dword ptr [EDX],ECX
007cb877  MOV EAX,dword ptr [EBP + -0x18]
007cb87a  ADD EAX,dword ptr [EBP + -0x14]
007cb87d  MOV dword ptr [EBP + -0x18],EAX
007cb880  JMP 0x007cb9b7
007cb885  MOV ECX,dword ptr [EBP + -0x4]
007cb888  CMP ECX,dword ptr [EBP + -0xc]
007cb88b  JC 0x007cb959
007cb891  MOV EDX,dword ptr [EBP + 0x14]
007cb894  MOV EAX,dword ptr [EDX + 0xc]
007cb897  AND EAX,0x108
007cb89c  JZ 0x007cb8be
007cb89e  MOV ECX,dword ptr [EBP + 0x14]
007cb8a1  PUSH ECX
007cb8a2  CALL 0x007d7260
007cb8a7  ADD ESP,0x4
007cb8aa  TEST EAX,EAX
007cb8ac  JZ 0x007cb8be
007cb8ae  MOV EAX,dword ptr [EBP + -0x10]
007cb8b1  SUB EAX,dword ptr [EBP + -0x4]
007cb8b4  XOR EDX,EDX
007cb8b6  DIV dword ptr [EBP + 0xc]
007cb8b9  JMP 0x007cb9bf
007cb8be  CMP dword ptr [EBP + -0xc],0x0
007cb8c2  JZ 0x007cb8d6
007cb8c4  MOV EAX,dword ptr [EBP + -0x4]
007cb8c7  XOR EDX,EDX
007cb8c9  DIV dword ptr [EBP + -0xc]
007cb8cc  MOV EAX,dword ptr [EBP + -0x4]
007cb8cf  SUB EAX,EDX
007cb8d1  MOV dword ptr [EBP + -0x24],EAX
007cb8d4  JMP 0x007cb8dc
007cb8d6  MOV ECX,dword ptr [EBP + -0x4]
007cb8d9  MOV dword ptr [EBP + -0x24],ECX
007cb8dc  MOV EDX,dword ptr [EBP + -0x24]
007cb8df  MOV dword ptr [EBP + -0x14],EDX
007cb8e2  MOV EAX,dword ptr [EBP + -0x14]
007cb8e5  PUSH EAX
007cb8e6  MOV ECX,dword ptr [EBP + -0x18]
007cb8e9  PUSH ECX
007cb8ea  MOV EDX,dword ptr [EBP + 0x14]
007cb8ed  MOV EAX,dword ptr [EDX + 0x10]
007cb8f0  PUSH EAX
007cb8f1  CALL 0x007dbbc0
007cb8f6  ADD ESP,0xc
007cb8f9  MOV dword ptr [EBP + -0x8],EAX
007cb8fc  CMP dword ptr [EBP + -0x8],-0x1
007cb900  JNZ 0x007cb921
007cb902  MOV ECX,dword ptr [EBP + 0x14]
007cb905  MOV EDX,dword ptr [ECX + 0xc]
007cb908  OR EDX,0x20
007cb90b  MOV EAX,dword ptr [EBP + 0x14]
007cb90e  MOV dword ptr [EAX + 0xc],EDX
007cb911  MOV EAX,dword ptr [EBP + -0x10]
007cb914  SUB EAX,dword ptr [EBP + -0x4]
007cb917  XOR EDX,EDX
007cb919  DIV dword ptr [EBP + 0xc]
007cb91c  JMP 0x007cb9bf
007cb921  MOV ECX,dword ptr [EBP + -0x4]
007cb924  SUB ECX,dword ptr [EBP + -0x8]
007cb927  MOV dword ptr [EBP + -0x4],ECX
007cb92a  MOV EDX,dword ptr [EBP + -0x18]
007cb92d  ADD EDX,dword ptr [EBP + -0x8]
007cb930  MOV dword ptr [EBP + -0x18],EDX
007cb933  MOV EAX,dword ptr [EBP + -0x8]
007cb936  CMP EAX,dword ptr [EBP + -0x14]
007cb939  JNC 0x007cb957
007cb93b  MOV ECX,dword ptr [EBP + 0x14]
007cb93e  MOV EDX,dword ptr [ECX + 0xc]
007cb941  OR EDX,0x20
007cb944  MOV EAX,dword ptr [EBP + 0x14]
007cb947  MOV dword ptr [EAX + 0xc],EDX
007cb94a  MOV EAX,dword ptr [EBP + -0x10]
007cb94d  SUB EAX,dword ptr [EBP + -0x4]
007cb950  XOR EDX,EDX
007cb952  DIV dword ptr [EBP + 0xc]
007cb955  JMP 0x007cb9bf
007cb957  JMP 0x007cb9b7
007cb959  MOV ECX,dword ptr [EBP + -0x18]
007cb95c  MOVSX EDX,byte ptr [ECX]
007cb95f  MOV dword ptr [EBP + -0x1c],EDX
007cb962  MOV EAX,dword ptr [EBP + 0x14]
007cb965  PUSH EAX
007cb966  MOV ECX,dword ptr [EBP + -0x1c]
007cb969  PUSH ECX
007cb96a  CALL 0x007d47d0
007cb96f  ADD ESP,0x8
007cb972  CMP EAX,-0x1
007cb975  JNZ 0x007cb984
007cb977  MOV EAX,dword ptr [EBP + -0x10]
007cb97a  SUB EAX,dword ptr [EBP + -0x4]
007cb97d  XOR EDX,EDX
007cb97f  DIV dword ptr [EBP + 0xc]
007cb982  JMP 0x007cb9bf
007cb984  MOV EDX,dword ptr [EBP + -0x18]
007cb987  ADD EDX,0x1
007cb98a  MOV dword ptr [EBP + -0x18],EDX
007cb98d  MOV EAX,dword ptr [EBP + -0x4]
007cb990  SUB EAX,0x1
007cb993  MOV dword ptr [EBP + -0x4],EAX
007cb996  MOV ECX,dword ptr [EBP + 0x14]
007cb999  CMP dword ptr [ECX + 0x18],0x0
007cb99d  JLE 0x007cb9aa
007cb99f  MOV EDX,dword ptr [EBP + 0x14]
007cb9a2  MOV EAX,dword ptr [EDX + 0x18]
007cb9a5  MOV dword ptr [EBP + -0x28],EAX
007cb9a8  JMP 0x007cb9b1
007cb9aa  MOV dword ptr [EBP + -0x28],0x1
007cb9b1  MOV ECX,dword ptr [EBP + -0x28]
007cb9b4  MOV dword ptr [EBP + -0xc],ECX
007cb9b7  JMP 0x007cb7f9
007cb9bc  MOV EAX,dword ptr [EBP + 0x10]
007cb9bf  MOV ESP,EBP
007cb9c1  POP EBP
007cb9c2  RET
