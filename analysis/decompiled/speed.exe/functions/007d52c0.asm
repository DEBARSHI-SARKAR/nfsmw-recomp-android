007d52c0  PUSH EBP
007d52c1  MOV EBP,ESP
007d52c3  SUB ESP,0x3c
007d52c6  MOV EAX,dword ptr [EBP + 0x8]
007d52c9  MOV ECX,dword ptr [EAX + 0x10]
007d52cc  MOV dword ptr [EBP + -0x2c],ECX
007d52cf  MOV EDX,dword ptr [EBP + 0x8]
007d52d2  MOV EAX,dword ptr [EBP + 0xc]
007d52d5  SUB EAX,dword ptr [EDX + 0xc]
007d52d8  MOV dword ptr [EBP + -0x20],EAX
007d52db  MOV ECX,dword ptr [EBP + -0x20]
007d52de  SHR ECX,0xf
007d52e1  MOV dword ptr [EBP + -0x14],ECX
007d52e4  MOV EDX,dword ptr [EBP + -0x14]
007d52e7  IMUL EDX,EDX,0x204
007d52ed  MOV EAX,dword ptr [EBP + -0x2c]
007d52f0  LEA ECX,[EAX + EDX*0x1 + 0x144]
007d52f7  MOV dword ptr [EBP + -0x28],ECX
007d52fa  MOV EDX,dword ptr [EBP + 0xc]
007d52fd  SUB EDX,0x4
007d5300  MOV dword ptr [EBP + -0x18],EDX
007d5303  MOV EAX,dword ptr [EBP + -0x18]
007d5306  MOV ECX,dword ptr [EAX]
007d5308  SUB ECX,0x1
007d530b  MOV dword ptr [EBP + -0x3c],ECX
007d530e  MOV EDX,dword ptr [EBP + -0x3c]
007d5311  AND EDX,0x1
007d5314  JZ 0x007d531b
007d5316  JMP 0x007d5874
007d531b  MOV EAX,dword ptr [EBP + -0x18]
007d531e  ADD EAX,dword ptr [EBP + -0x3c]
007d5321  MOV dword ptr [EBP + -0x8],EAX
007d5324  MOV ECX,dword ptr [EBP + -0x8]
007d5327  MOV EDX,dword ptr [ECX]
007d5329  MOV dword ptr [EBP + -0x34],EDX
007d532c  MOV EAX,dword ptr [EBP + -0x18]
007d532f  MOV ECX,dword ptr [EAX + -0x4]
007d5332  MOV dword ptr [EBP + -0x1c],ECX
007d5335  MOV EDX,dword ptr [EBP + -0x34]
007d5338  AND EDX,0x1
007d533b  JNZ 0x007d5459
007d5341  MOV EAX,dword ptr [EBP + -0x34]
007d5344  SAR EAX,0x4
007d5347  SUB EAX,0x1
007d534a  MOV dword ptr [EBP + -0x10],EAX
007d534d  CMP dword ptr [EBP + -0x10],0x3f
007d5351  JBE 0x007d535a
007d5353  MOV dword ptr [EBP + -0x10],0x3f
007d535a  MOV ECX,dword ptr [EBP + -0x8]
007d535d  MOV EDX,dword ptr [EBP + -0x8]
007d5360  MOV EAX,dword ptr [ECX + 0x4]
007d5363  CMP EAX,dword ptr [EDX + 0x8]
007d5366  JNZ 0x007d5432
007d536c  CMP dword ptr [EBP + -0x10],0x20
007d5370  JNC 0x007d53cc
007d5372  MOV EDX,0x80000000
007d5377  MOV ECX,dword ptr [EBP + -0x10]
007d537a  SHR EDX,CL
007d537c  NOT EDX
007d537e  MOV EAX,dword ptr [EBP + -0x14]
007d5381  MOV ECX,dword ptr [EBP + -0x2c]
007d5384  AND EDX,dword ptr [ECX + EAX*0x4 + 0x44]
007d5388  MOV EAX,dword ptr [EBP + -0x14]
007d538b  MOV ECX,dword ptr [EBP + -0x2c]
007d538e  MOV dword ptr [ECX + EAX*0x4 + 0x44],EDX
007d5392  MOV EDX,dword ptr [EBP + -0x2c]
007d5395  ADD EDX,dword ptr [EBP + -0x10]
007d5398  MOV AL,byte ptr [EDX + 0x4]
007d539b  SUB AL,0x1
007d539d  MOV ECX,dword ptr [EBP + -0x2c]
007d53a0  ADD ECX,dword ptr [EBP + -0x10]
007d53a3  MOV byte ptr [ECX + 0x4],AL
007d53a6  MOV EDX,dword ptr [EBP + -0x2c]
007d53a9  ADD EDX,dword ptr [EBP + -0x10]
007d53ac  MOVSX EAX,byte ptr [EDX + 0x4]
007d53b0  TEST EAX,EAX
007d53b2  JNZ 0x007d53ca
007d53b4  MOV EDX,0x80000000
007d53b9  MOV ECX,dword ptr [EBP + -0x10]
007d53bc  SHR EDX,CL
007d53be  NOT EDX
007d53c0  MOV EAX,dword ptr [EBP + 0x8]
007d53c3  AND EDX,dword ptr [EAX]
007d53c5  MOV ECX,dword ptr [EBP + 0x8]
007d53c8  MOV dword ptr [ECX],EDX
007d53ca  JMP 0x007d5432
007d53cc  MOV ECX,dword ptr [EBP + -0x10]
007d53cf  SUB ECX,0x20
007d53d2  MOV EDX,0x80000000
007d53d7  SHR EDX,CL
007d53d9  NOT EDX
007d53db  MOV EAX,dword ptr [EBP + -0x14]
007d53de  MOV ECX,dword ptr [EBP + -0x2c]
007d53e1  AND EDX,dword ptr [ECX + EAX*0x4 + 0xc4]
007d53e8  MOV EAX,dword ptr [EBP + -0x14]
007d53eb  MOV ECX,dword ptr [EBP + -0x2c]
007d53ee  MOV dword ptr [ECX + EAX*0x4 + 0xc4],EDX
007d53f5  MOV EDX,dword ptr [EBP + -0x2c]
007d53f8  ADD EDX,dword ptr [EBP + -0x10]
007d53fb  MOV AL,byte ptr [EDX + 0x4]
007d53fe  SUB AL,0x1
007d5400  MOV ECX,dword ptr [EBP + -0x2c]
007d5403  ADD ECX,dword ptr [EBP + -0x10]
007d5406  MOV byte ptr [ECX + 0x4],AL
007d5409  MOV EDX,dword ptr [EBP + -0x2c]
007d540c  ADD EDX,dword ptr [EBP + -0x10]
007d540f  MOVSX EAX,byte ptr [EDX + 0x4]
007d5413  TEST EAX,EAX
007d5415  JNZ 0x007d5432
007d5417  MOV ECX,dword ptr [EBP + -0x10]
007d541a  SUB ECX,0x20
007d541d  MOV EDX,0x80000000
007d5422  SHR EDX,CL
007d5424  NOT EDX
007d5426  MOV EAX,dword ptr [EBP + 0x8]
007d5429  AND EDX,dword ptr [EAX + 0x4]
007d542c  MOV ECX,dword ptr [EBP + 0x8]
007d542f  MOV dword ptr [ECX + 0x4],EDX
007d5432  MOV EDX,dword ptr [EBP + -0x8]
007d5435  MOV EAX,dword ptr [EDX + 0x8]
007d5438  MOV ECX,dword ptr [EBP + -0x8]
007d543b  MOV EDX,dword ptr [ECX + 0x4]
007d543e  MOV dword ptr [EAX + 0x4],EDX
007d5441  MOV EAX,dword ptr [EBP + -0x8]
007d5444  MOV ECX,dword ptr [EAX + 0x4]
007d5447  MOV EDX,dword ptr [EBP + -0x8]
007d544a  MOV EAX,dword ptr [EDX + 0x8]
007d544d  MOV dword ptr [ECX + 0x8],EAX
007d5450  MOV ECX,dword ptr [EBP + -0x3c]
007d5453  ADD ECX,dword ptr [EBP + -0x34]
007d5456  MOV dword ptr [EBP + -0x3c],ECX
007d5459  MOV EDX,dword ptr [EBP + -0x3c]
007d545c  SAR EDX,0x4
007d545f  SUB EDX,0x1
007d5462  MOV dword ptr [EBP + -0x38],EDX
007d5465  CMP dword ptr [EBP + -0x38],0x3f
007d5469  JBE 0x007d5472
007d546b  MOV dword ptr [EBP + -0x38],0x3f
007d5472  MOV EAX,dword ptr [EBP + -0x1c]
007d5475  AND EAX,0x1
007d5478  JNZ 0x007d55cb
007d547e  MOV ECX,dword ptr [EBP + -0x18]
007d5481  SUB ECX,dword ptr [EBP + -0x1c]
007d5484  MOV dword ptr [EBP + -0xc],ECX
007d5487  MOV EDX,dword ptr [EBP + -0x1c]
007d548a  SAR EDX,0x4
007d548d  SUB EDX,0x1
007d5490  MOV dword ptr [EBP + -0x30],EDX
007d5493  CMP dword ptr [EBP + -0x30],0x3f
007d5497  JBE 0x007d54a0
007d5499  MOV dword ptr [EBP + -0x30],0x3f
007d54a0  MOV EAX,dword ptr [EBP + -0x3c]
007d54a3  ADD EAX,dword ptr [EBP + -0x1c]
007d54a6  MOV dword ptr [EBP + -0x3c],EAX
007d54a9  MOV ECX,dword ptr [EBP + -0x3c]
007d54ac  SAR ECX,0x4
007d54af  SUB ECX,0x1
007d54b2  MOV dword ptr [EBP + -0x38],ECX
007d54b5  CMP dword ptr [EBP + -0x38],0x3f
007d54b9  JBE 0x007d54c2
007d54bb  MOV dword ptr [EBP + -0x38],0x3f
007d54c2  MOV EDX,dword ptr [EBP + -0x30]
007d54c5  CMP EDX,dword ptr [EBP + -0x38]
007d54c8  JZ 0x007d55c5
007d54ce  MOV EAX,dword ptr [EBP + -0xc]
007d54d1  MOV ECX,dword ptr [EBP + -0xc]
007d54d4  MOV EDX,dword ptr [EAX + 0x4]
007d54d7  CMP EDX,dword ptr [ECX + 0x8]
007d54da  JNZ 0x007d55a7
007d54e0  CMP dword ptr [EBP + -0x30],0x20
007d54e4  JNC 0x007d5541
007d54e6  MOV EAX,0x80000000
007d54eb  MOV ECX,dword ptr [EBP + -0x30]
007d54ee  SHR EAX,CL
007d54f0  NOT EAX
007d54f2  MOV ECX,dword ptr [EBP + -0x14]
007d54f5  MOV EDX,dword ptr [EBP + -0x2c]
007d54f8  AND EAX,dword ptr [EDX + ECX*0x4 + 0x44]
007d54fc  MOV ECX,dword ptr [EBP + -0x14]
007d54ff  MOV EDX,dword ptr [EBP + -0x2c]
007d5502  MOV dword ptr [EDX + ECX*0x4 + 0x44],EAX
007d5506  MOV EAX,dword ptr [EBP + -0x2c]
007d5509  ADD EAX,dword ptr [EBP + -0x30]
007d550c  MOV CL,byte ptr [EAX + 0x4]
007d550f  SUB CL,0x1
007d5512  MOV EDX,dword ptr [EBP + -0x2c]
007d5515  ADD EDX,dword ptr [EBP + -0x30]
007d5518  MOV byte ptr [EDX + 0x4],CL
007d551b  MOV EAX,dword ptr [EBP + -0x2c]
007d551e  ADD EAX,dword ptr [EBP + -0x30]
007d5521  MOVSX ECX,byte ptr [EAX + 0x4]
007d5525  TEST ECX,ECX
007d5527  JNZ 0x007d553f
007d5529  MOV EDX,0x80000000
007d552e  MOV ECX,dword ptr [EBP + -0x30]
007d5531  SHR EDX,CL
007d5533  NOT EDX
007d5535  MOV EAX,dword ptr [EBP + 0x8]
007d5538  AND EDX,dword ptr [EAX]
007d553a  MOV ECX,dword ptr [EBP + 0x8]
007d553d  MOV dword ptr [ECX],EDX
007d553f  JMP 0x007d55a7
007d5541  MOV ECX,dword ptr [EBP + -0x30]
007d5544  SUB ECX,0x20
007d5547  MOV EDX,0x80000000
007d554c  SHR EDX,CL
007d554e  NOT EDX
007d5550  MOV EAX,dword ptr [EBP + -0x14]
007d5553  MOV ECX,dword ptr [EBP + -0x2c]
007d5556  AND EDX,dword ptr [ECX + EAX*0x4 + 0xc4]
007d555d  MOV EAX,dword ptr [EBP + -0x14]
007d5560  MOV ECX,dword ptr [EBP + -0x2c]
007d5563  MOV dword ptr [ECX + EAX*0x4 + 0xc4],EDX
007d556a  MOV EDX,dword ptr [EBP + -0x2c]
007d556d  ADD EDX,dword ptr [EBP + -0x30]
007d5570  MOV AL,byte ptr [EDX + 0x4]
007d5573  SUB AL,0x1
007d5575  MOV ECX,dword ptr [EBP + -0x2c]
007d5578  ADD ECX,dword ptr [EBP + -0x30]
007d557b  MOV byte ptr [ECX + 0x4],AL
007d557e  MOV EDX,dword ptr [EBP + -0x2c]
007d5581  ADD EDX,dword ptr [EBP + -0x30]
007d5584  MOVSX EAX,byte ptr [EDX + 0x4]
007d5588  TEST EAX,EAX
007d558a  JNZ 0x007d55a7
007d558c  MOV ECX,dword ptr [EBP + -0x30]
007d558f  SUB ECX,0x20
007d5592  MOV EDX,0x80000000
007d5597  SHR EDX,CL
007d5599  NOT EDX
007d559b  MOV EAX,dword ptr [EBP + 0x8]
007d559e  AND EDX,dword ptr [EAX + 0x4]
007d55a1  MOV ECX,dword ptr [EBP + 0x8]
007d55a4  MOV dword ptr [ECX + 0x4],EDX
007d55a7  MOV EDX,dword ptr [EBP + -0xc]
007d55aa  MOV EAX,dword ptr [EDX + 0x8]
007d55ad  MOV ECX,dword ptr [EBP + -0xc]
007d55b0  MOV EDX,dword ptr [ECX + 0x4]
007d55b3  MOV dword ptr [EAX + 0x4],EDX
007d55b6  MOV EAX,dword ptr [EBP + -0xc]
007d55b9  MOV ECX,dword ptr [EAX + 0x4]
007d55bc  MOV EDX,dword ptr [EBP + -0xc]
007d55bf  MOV EAX,dword ptr [EDX + 0x8]
007d55c2  MOV dword ptr [ECX + 0x8],EAX
007d55c5  MOV ECX,dword ptr [EBP + -0xc]
007d55c8  MOV dword ptr [EBP + -0x18],ECX
007d55cb  MOV EDX,dword ptr [EBP + -0x1c]
007d55ce  AND EDX,0x1
007d55d1  JNZ 0x007d55df
007d55d3  MOV EAX,dword ptr [EBP + -0x30]
007d55d6  CMP EAX,dword ptr [EBP + -0x38]
007d55d9  JZ 0x007d56e7
007d55df  MOV ECX,dword ptr [EBP + -0x38]
007d55e2  MOV EDX,dword ptr [EBP + -0x28]
007d55e5  LEA EAX,[EDX + ECX*0x8]
007d55e8  MOV dword ptr [EBP + -0x24],EAX
007d55eb  MOV ECX,dword ptr [EBP + -0x18]
007d55ee  MOV EDX,dword ptr [EBP + -0x24]
007d55f1  MOV EAX,dword ptr [EDX + 0x4]
007d55f4  MOV dword ptr [ECX + 0x4],EAX
007d55f7  MOV ECX,dword ptr [EBP + -0x18]
007d55fa  MOV EDX,dword ptr [EBP + -0x24]
007d55fd  MOV dword ptr [ECX + 0x8],EDX
007d5600  MOV EAX,dword ptr [EBP + -0x24]
007d5603  MOV ECX,dword ptr [EBP + -0x18]
007d5606  MOV dword ptr [EAX + 0x4],ECX
007d5609  MOV EDX,dword ptr [EBP + -0x18]
007d560c  MOV EAX,dword ptr [EDX + 0x4]
007d560f  MOV ECX,dword ptr [EBP + -0x18]
007d5612  MOV dword ptr [EAX + 0x8],ECX
007d5615  MOV EDX,dword ptr [EBP + -0x18]
007d5618  MOV EAX,dword ptr [EBP + -0x18]
007d561b  MOV ECX,dword ptr [EDX + 0x4]
007d561e  CMP ECX,dword ptr [EAX + 0x8]
007d5621  JNZ 0x007d56e7
007d5627  CMP dword ptr [EBP + -0x38],0x20
007d562b  JNC 0x007d5684
007d562d  MOV EDX,dword ptr [EBP + -0x2c]
007d5630  ADD EDX,dword ptr [EBP + -0x38]
007d5633  MOVSX EAX,byte ptr [EDX + 0x4]
007d5637  MOV ECX,dword ptr [EBP + -0x2c]
007d563a  ADD ECX,dword ptr [EBP + -0x38]
007d563d  MOV DL,byte ptr [ECX + 0x4]
007d5640  ADD DL,0x1
007d5643  MOV ECX,dword ptr [EBP + -0x2c]
007d5646  ADD ECX,dword ptr [EBP + -0x38]
007d5649  MOV byte ptr [ECX + 0x4],DL
007d564c  TEST EAX,EAX
007d564e  JNZ 0x007d5664
007d5650  MOV EDX,0x80000000
007d5655  MOV ECX,dword ptr [EBP + -0x38]
007d5658  SHR EDX,CL
007d565a  MOV EAX,dword ptr [EBP + 0x8]
007d565d  OR EDX,dword ptr [EAX]
007d565f  MOV ECX,dword ptr [EBP + 0x8]
007d5662  MOV dword ptr [ECX],EDX
007d5664  MOV EDX,0x80000000
007d5669  MOV ECX,dword ptr [EBP + -0x38]
007d566c  SHR EDX,CL
007d566e  MOV EAX,dword ptr [EBP + -0x14]
007d5671  MOV ECX,dword ptr [EBP + -0x2c]
007d5674  OR EDX,dword ptr [ECX + EAX*0x4 + 0x44]
007d5678  MOV EAX,dword ptr [EBP + -0x14]
007d567b  MOV ECX,dword ptr [EBP + -0x2c]
007d567e  MOV dword ptr [ECX + EAX*0x4 + 0x44],EDX
007d5682  JMP 0x007d56e7
007d5684  MOV EDX,dword ptr [EBP + -0x2c]
007d5687  ADD EDX,dword ptr [EBP + -0x38]
007d568a  MOVSX EAX,byte ptr [EDX + 0x4]
007d568e  MOV ECX,dword ptr [EBP + -0x2c]
007d5691  ADD ECX,dword ptr [EBP + -0x38]
007d5694  MOV DL,byte ptr [ECX + 0x4]
007d5697  ADD DL,0x1
007d569a  MOV ECX,dword ptr [EBP + -0x2c]
007d569d  ADD ECX,dword ptr [EBP + -0x38]
007d56a0  MOV byte ptr [ECX + 0x4],DL
007d56a3  TEST EAX,EAX
007d56a5  JNZ 0x007d56c0
007d56a7  MOV ECX,dword ptr [EBP + -0x38]
007d56aa  SUB ECX,0x20
007d56ad  MOV EDX,0x80000000
007d56b2  SHR EDX,CL
007d56b4  MOV EAX,dword ptr [EBP + 0x8]
007d56b7  OR EDX,dword ptr [EAX + 0x4]
007d56ba  MOV ECX,dword ptr [EBP + 0x8]
007d56bd  MOV dword ptr [ECX + 0x4],EDX
007d56c0  MOV ECX,dword ptr [EBP + -0x38]
007d56c3  SUB ECX,0x20
007d56c6  MOV EDX,0x80000000
007d56cb  SHR EDX,CL
007d56cd  MOV EAX,dword ptr [EBP + -0x14]
007d56d0  MOV ECX,dword ptr [EBP + -0x2c]
007d56d3  OR EDX,dword ptr [ECX + EAX*0x4 + 0xc4]
007d56da  MOV EAX,dword ptr [EBP + -0x14]
007d56dd  MOV ECX,dword ptr [EBP + -0x2c]
007d56e0  MOV dword ptr [ECX + EAX*0x4 + 0xc4],EDX
007d56e7  MOV EDX,dword ptr [EBP + -0x18]
007d56ea  MOV EAX,dword ptr [EBP + -0x3c]
007d56ed  MOV dword ptr [EDX],EAX
007d56ef  MOV ECX,dword ptr [EBP + -0x18]
007d56f2  ADD ECX,dword ptr [EBP + -0x3c]
007d56f5  MOV EDX,dword ptr [EBP + -0x3c]
007d56f8  MOV dword ptr [ECX + -0x4],EDX
007d56fb  MOV EAX,dword ptr [EBP + -0x28]
007d56fe  MOV ECX,dword ptr [EAX]
007d5700  SUB ECX,0x1
007d5703  MOV EDX,dword ptr [EBP + -0x28]
007d5706  MOV dword ptr [EDX],ECX
007d5708  MOV EAX,dword ptr [EBP + -0x28]
007d570b  CMP dword ptr [EAX],0x0
007d570e  JNZ 0x007d5874
007d5714  CMP dword ptr [0x009c52e4],0x0
007d571b  JZ 0x007d5863
007d5721  MOV ECX,dword ptr [0x009c52fc]
007d5727  SHL ECX,0xf
007d572a  MOV EDX,dword ptr [0x009c52e4]
007d5730  ADD ECX,dword ptr [EDX + 0xc]
007d5733  MOV dword ptr [EBP + -0x4],ECX
007d5736  PUSH 0x4000
007d573b  PUSH 0x8000
007d5740  MOV EAX,dword ptr [EBP + -0x4]
007d5743  PUSH EAX
007d5744  CALL dword ptr [0x00890224]
007d574a  MOV EDX,0x80000000
007d574f  MOV ECX,dword ptr [0x009c52fc]
007d5755  SHR EDX,CL
007d5757  MOV EAX,[0x009c52e4]
007d575c  OR EDX,dword ptr [EAX + 0x8]
007d575f  MOV ECX,dword ptr [0x009c52e4]
007d5765  MOV dword ptr [ECX + 0x8],EDX
007d5768  MOV EDX,dword ptr [0x009c52e4]
007d576e  MOV EAX,dword ptr [EDX + 0x10]
007d5771  MOV ECX,dword ptr [0x009c52fc]
007d5777  MOV dword ptr [EAX + ECX*0x4 + 0xc4],0x0
007d5782  MOV EDX,dword ptr [0x009c52e4]
007d5788  MOV EAX,dword ptr [EDX + 0x10]
007d578b  MOV CL,byte ptr [EAX + 0x43]
007d578e  SUB CL,0x1
007d5791  MOV EDX,dword ptr [0x009c52e4]
007d5797  MOV EAX,dword ptr [EDX + 0x10]
007d579a  MOV byte ptr [EAX + 0x43],CL
007d579d  MOV ECX,dword ptr [0x009c52e4]
007d57a3  MOV EDX,dword ptr [ECX + 0x10]
007d57a6  MOVSX EAX,byte ptr [EDX + 0x43]
007d57aa  TEST EAX,EAX
007d57ac  JNZ 0x007d57c2
007d57ae  MOV ECX,dword ptr [0x009c52e4]
007d57b4  MOV EDX,dword ptr [ECX + 0x4]
007d57b7  AND EDX,0xfffffffe
007d57ba  MOV EAX,[0x009c52e4]
007d57bf  MOV dword ptr [EAX + 0x4],EDX
007d57c2  MOV ECX,dword ptr [0x009c52e4]
007d57c8  CMP dword ptr [ECX + 0x8],-0x1
007d57cc  JNZ 0x007d5863
007d57d2  PUSH 0x8000
007d57d7  PUSH 0x0
007d57d9  MOV EDX,dword ptr [0x009c52e4]
007d57df  MOV EAX,dword ptr [EDX + 0xc]
007d57e2  PUSH EAX
007d57e3  CALL dword ptr [0x00890224]
007d57e9  MOV ECX,dword ptr [0x009c52e4]
007d57ef  MOV EDX,dword ptr [ECX + 0x10]
007d57f2  PUSH EDX
007d57f3  PUSH 0x0
007d57f5  MOV EAX,[0x009c5318]
007d57fa  PUSH EAX
007d57fb  CALL dword ptr [0x00890220]
007d5801  MOV ECX,dword ptr [0x009c52e8]
007d5807  IMUL ECX,ECX,0x14
007d580a  ADD ECX,dword ptr [0x009c52ec]
007d5810  MOV EDX,dword ptr [0x009c52e4]
007d5816  ADD EDX,0x14
007d5819  SUB ECX,EDX
007d581b  PUSH ECX
007d581c  MOV EAX,[0x009c52e4]
007d5821  ADD EAX,0x14
007d5824  PUSH EAX
007d5825  MOV ECX,dword ptr [0x009c52e4]
007d582b  PUSH ECX
007d582c  CALL 0x007c4840
007d5831  ADD ESP,0xc
007d5834  MOV EDX,dword ptr [0x009c52e8]
007d583a  SUB EDX,0x1
007d583d  MOV dword ptr [0x009c52e8],EDX
007d5843  MOV EAX,dword ptr [EBP + 0x8]
007d5846  CMP EAX,dword ptr [0x009c52e4]
007d584c  JBE 0x007d5857
007d584e  MOV ECX,dword ptr [EBP + 0x8]
007d5851  SUB ECX,0x14
007d5854  MOV dword ptr [EBP + 0x8],ECX
007d5857  MOV EDX,dword ptr [0x009c52ec]
007d585d  MOV dword ptr [0x009c52f4],EDX
007d5863  MOV EAX,dword ptr [EBP + 0x8]
007d5866  MOV [0x009c52e4],EAX
007d586b  MOV ECX,dword ptr [EBP + -0x14]
007d586e  MOV dword ptr [0x009c52fc],ECX
007d5874  MOV ESP,EBP
007d5876  POP EBP
007d5877  RET
