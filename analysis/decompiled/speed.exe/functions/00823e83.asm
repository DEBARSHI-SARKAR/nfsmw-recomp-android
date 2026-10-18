00823e83  PUSH EBP
00823e84  LEA EBP,[ESP + -0x70]
00823e88  SUB ESP,0x2f4
00823e8e  PUSH EBX
00823e8f  PUSH ESI
00823e90  PUSH EDI
00823e91  MOV ESI,dword ptr [EBP + 0x7c]
00823e94  XOR EAX,EAX
00823e96  LEA EDI,[EBP + -0x64]
00823e99  STOSD ES:EDI
00823e9a  STOSD ES:EDI
00823e9b  STOSD ES:EDI
00823e9c  STOSD ES:EDI
00823e9d  STOSD ES:EDI
00823e9e  MOV EAX,dword ptr [EBP + 0x78]
00823ea1  MOV EAX,dword ptr [EAX]
00823ea3  PUSH 0x2b
00823ea5  POP ECX
00823ea6  MOV dword ptr [EBP + 0x5c],EAX
00823ea9  MOV dword ptr [ESI + 0xc8],EAX
00823eaf  XOR EAX,EAX
00823eb1  PUSH 0x2e
00823eb3  LEA EDI,[EBP + 0xfffffe34]
00823eb9  STOSD.REP ES:EDI
00823ebb  POP ECX
00823ebc  LEA EDI,[EBP + 0xfffffd7c]
00823ec2  STOSD.REP ES:EDI
00823ec4  PUSH 0x6
00823ec6  LEA ECX,[ESI + 0xb0]
00823ecc  LEA EAX,[ESI + 0x98]
00823ed2  POP EDX
00823ed3  XOR EBX,EBX
00823ed5  MOV dword ptr [EAX],EBX
00823ed7  MOV word ptr [ECX],BX
00823eda  ADD EAX,0x4
00823edd  INC ECX
00823ede  INC ECX
00823edf  DEC EDX
00823ee0  JNZ 0x00823ed5
00823ee2  OR dword ptr [EBP + -0x30],0xffffffff
00823ee6  OR dword ptr [EBP + 0xfffffef8],0xffffffff
00823eed  XOR EDI,EDI
00823eef  INC EDI
00823ef0  OR dword ptr [EBP + 0xfffffefc],0xffffffff
00823ef7  PUSH 0x7f
00823ef9  POP EAX
00823efa  MOV dword ptr [EBP + -0x4c],EBX
00823efd  MOV dword ptr [EBP + -0x48],EAX
00823f00  MOV dword ptr [EBP + -0x44],EBX
00823f03  MOV dword ptr [EBP + -0x40],EAX
00823f06  MOV dword ptr [EBP + -0x38],EBX
00823f09  MOV dword ptr [EBP + -0x34],0x3c
00823f10  MOV dword ptr [EBP + -0x2c],EDI
00823f13  MOV dword ptr [EBP + -0x28],EBX
00823f16  MOV dword ptr [EBP + -0x20],0x40
00823f1d  MOV dword ptr [EBP + -0x1c],EBX
00823f20  MOV dword ptr [EBP + -0x18],EAX
00823f23  MOV dword ptr [EBP + -0x14],EBX
00823f26  MOV dword ptr [EBP + -0x10],EBX
00823f29  MOV dword ptr [EBP + -0xc],EBX
00823f2c  MOV dword ptr [EBP + -0x8],EBX
00823f2f  MOV dword ptr [EBP + -0x4],EBX
00823f32  MOV byte ptr [ESI + 0x17],BL
00823f35  MOV dword ptr [EBP + 0xc],EBX
00823f38  MOV dword ptr [EBP + 0x14],0x90c6f4
00823f3f  MOV dword ptr [EBP + 0x18],EBX
00823f42  MOV dword ptr [EBP + 0x48],EBX
00823f45  MOV dword ptr [EBP + 0x4c],EBX
00823f48  MOV dword ptr [EBP + 0x50],EBX
00823f4b  MOV dword ptr [EBP + 0x54],EBX
00823f4e  MOV dword ptr [EBP + 0x58],EBX
00823f51  MOV dword ptr [EBP + 0x20],EAX
00823f54  MOV dword ptr [EBP + 0x24],EBX
00823f57  MOV dword ptr [EBP + 0x28],EBX
00823f5a  MOV dword ptr [EBP + 0x2c],EBX
00823f5d  MOV dword ptr [EBP + 0x30],EBX
00823f60  MOV dword ptr [EBP + 0x34],EBX
00823f63  MOV dword ptr [EBP + 0x38],EBX
00823f66  MOV dword ptr [EBP + 0x3c],EBX
00823f69  MOV dword ptr [EBP + 0x40],EBX
00823f6c  MOV dword ptr [EBP + 0x44],EDI
00823f6f  MOV dword ptr [EBP + 0xfffffee0],EBX
00823f75  MOV dword ptr [EBP + 0xfffffee8],EDI
00823f7b  MOV dword ptr [EBP + 0xfffffef0],0x5622
00823f85  MOV dword ptr [EBP + 0xfffffef4],EBX
00823f8b  MOV dword ptr [EBP + 0xffffff00],EBX
00823f91  MOV dword ptr [EBP + 0xffffff50],EBX
00823f97  MOV dword ptr [EBP + 0xffffff04],EBX
00823f9d  MOV dword ptr [EBP + 0xffffff54],EBX
00823fa3  MOV dword ptr [EBP + 0xffffff30],EBX
00823fa9  MOV dword ptr [EBP + 0xffffff58],EBX
00823faf  MOV dword ptr [EBP + 0xffffff34],EBX
00823fb5  MOV dword ptr [EBP + 0xffffff5c],EBX
00823fbb  MOV dword ptr [EBP + 0xffffff68],EBX
00823fc1  MOV dword ptr [EBP + 0xffffff78],EBX
00823fc7  MOV dword ptr [EBP + 0xffffff6c],EBX
00823fcd  MOV dword ptr [EBP + 0xffffff7c],EBX
00823fd3  MOV dword ptr [EBP + 0xffffff60],0xa
00823fdd  MOV dword ptr [EBP + 0xffffff10],EBX
00823fe3  MOV dword ptr [EBP + 0x7c],EBX
00823fe6  JMP 0x00824108
00823feb  MOV ECX,dword ptr [EBP + 0x60]
00823fee  CMP ECX,0x2b
00823ff1  JGE 0x00824028
00823ff3  CMP ECX,0x14
00823ff6  MOV EAX,dword ptr [EBP + 0x64]
00823ff9  MOV dword ptr [EBP + ECX*0x4 + -0x50],EAX
00823ffd  MOV EAX,dword ptr [EBP + 0x68]
00824000  MOV dword ptr [EBP + ECX*0x4 + 0xfffffe34],EAX
00824007  JNZ 0x00824108
0082400d  MOVSX ECX,byte ptr [ESI + 0x17]
00824011  MOV dword ptr [ESI + ECX*0x4 + 0x34],EAX
00824015  MOVSX EAX,byte ptr [ESI + 0x17]
00824019  MOV ECX,dword ptr [EBP + 0x6c]
0082401c  MOV dword ptr [ESI + EAX*0x4 + 0x44],ECX
00824020  INC byte ptr [ESI + 0x17]
00824023  JMP 0x00824108
00824028  CMP ECX,0x80
0082402e  JL 0x00824100
00824034  CMP ECX,0xae
0082403a  JGE 0x00824100
00824040  CMP ECX,0x98
00824046  MOV EAX,dword ptr [EBP + 0x64]
00824049  LEA EDX,[ECX*0x4 + 0xfffffe00]
00824050  MOV dword ptr [EBP + EDX*0x1 + 0xfffffee0],EAX
00824057  MOV EAX,dword ptr [EBP + 0x68]
0082405a  MOV dword ptr [EBP + EDX*0x1 + 0xfffffd7c],EAX
00824061  JNZ 0x00824079
00824063  MOV dword ptr [ESI + 0x98],EAX
00824069  MOV AX,word ptr [EBP + 0x6c]
0082406d  MOV word ptr [ESI + 0xb0],AX
00824074  JMP 0x00824108
00824079  CMP ECX,0x99
0082407f  JNZ 0x00824094
00824081  MOV dword ptr [ESI + 0x9c],EAX
00824087  MOV AX,word ptr [EBP + 0x6c]
0082408b  MOV word ptr [ESI + 0xb2],AX
00824092  JMP 0x00824108
00824094  CMP ECX,0x9a
0082409a  JNZ 0x008240af
0082409c  MOV dword ptr [ESI + 0xa0],EAX
008240a2  MOV AX,word ptr [EBP + 0x6c]
008240a6  MOV word ptr [ESI + 0xb4],AX
008240ad  JMP 0x00824108
008240af  CMP ECX,0x9b
008240b5  JNZ 0x008240ca
008240b7  MOV dword ptr [ESI + 0xa4],EAX
008240bd  MOV AX,word ptr [EBP + 0x6c]
008240c1  MOV word ptr [ESI + 0xb6],AX
008240c8  JMP 0x00824108
008240ca  CMP ECX,0xa4
008240d0  JNZ 0x008240e5
008240d2  MOV dword ptr [ESI + 0xa8],EAX
008240d8  MOV AX,word ptr [EBP + 0x6c]
008240dc  MOV word ptr [ESI + 0xb8],AX
008240e3  JMP 0x00824108
008240e5  CMP ECX,0xa5
008240eb  JNZ 0x00824108
008240ed  MOV dword ptr [ESI + 0xac],EAX
008240f3  MOV AX,word ptr [EBP + 0x6c]
008240f7  MOV word ptr [ESI + 0xba],AX
008240fe  JMP 0x00824108
00824100  CMP ECX,0xfe
00824106  JZ 0x0082411c
00824108  LEA EAX,[EBP + 0x5c]
0082410b  PUSH EAX
0082410c  CALL 0x00824ff0
00824111  TEST EAX,EAX
00824113  POP ECX
00824114  JNZ 0x00823feb
0082411a  JMP 0x0082411f
0082411c  MOV dword ptr [EBP + 0x7c],EDI
0082411f  MOV AL,byte ptr [EBP + -0x4c]
00824122  MOV byte ptr [ESI + 0x8],AL
00824125  MOV AL,byte ptr [EBP + -0x48]
00824128  MOV byte ptr [ESI + 0x9],AL
0082412b  MOV AL,byte ptr [EBP + -0x44]
0082412e  MOV byte ptr [ESI + 0xa],AL
00824131  MOV AL,byte ptr [EBP + -0x40]
00824134  MOV byte ptr [ESI + 0xb],AL
00824137  MOV AL,byte ptr [EBP + -0x38]
0082413a  MOV byte ptr [ESI + 0xc],AL
0082413d  MOV AL,byte ptr [EBP + -0x34]
00824140  MOV byte ptr [ESI + 0xd],AL
00824143  MOV AL,byte ptr [EBP + -0x30]
00824146  MOV byte ptr [ESI + 0xe],AL
00824149  MOV AL,byte ptr [EBP + -0x2c]
0082414c  MOV byte ptr [ESI + 0xf],AL
0082414f  MOV AL,byte ptr [EBP + -0x28]
00824152  MOV byte ptr [ESI + 0x10],AL
00824155  MOV AL,byte ptr [EBP + -0x20]
00824158  MOV byte ptr [ESI + 0x11],AL
0082415b  MOV AL,byte ptr [EBP + -0x1c]
0082415e  MOV byte ptr [ESI + 0x12],AL
00824161  MOV AL,byte ptr [EBP + -0x18]
00824164  MOV byte ptr [ESI + 0x14],AL
00824167  MOV AL,byte ptr [EBP + -0x14]
0082416a  MOV byte ptr [ESI + 0x15],AL
0082416d  MOV AX,word ptr [EBP + -0x10]
00824171  MOV ECX,dword ptr [EBP + -0x8]
00824174  MOV word ptr [ESI + 0x4],AX
00824178  MOV AX,word ptr [EBP + -0xc]
0082417c  MOV word ptr [ESI + 0x6],AX
00824180  MOV EAX,dword ptr [EBP + 0xfffffe7c]
00824186  ADD EAX,ECX
00824188  MOV ECX,dword ptr [EBP + 0xc]
0082418b  MOV dword ptr [ESI + 0x20],EAX
0082418e  MOV AL,byte ptr [EBP + -0x4]
00824191  MOV byte ptr [ESI + 0x16],AL
00824194  MOV EAX,dword ptr [EBP + 0xfffffe90]
0082419a  ADD EAX,ECX
0082419c  MOV ECX,dword ptr [EBP + 0x14]
0082419f  MOV dword ptr [ESI + 0x24],EAX
008241a2  MOV EAX,dword ptr [EBP + 0xfffffe98]
008241a8  ADD EAX,ECX
008241aa  MOV dword ptr [ESI + 0x28],EAX
008241ad  MOV EAX,dword ptr [EBP + 0x18]
008241b0  MOV dword ptr [ESI + 0x80],EAX
008241b6  MOV EAX,dword ptr [EBP + 0x48]
008241b9  MOV ECX,dword ptr [EBP + 0x24]
008241bc  MOV dword ptr [ESI + 0x84],EAX
008241c2  MOV EAX,dword ptr [EBP + 0x4c]
008241c5  MOV dword ptr [ESI + 0x88],EAX
008241cb  MOV EAX,dword ptr [EBP + 0x50]
008241ce  MOV dword ptr [ESI + 0x8c],EAX
008241d4  MOV EAX,dword ptr [EBP + 0x54]
008241d7  MOV dword ptr [ESI + 0x90],EAX
008241dd  MOV EAX,dword ptr [EBP + 0x58]
008241e0  MOV dword ptr [ESI + 0x94],EAX
008241e6  MOV AL,byte ptr [EBP + 0x20]
008241e9  MOV byte ptr [ESI + 0x1a],AL
008241ec  MOV EAX,dword ptr [EBP + 0xfffffea8]
008241f2  ADD EAX,ECX
008241f4  MOV ECX,dword ptr [EBP + 0x30]
008241f7  MOV dword ptr [ESI + 0x2c],EAX
008241fa  MOV AL,byte ptr [EBP + 0x28]
008241fd  MOV byte ptr [ESI + 0x1b],AL
00824200  MOV AL,byte ptr [EBP + 0x2c]
00824203  MOV byte ptr [ESI + 0x1c],AL
00824206  MOV EAX,dword ptr [EBP + 0xfffffeb4]
0082420c  ADD EAX,ECX
0082420e  MOV dword ptr [ESI + 0x30],EAX
00824211  MOV AL,byte ptr [EBP + 0x34]
00824214  MOV byte ptr [ESI + 0x1d],AL
00824217  MOV AX,word ptr [EBP + 0x38]
0082421b  MOV word ptr [ESI + 0x54],AX
0082421f  MOV AL,byte ptr [EBP + 0x3c]
00824222  MOV byte ptr [ESI + 0x1e],AL
00824225  MOV AX,word ptr [EBP + 0x40]
00824229  MOV word ptr [ESI],AX
0082422c  MOV AL,byte ptr [EBP + 0x44]
0082422f  MOV byte ptr [ESI + 0x1f],AL
00824232  MOV AL,byte ptr [EBP + 0xfffffee0]
00824238  MOV byte ptr [ESI + 0x2],AL
0082423b  MOV AL,byte ptr [EBP + 0xffffff60]
00824241  MOV byte ptr [ESI + 0x13],AL
00824244  MOV AX,word ptr [EBP + 0xfffffef0]
0082424b  MOV word ptr [ESI + 0x56],AX
0082424f  MOV EAX,dword ptr [EBP + 0xfffffef4]
00824255  MOV dword ptr [ESI + 0x58],EAX
00824258  MOV EAX,dword ptr [EBP + 0xfffffef8]
0082425e  MOV dword ptr [ESI + 0x5c],EAX
00824261  MOV EAX,dword ptr [EBP + 0xfffffefc]
00824267  MOV dword ptr [ESI + 0x60],EAX
0082426a  MOV AX,word ptr [EBP + 0xffffff10]
00824271  MOV word ptr [ESI + 0x18],AX
00824275  MOV EAX,dword ptr [EBP + 0xfffffda4]
0082427b  MOV dword ptr [ESI + 0x64],EAX
0082427e  MOV EAX,dword ptr [EBP + 0xffffff00]
00824284  MOV dword ptr [ESI + 0x68],EAX
00824287  MOV EAX,dword ptr [EBP + 0xffffff50]
0082428d  MOV dword ptr [EBP + -0x68],EAX
00824290  MOV EAX,dword ptr [EBP + 0xffffff04]
00824296  MOV dword ptr [ESI + 0x6c],EAX
00824299  MOV EAX,dword ptr [EBP + 0xffffff54]
0082429f  MOV CL,byte ptr [EBP + 0xfffffee8]
008242a5  MOV dword ptr [EBP + -0x64],EAX
008242a8  MOV EAX,dword ptr [EBP + 0xffffff30]
008242ae  MOV dword ptr [ESI + 0x70],EAX
008242b1  MOV EAX,dword ptr [EBP + 0xffffff58]
008242b7  MOV dword ptr [EBP + -0x60],EAX
008242ba  MOV EAX,dword ptr [EBP + 0xffffff34]
008242c0  MOV dword ptr [ESI + 0x74],EAX
008242c3  MOV EAX,dword ptr [EBP + 0xffffff5c]
008242c9  MOV dword ptr [EBP + -0x5c],EAX
008242cc  MOV EAX,dword ptr [EBP + 0xffffff68]
008242d2  MOV dword ptr [ESI + 0x78],EAX
008242d5  MOV EAX,dword ptr [EBP + 0xffffff78]
008242db  MOV dword ptr [EBP + -0x58],EAX
008242de  MOV EAX,dword ptr [EBP + 0xffffff6c]
008242e4  MOV dword ptr [ESI + 0x7c],EAX
008242e7  MOV EAX,dword ptr [EBP + 0xffffff7c]
008242ed  MOV dword ptr [EBP + -0x54],EAX
008242f0  XOR EAX,EAX
008242f2  CMP CL,BL
008242f4  MOV byte ptr [ESI + 0x3],CL
008242f7  JLE 0x00824336
008242f9  LEA EDX,[ESI + 0xbc]
008242ff  CMP dword ptr [0x009c1fdc],EDI
00824305  JNZ 0x00824311
00824307  CMP byte ptr [ESI + 0x3],0x2
0082430b  JNZ 0x00824311
0082430d  MOV dword ptr [EBP + EAX*0x4 + -0x68],EBX
00824311  MOVSX ECX,byte ptr [ESI + 0x3]
00824315  LEA ECX,[ECX + ECX*0x2]
00824318  LEA ECX,[EAX + ECX*0x2]
0082431b  MOV CX,word ptr [ECX*0x2 + 0x9c21f4]
00824323  ADD CX,word ptr [EBP + EAX*0x4 + -0x68]
00824328  INC EAX
00824329  MOV word ptr [EDX],CX
0082432c  MOVSX ECX,byte ptr [ESI + 0x3]
00824330  INC EDX
00824331  INC EDX
00824332  CMP EAX,ECX
00824334  JL 0x008242ff
00824336  MOV EAX,dword ptr [EBP + 0x5c]
00824339  MOV ECX,dword ptr [EBP + 0x78]
0082433c  POP EDI
0082433d  POP ESI
0082433e  MOV dword ptr [ECX],EAX
00824340  MOV EAX,dword ptr [EBP + 0x7c]
00824343  POP EBX
00824344  ADD EBP,0x70
00824347  LEAVE
00824348  RET
