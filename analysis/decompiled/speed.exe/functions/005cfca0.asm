005cfca0  PUSH EBP
005cfca1  MOV EBP,ESP
005cfca3  SUB ESP,0x38
005cfca6  PUSH EBX
005cfca7  PUSH ESI
005cfca8  MOV ESI,dword ptr [EBP + 0x8]
005cfcab  MOV EAX,ESI
005cfcad  SHL EAX,0x4
005cfcb0  ADD EAX,0x22
005cfcb3  PUSH EDI
005cfcb4  AND EAX,0xfffffffc
005cfcb7  CALL 0x007c94b0
005cfcbc  MOV EAX,ESP
005cfcbe  ADD EAX,0x1f
005cfcc1  AND EAX,0xffffffe0
005cfcc4  MOV dword ptr [EBP + -0x1c],EAX
005cfcc7  LEA EAX,[ESI + 0x1f]
005cfcca  ADD EAX,0x3
005cfccd  AND EAX,0xfffffffc
005cfcd0  CALL 0x007c94b0
005cfcd5  MOV EDI,dword ptr [EBP + 0xc]
005cfcd8  MOV EDX,dword ptr [EBP + 0x10]
005cfcdb  MOV EAX,EDI
005cfcdd  MOV ESI,dword ptr [EAX]
005cfcdf  MOV ECX,EDX
005cfce1  MOV dword ptr [ECX],ESI
005cfce3  MOV ESI,dword ptr [EAX + 0x4]
005cfce6  MOV dword ptr [ECX + 0x4],ESI
005cfce9  MOV ESI,dword ptr [EAX + 0x8]
005cfcec  MOV dword ptr [ECX + 0x8],ESI
005cfcef  MOV EAX,dword ptr [EAX + 0xc]
005cfcf2  MOV EBX,ESP
005cfcf4  ADD EBX,0x1f
005cfcf7  MOV dword ptr [ECX + 0xc],EAX
005cfcfa  MOV ECX,dword ptr [EBP + 0x8]
005cfcfd  AND EBX,0xffffffe0
005cfd00  ADD EDI,0x10
005cfd03  DEC ECX
005cfd04  MOV dword ptr [EBP + 0xc],EDI
005cfd07  MOV dword ptr [EBP + -0xc],EBX
005cfd0a  MOV dword ptr [EBP + 0xc],ECX
005cfd0d  MOV ESI,0x1
005cfd12  JZ 0x005d01fe
005cfd18  CMP ESI,0x1
005cfd1b  JNZ 0x005cfd7d
005cfd1d  FLD float ptr [EDI]
005cfd1f  FSUB float ptr [EDX]
005cfd21  FLD float ptr [EDI + 0x8]
005cfd24  FSUB float ptr [EDX + 0x8]
005cfd27  FLD ST0
005cfd29  FMUL ST1
005cfd2b  FLD ST2
005cfd2d  FMUL ST3
005cfd2f  FADDP
005cfd31  FCOMP float ptr [0x008a34d8]
005cfd37  FNSTSW AX
005cfd39  FSTP ST0
005cfd3b  TEST AH,0x41
005cfd3e  FSTP ST0
005cfd40  JNZ 0x005cfd65
005cfd42  MOV EAX,EDI
005cfd44  MOV ESI,dword ptr [EAX]
005cfd46  LEA ECX,[EDX + 0x10]
005cfd49  MOV dword ptr [ECX],ESI
005cfd4b  MOV ESI,dword ptr [EAX + 0x4]
005cfd4e  MOV dword ptr [ECX + 0x4],ESI
005cfd51  MOV ESI,dword ptr [EAX + 0x8]
005cfd54  MOV dword ptr [ECX + 0x8],ESI
005cfd57  MOV EAX,dword ptr [EAX + 0xc]
005cfd5a  MOV dword ptr [ECX + 0xc],EAX
005cfd5d  MOV ECX,dword ptr [EBP + 0xc]
005cfd60  MOV ESI,0x2
005cfd65  ADD EDI,0x10
005cfd68  DEC ECX
005cfd69  MOV dword ptr [EBP + 0xc],ECX
005cfd6c  JNZ 0x005cfd18
005cfd6e  MOV dword ptr [EBP + 0xc],EDI
005cfd71  MOV EAX,ESI
005cfd73  LEA ESP,[EBP + -0x44]
005cfd76  POP EDI
005cfd77  POP ESI
005cfd78  POP EBX
005cfd79  MOV ESP,EBP
005cfd7b  POP EBP
005cfd7c  RET
005cfd7d  TEST ECX,ECX
005cfd7f  MOV dword ptr [EBP + 0xc],EDI
005cfd82  JBE 0x005d01fe
005cfd88  LEA EAX,[EDI + 0x8]
005cfd8b  MOV dword ptr [EBP + -0x4],EAX
005cfd8e  MOV dword ptr [EBP + -0x20],ECX
005cfd91  XOR EAX,EAX
005cfd93  CMP ESI,0x4
005cfd96  MOV dword ptr [EBP + 0x10],EAX
005cfd99  MOV dword ptr [EBP + -0x10],EAX
005cfd9c  JL 0x005cffba
005cfda2  MOV EAX,0x2
005cfda7  SUB EAX,ESI
005cfda9  SHL EAX,0x4
005cfdac  MOV dword ptr [EBP + -0x8],EAX
005cfdaf  MOV EAX,0xffffffe8
005cfdb4  SUB EAX,EDX
005cfdb6  MOV dword ptr [EBP + -0x24],EAX
005cfdb9  MOV EAX,0xfffffff8
005cfdbe  SUB EAX,EDX
005cfdc0  MOV dword ptr [EBP + -0x28],EAX
005cfdc3  MOV EAX,0x18
005cfdc8  SUB EAX,EDX
005cfdca  MOV dword ptr [EBP + -0x34],EAX
005cfdcd  MOV EAX,0x8
005cfdd2  SUB EAX,EDX
005cfdd4  MOV dword ptr [EBP + -0x14],EAX
005cfdd7  MOV EAX,0x1
005cfddc  SUB EAX,EBX
005cfdde  MOV dword ptr [EBP + -0x18],EAX
005cfde1  MOV EAX,0x2
005cfde6  SUB EAX,EBX
005cfde8  MOV dword ptr [EBP + -0x2c],EAX
005cfdeb  MOV EAX,0x4
005cfdf0  SUB EAX,EBX
005cfdf2  MOV dword ptr [EBP + -0x38],EAX
005cfdf5  MOV EDI,EBX
005cfdf7  MOV EAX,0x3
005cfdfc  SUB EAX,EBX
005cfdfe  LEA EBX,[ESI + -0x4]
005cfe01  SHR EBX,0x2
005cfe04  INC EBX
005cfe05  MOV dword ptr [EBP + -0x30],EAX
005cfe08  LEA EAX,[EBX*0x4 + 0x0]
005cfe0f  LEA ECX,[EDX + 0x28]
005cfe12  MOV dword ptr [EBP + -0x10],EAX
005cfe15  MOV EAX,dword ptr [EBP + -0x24]
005cfe18  ADD EAX,ECX
005cfe1a  MOV dword ptr [EBP + 0x8],EAX
005cfe1d  MOV EAX,dword ptr [EBP + -0x18]
005cfe20  ADD EAX,EDI
005cfe22  CMP EAX,ESI
005cfe24  JC 0x005cfe2f
005cfe26  MOV EAX,dword ptr [EBP + -0x8]
005cfe29  ADD EAX,-0x10
005cfe2c  MOV dword ptr [EBP + 0x8],EAX
005cfe2f  MOV EAX,dword ptr [EBP + 0x8]
005cfe32  FLD float ptr [EAX + EDX*0x1 + 0x8]
005cfe36  MOV EAX,dword ptr [EBP + 0xc]
005cfe39  FSUB float ptr [ECX + -0x20]
005cfe3c  FLD float ptr [EAX]
005cfe3e  MOV EAX,dword ptr [EBP + 0x8]
005cfe41  FSUB float ptr [ECX + -0x28]
005cfe44  FMULP
005cfe46  FLD float ptr [EAX + EDX*0x1]
005cfe49  MOV EAX,dword ptr [EBP + -0x4]
005cfe4c  FSUB float ptr [ECX + -0x28]
005cfe4f  FLD float ptr [EAX]
005cfe51  FSUB float ptr [ECX + -0x20]
005cfe54  FMULP
005cfe56  FSUBP
005cfe58  FCOMP float ptr [0x00890968]
005cfe5e  FNSTSW AX
005cfe60  TEST AH,0x1
005cfe63  JNZ 0x005cfe6c
005cfe65  MOV EAX,0x1
005cfe6a  JMP 0x005cfe6e
005cfe6c  XOR EAX,EAX
005cfe6e  TEST AL,AL
005cfe70  MOV byte ptr [EDI],AL
005cfe72  JNZ 0x005cfe77
005cfe74  INC dword ptr [EBP + 0x10]
005cfe77  MOV EAX,dword ptr [EBP + -0x28]
005cfe7a  ADD EAX,ECX
005cfe7c  MOV dword ptr [EBP + 0x8],EAX
005cfe7f  MOV EAX,dword ptr [EBP + -0x2c]
005cfe82  ADD EAX,EDI
005cfe84  CMP EAX,ESI
005cfe86  JC 0x005cfe8e
005cfe88  MOV EAX,dword ptr [EBP + -0x8]
005cfe8b  MOV dword ptr [EBP + 0x8],EAX
005cfe8e  MOV EAX,dword ptr [EBP + 0x8]
005cfe91  FLD float ptr [EAX + EDX*0x1 + 0x8]
005cfe95  MOV EAX,dword ptr [EBP + 0xc]
005cfe98  FSUB float ptr [ECX + -0x10]
005cfe9b  FLD float ptr [EAX]
005cfe9d  MOV EAX,dword ptr [EBP + 0x8]
005cfea0  FSUB float ptr [ECX + -0x18]
005cfea3  FMULP
005cfea5  FLD float ptr [EAX + EDX*0x1]
005cfea8  MOV EAX,dword ptr [EBP + -0x4]
005cfeab  FSUB float ptr [ECX + -0x18]
005cfeae  FLD float ptr [EAX]
005cfeb0  FSUB float ptr [ECX + -0x10]
005cfeb3  FMULP
005cfeb5  FSUBP
005cfeb7  FCOMP float ptr [0x00890968]
005cfebd  FNSTSW AX
005cfebf  TEST AH,0x1
005cfec2  JNZ 0x005cfecb
005cfec4  MOV EAX,0x1
005cfec9  JMP 0x005cfecd
005cfecb  XOR EAX,EAX
005cfecd  TEST AL,AL
005cfecf  MOV byte ptr [EDI + 0x1],AL
005cfed2  JNZ 0x005cfed7
005cfed4  INC dword ptr [EBP + 0x10]
005cfed7  MOV EAX,dword ptr [EBP + -0x14]
005cfeda  ADD EAX,ECX
005cfedc  MOV dword ptr [EBP + 0x8],EAX
005cfedf  MOV EAX,dword ptr [EBP + -0x30]
005cfee2  ADD EAX,EDI
005cfee4  CMP EAX,ESI
005cfee6  JC 0x005cfef1
005cfee8  MOV EAX,dword ptr [EBP + -0x8]
005cfeeb  ADD EAX,0x10
005cfeee  MOV dword ptr [EBP + 0x8],EAX
005cfef1  MOV EAX,dword ptr [EBP + 0x8]
005cfef4  FLD float ptr [EAX + EDX*0x1 + 0x8]
005cfef8  MOV EAX,dword ptr [EBP + 0xc]
005cfefb  FSUB float ptr [ECX]
005cfefd  FLD float ptr [EAX]
005cfeff  MOV EAX,dword ptr [EBP + 0x8]
005cff02  FSUB float ptr [ECX + -0x8]
005cff05  FMULP
005cff07  FLD float ptr [EAX + EDX*0x1]
005cff0a  MOV EAX,dword ptr [EBP + -0x4]
005cff0d  FSUB float ptr [ECX + -0x8]
005cff10  FLD float ptr [EAX]
005cff12  FSUB float ptr [ECX]
005cff14  FMULP
005cff16  FSUBP
005cff18  FCOMP float ptr [0x00890968]
005cff1e  FNSTSW AX
005cff20  TEST AH,0x1
005cff23  JNZ 0x005cff2c
005cff25  MOV EAX,0x1
005cff2a  JMP 0x005cff2e
005cff2c  XOR EAX,EAX
005cff2e  TEST AL,AL
005cff30  MOV byte ptr [EDI + 0x2],AL
005cff33  JNZ 0x005cff38
005cff35  INC dword ptr [EBP + 0x10]
005cff38  MOV EAX,dword ptr [EBP + -0x34]
005cff3b  ADD EAX,ECX
005cff3d  MOV dword ptr [EBP + 0x8],EAX
005cff40  MOV EAX,dword ptr [EBP + -0x38]
005cff43  ADD EAX,EDI
005cff45  CMP EAX,ESI
005cff47  JC 0x005cff52
005cff49  MOV EAX,dword ptr [EBP + -0x8]
005cff4c  ADD EAX,0x20
005cff4f  MOV dword ptr [EBP + 0x8],EAX
005cff52  MOV EAX,dword ptr [EBP + 0x8]
005cff55  FLD float ptr [EAX + EDX*0x1 + 0x8]
005cff59  MOV EAX,dword ptr [EBP + 0xc]
005cff5c  FSUB float ptr [ECX + 0x10]
005cff5f  FLD float ptr [EAX]
005cff61  MOV EAX,dword ptr [EBP + 0x8]
005cff64  FSUB float ptr [ECX + 0x8]
005cff67  FMULP
005cff69  FLD float ptr [EAX + EDX*0x1]
005cff6c  MOV EAX,dword ptr [EBP + -0x4]
005cff6f  FSUB float ptr [ECX + 0x8]
005cff72  FLD float ptr [EAX]
005cff74  FSUB float ptr [ECX + 0x10]
005cff77  FMULP
005cff79  FSUBP
005cff7b  FCOMP float ptr [0x00890968]
005cff81  FNSTSW AX
005cff83  TEST AH,0x1
005cff86  JNZ 0x005cff8f
005cff88  MOV EAX,0x1
005cff8d  JMP 0x005cff91
005cff8f  XOR EAX,EAX
005cff91  TEST AL,AL
005cff93  MOV byte ptr [EDI + 0x3],AL
005cff96  JNZ 0x005cff9b
005cff98  INC dword ptr [EBP + 0x10]
005cff9b  MOV EAX,dword ptr [EBP + -0x8]
005cff9e  ADD EAX,0x40
005cffa1  ADD EDI,0x4
005cffa4  ADD ECX,0x40
005cffa7  DEC EBX
005cffa8  MOV dword ptr [EBP + -0x8],EAX
005cffab  JNZ 0x005cfe15
005cffb1  MOV EBX,dword ptr [EBP + -0xc]
005cffb4  MOV EAX,dword ptr [EBP + -0x10]
005cffb7  MOV EDI,dword ptr [EBP + 0xc]
005cffba  CMP EAX,ESI
005cffbc  JNC 0x005d0072
005cffc2  LEA ECX,[EAX + EBX*0x1]
005cffc5  MOV EDI,EAX
005cffc7  MOV dword ptr [EBP + 0x8],ECX
005cffca  MOV ECX,EAX
005cffcc  MOV EAX,0x8
005cffd1  SUB EAX,EDX
005cffd3  MOV dword ptr [EBP + -0x14],EAX
005cffd6  SUB EDI,ESI
005cffd8  MOV EAX,0x1
005cffdd  SUB EAX,EBX
005cffdf  MOV EBX,dword ptr [EBP + -0x10]
005cffe2  SHL ECX,0x4
005cffe5  INC EDI
005cffe6  MOV dword ptr [EBP + -0x18],EAX
005cffe9  MOV EAX,ESI
005cffeb  SHL EDI,0x4
005cffee  SUB EAX,EBX
005cfff0  MOV EBX,dword ptr [EBP + 0x8]
005cfff3  LEA ECX,[ECX + EDX*0x1 + 0x8]
005cfff7  MOV dword ptr [EBP + -0x10],EAX
005cfffa  LEA EBX,[EBX]
005d0000  MOV EAX,dword ptr [EBP + -0x14]
005d0003  ADD EAX,ECX
005d0005  MOV dword ptr [EBP + -0x38],EAX
005d0008  MOV EAX,dword ptr [EBP + -0x18]
005d000b  ADD EBX,EAX
005d000d  CMP EBX,ESI
005d000f  MOV EAX,EDI
005d0011  JNC 0x005d0016
005d0013  MOV EAX,dword ptr [EBP + -0x38]
005d0016  FLD float ptr [EAX + EDX*0x1 + 0x8]
005d001a  MOV EBX,dword ptr [EBP + 0xc]
005d001d  FSUB float ptr [ECX]
005d001f  FLD float ptr [EBX]
005d0021  FSUB float ptr [ECX + -0x8]
005d0024  FMULP
005d0026  FLD float ptr [EAX + EDX*0x1]
005d0029  MOV EAX,dword ptr [EBP + -0x4]
005d002c  FSUB float ptr [ECX + -0x8]
005d002f  FLD float ptr [EAX]
005d0031  FSUB float ptr [ECX]
005d0033  FMULP
005d0035  FSUBP
005d0037  FCOMP float ptr [0x00890968]
005d003d  FNSTSW AX
005d003f  TEST AH,0x1
005d0042  JNZ 0x005d004b
005d0044  MOV EAX,0x1
005d0049  JMP 0x005d004d
005d004b  XOR EAX,EAX
005d004d  TEST AL,AL
005d004f  MOV EBX,dword ptr [EBP + 0x8]
005d0052  MOV byte ptr [EBX],AL
005d0054  JNZ 0x005d0059
005d0056  INC dword ptr [EBP + 0x10]
005d0059  MOV EAX,dword ptr [EBP + -0x10]
005d005c  ADD EDI,0x10
005d005f  ADD ECX,0x10
005d0062  INC EBX
005d0063  DEC EAX
005d0064  MOV dword ptr [EBP + 0x8],EBX
005d0067  MOV dword ptr [EBP + -0x10],EAX
005d006a  JNZ 0x005d0000
005d006c  MOV EBX,dword ptr [EBP + -0xc]
005d006f  MOV EDI,dword ptr [EBP + 0xc]
005d0072  MOV EAX,dword ptr [EBP + 0x10]
005d0075  TEST EAX,EAX
005d0077  JBE 0x005d01e2
005d007d  CMP byte ptr [EBX],0x0
005d0080  JZ 0x005d009b
005d0082  MOV CL,byte ptr [EBX + 0x1]
005d0085  TEST CL,CL
005d0087  MOV EAX,0x1
005d008c  JZ 0x005d00bc
005d008e  MOV EDI,EDI
005d0090  MOV CL,byte ptr [EAX + EBX*0x1 + 0x1]
005d0094  INC EAX
005d0095  TEST CL,CL
005d0097  JNZ 0x005d0090
005d0099  JMP 0x005d00bc
005d009b  MOV AL,byte ptr [ESI + EBX*0x1 + -0x1]
005d009f  TEST AL,AL
005d00a1  JZ 0x005d00a7
005d00a3  XOR EAX,EAX
005d00a5  JMP 0x005d00bc
005d00a7  MOV CL,byte ptr [ESI + EBX*0x1 + -0x1]
005d00ab  TEST CL,CL
005d00ad  LEA EAX,[ESI + -0x1]
005d00b0  JNZ 0x005d00bb
005d00b2  MOV CL,byte ptr [EAX + EBX*0x1 + -0x1]
005d00b6  DEC EAX
005d00b7  TEST CL,CL
005d00b9  JZ 0x005d00b2
005d00bb  INC EAX
005d00bc  MOV EBX,dword ptr [EBP + 0x10]
005d00bf  ADD EAX,EBX
005d00c1  MOV dword ptr [EBP + 0x8],EAX
005d00c4  MOV EAX,dword ptr [EBP + -0x1c]
005d00c7  MOV ECX,ESI
005d00c9  SUB ECX,EBX
005d00cb  MOV EBX,dword ptr [EDI]
005d00cd  MOV dword ptr [EAX],EBX
005d00cf  MOV EBX,dword ptr [EDI + 0x4]
005d00d2  MOV dword ptr [EAX + 0x4],EBX
005d00d5  MOV EBX,dword ptr [EDI + 0x8]
005d00d8  INC ECX
005d00d9  CMP ECX,0x1
005d00dc  MOV dword ptr [EAX + 0x8],EBX
005d00df  MOV EDI,dword ptr [EDI + 0xc]
005d00e2  MOV dword ptr [EBP + -0x34],ECX
005d00e5  MOV dword ptr [EAX + 0xc],EDI
005d00e8  JC 0x005d014b
005d00ea  ADD EAX,0x10
005d00ed  MOV dword ptr [EBP + 0x10],EAX
005d00f0  MOV EAX,dword ptr [EBP + 0x8]
005d00f3  MOV EDI,ESI
005d00f5  SHL EDI,0x4
005d00f8  SHL EAX,0x4
005d00fb  MOV dword ptr [EBP + -0x38],EDI
005d00fe  ADD EAX,EDX
005d0100  MOV dword ptr [EBP + -0x18],ECX
005d0103  JMP 0x005d0108
005d0105  MOV EDI,dword ptr [EBP + -0x38]
005d0108  MOV ECX,dword ptr [EBP + 0x8]
005d010b  CMP ECX,ESI
005d010d  JC 0x005d0118
005d010f  MOV EBX,ECX
005d0111  SUB EBX,ESI
005d0113  MOV dword ptr [EBP + 0x8],EBX
005d0116  SUB EAX,EDI
005d0118  MOV EDI,dword ptr [EBP + 0x10]
005d011b  MOV ECX,EAX
005d011d  MOV EBX,dword ptr [ECX]
005d011f  MOV dword ptr [EDI],EBX
005d0121  MOV EBX,dword ptr [ECX + 0x4]
005d0124  MOV dword ptr [EDI + 0x4],EBX
005d0127  MOV EBX,dword ptr [ECX + 0x8]
005d012a  MOV dword ptr [EDI + 0x8],EBX
005d012d  MOV ECX,dword ptr [ECX + 0xc]
005d0130  MOV dword ptr [EDI + 0xc],ECX
005d0133  INC dword ptr [EBP + 0x8]
005d0136  MOV ECX,dword ptr [EBP + -0x18]
005d0139  ADD EDI,0x10
005d013c  ADD EAX,0x10
005d013f  DEC ECX
005d0140  MOV dword ptr [EBP + 0x10],EDI
005d0143  MOV dword ptr [EBP + -0x18],ECX
005d0146  JNZ 0x005d0105
005d0148  MOV ECX,dword ptr [EBP + -0x34]
005d014b  LEA ESI,[ECX + 0x1]
005d014e  CMP ESI,0x1
005d0151  MOV ECX,dword ptr [EBP + -0x1c]
005d0154  MOV EAX,ECX
005d0156  MOV EBX,dword ptr [EAX]
005d0158  MOV EDI,EDX
005d015a  MOV dword ptr [EDI],EBX
005d015c  MOV EBX,dword ptr [EAX + 0x4]
005d015f  MOV dword ptr [EDI + 0x4],EBX
005d0162  MOV EBX,dword ptr [EAX + 0x8]
005d0165  MOV dword ptr [EDI + 0x8],EBX
005d0168  MOV EAX,dword ptr [EAX + 0xc]
005d016b  MOV dword ptr [EDI + 0xc],EAX
005d016e  MOV dword ptr [EBP + 0x10],0x1
005d0175  JBE 0x005d01dc
005d0177  LEA EAX,[EDX + 0x10]
005d017a  MOV dword ptr [EBP + 0x8],EAX
005d017d  ADD ECX,0x10
005d0180  FLD float ptr [ECX + -0x10]
005d0183  FSUB float ptr [ECX]
005d0185  FLD float ptr [ECX + -0x8]
005d0188  FSUB float ptr [ECX + 0x8]
005d018b  FLD ST0
005d018d  FMUL ST1
005d018f  FLD ST2
005d0191  FMUL ST3
005d0193  FADDP
005d0195  FCOMP float ptr [0x008a34d8]
005d019b  FNSTSW AX
005d019d  FSTP ST0
005d019f  TEST AH,0x41
005d01a2  FSTP ST0
005d01a4  JNZ 0x005d01d3
005d01a6  MOV EDI,dword ptr [EBP + 0x8]
005d01a9  MOV EAX,ECX
005d01ab  MOV EBX,dword ptr [EAX]
005d01ad  MOV dword ptr [EDI],EBX
005d01af  MOV EBX,dword ptr [EAX + 0x4]
005d01b2  MOV dword ptr [EDI + 0x4],EBX
005d01b5  MOV EBX,dword ptr [EAX + 0x8]
005d01b8  MOV dword ptr [EDI + 0x8],EBX
005d01bb  MOV EAX,dword ptr [EAX + 0xc]
005d01be  MOV EBX,dword ptr [EBP + 0x10]
005d01c1  MOV dword ptr [EDI + 0xc],EAX
005d01c4  INC EBX
005d01c5  ADD EDI,0x10
005d01c8  MOV dword ptr [EBP + 0x10],EBX
005d01cb  MOV dword ptr [EBP + 0x8],EDI
005d01ce  ADD ECX,0x10
005d01d1  JMP 0x005d01d7
005d01d3  ADD ECX,0x10
005d01d6  DEC ESI
005d01d7  CMP dword ptr [EBP + 0x10],ESI
005d01da  JC 0x005d0180
005d01dc  MOV EBX,dword ptr [EBP + -0xc]
005d01df  MOV EDI,dword ptr [EBP + 0xc]
005d01e2  MOV ECX,dword ptr [EBP + -0x4]
005d01e5  MOV EAX,dword ptr [EBP + -0x20]
005d01e8  ADD EDI,0x10
005d01eb  ADD ECX,0x10
005d01ee  DEC EAX
005d01ef  MOV dword ptr [EBP + 0xc],EDI
005d01f2  MOV dword ptr [EBP + -0x4],ECX
005d01f5  MOV dword ptr [EBP + -0x20],EAX
005d01f8  JNZ 0x005cfd91
005d01fe  MOV EAX,ESI
005d0200  LEA ESP,[EBP + -0x44]
005d0203  POP EDI
005d0204  POP ESI
005d0205  POP EBX
005d0206  MOV ESP,EBP
005d0208  POP EBP
005d0209  RET
