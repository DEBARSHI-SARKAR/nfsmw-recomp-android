00583e20  PUSH EBP
00583e21  MOV EBP,ESP
00583e23  AND ESP,0xfffffff0
00583e26  SUB ESP,0xd4
00583e2c  MOV EDX,dword ptr [EBP + 0x20]
00583e2f  MOV ECX,dword ptr [EBP + 0x8]
00583e32  PUSH EBX
00583e33  MOV EBX,dword ptr [EBP + 0x18]
00583e36  DEC EDX
00583e37  PUSH ESI
00583e38  MOV ESI,dword ptr [EBP + 0x1c]
00583e3b  PUSH EDI
00583e3c  MOV EDI,dword ptr [EBP + 0x14]
00583e3f  MOV dword ptr [ESP + 0x34],EDX
00583e43  SHL EDX,0x4
00583e46  FLD float ptr [EDX + EDI*0x1]
00583e49  FCOMP float ptr [EBP + 0x24]
00583e4c  FNSTSW AX
00583e4e  TEST AH,0x41
00583e51  MOV EAX,dword ptr [EBP + 0x10]
00583e54  JP 0x00583eb4
00583e56  FLD float ptr [EDX + EDI*0x1 + 0x4]
00583e5a  MOV EAX,dword ptr [EDX + EDI*0x1]
00583e5d  FLD float ptr [EDX + EDI*0x1 + 0x8]
00583e61  MOV dword ptr [ECX],EAX
00583e63  MOV EAX,dword ptr [ESP + 0x34]
00583e67  FXCH
00583e69  FSTP float ptr [ECX + 0x4]
00583e6c  MOV dword ptr [ESP + 0x1c],0x1
00583e74  MOV byte ptr [ESP + 0x1b],0x1
00583e79  FSTP float ptr [ECX + 0x8]
00583e7c  MOV ECX,dword ptr [EBX + EAX*0x8]
00583e7f  FLD float ptr [EBX + EAX*0x8 + 0x4]
00583e83  MOV EAX,dword ptr [EBP + 0xc]
00583e86  FSTP float ptr [EAX + 0x4]
00583e89  MOV dword ptr [EAX],ECX
00583e8b  FLD float ptr [EDX + ESI*0x1 + 0x4]
00583e8f  MOV ECX,dword ptr [EDX + ESI*0x1]
00583e92  FLD float ptr [EDX + ESI*0x1 + 0x8]
00583e96  MOV EAX,dword ptr [EBP + 0x10]
00583e99  FLD float ptr [EDX + ESI*0x1 + 0xc]
00583e9d  MOV dword ptr [EAX],ECX
00583e9f  FSTP float ptr [ESP + 0x28]
00583ea3  MOV ECX,dword ptr [ESP + 0x28]
00583ea7  FXCH
00583ea9  FSTP float ptr [EAX + 0x4]
00583eac  MOV dword ptr [EAX + 0xc],ECX
00583eaf  FSTP float ptr [EAX + 0x8]
00583eb2  JMP 0x00583ec1
00583eb4  MOV dword ptr [ESP + 0x1c],0x0
00583ebc  MOV byte ptr [ESP + 0x1b],0x0
00583ec1  MOV ECX,dword ptr [EBP + 0x20]
00583ec4  TEST ECX,ECX
00583ec6  MOV dword ptr [ESP + 0x2c],0x0
00583ece  JBE 0x005842fe
00583ed4  MOV ECX,dword ptr [ESP + 0x34]
00583ed8  SHL ECX,0x3
00583edb  MOV dword ptr [ESP + 0x30],ECX
00583edf  MOV ECX,dword ptr [ESP + 0x1c]
00583ee3  SHL ECX,0x4
00583ee6  ADD EAX,ECX
00583ee8  MOV dword ptr [ESP + 0x28],EAX
00583eec  MOV EAX,dword ptr [EBP + 0x8]
00583eef  ADD ECX,EAX
00583ef1  LEA EAX,[ESI + 0xc]
00583ef4  MOV dword ptr [ESP + 0x24],EAX
00583ef8  LEA EAX,[EDI + 0x8]
00583efb  MOV dword ptr [ESP + 0x20],EAX
00583eff  MOV EAX,ESI
00583f01  SUB EAX,EDI
00583f03  MOV dword ptr [ESP + 0x34],EAX
00583f07  MOV EAX,0xfffffff8
00583f0c  SUB EAX,EDI
00583f0e  MOV dword ptr [ESP + 0x48],EAX
00583f12  JMP 0x00583f20
00583f14  MOV EBX,dword ptr [EBP + 0x18]
00583f17  JMP 0x00583f20
00583f20  MOV EAX,dword ptr [ESP + 0x20]
00583f24  FLD float ptr [EAX + -0x8]
00583f27  FCOMP float ptr [EBP + 0x24]
00583f2a  FNSTSW AX
00583f2c  MOV AL,byte ptr [ESP + 0x1b]
00583f30  TEST AH,0x41
00583f33  JP 0x0058413a
00583f39  TEST AL,AL
00583f3b  MOV EAX,dword ptr [ESP + 0x20]
00583f3f  JNZ 0x005840c7
00583f45  FLD float ptr [EAX + -0x8]
00583f48  FSUB float ptr [EDX + EDI*0x1]
00583f4b  FLD float ptr [EAX + -0x4]
00583f4e  FSUB float ptr [EDX + EDI*0x1 + 0x4]
00583f52  FLD float ptr [EAX]
00583f54  FSUB float ptr [EDX + EDI*0x1 + 0x8]
00583f58  FSTP float ptr [ESP + 0xc8]
00583f5f  MOV EAX,dword ptr [ESP + 0xc8]
00583f66  MOV dword ptr [ECX + 0x8],EAX
00583f69  FXCH
00583f6b  FSTP float ptr [ECX]
00583f6d  MOV EAX,dword ptr [ESP + 0x2c]
00583f71  FSTP float ptr [ECX + 0x4]
00583f74  FLD float ptr [EBP + 0x24]
00583f77  FSUB float ptr [EDX + EDI*0x1]
00583f7a  FDIV float ptr [ECX]
00583f7c  FLD ST0
00583f7e  FMUL float ptr [ECX]
00583f80  FSTP float ptr [ECX]
00583f82  FLD ST0
00583f84  FMUL float ptr [ECX + 0x4]
00583f87  FSTP float ptr [ECX + 0x4]
00583f8a  FLD ST0
00583f8c  FMUL float ptr [ECX + 0x8]
00583f8f  FSTP float ptr [ECX + 0x8]
00583f92  FLD float ptr [EDX + EDI*0x1 + 0x4]
00583f96  FLD float ptr [EDX + EDI*0x1 + 0x8]
00583f9a  FLD float ptr [ECX]
00583f9c  FADD float ptr [EDX + EDI*0x1]
00583f9f  FSTP float ptr [ECX]
00583fa1  FXCH
00583fa3  FADD float ptr [ECX + 0x4]
00583fa6  FSTP float ptr [ECX + 0x4]
00583fa9  FADD float ptr [ECX + 0x8]
00583fac  FSTP float ptr [ECX + 0x8]
00583faf  FLD float ptr [EBX + EAX*0x8]
00583fb2  MOV EAX,dword ptr [ESP + 0x30]
00583fb6  FSUB float ptr [EAX + EBX*0x1]
00583fb9  MOV EAX,dword ptr [ESP + 0x2c]
00583fbd  FLD float ptr [EBX + EAX*0x8 + 0x4]
00583fc1  MOV EAX,dword ptr [ESP + 0x30]
00583fc5  FSUB float ptr [EAX + EBX*0x1 + 0x4]
00583fc9  FXCH
00583fcb  FMUL ST2
00583fcd  FSTP float ptr [ESP + 0x38]
00583fd1  MOV EAX,dword ptr [ESP + 0x38]
00583fd5  MOV dword ptr [ESP + 0x40],EAX
00583fd9  FMUL ST1
00583fdb  FSTP float ptr [ESP + 0x3c]
00583fdf  MOV EAX,dword ptr [ESP + 0x3c]
00583fe3  FLD float ptr [ESP + 0x40]
00583fe7  MOV dword ptr [ESP + 0x44],EAX
00583feb  MOV EAX,dword ptr [ESP + 0x30]
00583fef  FADD float ptr [EAX + EBX*0x1]
00583ff2  FLD float ptr [ESP + 0x44]
00583ff6  FADD float ptr [EAX + EBX*0x1 + 0x4]
00583ffa  MOV EBX,dword ptr [EBP + 0xc]
00583ffd  MOV EAX,dword ptr [ESP + 0x1c]
00584001  FXCH
00584003  FSTP float ptr [EBX + EAX*0x8]
00584006  FSTP float ptr [EBX + EAX*0x8 + 0x4]
0058400a  MOV EAX,dword ptr [ESP + 0x24]
0058400e  FLD float ptr [EAX + -0xc]
00584011  MOV EBX,dword ptr [ESP + 0x34]
00584015  FSUB float ptr [EDX + ESI*0x1]
00584018  FLD float ptr [EAX + -0x8]
0058401b  MOV EAX,dword ptr [ESP + 0x20]
0058401f  FSUB float ptr [EDX + ESI*0x1 + 0x4]
00584023  FLD float ptr [EBX + EAX*0x1]
00584026  MOV EBX,dword ptr [ESP + 0x24]
0058402a  FSUB float ptr [EDX + ESI*0x1 + 0x8]
0058402e  FSTP float ptr [ESP + 0xb8]
00584035  FLD float ptr [EBX]
00584037  FSUB float ptr [EDX + ESI*0x1 + 0xc]
0058403b  FSTP float ptr [ESP + 0xbc]
00584042  FXCH
00584044  FMUL ST2
00584046  FSTP float ptr [ESP + 0x70]
0058404a  FMUL ST1
0058404c  FSTP float ptr [ESP + 0x74]
00584050  FLD float ptr [ESP + 0xb8]
00584057  ADD ECX,0x10
0058405a  FMUL ST1
0058405c  MOV byte ptr [ESP + 0x1b],0x1
00584061  FSTP float ptr [ESP + 0x78]
00584065  FMUL float ptr [ESP + 0xbc]
0058406c  FLD float ptr [ESP + 0x70]
00584070  FADD float ptr [EDX + ESI*0x1]
00584073  FLD float ptr [ESP + 0x74]
00584077  FADD float ptr [EDX + ESI*0x1 + 0x4]
0058407b  FLD float ptr [ESP + 0x78]
0058407f  FADD float ptr [EDX + ESI*0x1 + 0x8]
00584083  FSTP float ptr [ESP + 0xa8]
0058408a  MOV EBX,dword ptr [ESP + 0xa8]
00584091  FXCH ST2
00584093  FADD float ptr [EDX + ESI*0x1 + 0xc]
00584097  MOV EDX,dword ptr [ESP + 0x28]
0058409b  MOV dword ptr [EDX + 0x8],EBX
0058409e  FSTP float ptr [ESP + 0xac]
005840a5  MOV EBX,dword ptr [ESP + 0xac]
005840ac  MOV dword ptr [EDX + 0xc],EBX
005840af  MOV EBX,dword ptr [ESP + 0x1c]
005840b3  FSTP float ptr [EDX]
005840b5  INC EBX
005840b6  FSTP float ptr [EDX + 0x4]
005840b9  ADD EDX,0x10
005840bc  MOV dword ptr [ESP + 0x1c],EBX
005840c0  MOV EBX,dword ptr [EBP + 0x18]
005840c3  MOV dword ptr [ESP + 0x28],EDX
005840c7  FLD float ptr [EAX + -0x4]
005840ca  MOV EDX,dword ptr [EAX + -0x8]
005840cd  FLD float ptr [EAX]
005840cf  MOV EAX,dword ptr [ESP + 0x2c]
005840d3  MOV dword ptr [ECX],EDX
005840d5  FXCH
005840d7  MOV EDX,dword ptr [EBP + 0xc]
005840da  FSTP float ptr [ECX + 0x4]
005840dd  ADD ECX,0x10
005840e0  FSTP float ptr [ECX + -0x8]
005840e3  FLD float ptr [EBX + EAX*0x8 + 0x4]
005840e7  MOV EBX,dword ptr [EBX + EAX*0x8]
005840ea  MOV EAX,dword ptr [ESP + 0x1c]
005840ee  MOV dword ptr [EDX + EAX*0x8],EBX
005840f1  FSTP float ptr [EDX + EAX*0x8 + 0x4]
005840f5  MOV EDX,dword ptr [ESP + 0x24]
005840f9  FLD float ptr [EDX + -0x8]
005840fc  MOV EDX,dword ptr [ESP + 0x34]
00584100  MOV EBX,dword ptr [ESP + 0x20]
00584104  FLD float ptr [EDX + EBX*0x1]
00584107  MOV EDX,dword ptr [ESP + 0x24]
0058410b  MOV EBX,dword ptr [EDX]
0058410d  FXCH
0058410f  MOV dword ptr [ESP + 0x54],EBX
00584113  MOV EBX,dword ptr [EDX + -0xc]
00584116  MOV EDX,dword ptr [ESP + 0x28]
0058411a  FSTP float ptr [EDX + 0x4]
0058411d  MOV dword ptr [EDX],EBX
0058411f  MOV EBX,dword ptr [ESP + 0x54]
00584123  INC EAX
00584124  FSTP float ptr [EDX + 0x8]
00584127  MOV dword ptr [EDX + 0xc],EBX
0058412a  ADD EDX,0x10
0058412d  MOV dword ptr [ESP + 0x1c],EAX
00584131  MOV dword ptr [ESP + 0x28],EDX
00584135  JMP 0x005842c5
0058413a  TEST AL,AL
0058413c  JZ 0x005842c5
00584142  MOV EAX,dword ptr [ESP + 0x20]
00584146  FLD float ptr [EAX + -0x8]
00584149  FSUB float ptr [EDX + EDI*0x1]
0058414c  FLD float ptr [EAX + -0x4]
0058414f  FSUB float ptr [EDX + EDI*0x1 + 0x4]
00584153  FLD float ptr [EAX]
00584155  FSUB float ptr [EDX + EDI*0x1 + 0x8]
00584159  FSTP float ptr [ESP + 0xd8]
00584160  MOV EAX,dword ptr [ESP + 0xd8]
00584167  MOV dword ptr [ECX + 0x8],EAX
0058416a  FXCH
0058416c  FSTP float ptr [ECX]
0058416e  MOV EAX,dword ptr [ESP + 0x2c]
00584172  FSTP float ptr [ECX + 0x4]
00584175  FLD float ptr [EBP + 0x24]
00584178  FSUB float ptr [EDX + EDI*0x1]
0058417b  FDIV float ptr [ECX]
0058417d  FLD ST0
0058417f  FMUL float ptr [ECX]
00584181  FSTP float ptr [ECX]
00584183  FLD ST0
00584185  FMUL float ptr [ECX + 0x4]
00584188  FSTP float ptr [ECX + 0x4]
0058418b  FLD ST0
0058418d  FMUL float ptr [ECX + 0x8]
00584190  FSTP float ptr [ECX + 0x8]
00584193  FLD float ptr [EDX + EDI*0x1 + 0x4]
00584197  FLD float ptr [EDX + EDI*0x1 + 0x8]
0058419b  FLD float ptr [ECX]
0058419d  FADD float ptr [EDX + EDI*0x1]
005841a0  FSTP float ptr [ECX]
005841a2  FXCH
005841a4  FADD float ptr [ECX + 0x4]
005841a7  FSTP float ptr [ECX + 0x4]
005841aa  FADD float ptr [ECX + 0x8]
005841ad  FSTP float ptr [ECX + 0x8]
005841b0  FLD float ptr [EBX + EAX*0x8]
005841b3  MOV EAX,dword ptr [ESP + 0x30]
005841b7  FSUB float ptr [EAX + EBX*0x1]
005841ba  MOV EAX,dword ptr [ESP + 0x2c]
005841be  FLD float ptr [EBX + EAX*0x8 + 0x4]
005841c2  MOV EAX,dword ptr [ESP + 0x30]
005841c6  FSUB float ptr [EAX + EBX*0x1 + 0x4]
005841ca  FXCH
005841cc  FMUL ST2
005841ce  FSTP float ptr [ESP + 0x4c]
005841d2  MOV EAX,dword ptr [ESP + 0x4c]
005841d6  MOV dword ptr [ESP + 0x58],EAX
005841da  FMUL ST1
005841dc  FSTP float ptr [ESP + 0x50]
005841e0  MOV EAX,dword ptr [ESP + 0x50]
005841e4  FLD float ptr [ESP + 0x58]
005841e8  MOV dword ptr [ESP + 0x5c],EAX
005841ec  MOV EAX,dword ptr [ESP + 0x30]
005841f0  FADD float ptr [EAX + EBX*0x1]
005841f3  FLD float ptr [ESP + 0x5c]
005841f7  FADD float ptr [EAX + EBX*0x1 + 0x4]
005841fb  MOV EBX,dword ptr [EBP + 0xc]
005841fe  MOV EAX,dword ptr [ESP + 0x1c]
00584202  FXCH
00584204  FSTP float ptr [EBX + EAX*0x8]
00584207  FSTP float ptr [EBX + EAX*0x8 + 0x4]
0058420b  MOV EAX,dword ptr [ESP + 0x24]
0058420f  FLD float ptr [EAX + -0xc]
00584212  MOV EBX,dword ptr [ESP + 0x20]
00584216  FSUB float ptr [EDX + ESI*0x1]
00584219  FLD float ptr [EAX + -0x8]
0058421c  MOV EAX,dword ptr [ESP + 0x34]
00584220  FSUB float ptr [EDX + ESI*0x1 + 0x4]
00584224  FLD float ptr [EAX + EBX*0x1]
00584227  MOV EAX,dword ptr [ESP + 0x24]
0058422b  FSUB float ptr [EDX + ESI*0x1 + 0x8]
0058422f  FSTP float ptr [ESP + 0x88]
00584236  FLD float ptr [EAX]
00584238  FSUB float ptr [EDX + ESI*0x1 + 0xc]
0058423c  FSTP float ptr [ESP + 0x8c]
00584243  FXCH
00584245  FMUL ST2
00584247  FSTP float ptr [ESP + 0x60]
0058424b  FMUL ST1
0058424d  FSTP float ptr [ESP + 0x64]
00584251  MOV EAX,dword ptr [ESP + 0x28]
00584255  FLD float ptr [ESP + 0x88]
0058425c  ADD ECX,0x10
0058425f  FMUL ST1
00584261  MOV byte ptr [ESP + 0x1b],0x0
00584266  FSTP float ptr [ESP + 0x68]
0058426a  FMUL float ptr [ESP + 0x8c]
00584271  FLD float ptr [ESP + 0x60]
00584275  FADD float ptr [EDX + ESI*0x1]
00584278  FLD float ptr [ESP + 0x64]
0058427c  FADD float ptr [EDX + ESI*0x1 + 0x4]
00584280  FLD float ptr [ESP + 0x68]
00584284  FADD float ptr [EDX + ESI*0x1 + 0x8]
00584288  FSTP float ptr [ESP + 0x98]
0058428f  FXCH ST2
00584291  FADD float ptr [EDX + ESI*0x1 + 0xc]
00584295  MOV EDX,dword ptr [ESP + 0x98]
0058429c  MOV dword ptr [EAX + 0x8],EDX
0058429f  FSTP float ptr [ESP + 0x9c]
005842a6  MOV EDX,dword ptr [ESP + 0x9c]
005842ad  MOV dword ptr [EAX + 0xc],EDX
005842b0  MOV EDX,dword ptr [ESP + 0x1c]
005842b4  FSTP float ptr [EAX]
005842b6  INC EDX
005842b7  FSTP float ptr [EAX + 0x4]
005842ba  ADD EAX,0x10
005842bd  MOV dword ptr [ESP + 0x1c],EDX
005842c1  MOV dword ptr [ESP + 0x28],EAX
005842c5  MOV EAX,dword ptr [ESP + 0x2c]
005842c9  MOV EBX,dword ptr [ESP + 0x20]
005842cd  LEA EDX,[EAX*0x8 + 0x0]
005842d4  MOV dword ptr [ESP + 0x30],EDX
005842d8  MOV EDX,dword ptr [ESP + 0x48]
005842dc  ADD EDX,EBX
005842de  ADD EBX,0x10
005842e1  MOV dword ptr [ESP + 0x20],EBX
005842e5  MOV EBX,dword ptr [ESP + 0x24]
005842e9  ADD EBX,0x10
005842ec  INC EAX
005842ed  MOV dword ptr [ESP + 0x24],EBX
005842f1  CMP EAX,dword ptr [EBP + 0x20]
005842f4  MOV dword ptr [ESP + 0x2c],EAX
005842f8  JC 0x00583f14
005842fe  MOV EAX,dword ptr [ESP + 0x1c]
00584302  POP EDI
00584303  POP ESI
00584304  POP EBX
00584305  MOV ESP,EBP
00584307  POP EBP
00584308  RET
