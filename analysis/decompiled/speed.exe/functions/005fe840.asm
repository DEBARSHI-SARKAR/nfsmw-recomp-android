005fe840  PUSH -0x1
005fe842  PUSH 0x87611c
005fe847  MOV EAX,FS:[0x0]
005fe84d  PUSH EAX
005fe84e  MOV dword ptr FS:[0x0],ESP
005fe855  SUB ESP,0x3cc
005fe85b  PUSH EBX
005fe85c  PUSH EBP
005fe85d  PUSH ESI
005fe85e  MOV ESI,ECX
005fe860  PUSH EDI
005fe861  LEA ECX,[ESP + 0x74]
005fe865  MOV dword ptr [ESP + 0x48],ESI
005fe869  CALL 0x0077b9e0
005fe86e  PUSH 0x6
005fe870  LEA ECX,[ESP + 0x78]
005fe874  MOV dword ptr [ESP + 0x3e8],0x0
005fe87f  MOV byte ptr [ESP + 0xcc],0x1
005fe887  MOV dword ptr [ESP + 0xf0],0x2
005fe892  CALL 0x007658a0
005fe897  MOV ESI,dword ptr [ESI + 0x1968]
005fe89d  MOV EAX,dword ptr [ESI + 0xc]
005fe8a0  TEST EAX,EAX
005fe8a2  JZ 0x005fe8b5
005fe8a4  CMP dword ptr [EAX],0x0
005fe8a7  JNZ 0x005fe8b5
005fe8a9  MOV ECX,dword ptr [0x0091e00c]
005fe8af  PUSH EAX
005fe8b0  CALL 0x005fa780
005fe8b5  MOV EAX,dword ptr [ESI + 0x10]
005fe8b8  TEST EAX,EAX
005fe8ba  JZ 0x005fe8cd
005fe8bc  CMP dword ptr [EAX],0x0
005fe8bf  JNZ 0x005fe8cd
005fe8c1  MOV ECX,dword ptr [0x0091e00c]
005fe8c7  PUSH EAX
005fe8c8  CALL 0x005fa780
005fe8cd  MOV ECX,dword ptr [ESI + 0x8]
005fe8d0  CALL 0x005d9a10
005fe8d5  MOV EAX,dword ptr [ESP + 0x3ec]
005fe8dc  MOV ESI,dword ptr [ESP + 0x3f4]
005fe8e3  MOV EBP,dword ptr [ESP + 0x3f8]
005fe8ea  SHL ESI,0x4
005fe8ed  FLD float ptr [ESI + EAX*0x1]
005fe8f0  LEA EDI,[ESI + EAX*0x1]
005fe8f3  SHL EBP,0x4
005fe8f6  FSUB float ptr [EAX + EBP*0x1]
005fe8f9  LEA ECX,[EAX + EBP*0x1]
005fe8fc  FLD float ptr [EDI + 0x4]
005fe8ff  MOV dword ptr [ESP + 0x40],ECX
005fe903  FSUB float ptr [ECX + 0x4]
005fe906  FLD float ptr [EDI + 0x8]
005fe909  FSUB float ptr [ECX + 0x8]
005fe90c  FLD ST2
005fe90e  FMUL ST3
005fe910  FLD ST1
005fe912  FMUL ST2
005fe914  FADDP
005fe916  FLD ST2
005fe918  FMUL ST3
005fe91a  FADDP
005fe91c  FSTP float ptr [ESP + 0x18]
005fe920  MOV EAX,dword ptr [ESP + 0x18]
005fe924  FSTP ST0
005fe926  PUSH EAX
005fe927  FSTP ST0
005fe929  FSTP ST0
005fe92b  CALL 0x005c5e80
005fe930  MOV EBX,dword ptr [ESP + 0x3f4]
005fe937  FSTP float ptr [ESP + 0x34]
005fe93b  ADD ESP,0x4
005fe93e  PUSH 0x3f800000
005fe943  PUSH 0x1
005fe945  ADD ESI,EBX
005fe947  PUSH ESI
005fe948  PUSH EDI
005fe949  LEA ECX,[ESP + 0x84]
005fe950  CALL 0x007862d0
005fe955  MOV AL,byte ptr [ESP + 0xc4]
005fe95c  TEST AL,AL
005fe95e  JZ 0x005feeae
005fe964  MOV ECX,dword ptr [ESP + 0x3f8]
005fe96b  CMP dword ptr [ESP + 0x3f4],ECX
005fe972  MOV dword ptr [ESP + 0x18],0x0
005fe97a  JNZ 0x005fea0a
005fe980  MOV EDI,dword ptr [ESP + 0x102]
005fe987  MOV EAX,[0x009b38c0]
005fe98c  MOVSX EDX,DI
005fe98f  IMUL EDX,EDX,0x16
005fe992  MOVZX ECX,word ptr [EDX + EAX*0x1 + 0x4]
005fe997  MOV dword ptr [ESP + 0x14],ECX
005fe99b  FILD dword ptr [ESP + 0x14]
005fe99f  FMUL float ptr [0x008f5b50]
005fe9a5  FSTP float ptr [ESP + 0x2c]
005fe9a9  LEA ESP,[ESP]
005fe9b0  FLD float ptr [0x0089096c]
005fe9b6  FSUB float ptr [ESP + 0x104]
005fe9bd  FMUL float ptr [ESP + 0x2c]
005fe9c1  FLD float ptr [0x00890dc4]
005fe9c7  FCOMP
005fe9c9  FNSTSW AX
005fe9cb  TEST AH,0x41
005fe9ce  JNZ 0x005fe9dc
005fe9d0  FSTP ST0
005fe9d2  MOV dword ptr [ESP + 0x14],0x3c23d70a
005fe9da  JMP 0x005fe9e0
005fe9dc  FSTP float ptr [ESP + 0x14]
005fe9e0  MOV EDX,dword ptr [ESP + 0x14]
005fe9e4  PUSH 0x0
005fe9e6  PUSH ESI
005fe9e7  PUSH EDX
005fe9e8  LEA ECX,[ESP + 0x80]
005fe9ef  CALL 0x0077bba0
005fe9f4  FLD float ptr [ESP + 0x14]
005fe9f8  CMP DI,word ptr [ESP + 0x102]
005fea00  FADD float ptr [ESP + 0x18]
005fea04  FSTP float ptr [ESP + 0x18]
005fea08  JZ 0x005fe9b0
005fea0a  LEA ECX,[ESP + 0x34]
005fea0e  CALL 0x005e6e80
005fea13  MOV dword ptr [ESP + 0x38],EAX
005fea17  MOV byte ptr [EAX + 0x1d],0x1
005fea1b  MOV EAX,dword ptr [ESP + 0x38]
005fea1f  MOV dword ptr [EAX + 0x4],EAX
005fea22  MOV EAX,dword ptr [ESP + 0x38]
005fea26  MOV dword ptr [EAX],EAX
005fea28  MOV EAX,dword ptr [ESP + 0x38]
005fea2c  MOV dword ptr [EAX + 0x8],EAX
005fea2f  MOV dword ptr [ESP + 0x3c],0x0
005fea37  MOV EAX,[0x009b38b4]
005fea3c  MOV EDI,dword ptr [ESP + 0x40]
005fea40  MOV ECX,0x1010101
005fea45  MOV dword ptr [ESP + 0x4c],ECX
005fea49  MOV dword ptr [ESP + 0x50],ECX
005fea4d  MOV dword ptr [ESP + 0x54],ECX
005fea51  MOV dword ptr [ESP + 0x58],ECX
005fea55  MOV dword ptr [ESP + 0x5c],ECX
005fea59  MOV dword ptr [ESP + 0x60],ECX
005fea5d  MOV dword ptr [ESP + 0x64],ECX
005fea61  ADD EBP,EBX
005fea63  MOV byte ptr [ESP + 0x3e4],0x1
005fea6b  MOV dword ptr [ESP + 0x14],EAX
005fea6f  MOV dword ptr [ESP + 0x68],ECX
005fea73  MOV byte ptr [ESP + 0x13],0x1
005fea78  MOV dword ptr [ESP + 0x2c],EBP
005fea7c  LEA ESP,[ESP]
005fea80  MOV EAX,dword ptr [ESP + 0x2c]
005fea84  LEA EDX,[ESP + 0x4c]
005fea88  PUSH EDX
005fea89  PUSH EAX
005fea8a  PUSH EDI
005fea8b  LEA ECX,[ESP + 0x80]
005fea92  MOV dword ptr [ESP + 0x360],0x0
005fea9d  MOV dword ptr [ESP + 0xf8],0x2
005feaa8  CALL 0x00788fa0
005feaad  CMP dword ptr [ESP + 0xec],0x3
005feab5  SETZ AL
005feab8  TEST AL,AL
005feaba  JZ 0x005febd5
005feac0  LEA ECX,[ESP + 0x74]
005feac4  PUSH ECX
005feac5  MOV ECX,dword ptr [ESP + 0x18]
005feac9  CALL 0x00765240
005feace  LEA ECX,[ESP + 0x74]
005fead2  CALL 0x007661d0
005fead7  FSTP float ptr [ESP + 0x30]
005feadb  LEA ECX,[ESP + 0x74]
005feadf  CALL 0x00765350
005feae4  CMP AL,0xff
005feae6  SETZ BL
005feae9  TEST BL,BL
005feaeb  MOV byte ptr [ESP + 0x13],BL
005feaef  JNZ 0x005feaf8
005feaf1  MOVZX EDX,AL
005feaf4  MOV byte ptr [ESP + EDX*0x1 + 0x4c],BL
005feaf8  LEA ECX,[ESP + 0x20]
005feafc  CALL 0x005e6e40
005feb01  MOV dword ptr [ESP + 0x24],EAX
005feb05  MOV byte ptr [EAX + 0xf],0x1
005feb09  MOV EAX,dword ptr [ESP + 0x24]
005feb0d  MOV dword ptr [EAX + 0x4],EAX
005feb10  MOV EAX,dword ptr [ESP + 0x24]
005feb14  MOV dword ptr [EAX],EAX
005feb16  MOV EAX,dword ptr [ESP + 0x24]
005feb1a  XOR ESI,ESI
005feb1c  MOV dword ptr [EAX + 0x8],EAX
005feb1f  MOV dword ptr [ESP + 0x28],ESI
005feb23  MOV EAX,dword ptr [ESP + 0x30]
005feb27  MOV dword ptr [ESP + 0x1c],EAX
005feb2b  MOV EAX,dword ptr [ESP + 0x354]
005feb32  TEST EAX,EAX
005feb34  MOV byte ptr [ESP + 0x3e4],0x2
005feb3c  MOV EBP,EAX
005feb3e  JLE 0x005feb76
005feb40  MOV ECX,dword ptr [ESP + 0x358]
005feb47  MOVZX EAX,word ptr [ECX + ESI*0x2]
005feb4b  MOV EDX,dword ptr [0x009b38c0]
005feb51  IMUL EAX,EAX,0x16
005feb54  MOV CL,byte ptr [EAX + EDX*0x1 + 0xa]
005feb58  ADD EAX,EDX
005feb5a  TEST CL,0x1
005feb5d  JNZ 0x005feb71
005feb5f  ADD EAX,0x6
005feb62  PUSH EAX
005feb63  LEA EDX,[ESP + 0x44]
005feb67  PUSH EDX
005feb68  LEA ECX,[ESP + 0x28]
005feb6c  CALL 0x005f2290
005feb71  INC ESI
005feb72  CMP ESI,EBP
005feb74  JL 0x005feb40
005feb76  LEA EAX,[ESP + 0x1c]
005feb7a  PUSH EAX
005feb7b  LEA ECX,[ESP + 0x70]
005feb7f  PUSH ECX
005feb80  LEA ECX,[ESP + 0x3c]
005feb84  CALL 0x005f96e0
005feb89  MOV EAX,dword ptr [ESP + 0x24]
005feb8d  MOV ECX,dword ptr [EAX]
005feb8f  PUSH EAX
005feb90  PUSH ECX
005feb91  LEA EDX,[ESP + 0x48]
005feb95  PUSH EDX
005feb96  LEA ECX,[ESP + 0x2c]
005feb9a  MOV byte ptr [ESP + 0x3f0],0x1
005feba2  CALL 0x005f2cd0
005feba7  MOV EAX,dword ptr [ESP + 0x24]
005febab  XOR ESI,ESI
005febad  CMP EAX,ESI
005febaf  JZ 0x005febbf
005febb1  PUSH ESI
005febb2  PUSH 0x10
005febb4  PUSH EAX
005febb5  MOV ECX,0x925b30
005febba  CALL 0x005d0370
005febbf  TEST BL,BL
005febc1  MOV dword ptr [ESP + 0x24],ESI
005febc5  MOV dword ptr [ESP + 0x28],ESI
005febc9  JZ 0x005fea80
005febcf  MOV EDI,dword ptr [ESP + 0x3c]
005febd3  JMP 0x005febe5
005febd5  MOV AL,byte ptr [ESP + 0x13]
005febd9  TEST AL,AL
005febdb  JZ 0x005febe3
005febdd  MOV EDI,dword ptr [ESP + 0x3c]
005febe1  JMP 0x005febe5
005febe3  XOR EDI,EDI
005febe5  TEST EDI,EDI
005febe7  FLD float ptr [ESP + 0x18]
005febeb  FADD float ptr [ESP + 0x30]
005febef  MOV dword ptr [ESP + 0x14],EDI
005febf3  FSTP float ptr [ESP + 0x30]
005febf7  JNZ 0x005fec09
005febf9  MOV EAX,dword ptr [ESP + 0x48]
005febfd  MOV byte ptr [EAX + 0x4549],0x1
005fec04  JMP 0x005fee6e
005fec09  CMP EDI,0x1
005fec0c  JLE 0x005fee6e
005fec12  MOV ESI,dword ptr [ESP + 0x38]
005fec16  MOV ECX,dword ptr [ESI]
005fec18  CMP ECX,ESI
005fec1a  JZ 0x005fec77
005fec1c  LEA EDX,[ESP + 0x35c]
005fec23  LEA EAX,[ECX + 0xc]
005fec26  MOV dword ptr [EDX],EAX
005fec28  MOV AL,byte ptr [ECX + 0x1d]
005fec2b  ADD EDX,0x4
005fec2e  TEST AL,AL
005fec30  JNZ 0x005fec73
005fec32  MOV EAX,dword ptr [ECX + 0x8]
005fec35  MOV BL,byte ptr [EAX + 0x1d]
005fec38  TEST BL,BL
005fec3a  JNZ 0x005fec54
005fec3c  MOV ECX,EAX
005fec3e  MOV EAX,dword ptr [ECX]
005fec40  MOV BL,byte ptr [EAX + 0x1d]
005fec43  TEST BL,BL
005fec45  JNZ 0x005fec73
005fec47  MOV ECX,EAX
005fec49  MOV EAX,dword ptr [ECX]
005fec4b  MOV BL,byte ptr [EAX + 0x1d]
005fec4e  TEST BL,BL
005fec50  JZ 0x005fec47
005fec52  JMP 0x005fec73
005fec54  MOV EAX,dword ptr [ECX + 0x4]
005fec57  MOV BL,byte ptr [EAX + 0x1d]
005fec5a  TEST BL,BL
005fec5c  JNZ 0x005fec71
005fec5e  MOV EDI,EDI
005fec60  CMP ECX,dword ptr [EAX + 0x8]
005fec63  JNZ 0x005fec71
005fec65  MOV ECX,EAX
005fec67  MOV EAX,dword ptr [EAX + 0x4]
005fec6a  MOV BL,byte ptr [EAX + 0x1d]
005fec6d  TEST BL,BL
005fec6f  JZ 0x005fec60
005fec71  MOV ECX,EAX
005fec73  CMP ECX,ESI
005fec75  JNZ 0x005fec23
005fec77  MOV EAX,0x1
005fec7c  CMP EDI,EAX
005fec7e  MOV dword ptr [ESP + 0x18],EAX
005fec82  JLE 0x005fee72
005fec88  JMP 0x005fec90
005fec90  MOV ESI,dword ptr [ESP + EAX*0x4 + 0x358]
005fec97  MOV EDI,dword ptr [ESP + EAX*0x4 + 0x35c]
005fec9e  LEA ECX,[ESP + 0x1c]
005feca2  CALL 0x005e6e40
005feca7  MOV dword ptr [ESP + 0x20],EAX
005fecab  MOV byte ptr [EAX + 0xf],0x1
005fecaf  MOV EAX,dword ptr [ESP + 0x20]
005fecb3  MOV dword ptr [EAX + 0x4],EAX
005fecb6  MOV EAX,dword ptr [ESP + 0x20]
005fecba  MOV dword ptr [EAX],EAX
005fecbc  MOV EAX,dword ptr [ESP + 0x20]
005fecc0  MOV dword ptr [EAX + 0x8],EAX
005fecc3  MOV dword ptr [ESP + 0x24],0x0
005feccb  MOV ECX,dword ptr [ESP + 0x20]
005feccf  MOV EDX,dword ptr [ECX]
005fecd1  MOV EAX,dword ptr [EDI + 0x8]
005fecd4  MOV EBP,dword ptr [EAX]
005fecd6  MOV ECX,dword ptr [ESI + 0x8]
005fecd9  MOV EBX,dword ptr [ECX]
005fecdb  PUSH EDX
005fecdc  LEA EDX,[ESP + 0x20]
005fece0  PUSH EDX
005fece1  PUSH EAX
005fece2  PUSH EBP
005fece3  PUSH ECX
005fece4  LEA EDX,[ESP + 0x80]
005feceb  PUSH EBX
005fecec  PUSH EDX
005feced  MOV byte ptr [ESP + 0x400],0x3
005fecf5  CALL 0x005f6990
005fecfa  FLD float ptr [0x00890968]
005fed00  FLD float ptr [EDI]
005fed02  MOV EDX,dword ptr [ESP + 0x3c]
005fed06  FSUB float ptr [ESI]
005fed08  MOV ESI,dword ptr [EDX]
005fed0a  MOV EAX,ESI
005fed0c  ADD ESP,0x1c
005fed0f  CMP EAX,EDX
005fed11  FSTP float ptr [ESP + 0x2c]
005fed15  JZ 0x005fee1d
005fed1b  MOV EDI,dword ptr [0x009b38c8]
005fed21  MOVSX ECX,word ptr [EAX + 0xc]
005fed25  LEA ECX,[EDI + ECX*0x8]
005fed28  MOVZX ECX,word ptr [ECX + 0x2]
005fed2c  MOV dword ptr [ESP + 0x40],ECX
005fed30  MOV CL,byte ptr [EAX + 0xf]
005fed33  TEST CL,CL
005fed35  FILD dword ptr [ESP + 0x40]
005fed39  FMUL float ptr [0x008f5b30]
005fed3f  FADDP
005fed41  JNZ 0x005fed83
005fed43  MOV ECX,dword ptr [EAX + 0x8]
005fed46  MOV BL,byte ptr [ECX + 0xf]
005fed49  TEST BL,BL
005fed4b  JNZ 0x005fed65
005fed4d  MOV EAX,ECX
005fed4f  MOV ECX,dword ptr [EAX]
005fed51  MOV BL,byte ptr [ECX + 0xf]
005fed54  TEST BL,BL
005fed56  JNZ 0x005fed83
005fed58  MOV EAX,ECX
005fed5a  MOV ECX,dword ptr [EAX]
005fed5c  MOV BL,byte ptr [ECX + 0xf]
005fed5f  TEST BL,BL
005fed61  JZ 0x005fed58
005fed63  JMP 0x005fed83
005fed65  MOV ECX,dword ptr [EAX + 0x4]
005fed68  MOV BL,byte ptr [ECX + 0xf]
005fed6b  TEST BL,BL
005fed6d  JNZ 0x005fed81
005fed6f  NOP
005fed70  CMP EAX,dword ptr [ECX + 0x8]
005fed73  JNZ 0x005fed81
005fed75  MOV EAX,ECX
005fed77  MOV ECX,dword ptr [ECX + 0x4]
005fed7a  MOV BL,byte ptr [ECX + 0xf]
005fed7d  TEST BL,BL
005fed7f  JZ 0x005fed70
005fed81  MOV EAX,ECX
005fed83  CMP EAX,EDX
005fed85  JNZ 0x005fed21
005fed87  FCOM float ptr [0x00890968]
005fed8d  FNSTSW AX
005fed8f  TEST AH,0x41
005fed92  JNZ 0x005fee1d
005fed98  CMP ESI,EDX
005fed9a  FLD float ptr [ESP + 0x2c]
005fed9e  FADD ST0,ST1
005feda0  FDIVRP
005feda2  JZ 0x005fee1d
005feda4  FMUL float ptr [0x00893348]
005fedaa  CALL 0x007c4b80
005fedaf  SAR EAX,0x8
005fedb2  JMP 0x005fedc0
005fedb4  MOV EDI,dword ptr [0x009b38c8]
005fedba  LEA EBX,[EBX]
005fedc0  MOVSX EDX,word ptr [ESI + 0xc]
005fedc4  LEA ECX,[EDI + EDX*0x8]
005fedc7  MOV word ptr [ECX],AX
005fedca  MOV CL,byte ptr [ESI + 0xf]
005fedcd  TEST CL,CL
005fedcf  JNZ 0x005fee13
005fedd1  MOV ECX,dword ptr [ESI + 0x8]
005fedd4  MOV DL,byte ptr [ECX + 0xf]
005fedd7  TEST DL,DL
005fedd9  JNZ 0x005fedf3
005feddb  MOV ESI,ECX
005feddd  MOV ECX,dword ptr [ESI]
005feddf  MOV DL,byte ptr [ECX + 0xf]
005fede2  TEST DL,DL
005fede4  JNZ 0x005fee13
005fede6  MOV ESI,ECX
005fede8  MOV ECX,dword ptr [ESI]
005fedea  MOV DL,byte ptr [ECX + 0xf]
005feded  TEST DL,DL
005fedef  JZ 0x005fede6
005fedf1  JMP 0x005fee13
005fedf3  MOV ECX,dword ptr [ESI + 0x4]
005fedf6  MOV DL,byte ptr [ECX + 0xf]
005fedf9  TEST DL,DL
005fedfb  JNZ 0x005fee11
005fedfd  LEA ECX,[ECX]
005fee00  CMP ESI,dword ptr [ECX + 0x8]
005fee03  JNZ 0x005fee11
005fee05  MOV ESI,ECX
005fee07  MOV ECX,dword ptr [ECX + 0x4]
005fee0a  MOV DL,byte ptr [ECX + 0xf]
005fee0d  TEST DL,DL
005fee0f  JZ 0x005fee00
005fee11  MOV ESI,ECX
005fee13  MOV EDX,dword ptr [ESP + 0x20]
005fee17  CMP ESI,EDX
005fee19  JNZ 0x005fedb4
005fee1b  JMP 0x005fee1f
005fee1d  FSTP ST0
005fee1f  MOV EAX,dword ptr [EDX]
005fee21  PUSH EDX
005fee22  PUSH EAX
005fee23  LEA EAX,[ESP + 0x48]
005fee27  PUSH EAX
005fee28  LEA ECX,[ESP + 0x28]
005fee2c  MOV byte ptr [ESP + 0x3f0],0x1
005fee34  CALL 0x005f2cd0
005fee39  MOV EAX,dword ptr [ESP + 0x20]
005fee3d  XOR ESI,ESI
005fee3f  CMP EAX,ESI
005fee41  JZ 0x005fee51
005fee43  PUSH ESI
005fee44  PUSH 0x10
005fee46  PUSH EAX
005fee47  MOV ECX,0x925b30
005fee4c  CALL 0x005d0370
005fee51  MOV EAX,dword ptr [ESP + 0x18]
005fee55  MOV ECX,dword ptr [ESP + 0x14]
005fee59  INC EAX
005fee5a  CMP EAX,ECX
005fee5c  MOV dword ptr [ESP + 0x20],ESI
005fee60  MOV dword ptr [ESP + 0x24],ESI
005fee64  MOV dword ptr [ESP + 0x18],EAX
005fee68  JL 0x005fec90
005fee6e  MOV ESI,dword ptr [ESP + 0x38]
005fee72  MOV EAX,dword ptr [ESI]
005fee74  PUSH ESI
005fee75  PUSH EAX
005fee76  LEA ECX,[ESP + 0x48]
005fee7a  PUSH ECX
005fee7b  LEA ECX,[ESP + 0x40]
005fee7f  MOV byte ptr [ESP + 0x3f0],0x0
005fee87  CALL 0x005fa300
005fee8c  MOV EAX,dword ptr [ESP + 0x38]
005fee90  XOR ESI,ESI
005fee92  CMP EAX,ESI
005fee94  JZ 0x005feea4
005fee96  PUSH ESI
005fee97  PUSH 0x20
005fee99  PUSH EAX
005fee9a  MOV ECX,0x925b30
005fee9f  CALL 0x005d0370
005feea4  MOV dword ptr [ESP + 0x38],ESI
005feea8  MOV dword ptr [ESP + 0x3c],ESI
005feeac  JMP 0x005feef7
005feeae  MOV EAX,dword ptr [ESP + 0x48]
005feeb2  MOV ESI,dword ptr [EAX + 0x1968]
005feeb8  MOV byte ptr [EAX + 0x4549],0x1
005feebf  MOV EAX,dword ptr [ESI + 0xc]
005feec2  TEST EAX,EAX
005feec4  JZ 0x005feed7
005feec6  CMP dword ptr [EAX],0x0
005feec9  JNZ 0x005feed7
005feecb  MOV ECX,dword ptr [0x0091e00c]
005feed1  PUSH EAX
005feed2  CALL 0x005fa780
005feed7  MOV EAX,dword ptr [ESI + 0x10]
005feeda  TEST EAX,EAX
005feedc  JZ 0x005feeef
005feede  CMP dword ptr [EAX],0x0
005feee1  JNZ 0x005feeef
005feee3  MOV ECX,dword ptr [0x0091e00c]
005feee9  PUSH EAX
005feeea  CALL 0x005fa780
005feeef  MOV ECX,dword ptr [ESI + 0x8]
005feef2  CALL 0x005d9a10
005feef7  LEA ECX,[ESP + 0x74]
005feefb  MOV dword ptr [ESP + 0x3e4],0xffffffff
005fef06  CALL 0x0076e220
005fef0b  FLD float ptr [ESP + 0x30]
005fef0f  MOV ECX,dword ptr [ESP + 0x3dc]
005fef16  POP EDI
005fef17  POP ESI
005fef18  POP EBP
005fef19  POP EBX
005fef1a  MOV dword ptr FS:[0x0],ECX
005fef21  ADD ESP,0x3d8
005fef27  RET 0x10
