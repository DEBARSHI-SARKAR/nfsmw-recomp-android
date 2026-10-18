00582d20  PUSH EBP
00582d21  MOV EBP,ESP
00582d23  AND ESP,0xfffffff0
00582d26  SUB ESP,0x124
00582d2c  MOV EAX,dword ptr [EBP + 0x1c]
00582d2f  MOV ECX,dword ptr [EBP + 0x20]
00582d32  MOV EDX,dword ptr [EBP + 0x18]
00582d35  MOV dword ptr [ESP + 0x30],EAX
00582d39  PUSH EBX
00582d3a  MOV EBX,dword ptr [EBP + 0x10]
00582d3d  PUSH ESI
00582d3e  MOV ESI,dword ptr [EBP + 0xc]
00582d41  MOV EAX,ESI
00582d43  NEG EAX
00582d45  MOV dword ptr [ESP + 0x60],EAX
00582d49  MOV EAX,ECX
00582d4b  NEG EAX
00582d4d  MOV dword ptr [ESP + 0x80],EAX
00582d54  MOV EAX,dword ptr [EBP + 0x1c]
00582d57  NEG EAX
00582d59  MOV dword ptr [ESP + 0x70],EAX
00582d5d  PUSH EDI
00582d5e  MOV EDI,dword ptr [EBP + 0x14]
00582d61  MOV EAX,EDI
00582d63  NEG EAX
00582d65  MOV dword ptr [ESP + 0x5c],EDX
00582d69  MOV dword ptr [ESP + 0x78],EAX
00582d6d  NEG EDX
00582d6f  MOV EAX,EBX
00582d71  NEG EAX
00582d73  MOV dword ptr [ESP + 0x7c],EDX
00582d77  MOV EDX,dword ptr [EBP + 0x8]
00582d7a  MOV dword ptr [ESP + 0x88],EAX
00582d81  LEA EAX,[EDX + 0x40]
00582d84  ADD EDX,0x8
00582d87  MOV dword ptr [ESP + 0x70],ECX
00582d8b  MOV dword ptr [ESP + 0x58],EBX
00582d8f  MOV dword ptr [ESP + 0x34],0x4
00582d97  MOV dword ptr [ESP + 0x80],0x0
00582da2  MOV dword ptr [ESP + 0x6c],EAX
00582da6  MOV dword ptr [ESP + 0x68],EDX
00582daa  JMP 0x00582db0
00582dac  MOV EDX,dword ptr [ESP + 0x68]
00582db0  MOV EAX,dword ptr [ESP + 0x34]
00582db4  TEST EAX,EAX
00582db6  JZ 0x0058342d
00582dbc  MOV EAX,dword ptr [EDX + -0x8]
00582dbf  MOV dword ptr [ESP + 0x40],EAX
00582dc3  MOV EAX,dword ptr [EDX + -0x4]
00582dc6  MOV EDX,dword ptr [EDX]
00582dc8  MOV dword ptr [ESP + 0x44],EAX
00582dcc  MOV EAX,dword ptr [ESP + 0x6c]
00582dd0  MOV dword ptr [ESP + 0x48],EDX
00582dd4  FLD float ptr [ESP + 0x48]
00582dd8  MOV EDX,dword ptr [EAX]
00582dda  MOV dword ptr [ESP + 0x60],EDX
00582dde  MOV EDX,dword ptr [ESP + 0x34]
00582de2  DEC EDX
00582de3  MOV dword ptr [ESP + 0x38],EDX
00582de7  SHL EDX,0x4
00582dea  FMUL float ptr [EDX + ESI*0x1 + 0x8]
00582dee  FLD float ptr [ESP + 0x44]
00582df2  FMUL float ptr [EDX + ESI*0x1 + 0x4]
00582df6  FADDP
00582df8  FLD float ptr [ESP + 0x40]
00582dfc  FMUL float ptr [EDX + ESI*0x1]
00582dff  FADDP
00582e01  FADD float ptr [ESP + 0x60]
00582e05  FCOMP float ptr [0x00891068]
00582e0b  FNSTSW AX
00582e0d  TEST AH,0x41
00582e10  JNZ 0x00582e76
00582e12  FLD float ptr [EDX + ESI*0x1 + 0x4]
00582e16  MOV ECX,dword ptr [EDX + ESI*0x1]
00582e19  FLD float ptr [EDX + ESI*0x1 + 0x8]
00582e1d  MOV EAX,dword ptr [ESP + 0x5c]
00582e21  MOV dword ptr [EAX],ECX
00582e23  FXCH
00582e25  FSTP float ptr [EAX + 0x4]
00582e28  MOV dword ptr [ESP + 0x1c],0x1
00582e30  MOV byte ptr [ESP + 0x1b],0x1
00582e35  FSTP float ptr [EAX + 0x8]
00582e38  MOV EAX,dword ptr [ESP + 0x38]
00582e3c  MOV ECX,dword ptr [EBX + EAX*0x8]
00582e3f  FLD float ptr [EBX + EAX*0x8 + 0x4]
00582e43  MOV EAX,dword ptr [ESP + 0x3c]
00582e47  FSTP float ptr [EAX + 0x4]
00582e4a  MOV dword ptr [EAX],ECX
00582e4c  FLD float ptr [EDX + EDI*0x1 + 0x4]
00582e50  MOV EAX,dword ptr [EDX + EDI*0x1]
00582e53  FLD float ptr [EDX + EDI*0x1 + 0x8]
00582e57  MOV ECX,dword ptr [ESP + 0x70]
00582e5b  FLD float ptr [EDX + EDI*0x1 + 0xc]
00582e5f  MOV dword ptr [ECX],EAX
00582e61  FSTP float ptr [ESP + 0x28]
00582e65  MOV EAX,dword ptr [ESP + 0x28]
00582e69  FXCH
00582e6b  FSTP float ptr [ECX + 0x4]
00582e6e  MOV dword ptr [ECX + 0xc],EAX
00582e71  FSTP float ptr [ECX + 0x8]
00582e74  JMP 0x00582e83
00582e76  MOV dword ptr [ESP + 0x1c],0x0
00582e7e  MOV byte ptr [ESP + 0x1b],0x0
00582e83  MOV EAX,dword ptr [ESP + 0x34]
00582e87  TEST EAX,EAX
00582e89  MOV dword ptr [ESP + 0x2c],0x0
00582e91  JBE 0x00583395
00582e97  MOV EAX,dword ptr [ESP + 0x38]
00582e9b  SHL EAX,0x3
00582e9e  MOV dword ptr [ESP + 0x30],EAX
00582ea2  MOV EAX,dword ptr [ESP + 0x1c]
00582ea6  SHL EAX,0x4
00582ea9  ADD ECX,EAX
00582eab  MOV dword ptr [ESP + 0x28],ECX
00582eaf  MOV ECX,dword ptr [ESP + 0x5c]
00582eb3  ADD ECX,EAX
00582eb5  LEA EAX,[EDI + 0xc]
00582eb8  MOV dword ptr [ESP + 0x24],EAX
00582ebc  LEA EAX,[ESI + 0x8]
00582ebf  MOV dword ptr [ESP + 0x20],EAX
00582ec3  MOV EAX,EDI
00582ec5  SUB EAX,ESI
00582ec7  MOV dword ptr [ESP + 0x38],EAX
00582ecb  JMP 0x00582ed0
00582ed0  MOV EAX,dword ptr [ESP + 0x20]
00582ed4  FLD float ptr [ESP + 0x44]
00582ed8  FMUL float ptr [EAX + -0x4]
00582edb  FLD float ptr [ESP + 0x48]
00582edf  FMUL float ptr [EAX]
00582ee1  FADDP
00582ee3  FLD float ptr [ESP + 0x40]
00582ee7  FMUL float ptr [EAX + -0x8]
00582eea  FADDP
00582eec  FADD float ptr [ESP + 0x60]
00582ef0  FCOMP float ptr [0x00891068]
00582ef6  FNSTSW AX
00582ef8  MOV AL,byte ptr [ESP + 0x1b]
00582efc  TEST AH,0x41
00582eff  JNZ 0x0058316c
00582f05  TEST AL,AL
00582f07  MOV EAX,dword ptr [ESP + 0x20]
00582f0b  JNZ 0x005830f2
00582f11  FLD float ptr [EAX + -0x8]
00582f14  FSUB float ptr [EDX + ESI*0x1]
00582f17  FLD float ptr [EAX + -0x4]
00582f1a  FSUB float ptr [EDX + ESI*0x1 + 0x4]
00582f1e  FLD float ptr [EAX]
00582f20  FSUB float ptr [EDX + ESI*0x1 + 0x8]
00582f24  FSTP float ptr [ESP + 0x118]
00582f2b  MOV EAX,dword ptr [ESP + 0x118]
00582f32  MOV dword ptr [ECX + 0x8],EAX
00582f35  FXCH
00582f37  FSTP float ptr [ECX]
00582f39  MOV EAX,dword ptr [ESP + 0x2c]
00582f3d  FSTP float ptr [ECX + 0x4]
00582f40  FLD float ptr [ESP + 0x48]
00582f44  FMUL float ptr [EDX + ESI*0x1 + 0x8]
00582f48  FLD float ptr [ESP + 0x44]
00582f4c  FMUL float ptr [EDX + ESI*0x1 + 0x4]
00582f50  FADDP
00582f52  FLD float ptr [ESP + 0x40]
00582f56  FMUL float ptr [EDX + ESI*0x1]
00582f59  FADDP
00582f5b  FADD float ptr [ESP + 0x60]
00582f5f  FLD float ptr [ESP + 0x48]
00582f63  FMUL float ptr [ECX + 0x8]
00582f66  FLD float ptr [ESP + 0x44]
00582f6a  FMUL float ptr [ECX + 0x4]
00582f6d  FADDP
00582f6f  FLD float ptr [ESP + 0x40]
00582f73  FMUL float ptr [ECX]
00582f75  FADDP
00582f77  FDIVP
00582f79  FCHS
00582f7b  FLD ST0
00582f7d  FMUL float ptr [ECX]
00582f7f  FSTP float ptr [ECX]
00582f81  FLD ST0
00582f83  FMUL float ptr [ECX + 0x4]
00582f86  FSTP float ptr [ECX + 0x4]
00582f89  FLD ST0
00582f8b  FMUL float ptr [ECX + 0x8]
00582f8e  FSTP float ptr [ECX + 0x8]
00582f91  FLD float ptr [EDX + ESI*0x1 + 0x4]
00582f95  FLD float ptr [EDX + ESI*0x1 + 0x8]
00582f99  FLD float ptr [ECX]
00582f9b  FADD float ptr [EDX + ESI*0x1]
00582f9e  FSTP float ptr [ECX]
00582fa0  FXCH
00582fa2  FADD float ptr [ECX + 0x4]
00582fa5  FSTP float ptr [ECX + 0x4]
00582fa8  FADD float ptr [ECX + 0x8]
00582fab  FSTP float ptr [ECX + 0x8]
00582fae  FLD float ptr [EBX + EAX*0x8]
00582fb1  MOV EAX,dword ptr [ESP + 0x30]
00582fb5  FSUB float ptr [EAX + EBX*0x1]
00582fb8  MOV EAX,dword ptr [ESP + 0x2c]
00582fbc  FLD float ptr [EBX + EAX*0x8 + 0x4]
00582fc0  MOV EAX,dword ptr [ESP + 0x30]
00582fc4  FSUB float ptr [EAX + EBX*0x1 + 0x4]
00582fc8  FXCH
00582fca  FMUL ST2
00582fcc  FSTP float ptr [ESP + 0xa8]
00582fd3  MOV EAX,dword ptr [ESP + 0xa8]
00582fda  MOV dword ptr [ESP + 0xa0],EAX
00582fe1  FMUL ST1
00582fe3  FSTP float ptr [ESP + 0xac]
00582fea  MOV EAX,dword ptr [ESP + 0xac]
00582ff1  FLD float ptr [ESP + 0xa0]
00582ff8  MOV dword ptr [ESP + 0xa4],EAX
00582fff  MOV EAX,dword ptr [ESP + 0x30]
00583003  FADD float ptr [EAX + EBX*0x1]
00583006  FLD float ptr [ESP + 0xa4]
0058300d  FADD float ptr [EAX + EBX*0x1 + 0x4]
00583011  MOV EAX,dword ptr [ESP + 0x3c]
00583015  MOV EBX,dword ptr [ESP + 0x1c]
00583019  FXCH
0058301b  FSTP float ptr [EAX + EBX*0x8]
0058301e  FSTP float ptr [EAX + EBX*0x8 + 0x4]
00583022  MOV EAX,dword ptr [ESP + 0x24]
00583026  FLD float ptr [EAX + -0xc]
00583029  MOV EBX,dword ptr [ESP + 0x38]
0058302d  FSUB float ptr [EDX + EDI*0x1]
00583030  ADD ECX,0x10
00583033  FLD float ptr [EAX + -0x8]
00583036  MOV EAX,dword ptr [ESP + 0x20]
0058303a  FSUB float ptr [EDX + EDI*0x1 + 0x4]
0058303e  MOV byte ptr [ESP + 0x1b],0x1
00583043  FLD float ptr [EBX + EAX*0x1]
00583046  MOV EBX,dword ptr [ESP + 0x24]
0058304a  FSUB float ptr [EDX + EDI*0x1 + 0x8]
0058304e  FSTP float ptr [ESP + 0x108]
00583055  FLD float ptr [EBX]
00583057  FSUB float ptr [EDX + EDI*0x1 + 0xc]
0058305b  FSTP float ptr [ESP + 0x10c]
00583062  FXCH
00583064  FMUL ST2
00583066  FSTP float ptr [ESP + 0xc0]
0058306d  FMUL ST1
0058306f  FSTP float ptr [ESP + 0xc4]
00583076  FLD float ptr [ESP + 0x108]
0058307d  FMUL ST1
0058307f  FSTP float ptr [ESP + 0xc8]
00583086  FMUL float ptr [ESP + 0x10c]
0058308d  FLD float ptr [ESP + 0xc0]
00583094  FADD float ptr [EDX + EDI*0x1]
00583097  FLD float ptr [ESP + 0xc4]
0058309e  FADD float ptr [EDX + EDI*0x1 + 0x4]
005830a2  FLD float ptr [ESP + 0xc8]
005830a9  FADD float ptr [EDX + EDI*0x1 + 0x8]
005830ad  FSTP float ptr [ESP + 0xf8]
005830b4  MOV EBX,dword ptr [ESP + 0xf8]
005830bb  FXCH ST2
005830bd  FADD float ptr [EDX + EDI*0x1 + 0xc]
005830c1  MOV EDX,dword ptr [ESP + 0x28]
005830c5  MOV dword ptr [EDX + 0x8],EBX
005830c8  FSTP float ptr [ESP + 0xfc]
005830cf  MOV EBX,dword ptr [ESP + 0xfc]
005830d6  MOV dword ptr [EDX + 0xc],EBX
005830d9  MOV EBX,dword ptr [ESP + 0x1c]
005830dd  FSTP float ptr [EDX]
005830df  INC EBX
005830e0  FSTP float ptr [EDX + 0x4]
005830e3  ADD EDX,0x10
005830e6  MOV dword ptr [ESP + 0x1c],EBX
005830ea  MOV EBX,dword ptr [ESP + 0x58]
005830ee  MOV dword ptr [ESP + 0x28],EDX
005830f2  FLD float ptr [EAX + -0x4]
005830f5  MOV EDX,dword ptr [EAX + -0x8]
005830f8  FLD float ptr [EAX]
005830fa  MOV EAX,dword ptr [ESP + 0x2c]
005830fe  MOV dword ptr [ECX],EDX
00583100  FXCH
00583102  MOV EDX,dword ptr [ESP + 0x3c]
00583106  FSTP float ptr [ECX + 0x4]
00583109  ADD ECX,0x10
0058310c  FSTP float ptr [ECX + -0x8]
0058310f  FLD float ptr [EBX + EAX*0x8 + 0x4]
00583113  MOV EBX,dword ptr [EBX + EAX*0x8]
00583116  MOV EAX,dword ptr [ESP + 0x1c]
0058311a  MOV dword ptr [EDX + EAX*0x8],EBX
0058311d  FSTP float ptr [EDX + EAX*0x8 + 0x4]
00583121  MOV EDX,dword ptr [ESP + 0x24]
00583125  FLD float ptr [EDX + -0x8]
00583128  MOV EDX,dword ptr [ESP + 0x38]
0058312c  MOV EBX,dword ptr [ESP + 0x20]
00583130  FLD float ptr [EDX + EBX*0x1]
00583133  MOV EDX,dword ptr [ESP + 0x24]
00583137  MOV EBX,dword ptr [EDX]
00583139  FXCH
0058313b  MOV dword ptr [ESP + 0x9c],EBX
00583142  MOV EBX,dword ptr [EDX + -0xc]
00583145  MOV EDX,dword ptr [ESP + 0x28]
00583149  FSTP float ptr [EDX + 0x4]
0058314c  MOV dword ptr [EDX],EBX
0058314e  MOV EBX,dword ptr [ESP + 0x9c]
00583155  INC EAX
00583156  FSTP float ptr [EDX + 0x8]
00583159  MOV dword ptr [EDX + 0xc],EBX
0058315c  ADD EDX,0x10
0058315f  MOV dword ptr [ESP + 0x1c],EAX
00583163  MOV dword ptr [ESP + 0x28],EDX
00583167  JMP 0x00583355
0058316c  TEST AL,AL
0058316e  JZ 0x00583355
00583174  MOV EAX,dword ptr [ESP + 0x20]
00583178  FLD float ptr [EAX + -0x8]
0058317b  FSUB float ptr [EDX + ESI*0x1]
0058317e  FLD float ptr [EAX + -0x4]
00583181  FSUB float ptr [EDX + ESI*0x1 + 0x4]
00583185  FLD float ptr [EAX]
00583187  FSUB float ptr [EDX + ESI*0x1 + 0x8]
0058318b  FSTP float ptr [ESP + 0x128]
00583192  MOV EAX,dword ptr [ESP + 0x128]
00583199  MOV dword ptr [ECX + 0x8],EAX
0058319c  FXCH
0058319e  FSTP float ptr [ECX]
005831a0  MOV EAX,dword ptr [ESP + 0x2c]
005831a4  FSTP float ptr [ECX + 0x4]
005831a7  FLD float ptr [ESP + 0x48]
005831ab  FMUL float ptr [EDX + ESI*0x1 + 0x8]
005831af  FLD float ptr [ESP + 0x44]
005831b3  FMUL float ptr [EDX + ESI*0x1 + 0x4]
005831b7  FADDP
005831b9  FLD float ptr [ESP + 0x40]
005831bd  FMUL float ptr [EDX + ESI*0x1]
005831c0  FADDP
005831c2  FADD float ptr [ESP + 0x60]
005831c6  FLD float ptr [ESP + 0x48]
005831ca  FMUL float ptr [ECX + 0x8]
005831cd  FLD float ptr [ESP + 0x44]
005831d1  FMUL float ptr [ECX + 0x4]
005831d4  FADDP
005831d6  FLD float ptr [ESP + 0x40]
005831da  FMUL float ptr [ECX]
005831dc  FADDP
005831de  FDIVP
005831e0  FCHS
005831e2  FLD ST0
005831e4  FMUL float ptr [ECX]
005831e6  FSTP float ptr [ECX]
005831e8  FLD ST0
005831ea  FMUL float ptr [ECX + 0x4]
005831ed  FSTP float ptr [ECX + 0x4]
005831f0  FLD ST0
005831f2  FMUL float ptr [ECX + 0x8]
005831f5  FSTP float ptr [ECX + 0x8]
005831f8  FLD float ptr [EDX + ESI*0x1 + 0x4]
005831fc  FLD float ptr [EDX + ESI*0x1 + 0x8]
00583200  FLD float ptr [EDX + ESI*0x1]
00583203  FADD float ptr [ECX]
00583205  FSTP float ptr [ECX]
00583207  FXCH
00583209  FADD float ptr [ECX + 0x4]
0058320c  FSTP float ptr [ECX + 0x4]
0058320f  FADD float ptr [ECX + 0x8]
00583212  FSTP float ptr [ECX + 0x8]
00583215  FLD float ptr [EBX + EAX*0x8]
00583218  MOV EAX,dword ptr [ESP + 0x30]
0058321c  FSUB float ptr [EAX + EBX*0x1]
0058321f  MOV EAX,dword ptr [ESP + 0x2c]
00583223  FLD float ptr [EBX + EAX*0x8 + 0x4]
00583227  MOV EAX,dword ptr [ESP + 0x30]
0058322b  FSUB float ptr [EAX + EBX*0x1 + 0x4]
0058322f  FXCH
00583231  FMUL ST2
00583233  FSTP float ptr [ESP + 0x94]
0058323a  MOV EAX,dword ptr [ESP + 0x94]
00583241  MOV dword ptr [ESP + 0x8c],EAX
00583248  FMUL ST1
0058324a  FSTP float ptr [ESP + 0x98]
00583251  MOV EAX,dword ptr [ESP + 0x98]
00583258  FLD float ptr [ESP + 0x8c]
0058325f  MOV dword ptr [ESP + 0x90],EAX
00583266  MOV EAX,dword ptr [ESP + 0x30]
0058326a  FADD float ptr [EAX + EBX*0x1]
0058326d  FLD float ptr [ESP + 0x90]
00583274  FADD float ptr [EAX + EBX*0x1 + 0x4]
00583278  MOV EAX,dword ptr [ESP + 0x3c]
0058327c  MOV EBX,dword ptr [ESP + 0x1c]
00583280  FXCH
00583282  FSTP float ptr [EAX + EBX*0x8]
00583285  FSTP float ptr [EAX + EBX*0x8 + 0x4]
00583289  MOV EAX,dword ptr [ESP + 0x24]
0058328d  FLD float ptr [EAX + -0xc]
00583290  MOV EBX,dword ptr [ESP + 0x20]
00583294  FSUB float ptr [EDX + EDI*0x1]
00583297  ADD ECX,0x10
0058329a  FLD float ptr [EAX + -0x8]
0058329d  MOV EAX,dword ptr [ESP + 0x38]
005832a1  FSUB float ptr [EDX + EDI*0x1 + 0x4]
005832a5  MOV byte ptr [ESP + 0x1b],0x0
005832aa  FLD float ptr [EAX + EBX*0x1]
005832ad  MOV EAX,dword ptr [ESP + 0x24]
005832b1  FSUB float ptr [EDX + EDI*0x1 + 0x8]
005832b5  FSTP float ptr [ESP + 0xd8]
005832bc  FLD float ptr [EAX]
005832be  MOV EAX,dword ptr [ESP + 0x28]
005832c2  FSUB float ptr [EDX + EDI*0x1 + 0xc]
005832c6  FSTP float ptr [ESP + 0xdc]
005832cd  FXCH
005832cf  FMUL ST2
005832d1  FSTP float ptr [ESP + 0xb0]
005832d8  FMUL ST1
005832da  FSTP float ptr [ESP + 0xb4]
005832e1  FLD float ptr [ESP + 0xd8]
005832e8  FMUL ST1
005832ea  FSTP float ptr [ESP + 0xb8]
005832f1  FMUL float ptr [ESP + 0xdc]
005832f8  FLD float ptr [ESP + 0xb0]
005832ff  FADD float ptr [EDX + EDI*0x1]
00583302  FLD float ptr [ESP + 0xb4]
00583309  FADD float ptr [EDX + EDI*0x1 + 0x4]
0058330d  FLD float ptr [ESP + 0xb8]
00583314  FADD float ptr [EDX + EDI*0x1 + 0x8]
00583318  FSTP float ptr [ESP + 0xe8]
0058331f  FXCH ST2
00583321  FADD float ptr [EDX + EDI*0x1 + 0xc]
00583325  MOV EDX,dword ptr [ESP + 0xe8]
0058332c  MOV dword ptr [EAX + 0x8],EDX
0058332f  FSTP float ptr [ESP + 0xec]
00583336  MOV EDX,dword ptr [ESP + 0xec]
0058333d  MOV dword ptr [EAX + 0xc],EDX
00583340  MOV EDX,dword ptr [ESP + 0x1c]
00583344  FSTP float ptr [EAX]
00583346  INC EDX
00583347  FSTP float ptr [EAX + 0x4]
0058334a  ADD EAX,0x10
0058334d  MOV dword ptr [ESP + 0x1c],EDX
00583351  MOV dword ptr [ESP + 0x28],EAX
00583355  MOV EAX,dword ptr [ESP + 0x2c]
00583359  MOV EBX,dword ptr [ESP + 0x20]
0058335d  LEA EDX,[EAX*0x8 + 0x0]
00583364  MOV dword ptr [ESP + 0x30],EDX
00583368  MOV EDX,dword ptr [ESP + 0x64]
0058336c  LEA EDX,[EDX + EBX*0x1 + -0x8]
00583370  ADD EBX,0x10
00583373  MOV dword ptr [ESP + 0x20],EBX
00583377  ADD dword ptr [ESP + 0x24],0x10
0058337c  MOV EBX,dword ptr [ESP + 0x34]
00583380  INC EAX
00583381  CMP EAX,EBX
00583383  MOV EBX,dword ptr [ESP + 0x58]
00583387  MOV dword ptr [ESP + 0x2c],EAX
0058338b  JC 0x00582ed0
00583391  MOV ECX,dword ptr [ESP + 0x70]
00583395  MOV EAX,dword ptr [ESP + 0x5c]
00583399  MOV EDX,dword ptr [ESP + 0x7c]
0058339d  MOV dword ptr [ESP + 0x5c],ESI
005833a1  MOV ESI,dword ptr [ESP + 0x64]
005833a5  MOV dword ptr [ESP + 0x64],EDX
005833a9  MOV EDX,dword ptr [ESP + 0x74]
005833ad  MOV dword ptr [ESP + 0x7c],ESI
005833b1  MOV ESI,EAX
005833b3  MOV EAX,dword ptr [ESP + 0x3c]
005833b7  MOV dword ptr [ESP + 0x3c],EBX
005833bb  MOV EBX,dword ptr [ESP + 0x88]
005833c2  MOV dword ptr [ESP + 0x88],EDX
005833c9  MOV EDX,dword ptr [ESP + 0x84]
005833d0  MOV dword ptr [ESP + 0x74],EBX
005833d4  MOV EBX,EAX
005833d6  MOV EAX,ECX
005833d8  MOV ECX,EDI
005833da  MOV EDI,dword ptr [ESP + 0x78]
005833de  MOV dword ptr [ESP + 0x78],EDX
005833e2  MOV EDX,dword ptr [ESP + 0x6c]
005833e6  MOV dword ptr [ESP + 0x84],EDI
005833ed  MOV EDI,EAX
005833ef  MOV EAX,dword ptr [ESP + 0x1c]
005833f3  ADD EDX,0x4
005833f6  MOV dword ptr [ESP + 0x34],EAX
005833fa  MOV EAX,dword ptr [ESP + 0x80]
00583401  MOV dword ptr [ESP + 0x6c],EDX
00583405  MOV EDX,dword ptr [ESP + 0x68]
00583409  INC EAX
0058340a  ADD EDX,0x10
0058340d  CMP EAX,0x4
00583410  MOV dword ptr [ESP + 0x58],EBX
00583414  MOV dword ptr [ESP + 0x70],ECX
00583418  MOV dword ptr [ESP + 0x80],EAX
0058341f  MOV dword ptr [ESP + 0x68],EDX
00583423  JL 0x00582dac
00583429  MOV EAX,dword ptr [ESP + 0x34]
0058342d  POP EDI
0058342e  POP ESI
0058342f  POP EBX
00583430  MOV ESP,EBP
00583432  POP EBP
00583433  RET 0x1c
