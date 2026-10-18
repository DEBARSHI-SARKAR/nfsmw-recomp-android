007d60a0  PUSH EBP
007d60a1  MOV EBP,ESP
007d60a3  SUB ESP,0x30
007d60a6  MOV EAX,dword ptr [EBP + 0x10]
007d60a9  ADD EAX,0x17
007d60ac  AND EAX,0xfffffff0
007d60af  MOV dword ptr [EBP + -0x1c],EAX
007d60b2  MOV ECX,dword ptr [EBP + 0x8]
007d60b5  MOV EDX,dword ptr [ECX + 0x10]
007d60b8  MOV dword ptr [EBP + -0x24],EDX
007d60bb  MOV EAX,dword ptr [EBP + 0x8]
007d60be  MOV ECX,dword ptr [EBP + 0xc]
007d60c1  SUB ECX,dword ptr [EAX + 0xc]
007d60c4  MOV dword ptr [EBP + -0x14],ECX
007d60c7  MOV EDX,dword ptr [EBP + -0x14]
007d60ca  SHR EDX,0xf
007d60cd  MOV dword ptr [EBP + -0xc],EDX
007d60d0  MOV EAX,dword ptr [EBP + -0xc]
007d60d3  IMUL EAX,EAX,0x204
007d60d9  MOV ECX,dword ptr [EBP + -0x24]
007d60dc  LEA EDX,[ECX + EAX*0x1 + 0x144]
007d60e3  MOV dword ptr [EBP + -0x20],EDX
007d60e6  MOV EAX,dword ptr [EBP + 0xc]
007d60e9  SUB EAX,0x4
007d60ec  MOV dword ptr [EBP + -0x10],EAX
007d60ef  MOV ECX,dword ptr [EBP + -0x10]
007d60f2  MOV EDX,dword ptr [ECX]
007d60f4  SUB EDX,0x1
007d60f7  MOV dword ptr [EBP + -0x30],EDX
007d60fa  MOV EAX,dword ptr [EBP + -0x10]
007d60fd  ADD EAX,dword ptr [EBP + -0x30]
007d6100  MOV dword ptr [EBP + -0x4],EAX
007d6103  MOV ECX,dword ptr [EBP + -0x4]
007d6106  MOV EDX,dword ptr [ECX]
007d6108  MOV dword ptr [EBP + -0x28],EDX
007d610b  MOV EAX,dword ptr [EBP + -0x1c]
007d610e  CMP EAX,dword ptr [EBP + -0x30]
007d6111  JLE 0x007d63b3
007d6117  MOV ECX,dword ptr [EBP + -0x28]
007d611a  AND ECX,0x1
007d611d  JNZ 0x007d612a
007d611f  MOV EDX,dword ptr [EBP + -0x30]
007d6122  ADD EDX,dword ptr [EBP + -0x28]
007d6125  CMP dword ptr [EBP + -0x1c],EDX
007d6128  JLE 0x007d6131
007d612a  XOR EAX,EAX
007d612c  JMP 0x007d6662
007d6131  MOV EAX,dword ptr [EBP + -0x28]
007d6134  SAR EAX,0x4
007d6137  SUB EAX,0x1
007d613a  MOV dword ptr [EBP + -0x8],EAX
007d613d  CMP dword ptr [EBP + -0x8],0x3f
007d6141  JBE 0x007d614a
007d6143  MOV dword ptr [EBP + -0x8],0x3f
007d614a  MOV ECX,dword ptr [EBP + -0x4]
007d614d  MOV EDX,dword ptr [EBP + -0x4]
007d6150  MOV EAX,dword ptr [ECX + 0x4]
007d6153  CMP EAX,dword ptr [EDX + 0x8]
007d6156  JNZ 0x007d6222
007d615c  CMP dword ptr [EBP + -0x8],0x20
007d6160  JNC 0x007d61bc
007d6162  MOV EDX,0x80000000
007d6167  MOV ECX,dword ptr [EBP + -0x8]
007d616a  SHR EDX,CL
007d616c  NOT EDX
007d616e  MOV EAX,dword ptr [EBP + -0xc]
007d6171  MOV ECX,dword ptr [EBP + -0x24]
007d6174  AND EDX,dword ptr [ECX + EAX*0x4 + 0x44]
007d6178  MOV EAX,dword ptr [EBP + -0xc]
007d617b  MOV ECX,dword ptr [EBP + -0x24]
007d617e  MOV dword ptr [ECX + EAX*0x4 + 0x44],EDX
007d6182  MOV EDX,dword ptr [EBP + -0x24]
007d6185  ADD EDX,dword ptr [EBP + -0x8]
007d6188  MOV AL,byte ptr [EDX + 0x4]
007d618b  SUB AL,0x1
007d618d  MOV ECX,dword ptr [EBP + -0x24]
007d6190  ADD ECX,dword ptr [EBP + -0x8]
007d6193  MOV byte ptr [ECX + 0x4],AL
007d6196  MOV EDX,dword ptr [EBP + -0x24]
007d6199  ADD EDX,dword ptr [EBP + -0x8]
007d619c  MOVSX EAX,byte ptr [EDX + 0x4]
007d61a0  TEST EAX,EAX
007d61a2  JNZ 0x007d61ba
007d61a4  MOV EDX,0x80000000
007d61a9  MOV ECX,dword ptr [EBP + -0x8]
007d61ac  SHR EDX,CL
007d61ae  NOT EDX
007d61b0  MOV EAX,dword ptr [EBP + 0x8]
007d61b3  AND EDX,dword ptr [EAX]
007d61b5  MOV ECX,dword ptr [EBP + 0x8]
007d61b8  MOV dword ptr [ECX],EDX
007d61ba  JMP 0x007d6222
007d61bc  MOV ECX,dword ptr [EBP + -0x8]
007d61bf  SUB ECX,0x20
007d61c2  MOV EDX,0x80000000
007d61c7  SHR EDX,CL
007d61c9  NOT EDX
007d61cb  MOV EAX,dword ptr [EBP + -0xc]
007d61ce  MOV ECX,dword ptr [EBP + -0x24]
007d61d1  AND EDX,dword ptr [ECX + EAX*0x4 + 0xc4]
007d61d8  MOV EAX,dword ptr [EBP + -0xc]
007d61db  MOV ECX,dword ptr [EBP + -0x24]
007d61de  MOV dword ptr [ECX + EAX*0x4 + 0xc4],EDX
007d61e5  MOV EDX,dword ptr [EBP + -0x24]
007d61e8  ADD EDX,dword ptr [EBP + -0x8]
007d61eb  MOV AL,byte ptr [EDX + 0x4]
007d61ee  SUB AL,0x1
007d61f0  MOV ECX,dword ptr [EBP + -0x24]
007d61f3  ADD ECX,dword ptr [EBP + -0x8]
007d61f6  MOV byte ptr [ECX + 0x4],AL
007d61f9  MOV EDX,dword ptr [EBP + -0x24]
007d61fc  ADD EDX,dword ptr [EBP + -0x8]
007d61ff  MOVSX EAX,byte ptr [EDX + 0x4]
007d6203  TEST EAX,EAX
007d6205  JNZ 0x007d6222
007d6207  MOV ECX,dword ptr [EBP + -0x8]
007d620a  SUB ECX,0x20
007d620d  MOV EDX,0x80000000
007d6212  SHR EDX,CL
007d6214  NOT EDX
007d6216  MOV EAX,dword ptr [EBP + 0x8]
007d6219  AND EDX,dword ptr [EAX + 0x4]
007d621c  MOV ECX,dword ptr [EBP + 0x8]
007d621f  MOV dword ptr [ECX + 0x4],EDX
007d6222  MOV EDX,dword ptr [EBP + -0x4]
007d6225  MOV EAX,dword ptr [EDX + 0x8]
007d6228  MOV ECX,dword ptr [EBP + -0x4]
007d622b  MOV EDX,dword ptr [ECX + 0x4]
007d622e  MOV dword ptr [EAX + 0x4],EDX
007d6231  MOV EAX,dword ptr [EBP + -0x4]
007d6234  MOV ECX,dword ptr [EAX + 0x4]
007d6237  MOV EDX,dword ptr [EBP + -0x4]
007d623a  MOV EAX,dword ptr [EDX + 0x8]
007d623d  MOV dword ptr [ECX + 0x8],EAX
007d6240  MOV ECX,dword ptr [EBP + -0x30]
007d6243  ADD ECX,dword ptr [EBP + -0x28]
007d6246  SUB ECX,dword ptr [EBP + -0x1c]
007d6249  MOV dword ptr [EBP + -0x28],ECX
007d624c  CMP dword ptr [EBP + -0x28],0x0
007d6250  JLE 0x007d6394
007d6256  MOV EDX,dword ptr [EBP + -0x10]
007d6259  ADD EDX,dword ptr [EBP + -0x1c]
007d625c  MOV dword ptr [EBP + -0x4],EDX
007d625f  MOV EAX,dword ptr [EBP + -0x28]
007d6262  SAR EAX,0x4
007d6265  SUB EAX,0x1
007d6268  MOV dword ptr [EBP + -0x8],EAX
007d626b  CMP dword ptr [EBP + -0x8],0x3f
007d626f  JBE 0x007d6278
007d6271  MOV dword ptr [EBP + -0x8],0x3f
007d6278  MOV ECX,dword ptr [EBP + -0x8]
007d627b  MOV EDX,dword ptr [EBP + -0x20]
007d627e  LEA EAX,[EDX + ECX*0x8]
007d6281  MOV dword ptr [EBP + -0x18],EAX
007d6284  MOV ECX,dword ptr [EBP + -0x4]
007d6287  MOV EDX,dword ptr [EBP + -0x18]
007d628a  MOV EAX,dword ptr [EDX + 0x4]
007d628d  MOV dword ptr [ECX + 0x4],EAX
007d6290  MOV ECX,dword ptr [EBP + -0x4]
007d6293  MOV EDX,dword ptr [EBP + -0x18]
007d6296  MOV dword ptr [ECX + 0x8],EDX
007d6299  MOV EAX,dword ptr [EBP + -0x18]
007d629c  MOV ECX,dword ptr [EBP + -0x4]
007d629f  MOV dword ptr [EAX + 0x4],ECX
007d62a2  MOV EDX,dword ptr [EBP + -0x4]
007d62a5  MOV EAX,dword ptr [EDX + 0x4]
007d62a8  MOV ECX,dword ptr [EBP + -0x4]
007d62ab  MOV dword ptr [EAX + 0x8],ECX
007d62ae  MOV EDX,dword ptr [EBP + -0x4]
007d62b1  MOV EAX,dword ptr [EBP + -0x4]
007d62b4  MOV ECX,dword ptr [EDX + 0x4]
007d62b7  CMP ECX,dword ptr [EAX + 0x8]
007d62ba  JNZ 0x007d6380
007d62c0  CMP dword ptr [EBP + -0x8],0x20
007d62c4  JNC 0x007d631d
007d62c6  MOV EDX,dword ptr [EBP + -0x24]
007d62c9  ADD EDX,dword ptr [EBP + -0x8]
007d62cc  MOVSX EAX,byte ptr [EDX + 0x4]
007d62d0  MOV ECX,dword ptr [EBP + -0x24]
007d62d3  ADD ECX,dword ptr [EBP + -0x8]
007d62d6  MOV DL,byte ptr [ECX + 0x4]
007d62d9  ADD DL,0x1
007d62dc  MOV ECX,dword ptr [EBP + -0x24]
007d62df  ADD ECX,dword ptr [EBP + -0x8]
007d62e2  MOV byte ptr [ECX + 0x4],DL
007d62e5  TEST EAX,EAX
007d62e7  JNZ 0x007d62fd
007d62e9  MOV EDX,0x80000000
007d62ee  MOV ECX,dword ptr [EBP + -0x8]
007d62f1  SHR EDX,CL
007d62f3  MOV EAX,dword ptr [EBP + 0x8]
007d62f6  OR EDX,dword ptr [EAX]
007d62f8  MOV ECX,dword ptr [EBP + 0x8]
007d62fb  MOV dword ptr [ECX],EDX
007d62fd  MOV EDX,0x80000000
007d6302  MOV ECX,dword ptr [EBP + -0x8]
007d6305  SHR EDX,CL
007d6307  MOV EAX,dword ptr [EBP + -0xc]
007d630a  MOV ECX,dword ptr [EBP + -0x24]
007d630d  OR EDX,dword ptr [ECX + EAX*0x4 + 0x44]
007d6311  MOV EAX,dword ptr [EBP + -0xc]
007d6314  MOV ECX,dword ptr [EBP + -0x24]
007d6317  MOV dword ptr [ECX + EAX*0x4 + 0x44],EDX
007d631b  JMP 0x007d6380
007d631d  MOV EDX,dword ptr [EBP + -0x24]
007d6320  ADD EDX,dword ptr [EBP + -0x8]
007d6323  MOVSX EAX,byte ptr [EDX + 0x4]
007d6327  MOV ECX,dword ptr [EBP + -0x24]
007d632a  ADD ECX,dword ptr [EBP + -0x8]
007d632d  MOV DL,byte ptr [ECX + 0x4]
007d6330  ADD DL,0x1
007d6333  MOV ECX,dword ptr [EBP + -0x24]
007d6336  ADD ECX,dword ptr [EBP + -0x8]
007d6339  MOV byte ptr [ECX + 0x4],DL
007d633c  TEST EAX,EAX
007d633e  JNZ 0x007d6359
007d6340  MOV ECX,dword ptr [EBP + -0x8]
007d6343  SUB ECX,0x20
007d6346  MOV EDX,0x80000000
007d634b  SHR EDX,CL
007d634d  MOV EAX,dword ptr [EBP + 0x8]
007d6350  OR EDX,dword ptr [EAX + 0x4]
007d6353  MOV ECX,dword ptr [EBP + 0x8]
007d6356  MOV dword ptr [ECX + 0x4],EDX
007d6359  MOV ECX,dword ptr [EBP + -0x8]
007d635c  SUB ECX,0x20
007d635f  MOV EDX,0x80000000
007d6364  SHR EDX,CL
007d6366  MOV EAX,dword ptr [EBP + -0xc]
007d6369  MOV ECX,dword ptr [EBP + -0x24]
007d636c  OR EDX,dword ptr [ECX + EAX*0x4 + 0xc4]
007d6373  MOV EAX,dword ptr [EBP + -0xc]
007d6376  MOV ECX,dword ptr [EBP + -0x24]
007d6379  MOV dword ptr [ECX + EAX*0x4 + 0xc4],EDX
007d6380  MOV EDX,dword ptr [EBP + -0x4]
007d6383  MOV EAX,dword ptr [EBP + -0x28]
007d6386  MOV dword ptr [EDX],EAX
007d6388  MOV ECX,dword ptr [EBP + -0x4]
007d638b  ADD ECX,dword ptr [EBP + -0x28]
007d638e  MOV EDX,dword ptr [EBP + -0x28]
007d6391  MOV dword ptr [ECX + -0x4],EDX
007d6394  MOV EAX,dword ptr [EBP + -0x1c]
007d6397  ADD EAX,0x1
007d639a  MOV ECX,dword ptr [EBP + -0x10]
007d639d  MOV dword ptr [ECX],EAX
007d639f  MOV EDX,dword ptr [EBP + -0x1c]
007d63a2  ADD EDX,0x1
007d63a5  MOV EAX,dword ptr [EBP + -0x10]
007d63a8  ADD EAX,dword ptr [EBP + -0x1c]
007d63ab  MOV dword ptr [EAX + -0x4],EDX
007d63ae  JMP 0x007d665d
007d63b3  MOV ECX,dword ptr [EBP + -0x1c]
007d63b6  CMP ECX,dword ptr [EBP + -0x30]
007d63b9  JGE 0x007d665d
007d63bf  MOV EDX,dword ptr [EBP + -0x1c]
007d63c2  ADD EDX,0x1
007d63c5  MOV EAX,dword ptr [EBP + -0x10]
007d63c8  MOV dword ptr [EAX],EDX
007d63ca  MOV ECX,dword ptr [EBP + -0x1c]
007d63cd  ADD ECX,0x1
007d63d0  MOV EDX,dword ptr [EBP + -0x10]
007d63d3  ADD EDX,dword ptr [EBP + -0x1c]
007d63d6  MOV dword ptr [EDX + -0x4],ECX
007d63d9  MOV EAX,dword ptr [EBP + -0x10]
007d63dc  ADD EAX,dword ptr [EBP + -0x1c]
007d63df  MOV dword ptr [EBP + -0x10],EAX
007d63e2  MOV ECX,dword ptr [EBP + -0x30]
007d63e5  SUB ECX,dword ptr [EBP + -0x1c]
007d63e8  MOV dword ptr [EBP + -0x30],ECX
007d63eb  MOV EDX,dword ptr [EBP + -0x30]
007d63ee  SAR EDX,0x4
007d63f1  SUB EDX,0x1
007d63f4  MOV dword ptr [EBP + -0x2c],EDX
007d63f7  CMP dword ptr [EBP + -0x2c],0x3f
007d63fb  JBE 0x007d6404
007d63fd  MOV dword ptr [EBP + -0x2c],0x3f
007d6404  MOV EAX,dword ptr [EBP + -0x28]
007d6407  AND EAX,0x1
007d640a  JNZ 0x007d6541
007d6410  MOV ECX,dword ptr [EBP + -0x28]
007d6413  SAR ECX,0x4
007d6416  SUB ECX,0x1
007d6419  MOV dword ptr [EBP + -0x8],ECX
007d641c  CMP dword ptr [EBP + -0x8],0x3f
007d6420  JBE 0x007d6429
007d6422  MOV dword ptr [EBP + -0x8],0x3f
007d6429  MOV EDX,dword ptr [EBP + -0x4]
007d642c  MOV EAX,dword ptr [EBP + -0x4]
007d642f  MOV ECX,dword ptr [EDX + 0x4]
007d6432  CMP ECX,dword ptr [EAX + 0x8]
007d6435  JNZ 0x007d6501
007d643b  CMP dword ptr [EBP + -0x8],0x20
007d643f  JNC 0x007d649b
007d6441  MOV EDX,0x80000000
007d6446  MOV ECX,dword ptr [EBP + -0x8]
007d6449  SHR EDX,CL
007d644b  NOT EDX
007d644d  MOV EAX,dword ptr [EBP + -0xc]
007d6450  MOV ECX,dword ptr [EBP + -0x24]
007d6453  AND EDX,dword ptr [ECX + EAX*0x4 + 0x44]
007d6457  MOV EAX,dword ptr [EBP + -0xc]
007d645a  MOV ECX,dword ptr [EBP + -0x24]
007d645d  MOV dword ptr [ECX + EAX*0x4 + 0x44],EDX
007d6461  MOV EDX,dword ptr [EBP + -0x24]
007d6464  ADD EDX,dword ptr [EBP + -0x8]
007d6467  MOV AL,byte ptr [EDX + 0x4]
007d646a  SUB AL,0x1
007d646c  MOV ECX,dword ptr [EBP + -0x24]
007d646f  ADD ECX,dword ptr [EBP + -0x8]
007d6472  MOV byte ptr [ECX + 0x4],AL
007d6475  MOV EDX,dword ptr [EBP + -0x24]
007d6478  ADD EDX,dword ptr [EBP + -0x8]
007d647b  MOVSX EAX,byte ptr [EDX + 0x4]
007d647f  TEST EAX,EAX
007d6481  JNZ 0x007d6499
007d6483  MOV EDX,0x80000000
007d6488  MOV ECX,dword ptr [EBP + -0x8]
007d648b  SHR EDX,CL
007d648d  NOT EDX
007d648f  MOV EAX,dword ptr [EBP + 0x8]
007d6492  AND EDX,dword ptr [EAX]
007d6494  MOV ECX,dword ptr [EBP + 0x8]
007d6497  MOV dword ptr [ECX],EDX
007d6499  JMP 0x007d6501
007d649b  MOV ECX,dword ptr [EBP + -0x8]
007d649e  SUB ECX,0x20
007d64a1  MOV EDX,0x80000000
007d64a6  SHR EDX,CL
007d64a8  NOT EDX
007d64aa  MOV EAX,dword ptr [EBP + -0xc]
007d64ad  MOV ECX,dword ptr [EBP + -0x24]
007d64b0  AND EDX,dword ptr [ECX + EAX*0x4 + 0xc4]
007d64b7  MOV EAX,dword ptr [EBP + -0xc]
007d64ba  MOV ECX,dword ptr [EBP + -0x24]
007d64bd  MOV dword ptr [ECX + EAX*0x4 + 0xc4],EDX
007d64c4  MOV EDX,dword ptr [EBP + -0x24]
007d64c7  ADD EDX,dword ptr [EBP + -0x8]
007d64ca  MOV AL,byte ptr [EDX + 0x4]
007d64cd  SUB AL,0x1
007d64cf  MOV ECX,dword ptr [EBP + -0x24]
007d64d2  ADD ECX,dword ptr [EBP + -0x8]
007d64d5  MOV byte ptr [ECX + 0x4],AL
007d64d8  MOV EDX,dword ptr [EBP + -0x24]
007d64db  ADD EDX,dword ptr [EBP + -0x8]
007d64de  MOVSX EAX,byte ptr [EDX + 0x4]
007d64e2  TEST EAX,EAX
007d64e4  JNZ 0x007d6501
007d64e6  MOV ECX,dword ptr [EBP + -0x8]
007d64e9  SUB ECX,0x20
007d64ec  MOV EDX,0x80000000
007d64f1  SHR EDX,CL
007d64f3  NOT EDX
007d64f5  MOV EAX,dword ptr [EBP + 0x8]
007d64f8  AND EDX,dword ptr [EAX + 0x4]
007d64fb  MOV ECX,dword ptr [EBP + 0x8]
007d64fe  MOV dword ptr [ECX + 0x4],EDX
007d6501  MOV EDX,dword ptr [EBP + -0x4]
007d6504  MOV EAX,dword ptr [EDX + 0x8]
007d6507  MOV ECX,dword ptr [EBP + -0x4]
007d650a  MOV EDX,dword ptr [ECX + 0x4]
007d650d  MOV dword ptr [EAX + 0x4],EDX
007d6510  MOV EAX,dword ptr [EBP + -0x4]
007d6513  MOV ECX,dword ptr [EAX + 0x4]
007d6516  MOV EDX,dword ptr [EBP + -0x4]
007d6519  MOV EAX,dword ptr [EDX + 0x8]
007d651c  MOV dword ptr [ECX + 0x8],EAX
007d651f  MOV ECX,dword ptr [EBP + -0x30]
007d6522  ADD ECX,dword ptr [EBP + -0x28]
007d6525  MOV dword ptr [EBP + -0x30],ECX
007d6528  MOV EDX,dword ptr [EBP + -0x30]
007d652b  SAR EDX,0x4
007d652e  SUB EDX,0x1
007d6531  MOV dword ptr [EBP + -0x2c],EDX
007d6534  CMP dword ptr [EBP + -0x2c],0x3f
007d6538  JBE 0x007d6541
007d653a  MOV dword ptr [EBP + -0x2c],0x3f
007d6541  MOV EAX,dword ptr [EBP + -0x2c]
007d6544  MOV ECX,dword ptr [EBP + -0x20]
007d6547  LEA EDX,[ECX + EAX*0x8]
007d654a  MOV dword ptr [EBP + -0x18],EDX
007d654d  MOV EAX,dword ptr [EBP + -0x10]
007d6550  MOV ECX,dword ptr [EBP + -0x18]
007d6553  MOV EDX,dword ptr [ECX + 0x4]
007d6556  MOV dword ptr [EAX + 0x4],EDX
007d6559  MOV EAX,dword ptr [EBP + -0x10]
007d655c  MOV ECX,dword ptr [EBP + -0x18]
007d655f  MOV dword ptr [EAX + 0x8],ECX
007d6562  MOV EDX,dword ptr [EBP + -0x18]
007d6565  MOV EAX,dword ptr [EBP + -0x10]
007d6568  MOV dword ptr [EDX + 0x4],EAX
007d656b  MOV ECX,dword ptr [EBP + -0x10]
007d656e  MOV EDX,dword ptr [ECX + 0x4]
007d6571  MOV EAX,dword ptr [EBP + -0x10]
007d6574  MOV dword ptr [EDX + 0x8],EAX
007d6577  MOV ECX,dword ptr [EBP + -0x10]
007d657a  MOV EDX,dword ptr [EBP + -0x10]
007d657d  MOV EAX,dword ptr [ECX + 0x4]
007d6580  CMP EAX,dword ptr [EDX + 0x8]
007d6583  JNZ 0x007d6649
007d6589  CMP dword ptr [EBP + -0x2c],0x20
007d658d  JNC 0x007d65e6
007d658f  MOV ECX,dword ptr [EBP + -0x24]
007d6592  ADD ECX,dword ptr [EBP + -0x2c]
007d6595  MOVSX EDX,byte ptr [ECX + 0x4]
007d6599  MOV EAX,dword ptr [EBP + -0x24]
007d659c  ADD EAX,dword ptr [EBP + -0x2c]
007d659f  MOV CL,byte ptr [EAX + 0x4]
007d65a2  ADD CL,0x1
007d65a5  MOV EAX,dword ptr [EBP + -0x24]
007d65a8  ADD EAX,dword ptr [EBP + -0x2c]
007d65ab  MOV byte ptr [EAX + 0x4],CL
007d65ae  TEST EDX,EDX
007d65b0  JNZ 0x007d65c6
007d65b2  MOV EDX,0x80000000
007d65b7  MOV ECX,dword ptr [EBP + -0x2c]
007d65ba  SHR EDX,CL
007d65bc  MOV EAX,dword ptr [EBP + 0x8]
007d65bf  OR EDX,dword ptr [EAX]
007d65c1  MOV ECX,dword ptr [EBP + 0x8]
007d65c4  MOV dword ptr [ECX],EDX
007d65c6  MOV EDX,0x80000000
007d65cb  MOV ECX,dword ptr [EBP + -0x2c]
007d65ce  SHR EDX,CL
007d65d0  MOV EAX,dword ptr [EBP + -0xc]
007d65d3  MOV ECX,dword ptr [EBP + -0x24]
007d65d6  OR EDX,dword ptr [ECX + EAX*0x4 + 0x44]
007d65da  MOV EAX,dword ptr [EBP + -0xc]
007d65dd  MOV ECX,dword ptr [EBP + -0x24]
007d65e0  MOV dword ptr [ECX + EAX*0x4 + 0x44],EDX
007d65e4  JMP 0x007d6649
007d65e6  MOV EDX,dword ptr [EBP + -0x24]
007d65e9  ADD EDX,dword ptr [EBP + -0x2c]
007d65ec  MOVSX EAX,byte ptr [EDX + 0x4]
007d65f0  MOV ECX,dword ptr [EBP + -0x24]
007d65f3  ADD ECX,dword ptr [EBP + -0x2c]
007d65f6  MOV DL,byte ptr [ECX + 0x4]
007d65f9  ADD DL,0x1
007d65fc  MOV ECX,dword ptr [EBP + -0x24]
007d65ff  ADD ECX,dword ptr [EBP + -0x2c]
007d6602  MOV byte ptr [ECX + 0x4],DL
007d6605  TEST EAX,EAX
007d6607  JNZ 0x007d6622
007d6609  MOV ECX,dword ptr [EBP + -0x2c]
007d660c  SUB ECX,0x20
007d660f  MOV EDX,0x80000000
007d6614  SHR EDX,CL
007d6616  MOV EAX,dword ptr [EBP + 0x8]
007d6619  OR EDX,dword ptr [EAX + 0x4]
007d661c  MOV ECX,dword ptr [EBP + 0x8]
007d661f  MOV dword ptr [ECX + 0x4],EDX
007d6622  MOV ECX,dword ptr [EBP + -0x2c]
007d6625  SUB ECX,0x20
007d6628  MOV EDX,0x80000000
007d662d  SHR EDX,CL
007d662f  MOV EAX,dword ptr [EBP + -0xc]
007d6632  MOV ECX,dword ptr [EBP + -0x24]
007d6635  OR EDX,dword ptr [ECX + EAX*0x4 + 0xc4]
007d663c  MOV EAX,dword ptr [EBP + -0xc]
007d663f  MOV ECX,dword ptr [EBP + -0x24]
007d6642  MOV dword ptr [ECX + EAX*0x4 + 0xc4],EDX
007d6649  MOV EDX,dword ptr [EBP + -0x10]
007d664c  MOV EAX,dword ptr [EBP + -0x30]
007d664f  MOV dword ptr [EDX],EAX
007d6651  MOV ECX,dword ptr [EBP + -0x10]
007d6654  ADD ECX,dword ptr [EBP + -0x30]
007d6657  MOV EDX,dword ptr [EBP + -0x30]
007d665a  MOV dword ptr [ECX + -0x4],EDX
007d665d  MOV EAX,0x1
007d6662  MOV ESP,EBP
007d6664  POP EBP
007d6665  RET
