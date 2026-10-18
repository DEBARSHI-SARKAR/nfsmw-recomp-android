007e4e00  PUSH EBP
007e4e01  MOV EBP,ESP
007e4e03  SUB ESP,0xa4
007e4e09  MOV EAX,[0x00906980]
007e4e0e  MOV dword ptr [EBP + -0x3c],EAX
007e4e11  LEA EAX,[EBP + -0x58]
007e4e14  MOV dword ptr [EBP + -0x64],EAX
007e4e17  MOV word ptr [EBP + -0x60],0x0
007e4e1d  MOV dword ptr [EBP + -0x38],0x1
007e4e24  MOV dword ptr [EBP + -0x2c],0x0
007e4e2b  MOV dword ptr [EBP + -0x14],0x0
007e4e32  MOV dword ptr [EBP + -0x70],0x0
007e4e39  MOV dword ptr [EBP + -0x30],0x0
007e4e40  MOV dword ptr [EBP + -0x20],0x0
007e4e47  MOV dword ptr [EBP + -0x34],0x0
007e4e4e  MOV dword ptr [EBP + -0x8],0x0
007e4e55  MOV dword ptr [EBP + -0x10],0x0
007e4e5c  MOV dword ptr [EBP + -0x24],0x0
007e4e63  MOV dword ptr [EBP + -0x6c],0x0
007e4e6a  MOV ECX,dword ptr [EBP + 0x10]
007e4e6d  MOV dword ptr [EBP + -0x4],ECX
007e4e70  MOV EDX,dword ptr [EBP + -0x4]
007e4e73  MOV dword ptr [EBP + -0x5c],EDX
007e4e76  JMP 0x007e4e81
007e4e78  MOV EAX,dword ptr [EBP + -0x4]
007e4e7b  ADD EAX,0x1
007e4e7e  MOV dword ptr [EBP + -0x4],EAX
007e4e81  MOV ECX,dword ptr [EBP + -0x4]
007e4e84  MOVSX EDX,byte ptr [ECX]
007e4e87  CMP EDX,0x20
007e4e8a  JZ 0x007e4ead
007e4e8c  MOV EAX,dword ptr [EBP + -0x4]
007e4e8f  MOVSX ECX,byte ptr [EAX]
007e4e92  CMP ECX,0x9
007e4e95  JZ 0x007e4ead
007e4e97  MOV EDX,dword ptr [EBP + -0x4]
007e4e9a  MOVSX EAX,byte ptr [EDX]
007e4e9d  CMP EAX,0xa
007e4ea0  JZ 0x007e4ead
007e4ea2  MOV ECX,dword ptr [EBP + -0x4]
007e4ea5  MOVSX EDX,byte ptr [ECX]
007e4ea8  CMP EDX,0xd
007e4eab  JNZ 0x007e4eaf
007e4ead  JMP 0x007e4e78
007e4eaf  CMP dword ptr [EBP + -0x6c],0xa
007e4eb3  JZ 0x007e54eb
007e4eb9  MOV EAX,dword ptr [EBP + -0x4]
007e4ebc  MOV CL,byte ptr [EAX]
007e4ebe  MOV byte ptr [EBP + -0x65],CL
007e4ec1  MOV EDX,dword ptr [EBP + -0x4]
007e4ec4  ADD EDX,0x1
007e4ec7  MOV dword ptr [EBP + -0x4],EDX
007e4eca  MOV EAX,dword ptr [EBP + -0x6c]
007e4ecd  MOV dword ptr [EBP + 0xffffff7c],EAX
007e4ed3  CMP dword ptr [EBP + 0xffffff7c],0xb
007e4eda  JA 0x007e54e6
007e4ee0  MOV ECX,dword ptr [EBP + 0xffffff7c]
007e4ee6  JMP dword ptr [ECX*0x4 + 0x7e56ef]
007e4eed  MOVSX EDX,byte ptr [EBP + -0x65]
007e4ef1  CMP EDX,0x31
007e4ef4  JL 0x007e4f11
007e4ef6  MOVSX EAX,byte ptr [EBP + -0x65]
007e4efa  CMP EAX,0x39
007e4efd  JG 0x007e4f11
007e4eff  MOV dword ptr [EBP + -0x6c],0x3
007e4f06  MOV ECX,dword ptr [EBP + -0x4]
007e4f09  SUB ECX,0x1
007e4f0c  MOV dword ptr [EBP + -0x4],ECX
007e4f0f  JMP 0x007e4f86
007e4f11  MOVSX EDX,byte ptr [EBP + -0x65]
007e4f15  MOVSX EAX,byte ptr [0x0090725c]
007e4f1c  CMP EDX,EAX
007e4f1e  JNZ 0x007e4f29
007e4f20  MOV dword ptr [EBP + -0x6c],0x5
007e4f27  JMP 0x007e4f86
007e4f29  MOV CL,byte ptr [EBP + -0x65]
007e4f2c  MOV byte ptr [EBP + 0xffffff78],CL
007e4f32  CMP byte ptr [EBP + 0xffffff78],0x2b
007e4f39  JZ 0x007e4f58
007e4f3b  CMP byte ptr [EBP + 0xffffff78],0x2d
007e4f42  JZ 0x007e4f67
007e4f44  CMP byte ptr [EBP + 0xffffff78],0x30
007e4f4b  JZ 0x007e4f4f
007e4f4d  JMP 0x007e4f76
007e4f4f  MOV dword ptr [EBP + -0x6c],0x1
007e4f56  JMP 0x007e4f86
007e4f58  MOV dword ptr [EBP + -0x6c],0x2
007e4f5f  MOV word ptr [EBP + -0x60],0x0
007e4f65  JMP 0x007e4f86
007e4f67  MOV dword ptr [EBP + -0x6c],0x2
007e4f6e  MOV word ptr [EBP + -0x60],0x8000
007e4f74  JMP 0x007e4f86
007e4f76  MOV dword ptr [EBP + -0x6c],0xa
007e4f7d  MOV EDX,dword ptr [EBP + -0x4]
007e4f80  SUB EDX,0x1
007e4f83  MOV dword ptr [EBP + -0x4],EDX
007e4f86  JMP 0x007e54e6
007e4f8b  MOV dword ptr [EBP + -0x14],0x1
007e4f92  MOVSX EAX,byte ptr [EBP + -0x65]
007e4f96  CMP EAX,0x31
007e4f99  JL 0x007e4fb9
007e4f9b  MOVSX ECX,byte ptr [EBP + -0x65]
007e4f9f  CMP ECX,0x39
007e4fa2  JG 0x007e4fb9
007e4fa4  MOV dword ptr [EBP + -0x6c],0x3
007e4fab  MOV EDX,dword ptr [EBP + -0x4]
007e4fae  SUB EDX,0x1
007e4fb1  MOV dword ptr [EBP + -0x4],EDX
007e4fb4  JMP 0x007e503b
007e4fb9  MOVSX EAX,byte ptr [EBP + -0x65]
007e4fbd  MOVSX ECX,byte ptr [0x0090725c]
007e4fc4  CMP EAX,ECX
007e4fc6  JNZ 0x007e4fd1
007e4fc8  MOV dword ptr [EBP + -0x6c],0x4
007e4fcf  JMP 0x007e503b
007e4fd1  MOVSX EDX,byte ptr [EBP + -0x65]
007e4fd5  MOV dword ptr [EBP + 0xffffff74],EDX
007e4fdb  MOV EAX,dword ptr [EBP + 0xffffff74]
007e4fe1  SUB EAX,0x2b
007e4fe4  MOV dword ptr [EBP + 0xffffff74],EAX
007e4fea  CMP dword ptr [EBP + 0xffffff74],0x3a
007e4ff1  JA 0x007e502b
007e4ff3  MOV ECX,dword ptr [EBP + 0xffffff74]
007e4ff9  MOVZX EDX,byte ptr [ECX + 0x7e572f]
007e5000  JMP dword ptr [EDX*0x4 + 0x7e571f]
007e5007  MOV dword ptr [EBP + -0x6c],0x1
007e500e  JMP 0x007e503b
007e5010  MOV dword ptr [EBP + -0x6c],0x6
007e5017  JMP 0x007e503b
007e5019  MOV EAX,dword ptr [EBP + -0x4]
007e501c  SUB EAX,0x1
007e501f  MOV dword ptr [EBP + -0x4],EAX
007e5022  MOV dword ptr [EBP + -0x6c],0xb
007e5029  JMP 0x007e503b
007e502b  MOV dword ptr [EBP + -0x6c],0xa
007e5032  MOV ECX,dword ptr [EBP + -0x4]
007e5035  SUB ECX,0x1
007e5038  MOV dword ptr [EBP + -0x4],ECX
007e503b  JMP 0x007e54e6
007e5040  MOVSX EDX,byte ptr [EBP + -0x65]
007e5044  CMP EDX,0x31
007e5047  JL 0x007e5064
007e5049  MOVSX EAX,byte ptr [EBP + -0x65]
007e504d  CMP EAX,0x39
007e5050  JG 0x007e5064
007e5052  MOV dword ptr [EBP + -0x6c],0x3
007e5059  MOV ECX,dword ptr [EBP + -0x4]
007e505c  SUB ECX,0x1
007e505f  MOV dword ptr [EBP + -0x4],ECX
007e5062  JMP 0x007e50a6
007e5064  MOVSX EDX,byte ptr [EBP + -0x65]
007e5068  MOVSX EAX,byte ptr [0x0090725c]
007e506f  CMP EDX,EAX
007e5071  JNZ 0x007e507c
007e5073  MOV dword ptr [EBP + -0x6c],0x5
007e507a  JMP 0x007e50a6
007e507c  MOV CL,byte ptr [EBP + -0x65]
007e507f  MOV byte ptr [EBP + 0xffffff70],CL
007e5085  CMP byte ptr [EBP + 0xffffff70],0x30
007e508c  JZ 0x007e5090
007e508e  JMP 0x007e5099
007e5090  MOV dword ptr [EBP + -0x6c],0x1
007e5097  JMP 0x007e50a6
007e5099  MOV dword ptr [EBP + -0x6c],0xa
007e50a0  MOV EDX,dword ptr [EBP + -0x5c]
007e50a3  MOV dword ptr [EBP + -0x4],EDX
007e50a6  JMP 0x007e54e6
007e50ab  MOV dword ptr [EBP + -0x14],0x1
007e50b2  JMP 0x007e50c5
007e50b4  MOV EAX,dword ptr [EBP + -0x4]
007e50b7  MOV CL,byte ptr [EAX]
007e50b9  MOV byte ptr [EBP + -0x65],CL
007e50bc  MOV EDX,dword ptr [EBP + -0x4]
007e50bf  ADD EDX,0x1
007e50c2  MOV dword ptr [EBP + -0x4],EDX
007e50c5  MOVZX EAX,byte ptr [EBP + -0x65]
007e50c9  PUSH EAX
007e50ca  CALL 0x007ca7e0
007e50cf  ADD ESP,0x4
007e50d2  TEST EAX,EAX
007e50d4  JZ 0x007e5107
007e50d6  CMP dword ptr [EBP + -0x2c],0x19
007e50da  JNC 0x007e50fc
007e50dc  MOV ECX,dword ptr [EBP + -0x2c]
007e50df  ADD ECX,0x1
007e50e2  MOV dword ptr [EBP + -0x2c],ECX
007e50e5  MOVSX EDX,byte ptr [EBP + -0x65]
007e50e9  SUB EDX,0x30
007e50ec  MOV EAX,dword ptr [EBP + -0x64]
007e50ef  MOV byte ptr [EAX],DL
007e50f1  MOV ECX,dword ptr [EBP + -0x64]
007e50f4  ADD ECX,0x1
007e50f7  MOV dword ptr [EBP + -0x64],ECX
007e50fa  JMP 0x007e5105
007e50fc  MOV EDX,dword ptr [EBP + -0x10]
007e50ff  ADD EDX,0x1
007e5102  MOV dword ptr [EBP + -0x10],EDX
007e5105  JMP 0x007e50b4
007e5107  MOVSX EAX,byte ptr [EBP + -0x65]
007e510b  MOVSX ECX,byte ptr [0x0090725c]
007e5112  CMP EAX,ECX
007e5114  JNZ 0x007e511f
007e5116  MOV dword ptr [EBP + -0x6c],0x4
007e511d  JMP 0x007e5180
007e511f  MOVSX EDX,byte ptr [EBP + -0x65]
007e5123  MOV dword ptr [EBP + 0xffffff6c],EDX
007e5129  MOV EAX,dword ptr [EBP + 0xffffff6c]
007e512f  SUB EAX,0x2b
007e5132  MOV dword ptr [EBP + 0xffffff6c],EAX
007e5138  CMP dword ptr [EBP + 0xffffff6c],0x3a
007e513f  JA 0x007e5170
007e5141  MOV ECX,dword ptr [EBP + 0xffffff6c]
007e5147  MOVZX EDX,byte ptr [ECX + 0x7e5776]
007e514e  JMP dword ptr [EDX*0x4 + 0x7e576a]
007e5155  MOV dword ptr [EBP + -0x6c],0x6
007e515c  JMP 0x007e5180
007e515e  MOV EAX,dword ptr [EBP + -0x4]
007e5161  SUB EAX,0x1
007e5164  MOV dword ptr [EBP + -0x4],EAX
007e5167  MOV dword ptr [EBP + -0x6c],0xb
007e516e  JMP 0x007e5180
007e5170  MOV dword ptr [EBP + -0x6c],0xa
007e5177  MOV ECX,dword ptr [EBP + -0x4]
007e517a  SUB ECX,0x1
007e517d  MOV dword ptr [EBP + -0x4],ECX
007e5180  JMP 0x007e54e6
007e5185  MOV dword ptr [EBP + -0x14],0x1
007e518c  MOV dword ptr [EBP + -0x70],0x1
007e5193  CMP dword ptr [EBP + -0x2c],0x0
007e5197  JNZ 0x007e51c0
007e5199  JMP 0x007e51ac
007e519b  MOV EDX,dword ptr [EBP + -0x4]
007e519e  MOV AL,byte ptr [EDX]
007e51a0  MOV byte ptr [EBP + -0x65],AL
007e51a3  MOV ECX,dword ptr [EBP + -0x4]
007e51a6  ADD ECX,0x1
007e51a9  MOV dword ptr [EBP + -0x4],ECX
007e51ac  MOVSX EDX,byte ptr [EBP + -0x65]
007e51b0  CMP EDX,0x30
007e51b3  JNZ 0x007e51c0
007e51b5  MOV EAX,dword ptr [EBP + -0x10]
007e51b8  SUB EAX,0x1
007e51bb  MOV dword ptr [EBP + -0x10],EAX
007e51be  JMP 0x007e519b
007e51c0  JMP 0x007e51d3
007e51c2  MOV ECX,dword ptr [EBP + -0x4]
007e51c5  MOV DL,byte ptr [ECX]
007e51c7  MOV byte ptr [EBP + -0x65],DL
007e51ca  MOV EAX,dword ptr [EBP + -0x4]
007e51cd  ADD EAX,0x1
007e51d0  MOV dword ptr [EBP + -0x4],EAX
007e51d3  MOVZX ECX,byte ptr [EBP + -0x65]
007e51d7  PUSH ECX
007e51d8  CALL 0x007ca7e0
007e51dd  ADD ESP,0x4
007e51e0  TEST EAX,EAX
007e51e2  JZ 0x007e5213
007e51e4  CMP dword ptr [EBP + -0x2c],0x19
007e51e8  JNC 0x007e5211
007e51ea  MOV EDX,dword ptr [EBP + -0x2c]
007e51ed  ADD EDX,0x1
007e51f0  MOV dword ptr [EBP + -0x2c],EDX
007e51f3  MOVSX EAX,byte ptr [EBP + -0x65]
007e51f7  SUB EAX,0x30
007e51fa  MOV ECX,dword ptr [EBP + -0x64]
007e51fd  MOV byte ptr [ECX],AL
007e51ff  MOV EDX,dword ptr [EBP + -0x64]
007e5202  ADD EDX,0x1
007e5205  MOV dword ptr [EBP + -0x64],EDX
007e5208  MOV EAX,dword ptr [EBP + -0x10]
007e520b  SUB EAX,0x1
007e520e  MOV dword ptr [EBP + -0x10],EAX
007e5211  JMP 0x007e51c2
007e5213  MOVSX ECX,byte ptr [EBP + -0x65]
007e5217  MOV dword ptr [EBP + 0xffffff68],ECX
007e521d  MOV EDX,dword ptr [EBP + 0xffffff68]
007e5223  SUB EDX,0x2b
007e5226  MOV dword ptr [EBP + 0xffffff68],EDX
007e522c  CMP dword ptr [EBP + 0xffffff68],0x3a
007e5233  JA 0x007e5264
007e5235  MOV EAX,dword ptr [EBP + 0xffffff68]
007e523b  MOVZX ECX,byte ptr [EAX + 0x7e57bd]
007e5242  JMP dword ptr [ECX*0x4 + 0x7e57b1]
007e5249  MOV dword ptr [EBP + -0x6c],0x6
007e5250  JMP 0x007e5274
007e5252  MOV EDX,dword ptr [EBP + -0x4]
007e5255  SUB EDX,0x1
007e5258  MOV dword ptr [EBP + -0x4],EDX
007e525b  MOV dword ptr [EBP + -0x6c],0xb
007e5262  JMP 0x007e5274
007e5264  MOV dword ptr [EBP + -0x6c],0xa
007e526b  MOV EAX,dword ptr [EBP + -0x4]
007e526e  SUB EAX,0x1
007e5271  MOV dword ptr [EBP + -0x4],EAX
007e5274  JMP 0x007e54e6
007e5279  MOV dword ptr [EBP + -0x70],0x1
007e5280  MOVZX ECX,byte ptr [EBP + -0x65]
007e5284  PUSH ECX
007e5285  CALL 0x007ca7e0
007e528a  ADD ESP,0x4
007e528d  TEST EAX,EAX
007e528f  JZ 0x007e52a3
007e5291  MOV dword ptr [EBP + -0x6c],0x4
007e5298  MOV EDX,dword ptr [EBP + -0x4]
007e529b  SUB EDX,0x1
007e529e  MOV dword ptr [EBP + -0x4],EDX
007e52a1  JMP 0x007e52b0
007e52a3  MOV dword ptr [EBP + -0x6c],0xa
007e52aa  MOV EAX,dword ptr [EBP + -0x5c]
007e52ad  MOV dword ptr [EBP + -0x4],EAX
007e52b0  JMP 0x007e54e6
007e52b5  MOV ECX,dword ptr [EBP + -0x4]
007e52b8  SUB ECX,0x2
007e52bb  MOV dword ptr [EBP + -0x5c],ECX
007e52be  MOVSX EDX,byte ptr [EBP + -0x65]
007e52c2  CMP EDX,0x31
007e52c5  JL 0x007e52e2
007e52c7  MOVSX EAX,byte ptr [EBP + -0x65]
007e52cb  CMP EAX,0x39
007e52ce  JG 0x007e52e2
007e52d0  MOV dword ptr [EBP + -0x6c],0x9
007e52d7  MOV ECX,dword ptr [EBP + -0x4]
007e52da  SUB ECX,0x1
007e52dd  MOV dword ptr [EBP + -0x4],ECX
007e52e0  JMP 0x007e5337
007e52e2  MOV DL,byte ptr [EBP + -0x65]
007e52e5  MOV byte ptr [EBP + 0xffffff64],DL
007e52eb  CMP byte ptr [EBP + 0xffffff64],0x2b
007e52f2  JZ 0x007e5321
007e52f4  CMP byte ptr [EBP + 0xffffff64],0x2d
007e52fb  JZ 0x007e5311
007e52fd  CMP byte ptr [EBP + 0xffffff64],0x30
007e5304  JZ 0x007e5308
007e5306  JMP 0x007e532a
007e5308  MOV dword ptr [EBP + -0x6c],0x8
007e530f  JMP 0x007e5337
007e5311  MOV dword ptr [EBP + -0x6c],0x7
007e5318  MOV dword ptr [EBP + -0x38],0xffffffff
007e531f  JMP 0x007e5337
007e5321  MOV dword ptr [EBP + -0x6c],0x7
007e5328  JMP 0x007e5337
007e532a  MOV dword ptr [EBP + -0x6c],0xa
007e5331  MOV EAX,dword ptr [EBP + -0x5c]
007e5334  MOV dword ptr [EBP + -0x4],EAX
007e5337  JMP 0x007e54e6
007e533c  MOV dword ptr [EBP + -0x30],0x1
007e5343  JMP 0x007e5356
007e5345  MOV ECX,dword ptr [EBP + -0x4]
007e5348  MOV DL,byte ptr [ECX]
007e534a  MOV byte ptr [EBP + -0x65],DL
007e534d  MOV EAX,dword ptr [EBP + -0x4]
007e5350  ADD EAX,0x1
007e5353  MOV dword ptr [EBP + -0x4],EAX
007e5356  MOVSX ECX,byte ptr [EBP + -0x65]
007e535a  CMP ECX,0x30
007e535d  JNZ 0x007e5361
007e535f  JMP 0x007e5345
007e5361  MOVSX EDX,byte ptr [EBP + -0x65]
007e5365  CMP EDX,0x31
007e5368  JL 0x007e5385
007e536a  MOVSX EAX,byte ptr [EBP + -0x65]
007e536e  CMP EAX,0x39
007e5371  JG 0x007e5385
007e5373  MOV dword ptr [EBP + -0x6c],0x9
007e537a  MOV ECX,dword ptr [EBP + -0x4]
007e537d  SUB ECX,0x1
007e5380  MOV dword ptr [EBP + -0x4],ECX
007e5383  JMP 0x007e5395
007e5385  MOV dword ptr [EBP + -0x6c],0xa
007e538c  MOV EDX,dword ptr [EBP + -0x4]
007e538f  SUB EDX,0x1
007e5392  MOV dword ptr [EBP + -0x4],EDX
007e5395  JMP 0x007e54e6
007e539a  MOVSX EAX,byte ptr [EBP + -0x65]
007e539e  CMP EAX,0x31
007e53a1  JL 0x007e53be
007e53a3  MOVSX ECX,byte ptr [EBP + -0x65]
007e53a7  CMP ECX,0x39
007e53aa  JG 0x007e53be
007e53ac  MOV dword ptr [EBP + -0x6c],0x9
007e53b3  MOV EDX,dword ptr [EBP + -0x4]
007e53b6  SUB EDX,0x1
007e53b9  MOV dword ptr [EBP + -0x4],EDX
007e53bc  JMP 0x007e53e8
007e53be  MOV AL,byte ptr [EBP + -0x65]
007e53c1  MOV byte ptr [EBP + 0xffffff60],AL
007e53c7  CMP byte ptr [EBP + 0xffffff60],0x30
007e53ce  JZ 0x007e53d2
007e53d0  JMP 0x007e53db
007e53d2  MOV dword ptr [EBP + -0x6c],0x8
007e53d9  JMP 0x007e53e8
007e53db  MOV dword ptr [EBP + -0x6c],0xa
007e53e2  MOV ECX,dword ptr [EBP + -0x5c]
007e53e5  MOV dword ptr [EBP + -0x4],ECX
007e53e8  JMP 0x007e54e6
007e53ed  MOV dword ptr [EBP + -0x30],0x1
007e53f4  MOV dword ptr [EBP + -0x80],0x0
007e53fb  JMP 0x007e540e
007e53fd  MOV EDX,dword ptr [EBP + -0x4]
007e5400  MOV AL,byte ptr [EDX]
007e5402  MOV byte ptr [EBP + -0x65],AL
007e5405  MOV ECX,dword ptr [EBP + -0x4]
007e5408  ADD ECX,0x1
007e540b  MOV dword ptr [EBP + -0x4],ECX
007e540e  MOVZX EDX,byte ptr [EBP + -0x65]
007e5412  PUSH EDX
007e5413  CALL 0x007ca7e0
007e5418  ADD ESP,0x4
007e541b  TEST EAX,EAX
007e541d  JZ 0x007e5444
007e541f  MOV EAX,dword ptr [EBP + -0x80]
007e5422  IMUL EAX,EAX,0xa
007e5425  MOVSX ECX,byte ptr [EBP + -0x65]
007e5429  LEA EDX,[EAX + ECX*0x1 + -0x30]
007e542d  MOV dword ptr [EBP + -0x80],EDX
007e5430  CMP dword ptr [EBP + -0x80],0x1450
007e5437  JLE 0x007e5442
007e5439  MOV dword ptr [EBP + -0x80],0x1451
007e5440  JMP 0x007e5444
007e5442  JMP 0x007e53fd
007e5444  MOV EAX,dword ptr [EBP + -0x80]
007e5447  MOV dword ptr [EBP + -0x8],EAX
007e544a  JMP 0x007e545d
007e544c  MOV ECX,dword ptr [EBP + -0x4]
007e544f  MOV DL,byte ptr [ECX]
007e5451  MOV byte ptr [EBP + -0x65],DL
007e5454  MOV EAX,dword ptr [EBP + -0x4]
007e5457  ADD EAX,0x1
007e545a  MOV dword ptr [EBP + -0x4],EAX
007e545d  MOVZX ECX,byte ptr [EBP + -0x65]
007e5461  PUSH ECX
007e5462  CALL 0x007ca7e0
007e5467  ADD ESP,0x4
007e546a  TEST EAX,EAX
007e546c  JZ 0x007e5470
007e546e  JMP 0x007e544c
007e5470  MOV dword ptr [EBP + -0x6c],0xa
007e5477  MOV EDX,dword ptr [EBP + -0x4]
007e547a  SUB EDX,0x1
007e547d  MOV dword ptr [EBP + -0x4],EDX
007e5480  JMP 0x007e54e6
007e5482  CMP dword ptr [EBP + 0x20],0x0
007e5486  JZ 0x007e54d6
007e5488  MOV EAX,dword ptr [EBP + -0x4]
007e548b  SUB EAX,0x1
007e548e  MOV dword ptr [EBP + -0x5c],EAX
007e5491  MOV CL,byte ptr [EBP + -0x65]
007e5494  MOV byte ptr [EBP + 0xffffff5c],CL
007e549a  CMP byte ptr [EBP + 0xffffff5c],0x2b
007e54a1  JZ 0x007e54be
007e54a3  CMP byte ptr [EBP + 0xffffff5c],0x2d
007e54aa  JZ 0x007e54ae
007e54ac  JMP 0x007e54c7
007e54ae  MOV dword ptr [EBP + -0x6c],0x7
007e54b5  MOV dword ptr [EBP + -0x38],0xffffffff
007e54bc  JMP 0x007e54d4
007e54be  MOV dword ptr [EBP + -0x6c],0x7
007e54c5  JMP 0x007e54d4
007e54c7  MOV dword ptr [EBP + -0x6c],0xa
007e54ce  MOV EDX,dword ptr [EBP + -0x5c]
007e54d1  MOV dword ptr [EBP + -0x4],EDX
007e54d4  JMP 0x007e54e6
007e54d6  MOV dword ptr [EBP + -0x6c],0xa
007e54dd  MOV EAX,dword ptr [EBP + -0x4]
007e54e0  SUB EAX,0x1
007e54e3  MOV dword ptr [EBP + -0x4],EAX
007e54e6  JMP 0x007e4eaf
007e54eb  MOV ECX,dword ptr [EBP + 0xc]
007e54ee  MOV EDX,dword ptr [EBP + -0x4]
007e54f1  MOV dword ptr [ECX],EDX
007e54f3  CMP dword ptr [EBP + -0x14],0x0
007e54f7  JZ 0x007e5636
007e54fd  CMP dword ptr [EBP + -0x20],0x0
007e5501  JNZ 0x007e5636
007e5507  CMP dword ptr [EBP + -0x34],0x0
007e550b  JNZ 0x007e5636
007e5511  CMP dword ptr [EBP + -0x2c],0x18
007e5515  JBE 0x007e5542
007e5517  MOVSX EAX,byte ptr [EBP + -0x41]
007e551b  CMP EAX,0x5
007e551e  JL 0x007e5529
007e5520  MOV CL,byte ptr [EBP + -0x41]
007e5523  ADD CL,0x1
007e5526  MOV byte ptr [EBP + -0x41],CL
007e5529  MOV dword ptr [EBP + -0x2c],0x18
007e5530  MOV EDX,dword ptr [EBP + -0x64]
007e5533  SUB EDX,0x1
007e5536  MOV dword ptr [EBP + -0x64],EDX
007e5539  MOV EAX,dword ptr [EBP + -0x10]
007e553c  ADD EAX,0x1
007e553f  MOV dword ptr [EBP + -0x10],EAX
007e5542  CMP dword ptr [EBP + -0x2c],0x0
007e5546  JBE 0x007e561d
007e554c  MOV ECX,dword ptr [EBP + -0x64]
007e554f  SUB ECX,0x1
007e5552  MOV dword ptr [EBP + -0x64],ECX
007e5555  JMP 0x007e5560
007e5557  MOV EDX,dword ptr [EBP + -0x64]
007e555a  SUB EDX,0x1
007e555d  MOV dword ptr [EBP + -0x64],EDX
007e5560  MOV EAX,dword ptr [EBP + -0x64]
007e5563  MOVSX ECX,byte ptr [EAX]
007e5566  TEST ECX,ECX
007e5568  JNZ 0x007e557e
007e556a  MOV EDX,dword ptr [EBP + -0x2c]
007e556d  SUB EDX,0x1
007e5570  MOV dword ptr [EBP + -0x2c],EDX
007e5573  MOV EAX,dword ptr [EBP + -0x10]
007e5576  ADD EAX,0x1
007e5579  MOV dword ptr [EBP + -0x10],EAX
007e557c  JMP 0x007e5557
007e557e  LEA ECX,[EBP + -0x7c]
007e5581  PUSH ECX
007e5582  MOV EDX,dword ptr [EBP + -0x2c]
007e5585  PUSH EDX
007e5586  LEA EAX,[EBP + -0x58]
007e5589  PUSH EAX
007e558a  CALL 0x007e5d50
007e558f  ADD ESP,0xc
007e5592  CMP dword ptr [EBP + -0x38],0x0
007e5596  JGE 0x007e55a0
007e5598  MOV ECX,dword ptr [EBP + -0x8]
007e559b  NEG ECX
007e559d  MOV dword ptr [EBP + -0x8],ECX
007e55a0  MOV EDX,dword ptr [EBP + -0x8]
007e55a3  ADD EDX,dword ptr [EBP + -0x10]
007e55a6  MOV dword ptr [EBP + -0x8],EDX
007e55a9  CMP dword ptr [EBP + -0x30],0x0
007e55ad  JNZ 0x007e55b8
007e55af  MOV EAX,dword ptr [EBP + -0x8]
007e55b2  ADD EAX,dword ptr [EBP + 0x18]
007e55b5  MOV dword ptr [EBP + -0x8],EAX
007e55b8  CMP dword ptr [EBP + -0x70],0x0
007e55bc  JNZ 0x007e55c7
007e55be  MOV ECX,dword ptr [EBP + -0x8]
007e55c1  SUB ECX,dword ptr [EBP + 0x1c]
007e55c4  MOV dword ptr [EBP + -0x8],ECX
007e55c7  CMP dword ptr [EBP + -0x8],0x1450
007e55ce  JLE 0x007e55d9
007e55d0  MOV dword ptr [EBP + -0x20],0x1
007e55d7  JMP 0x007e561b
007e55d9  CMP dword ptr [EBP + -0x8],0xffffebb0
007e55e0  JGE 0x007e55eb
007e55e2  MOV dword ptr [EBP + -0x34],0x1
007e55e9  JMP 0x007e561b
007e55eb  MOV EDX,dword ptr [EBP + 0x14]
007e55ee  PUSH EDX
007e55ef  MOV EAX,dword ptr [EBP + -0x8]
007e55f2  PUSH EAX
007e55f3  LEA ECX,[EBP + -0x7c]
007e55f6  PUSH ECX
007e55f7  CALL 0x007e6e60
007e55fc  ADD ESP,0xc
007e55ff  MOV DX,word ptr [EBP + -0x7c]
007e5603  MOV word ptr [EBP + -0x1c],DX
007e5607  MOV EAX,dword ptr [EBP + -0x7a]
007e560a  MOV dword ptr [EBP + -0xc],EAX
007e560d  MOV ECX,dword ptr [EBP + -0x76]
007e5610  MOV dword ptr [EBP + -0x28],ECX
007e5613  MOV DX,word ptr [EBP + -0x72]
007e5617  MOV word ptr [EBP + -0x18],DX
007e561b  JMP 0x007e5636
007e561d  MOV word ptr [EBP + -0x1c],0x0
007e5623  MOV word ptr [EBP + -0x18],0x0
007e5629  MOVZX EAX,word ptr [EBP + -0x18]
007e562d  MOV dword ptr [EBP + -0x28],EAX
007e5630  MOV ECX,dword ptr [EBP + -0x28]
007e5633  MOV dword ptr [EBP + -0xc],ECX
007e5636  CMP dword ptr [EBP + -0x14],0x0
007e563a  JNZ 0x007e5660
007e563c  MOV word ptr [EBP + -0x1c],0x0
007e5642  MOV word ptr [EBP + -0x18],0x0
007e5648  MOVZX EDX,word ptr [EBP + -0x18]
007e564c  MOV dword ptr [EBP + -0x28],EDX
007e564f  MOV EAX,dword ptr [EBP + -0x28]
007e5652  MOV dword ptr [EBP + -0xc],EAX
007e5655  MOV ECX,dword ptr [EBP + -0x24]
007e5658  OR ECX,0x4
007e565b  MOV dword ptr [EBP + -0x24],ECX
007e565e  JMP 0x007e56b3
007e5660  CMP dword ptr [EBP + -0x20],0x0
007e5664  JZ 0x007e568b
007e5666  MOV word ptr [EBP + -0x18],0x7fff
007e566c  MOV dword ptr [EBP + -0x28],0x80000000
007e5673  MOV dword ptr [EBP + -0xc],0x0
007e567a  MOV word ptr [EBP + -0x1c],0x0
007e5680  MOV EDX,dword ptr [EBP + -0x24]
007e5683  OR EDX,0x2
007e5686  MOV dword ptr [EBP + -0x24],EDX
007e5689  JMP 0x007e56b3
007e568b  CMP dword ptr [EBP + -0x34],0x0
007e568f  JZ 0x007e56b3
007e5691  MOV word ptr [EBP + -0x1c],0x0
007e5697  MOV word ptr [EBP + -0x18],0x0
007e569d  MOVZX EAX,word ptr [EBP + -0x18]
007e56a1  MOV dword ptr [EBP + -0x28],EAX
007e56a4  MOV ECX,dword ptr [EBP + -0x28]
007e56a7  MOV dword ptr [EBP + -0xc],ECX
007e56aa  MOV EDX,dword ptr [EBP + -0x24]
007e56ad  OR EDX,0x1
007e56b0  MOV dword ptr [EBP + -0x24],EDX
007e56b3  MOV EAX,dword ptr [EBP + 0x8]
007e56b6  MOV CX,word ptr [EBP + -0x1c]
007e56ba  MOV word ptr [EAX],CX
007e56bd  MOV EDX,dword ptr [EBP + 0x8]
007e56c0  MOV EAX,dword ptr [EBP + -0xc]
007e56c3  MOV dword ptr [EDX + 0x2],EAX
007e56c6  MOV ECX,dword ptr [EBP + 0x8]
007e56c9  MOV EDX,dword ptr [EBP + -0x28]
007e56cc  MOV dword ptr [ECX + 0x6],EDX
007e56cf  MOVZX EAX,word ptr [EBP + -0x18]
007e56d3  MOVZX ECX,word ptr [EBP + -0x60]
007e56d7  OR EAX,ECX
007e56d9  MOV EDX,dword ptr [EBP + 0x8]
007e56dc  MOV word ptr [EDX + 0xa],AX
007e56e0  MOV EAX,dword ptr [EBP + -0x24]
007e56e3  MOV ECX,dword ptr [EBP + -0x3c]
007e56e6  CALL 0x007d6cb0
007e56eb  MOV ESP,EBP
007e56ed  POP EBP
007e56ee  RET
