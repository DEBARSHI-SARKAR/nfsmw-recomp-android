006dfb60  PUSH EBP
006dfb61  MOV EBP,ESP
006dfb63  AND ESP,0xfffffff0
006dfb66  SUB ESP,0x44
006dfb69  PUSH EBX
006dfb6a  PUSH ESI
006dfb6b  MOV ESI,dword ptr [0x00982cdc]
006dfb71  CMP ESI,0x1000
006dfb77  PUSH EDI
006dfb78  JGE 0x006dfe84
006dfb7e  MOV ECX,dword ptr [EBP + 0xc]
006dfb81  IMUL ESI,ESI,0x44
006dfb84  MOV EAX,dword ptr [EBP + 0x8]
006dfb87  MOV EDX,dword ptr [EBP + 0x10]
006dfb8a  MOV EDI,dword ptr [EBP + 0x14]
006dfb8d  ADD ESI,0x93e878
006dfb93  MOV dword ptr [ESI + 0x8],ECX
006dfb96  MOV ECX,dword ptr [EBP + 0x20]
006dfb99  MOV dword ptr [ESI],EAX
006dfb9b  MOV EAX,dword ptr [EBP + 0x1c]
006dfb9e  MOV dword ptr [ESI + 0xc],EDX
006dfba1  MOV EDX,dword ptr [EBP + 0x24]
006dfba4  MOV dword ptr [ESI + 0x18],ECX
006dfba7  MOV ECX,dword ptr [EBP + 0x18]
006dfbaa  MOV dword ptr [ESI + 0x14],EAX
006dfbad  MOV EAX,dword ptr [EBP + 0x28]
006dfbb0  MOV dword ptr [ESI + 0x1c],ECX
006dfbb3  MOV dword ptr [ESI + 0x10],EDI
006dfbb6  MOV dword ptr [ESI + 0x20],EDX
006dfbb9  MOV dword ptr [ESI + 0x40],0xbf800000
006dfbc0  XOR EBX,EBX
006dfbc2  MOV dword ptr [ESI + 0x4],EBX
006dfbc5  MOV dword ptr [ESI + 0x3c],EBX
006dfbc8  MOV EDX,dword ptr [EAX]
006dfbca  MOV dword ptr [ESI + 0x24],EDX
006dfbcd  MOV EDX,dword ptr [EAX + 0x4]
006dfbd0  MOV dword ptr [ESI + 0x28],EDX
006dfbd3  MOV EDX,dword ptr [EAX + 0x8]
006dfbd6  MOV dword ptr [ESI + 0x2c],EDX
006dfbd9  MOV EDX,dword ptr [EAX + 0xc]
006dfbdc  MOV dword ptr [ESI + 0x30],EDX
006dfbdf  MOV EDX,dword ptr [EAX + 0x10]
006dfbe2  MOV dword ptr [ESI + 0x34],EDX
006dfbe5  MOV EAX,dword ptr [EAX]
006dfbe7  CMP byte ptr [EAX + 0x54],0x2
006dfbeb  JNZ 0x006dfc07
006dfbed  MOV EDX,dword ptr [ESI + 0x4]
006dfbf0  PUSH ECX
006dfbf1  MOV ECX,dword ptr [ESI]
006dfbf3  PUSH ECX
006dfbf4  PUSH EDX
006dfbf5  CALL 0x006c6f30
006dfbfa  ADD ESP,0xc
006dfbfd  OR EAX,0x80000000
006dfc02  JMP 0x006dfe22
006dfc07  MOV AL,byte ptr [EBP + 0x2c]
006dfc0a  TEST AL,AL
006dfc0c  JZ 0x006dfc1b
006dfc0e  MOVSX EAX,AL
006dfc11  OR EAX,0x80000000
006dfc16  JMP 0x006dfe22
006dfc1b  MOV dword ptr [ESI + 0x38],EBX
006dfc1e  MOV EAX,dword ptr [ESI + 0x24]
006dfc21  CMP EAX,EBX
006dfc23  JZ 0x006dfc2d
006dfc25  MOV EDX,EAX
006dfc27  MOV EAX,dword ptr [EDX + 0x24]
006dfc2a  MOV dword ptr [ESI + 0x38],EAX
006dfc2d  MOV EAX,dword ptr [ESI + 0x28]
006dfc30  CMP EAX,EBX
006dfc32  JZ 0x006dfc41
006dfc34  MOV EDX,EAX
006dfc36  MOV EAX,dword ptr [ESI + 0x38]
006dfc39  SHL EAX,0x1
006dfc3b  XOR EAX,dword ptr [EDX + 0x24]
006dfc3e  MOV dword ptr [ESI + 0x38],EAX
006dfc41  MOV EAX,dword ptr [ESI + 0x2c]
006dfc44  CMP EAX,EBX
006dfc46  JZ 0x006dfc53
006dfc48  MOV EDX,dword ptr [ESI + 0x38]
006dfc4b  SHL EDX,0x1
006dfc4d  XOR EDX,dword ptr [EAX + 0x24]
006dfc50  MOV dword ptr [ESI + 0x38],EDX
006dfc53  MOV EAX,dword ptr [ESI + 0x30]
006dfc56  CMP EAX,EBX
006dfc58  JZ 0x006dfc65
006dfc5a  MOV EDX,dword ptr [ESI + 0x38]
006dfc5d  SHL EDX,0x1
006dfc5f  XOR EDX,dword ptr [EAX + 0x24]
006dfc62  MOV dword ptr [ESI + 0x38],EDX
006dfc65  MOV EAX,dword ptr [ESI + 0x34]
006dfc68  CMP EAX,EBX
006dfc6a  JZ 0x006dfc79
006dfc6c  MOV EDX,dword ptr [ESI + 0x38]
006dfc6f  MOV EBX,dword ptr [EAX + 0x24]
006dfc72  SHL EDX,0x1
006dfc74  XOR EDX,EBX
006dfc76  MOV dword ptr [ESI + 0x38],EDX
006dfc79  MOV EBX,dword ptr [ESI + 0x38]
006dfc7c  MOV EDX,dword ptr [ESI + 0xc]
006dfc7f  MOV EAX,[0x00982a20]
006dfc84  XOR EBX,EDX
006dfc86  MOV dword ptr [ESI + 0x38],EBX
006dfc89  MOV byte ptr [ESI + 0x3b],0x0
006dfc8d  CMP dword ptr [EAX + 0x4],0x1
006dfc91  MOV EBX,dword ptr [EDI + 0x4]
006dfc94  JNZ 0x006dfe18
006dfc9a  CMP EBX,0x12
006dfc9d  JA 0x006dfe18
006dfca3  MOVZX EDX,byte ptr [EBX + 0x6dfe94]
006dfcaa  JMP dword ptr [EDX*0x4 + 0x6dfe8c]
006dfcb1  MOV EAX,[0x00901830]
006dfcb6  TEST EAX,EAX
006dfcb8  JLE 0x006dfe09
006dfcbe  MOV EAX,dword ptr [EBP + 0x8]
006dfcc1  MOV EDX,dword ptr [EAX]
006dfcc3  MOV dword ptr [ESP + 0x20],EDX
006dfcc7  MOV EDX,dword ptr [EAX + 0x4]
006dfcca  MOV dword ptr [ESP + 0x24],EDX
006dfcce  MOV EDX,dword ptr [EAX + 0x8]
006dfcd1  MOV dword ptr [ESP + 0x28],EDX
006dfcd5  MOV EDX,dword ptr [EAX + 0xc]
006dfcd8  MOV dword ptr [ESP + 0x10],EDX
006dfcdc  MOV EDX,dword ptr [EAX + 0x10]
006dfcdf  MOV EAX,dword ptr [EAX + 0x14]
006dfce2  MOV dword ptr [ESP + 0x14],EDX
006dfce6  LEA EDX,[ESP + 0x10]
006dfcea  MOV dword ptr [ESP + 0x18],EAX
006dfcee  PUSH EDX
006dfcef  LEA EAX,[ESP + 0x24]
006dfcf3  PUSH EAX
006dfcf4  PUSH ECX
006dfcf5  CALL 0x006be800
006dfcfa  FLD float ptr [ESP + 0x1c]
006dfcfe  FADD float ptr [ESP + 0x2c]
006dfd02  MOV EDX,dword ptr [0x00919650]
006dfd08  LEA ECX,[ESP + 0x4c]
006dfd0c  PUSH ECX
006dfd0d  FMUL float ptr [0x008933d4]
006dfd13  ADD EDX,0x80
006dfd19  PUSH EDX
006dfd1a  FSTP float ptr [ESP + 0x54]
006dfd1e  LEA EAX,[ESP + 0x44]
006dfd22  FLD float ptr [ESP + 0x28]
006dfd26  PUSH EAX
006dfd27  FADD float ptr [ESP + 0x3c]
006dfd2b  FMUL float ptr [0x008933d4]
006dfd31  FSTP float ptr [ESP + 0x5c]
006dfd35  FLD float ptr [ESP + 0x30]
006dfd39  FADD float ptr [ESP + 0x40]
006dfd3d  FMUL float ptr [0x008933d4]
006dfd43  FSTP float ptr [ESP + 0x60]
006dfd47  CALL 0x0045ed20
006dfd4c  FLD float ptr [0x008fae68]
006dfd52  ADD ESP,0x18
006dfd55  FCOMP float ptr [0x008fae50]
006dfd5b  FNSTSW AX
006dfd5d  TEST AH,0x41
006dfd60  JNP 0x006dfe09
006dfd66  FLD float ptr [ESP + 0x38]
006dfd6a  FCOMP float ptr [0x008fae60]
006dfd70  FNSTSW AX
006dfd72  TEST AH,0x41
006dfd75  JZ 0x006dfe09
006dfd7b  FLD float ptr [ESP + 0x38]
006dfd7f  FCOMP float ptr [0x008fae58]
006dfd85  FLD float ptr [ESP + 0x38]
006dfd89  FNSTSW AX
006dfd8b  TEST AH,0x41
006dfd8e  JNZ 0x006dfde9
006dfd90  FCOMP float ptr [0x008fae5c]
006dfd96  MOV EDI,dword ptr [EDI + 0x38]
006dfd99  FNSTSW AX
006dfd9b  TEST AH,0x5
006dfd9e  MOV EAX,[0x00982c3c]
006dfda3  JP 0x006dfdbe
006dfda5  DEC EAX
006dfda6  CMP EDI,EAX
006dfda8  JGE 0x006dfdac
006dfdaa  MOV EAX,EDI
006dfdac  CMP EAX,0x1
006dfdaf  MOV dword ptr [ESI + 0x3c],EAX
006dfdb2  JG 0x006dfdb9
006dfdb4  MOV EAX,0x1
006dfdb9  MOV dword ptr [ESI + 0x3c],EAX
006dfdbc  JMP 0x006dfe10
006dfdbe  ADD EAX,-0x2
006dfdc1  CMP EDI,EAX
006dfdc3  JGE 0x006dfdc7
006dfdc5  MOV EAX,EDI
006dfdc7  CMP EAX,0x1
006dfdca  MOV dword ptr [ESI + 0x3c],EAX
006dfdcd  JG 0x006dfdd4
006dfdcf  MOV EAX,0x1
006dfdd4  MOV ECX,dword ptr [ESI + 0x10]
006dfdd7  MOV dword ptr [ESI + 0x3c],EAX
006dfdda  CMP dword ptr [ECX + 0x4],0x4
006dfdde  JZ 0x006dfe10
006dfde0  MOV EDX,dword ptr [ESP + 0x38]
006dfde4  MOV dword ptr [ESI + 0x40],EDX
006dfde7  JMP 0x006dfe10
006dfde9  FCOMP float ptr [0x008fae58]
006dfdef  FNSTSW AX
006dfdf1  TEST AH,0x41
006dfdf4  JP 0x006dfe10
006dfdf6  MOV EDI,dword ptr [EDI + 0x38]
006dfdf9  MOV EAX,[0x00982c3c]
006dfdfe  CMP EAX,EDI
006dfe00  JGE 0x006dfe04
006dfe02  MOV EDI,EAX
006dfe04  MOV dword ptr [ESI + 0x3c],EDI
006dfe07  JMP 0x006dfe10
006dfe09  MOV dword ptr [ESI + 0x3c],0x0
006dfe10  MOV EAX,dword ptr [ESI + 0x3c]
006dfe13  IMUL EAX,EAX,0x1f
006dfe16  ADD EBX,EAX
006dfe18  MOV EAX,dword ptr [ESI + 0x38]
006dfe1b  SHL EBX,0x18
006dfe1e  OR EAX,EBX
006dfe20  XOR EBX,EBX
006dfe22  MOV ECX,dword ptr [0x009877b4]
006dfe28  MOV dword ptr [ESI + 0x38],EAX
006dfe2b  MOV ESI,EAX
006dfe2d  MOV EAX,[0x00982cdc]
006dfe32  MOV dword ptr [ECX + EAX*0x8],EAX
006dfe35  MOV EAX,[0x009877b4]
006dfe3a  MOV EDX,dword ptr [0x00982cdc]
006dfe40  MOV dword ptr [EAX + EDX*0x8 + 0x4],ESI
006dfe44  CMP dword ptr [0x008fae70],-0x1
006dfe4b  JNZ 0x006dfe5f
006dfe4d  MOV dword ptr [0x008fae70],EBX
006dfe53  MOV dword ptr [0x00982cd4],0x1
006dfe5d  JMP 0x006dfe65
006dfe5f  INC dword ptr [0x00982cd4]
006dfe65  MOV ECX,dword ptr [EBP + 0x8]
006dfe68  MOV EDX,dword ptr [ECX + 0x5c]
006dfe6b  MOV ECX,dword ptr [0x00982cd8]
006dfe71  MOV EAX,[0x00982cdc]
006dfe76  ADD ECX,EDX
006dfe78  INC EAX
006dfe79  MOV dword ptr [0x00982cd8],ECX
006dfe7f  MOV [0x00982cdc],EAX
006dfe84  POP EDI
006dfe85  POP ESI
006dfe86  POP EBX
006dfe87  MOV ESP,EBP
006dfe89  POP EBP
006dfe8a  RET
