007c5250  PUSH EBP
007c5251  MOV EBP,ESP
007c5253  SUB ESP,0x110
007c5259  CMP dword ptr [EBP + 0xc],0x2
007c525d  JC 0x007c5265
007c525f  CMP dword ptr [EBP + 0x10],0x0
007c5263  JNZ 0x007c526a
007c5265  JMP 0x007c55e1
007c526a  MOV dword ptr [EBP + 0xffffff78],0x0
007c5274  MOV EAX,dword ptr [EBP + 0x8]
007c5277  MOV dword ptr [EBP + -0x8],EAX
007c527a  MOV ECX,dword ptr [EBP + 0xc]
007c527d  SUB ECX,0x1
007c5280  IMUL ECX,dword ptr [EBP + 0x10]
007c5284  ADD ECX,dword ptr [EBP + 0x8]
007c5287  MOV dword ptr [EBP + 0xfffffef4],ECX
007c528d  MOV EAX,dword ptr [EBP + 0xfffffef4]
007c5293  SUB EAX,dword ptr [EBP + -0x8]
007c5296  XOR EDX,EDX
007c5298  DIV dword ptr [EBP + 0x10]
007c529b  ADD EAX,0x1
007c529e  MOV dword ptr [EBP + 0xffffff74],EAX
007c52a4  CMP dword ptr [EBP + 0xffffff74],0x8
007c52ab  JA 0x007c52cd
007c52ad  MOV EDX,dword ptr [EBP + 0x14]
007c52b0  PUSH EDX
007c52b1  MOV EAX,dword ptr [EBP + 0x10]
007c52b4  PUSH EAX
007c52b5  MOV ECX,dword ptr [EBP + 0xfffffef4]
007c52bb  PUSH ECX
007c52bc  MOV EDX,dword ptr [EBP + -0x8]
007c52bf  PUSH EDX
007c52c0  CALL 0x007c55f0
007c52c5  ADD ESP,0x10
007c52c8  JMP 0x007c55ab
007c52cd  MOV EAX,dword ptr [EBP + 0xffffff74]
007c52d3  SHR EAX,0x1
007c52d5  IMUL EAX,dword ptr [EBP + 0x10]
007c52d9  ADD EAX,dword ptr [EBP + -0x8]
007c52dc  MOV dword ptr [EBP + -0x4],EAX
007c52df  MOV ECX,dword ptr [EBP + -0x4]
007c52e2  PUSH ECX
007c52e3  MOV EDX,dword ptr [EBP + -0x8]
007c52e6  PUSH EDX
007c52e7  CALL dword ptr [EBP + 0x14]
007c52ea  ADD ESP,0x8
007c52ed  TEST EAX,EAX
007c52ef  JLE 0x007c5305
007c52f1  MOV EAX,dword ptr [EBP + 0x10]
007c52f4  PUSH EAX
007c52f5  MOV ECX,dword ptr [EBP + -0x4]
007c52f8  PUSH ECX
007c52f9  MOV EDX,dword ptr [EBP + -0x8]
007c52fc  PUSH EDX
007c52fd  CALL 0x007c5660
007c5302  ADD ESP,0xc
007c5305  MOV EAX,dword ptr [EBP + 0xfffffef4]
007c530b  PUSH EAX
007c530c  MOV ECX,dword ptr [EBP + -0x8]
007c530f  PUSH ECX
007c5310  CALL dword ptr [EBP + 0x14]
007c5313  ADD ESP,0x8
007c5316  TEST EAX,EAX
007c5318  JLE 0x007c5331
007c531a  MOV EDX,dword ptr [EBP + 0x10]
007c531d  PUSH EDX
007c531e  MOV EAX,dword ptr [EBP + 0xfffffef4]
007c5324  PUSH EAX
007c5325  MOV ECX,dword ptr [EBP + -0x8]
007c5328  PUSH ECX
007c5329  CALL 0x007c5660
007c532e  ADD ESP,0xc
007c5331  MOV EDX,dword ptr [EBP + 0xfffffef4]
007c5337  PUSH EDX
007c5338  MOV EAX,dword ptr [EBP + -0x4]
007c533b  PUSH EAX
007c533c  CALL dword ptr [EBP + 0x14]
007c533f  ADD ESP,0x8
007c5342  TEST EAX,EAX
007c5344  JLE 0x007c535d
007c5346  MOV ECX,dword ptr [EBP + 0x10]
007c5349  PUSH ECX
007c534a  MOV EDX,dword ptr [EBP + 0xfffffef4]
007c5350  PUSH EDX
007c5351  MOV EAX,dword ptr [EBP + -0x4]
007c5354  PUSH EAX
007c5355  CALL 0x007c5660
007c535a  ADD ESP,0xc
007c535d  MOV ECX,dword ptr [EBP + -0x8]
007c5360  MOV dword ptr [EBP + 0xffffff7c],ECX
007c5366  MOV EDX,dword ptr [EBP + 0xfffffef4]
007c536c  MOV dword ptr [EBP + 0xfffffef0],EDX
007c5372  MOV EAX,dword ptr [EBP + -0x4]
007c5375  CMP EAX,dword ptr [EBP + 0xffffff7c]
007c537b  JBE 0x007c53ac
007c537d  MOV ECX,dword ptr [EBP + 0xffffff7c]
007c5383  ADD ECX,dword ptr [EBP + 0x10]
007c5386  MOV dword ptr [EBP + 0xffffff7c],ECX
007c538c  MOV EDX,dword ptr [EBP + 0xffffff7c]
007c5392  CMP EDX,dword ptr [EBP + -0x4]
007c5395  JNC 0x007c53ac
007c5397  MOV EAX,dword ptr [EBP + -0x4]
007c539a  PUSH EAX
007c539b  MOV ECX,dword ptr [EBP + 0xffffff7c]
007c53a1  PUSH ECX
007c53a2  CALL dword ptr [EBP + 0x14]
007c53a5  ADD ESP,0x8
007c53a8  TEST EAX,EAX
007c53aa  JLE 0x007c537d
007c53ac  MOV EDX,dword ptr [EBP + -0x4]
007c53af  CMP EDX,dword ptr [EBP + 0xffffff7c]
007c53b5  JA 0x007c53e9
007c53b7  MOV EAX,dword ptr [EBP + 0xffffff7c]
007c53bd  ADD EAX,dword ptr [EBP + 0x10]
007c53c0  MOV dword ptr [EBP + 0xffffff7c],EAX
007c53c6  MOV ECX,dword ptr [EBP + 0xffffff7c]
007c53cc  CMP ECX,dword ptr [EBP + 0xfffffef4]
007c53d2  JA 0x007c53e9
007c53d4  MOV EDX,dword ptr [EBP + -0x4]
007c53d7  PUSH EDX
007c53d8  MOV EAX,dword ptr [EBP + 0xffffff7c]
007c53de  PUSH EAX
007c53df  CALL dword ptr [EBP + 0x14]
007c53e2  ADD ESP,0x8
007c53e5  TEST EAX,EAX
007c53e7  JLE 0x007c53b7
007c53e9  MOV ECX,dword ptr [EBP + 0xfffffef0]
007c53ef  SUB ECX,dword ptr [EBP + 0x10]
007c53f2  MOV dword ptr [EBP + 0xfffffef0],ECX
007c53f8  MOV EDX,dword ptr [EBP + 0xfffffef0]
007c53fe  CMP EDX,dword ptr [EBP + -0x4]
007c5401  JBE 0x007c5418
007c5403  MOV EAX,dword ptr [EBP + -0x4]
007c5406  PUSH EAX
007c5407  MOV ECX,dword ptr [EBP + 0xfffffef0]
007c540d  PUSH ECX
007c540e  CALL dword ptr [EBP + 0x14]
007c5411  ADD ESP,0x8
007c5414  TEST EAX,EAX
007c5416  JG 0x007c53e9
007c5418  MOV EDX,dword ptr [EBP + 0xfffffef0]
007c541e  CMP EDX,dword ptr [EBP + 0xffffff7c]
007c5424  JNC 0x007c5428
007c5426  JMP 0x007c545b
007c5428  MOV EAX,dword ptr [EBP + 0x10]
007c542b  PUSH EAX
007c542c  MOV ECX,dword ptr [EBP + 0xfffffef0]
007c5432  PUSH ECX
007c5433  MOV EDX,dword ptr [EBP + 0xffffff7c]
007c5439  PUSH EDX
007c543a  CALL 0x007c5660
007c543f  ADD ESP,0xc
007c5442  MOV EAX,dword ptr [EBP + -0x4]
007c5445  CMP EAX,dword ptr [EBP + 0xfffffef0]
007c544b  JNZ 0x007c5456
007c544d  MOV ECX,dword ptr [EBP + 0xffffff7c]
007c5453  MOV dword ptr [EBP + -0x4],ECX
007c5456  JMP 0x007c5372
007c545b  MOV EDX,dword ptr [EBP + 0xfffffef0]
007c5461  ADD EDX,dword ptr [EBP + 0x10]
007c5464  MOV dword ptr [EBP + 0xfffffef0],EDX
007c546a  MOV EAX,dword ptr [EBP + -0x4]
007c546d  CMP EAX,dword ptr [EBP + 0xfffffef0]
007c5473  JNC 0x007c54a4
007c5475  MOV ECX,dword ptr [EBP + 0xfffffef0]
007c547b  SUB ECX,dword ptr [EBP + 0x10]
007c547e  MOV dword ptr [EBP + 0xfffffef0],ECX
007c5484  MOV EDX,dword ptr [EBP + 0xfffffef0]
007c548a  CMP EDX,dword ptr [EBP + -0x4]
007c548d  JBE 0x007c54a4
007c548f  MOV EAX,dword ptr [EBP + -0x4]
007c5492  PUSH EAX
007c5493  MOV ECX,dword ptr [EBP + 0xfffffef0]
007c5499  PUSH ECX
007c549a  CALL dword ptr [EBP + 0x14]
007c549d  ADD ESP,0x8
007c54a0  TEST EAX,EAX
007c54a2  JZ 0x007c5475
007c54a4  MOV EDX,dword ptr [EBP + -0x4]
007c54a7  CMP EDX,dword ptr [EBP + 0xfffffef0]
007c54ad  JC 0x007c54de
007c54af  MOV EAX,dword ptr [EBP + 0xfffffef0]
007c54b5  SUB EAX,dword ptr [EBP + 0x10]
007c54b8  MOV dword ptr [EBP + 0xfffffef0],EAX
007c54be  MOV ECX,dword ptr [EBP + 0xfffffef0]
007c54c4  CMP ECX,dword ptr [EBP + -0x8]
007c54c7  JBE 0x007c54de
007c54c9  MOV EDX,dword ptr [EBP + -0x4]
007c54cc  PUSH EDX
007c54cd  MOV EAX,dword ptr [EBP + 0xfffffef0]
007c54d3  PUSH EAX
007c54d4  CALL dword ptr [EBP + 0x14]
007c54d7  ADD ESP,0x8
007c54da  TEST EAX,EAX
007c54dc  JZ 0x007c54af
007c54de  MOV ECX,dword ptr [EBP + 0xfffffef0]
007c54e4  SUB ECX,dword ptr [EBP + -0x8]
007c54e7  MOV EDX,dword ptr [EBP + 0xfffffef4]
007c54ed  SUB EDX,dword ptr [EBP + 0xffffff7c]
007c54f3  CMP ECX,EDX
007c54f5  JL 0x007c554f
007c54f7  MOV EAX,dword ptr [EBP + -0x8]
007c54fa  CMP EAX,dword ptr [EBP + 0xfffffef0]
007c5500  JNC 0x007c5531
007c5502  MOV ECX,dword ptr [EBP + 0xffffff78]
007c5508  MOV EDX,dword ptr [EBP + -0x8]
007c550b  MOV dword ptr [EBP + ECX*0x4 + 0xfffffef8],EDX
007c5512  MOV EAX,dword ptr [EBP + 0xffffff78]
007c5518  MOV ECX,dword ptr [EBP + 0xfffffef0]
007c551e  MOV dword ptr [EBP + EAX*0x4 + -0x80],ECX
007c5522  MOV EDX,dword ptr [EBP + 0xffffff78]
007c5528  ADD EDX,0x1
007c552b  MOV dword ptr [EBP + 0xffffff78],EDX
007c5531  MOV EAX,dword ptr [EBP + 0xffffff7c]
007c5537  CMP EAX,dword ptr [EBP + 0xfffffef4]
007c553d  JNC 0x007c554d
007c553f  MOV ECX,dword ptr [EBP + 0xffffff7c]
007c5545  MOV dword ptr [EBP + -0x8],ECX
007c5548  JMP 0x007c528d
007c554d  JMP 0x007c55ab
007c554f  MOV EDX,dword ptr [EBP + 0xffffff7c]
007c5555  CMP EDX,dword ptr [EBP + 0xfffffef4]
007c555b  JNC 0x007c558f
007c555d  MOV EAX,dword ptr [EBP + 0xffffff78]
007c5563  MOV ECX,dword ptr [EBP + 0xffffff7c]
007c5569  MOV dword ptr [EBP + EAX*0x4 + 0xfffffef8],ECX
007c5570  MOV EDX,dword ptr [EBP + 0xffffff78]
007c5576  MOV EAX,dword ptr [EBP + 0xfffffef4]
007c557c  MOV dword ptr [EBP + EDX*0x4 + -0x80],EAX
007c5580  MOV ECX,dword ptr [EBP + 0xffffff78]
007c5586  ADD ECX,0x1
007c5589  MOV dword ptr [EBP + 0xffffff78],ECX
007c558f  MOV EDX,dword ptr [EBP + -0x8]
007c5592  CMP EDX,dword ptr [EBP + 0xfffffef0]
007c5598  JNC 0x007c55ab
007c559a  MOV EAX,dword ptr [EBP + 0xfffffef0]
007c55a0  MOV dword ptr [EBP + 0xfffffef4],EAX
007c55a6  JMP 0x007c528d
007c55ab  MOV ECX,dword ptr [EBP + 0xffffff78]
007c55b1  SUB ECX,0x1
007c55b4  MOV dword ptr [EBP + 0xffffff78],ECX
007c55ba  JS 0x007c55e1
007c55bc  MOV EDX,dword ptr [EBP + 0xffffff78]
007c55c2  MOV EAX,dword ptr [EBP + EDX*0x4 + 0xfffffef8]
007c55c9  MOV dword ptr [EBP + -0x8],EAX
007c55cc  MOV ECX,dword ptr [EBP + 0xffffff78]
007c55d2  MOV EDX,dword ptr [EBP + ECX*0x4 + -0x80]
007c55d6  MOV dword ptr [EBP + 0xfffffef4],EDX
007c55dc  JMP 0x007c528d
007c55e1  MOV ESP,EBP
007c55e3  POP EBP
007c55e4  RET
