0077aa30  SUB ESP,0x134
0077aa36  MOV EAX,dword ptr [ESP + 0x13c]
0077aa3d  TEST EAX,EAX
0077aa3f  PUSH EBX
0077aa40  PUSH EBP
0077aa41  PUSH ESI
0077aa42  PUSH EDI
0077aa43  MOV dword ptr [ESP + 0x58],ECX
0077aa47  MOV byte ptr [ESP + 0x13],0x0
0077aa4c  JZ 0x0077adfe
0077aa52  MOV ECX,dword ptr [EAX + 0x4]
0077aa55  TEST ECX,ECX
0077aa57  JZ 0x0077adfe
0077aa5d  MOV EAX,dword ptr [EAX + 0x8]
0077aa60  SUB EAX,ECX
0077aa62  SAR EAX,0x2
0077aa65  TEST EAX,EAX
0077aa67  JZ 0x0077adfe
0077aa6d  MOV EAX,dword ptr [ESP + 0x148]
0077aa74  MOV ECX,dword ptr [EAX + 0x90]
0077aa7a  MOV EDX,dword ptr [EAX + 0x94]
0077aa80  MOV dword ptr [ESP + 0x14],ECX
0077aa84  MOV ECX,dword ptr [EAX + 0x98]
0077aa8a  MOV dword ptr [ESP + 0x18],EDX
0077aa8e  MOV EDX,dword ptr [ESP + 0x14]
0077aa92  MOV dword ptr [ESP + 0x1c],ECX
0077aa96  MOV ECX,dword ptr [ESP + 0x18]
0077aa9a  MOV dword ptr [ESP + 0x5c],EDX
0077aa9e  MOV EDX,dword ptr [ESP + 0x1c]
0077aaa2  MOV dword ptr [ESP + 0x60],ECX
0077aaa6  MOV dword ptr [ESP + 0x64],EDX
0077aaaa  MOV EDX,dword ptr [EAX]
0077aaac  MOV dword ptr [ESP + 0x20],0x3f800000
0077aab4  MOV ECX,dword ptr [ESP + 0x20]
0077aab8  MOV dword ptr [ESP + 0x14],EDX
0077aabc  MOV EDX,dword ptr [EAX + 0x8]
0077aabf  MOV dword ptr [ESP + 0x68],ECX
0077aac3  MOV ECX,dword ptr [EAX + 0x4]
0077aac6  MOV dword ptr [ESP + 0x18],ECX
0077aaca  MOV ECX,dword ptr [ESP + 0x14]
0077aace  MOV dword ptr [ESP + 0x1c],EDX
0077aad2  MOV EDX,dword ptr [ESP + 0x18]
0077aad6  MOV dword ptr [ESP + 0x20],0x3f800000
0077aade  MOV dword ptr [ESP + 0x28],EDX
0077aae2  MOV EDX,dword ptr [ESP + 0x20]
0077aae6  MOV dword ptr [ESP + 0x30],EDX
0077aaea  FLD float ptr [ESP + 0x30]
0077aaee  FADD float ptr [0x0089096c]
0077aaf4  MOV dword ptr [ESP + 0x24],ECX
0077aaf8  MOV ECX,dword ptr [ESP + 0x1c]
0077aafc  MOV dword ptr [ESP + 0x2c],ECX
0077ab00  FSTP float ptr [ESP + 0x34]
0077ab04  MOV dword ptr [ESP + 0x20],0x3f800000
0077ab0c  LEA EBP,[EAX + 0x10]
0077ab0f  XOR ESI,ESI
0077ab11  MOV EDI,0x2
0077ab16  JMP 0x0077ab20
0077ab20  FLD float ptr [ESP + 0x5c]
0077ab24  LEA EAX,[ESP + 0x38]
0077ab28  FMUL float ptr [ESI + 0x8b5cd0]
0077ab2e  PUSH EAX
0077ab2f  LEA ECX,[ESP + 0x18]
0077ab33  PUSH EBP
0077ab34  FSTP float ptr [ESP + 0x1c]
0077ab38  PUSH ECX
0077ab39  FLD float ptr [ESP + 0x6c]
0077ab3d  FMUL float ptr [ESI + 0x8b5cd4]
0077ab43  FSTP float ptr [ESP + 0x24]
0077ab47  FLD float ptr [ESP + 0x70]
0077ab4b  FMUL float ptr [ESI + 0x8b5cd8]
0077ab51  FSTP float ptr [ESP + 0x28]
0077ab55  CALL 0x00466520
0077ab5a  FLD float ptr [ESP + 0x30]
0077ab5e  MOV EDX,dword ptr [ESP + 0x40]
0077ab62  FADD float ptr [ESP + 0x44]
0077ab66  MOV dword ptr [ESP + ESI*0x1 + 0xdc],EDX
0077ab6d  ADD ESP,0xc
0077ab70  ADD ESI,0x10
0077ab73  DEC EDI
0077ab74  FSTP float ptr [ESP + ESI*0x1 + 0xb4]
0077ab7b  FLD float ptr [ESP + 0x28]
0077ab7f  FADD float ptr [ESP + 0x3c]
0077ab83  FSTP float ptr [ESP + ESI*0x1 + 0xb8]
0077ab8a  FLD float ptr [ESP + 0x2c]
0077ab8e  FADD float ptr [ESP + 0x40]
0077ab92  FSTP float ptr [ESP + ESI*0x1 + 0xbc]
0077ab99  MOV dword ptr [ESP + ESI*0x1 + 0xc0],0x3f800000
0077aba4  JNZ 0x0077ab20
0077abaa  CMP ESI,0x80
0077abb0  JC 0x0077ab11
0077abb6  MOV EAX,[0x008a2fd0]
0077abbb  MOV ECX,dword ptr [0x008a2fd4]
0077abc1  MOV EDX,dword ptr [0x008a2fd8]
0077abc7  MOV EBX,dword ptr [ESP + 0x154]
0077abce  MOV EBP,dword ptr [ESP + 0x150]
0077abd5  MOV dword ptr [ESP + 0x24],EAX
0077abd9  MOV EAX,[0x008a2fdc]
0077abde  MOV dword ptr [ESP + 0x28],ECX
0077abe2  MOV dword ptr [ESP + 0x2c],EDX
0077abe6  MOV dword ptr [ESP + 0x30],EAX
0077abea  XOR EDI,EDI
0077abec  LEA ESI,[ESP + 0xcc]
0077abf3  FLD float ptr [ESP + 0x24]
0077abf7  LEA ECX,[ESP + 0x6c]
0077abfb  FADD float ptr [ESI + -0x8]
0077abfe  FSTP float ptr [ESP + 0x38]
0077ac02  FLD float ptr [ESP + 0x28]
0077ac06  FADD float ptr [ESI + -0x4]
0077ac09  FSTP float ptr [ESP + 0x3c]
0077ac0d  FLD float ptr [ESP + 0x2c]
0077ac11  FADD float ptr [ESI]
0077ac13  FSTP float ptr [ESP + 0x40]
0077ac17  FLD float ptr [ESP + 0x24]
0077ac1b  FADD float ptr [ESI + 0x8]
0077ac1e  FSTP float ptr [ESP + 0x48]
0077ac22  FLD float ptr [ESP + 0x28]
0077ac26  FADD float ptr [ESI + 0xc]
0077ac29  FSTP float ptr [ESP + 0x4c]
0077ac2d  FLD float ptr [ESP + 0x2c]
0077ac31  FADD float ptr [ESI + 0x10]
0077ac34  FSTP float ptr [ESP + 0x50]
0077ac38  CALL 0x004048c0
0077ac3d  MOV EAX,dword ptr [ESP + 0x14c]
0077ac44  LEA ECX,[ESP + 0x6c]
0077ac48  PUSH ECX
0077ac49  MOV ECX,dword ptr [ESP + 0x5c]
0077ac4d  LEA EDX,[ESP + 0x3c]
0077ac51  PUSH EDX
0077ac52  PUSH 0x0
0077ac54  PUSH EAX
0077ac55  CALL 0x0077a8b0
0077ac5a  TEST AL,AL
0077ac5c  JZ 0x0077adf1
0077ac62  TEST EBP,EBP
0077ac64  JZ 0x0077ae0f
0077ac6a  FLD float ptr [ESP + 0x40]
0077ac6e  FSUB float ptr [ESP + 0x74]
0077ac72  FLD float ptr [ESP + 0x3c]
0077ac76  FSUB float ptr [ESP + 0x70]
0077ac7a  FLD float ptr [ESP + 0x38]
0077ac7e  FSUB float ptr [ESP + 0x6c]
0077ac82  FLD float ptr [ESP + 0x50]
0077ac86  FSUB float ptr [ESP + 0x74]
0077ac8a  FLD float ptr [ESP + 0x4c]
0077ac8e  FSUB float ptr [ESP + 0x70]
0077ac92  FLD float ptr [ESP + 0x48]
0077ac96  FSUB float ptr [ESP + 0x6c]
0077ac9a  FSTP float ptr [ESP + 0x34]
0077ac9e  FLD ST2
0077aca0  FMUL ST3
0077aca2  FLD ST4
0077aca4  FMUL ST5
0077aca6  FADDP
0077aca8  FLD ST5
0077acaa  FMUL ST6
0077acac  FADDP
0077acae  FLD float ptr [ESP + 0x34]
0077acb2  FMUL float ptr [ESP + 0x34]
0077acb6  FLD ST2
0077acb8  FMUL ST3
0077acba  FADDP
0077acbc  FLD ST3
0077acbe  FMUL ST4
0077acc0  FADDP
0077acc2  FCOMPP
0077acc4  FSTP ST0
0077acc6  FSTP ST0
0077acc8  FSTP ST0
0077acca  FNSTSW AX
0077accc  FSTP ST0
0077acce  TEST AH,0x41
0077acd1  FSTP ST0
0077acd3  JNZ 0x0077acf7
0077acd5  MOV ECX,dword ptr [ESP + 0x38]
0077acd9  MOV EDX,dword ptr [ESP + 0x3c]
0077acdd  MOV EAX,dword ptr [ESP + 0x40]
0077ace1  MOV dword ptr [ESP + 0x14],ECX
0077ace5  MOV ECX,dword ptr [ESP + 0x44]
0077ace9  MOV dword ptr [ESP + 0x18],EDX
0077aced  MOV dword ptr [ESP + 0x1c],EAX
0077acf1  MOV dword ptr [ESP + 0x20],ECX
0077acf5  JMP 0x0077ad17
0077acf7  MOV EDX,dword ptr [ESP + 0x48]
0077acfb  MOV EAX,dword ptr [ESP + 0x4c]
0077acff  MOV ECX,dword ptr [ESP + 0x50]
0077ad03  MOV dword ptr [ESP + 0x14],EDX
0077ad07  MOV EDX,dword ptr [ESP + 0x54]
0077ad0b  MOV dword ptr [ESP + 0x18],EAX
0077ad0f  MOV dword ptr [ESP + 0x1c],ECX
0077ad13  MOV dword ptr [ESP + 0x20],EDX
0077ad17  FLD float ptr [ESP + 0x14]
0077ad1b  FSUB float ptr [ESP + 0x6c]
0077ad1f  FLD float ptr [ESP + 0x18]
0077ad23  FSUB float ptr [ESP + 0x70]
0077ad27  FLD float ptr [ESP + 0x1c]
0077ad2b  FSUB float ptr [ESP + 0x74]
0077ad2f  FLD float ptr [ESP + 0x84]
0077ad36  FMUL ST1
0077ad38  FLD float ptr [ESP + 0x80]
0077ad3f  FMUL ST3
0077ad41  FADDP
0077ad43  FXCH ST3
0077ad45  FMUL float ptr [ESP + 0x7c]
0077ad49  FADDP ST3,ST0
0077ad4b  FXCH ST2
0077ad4d  FCHS
0077ad4f  FSTP ST2
0077ad51  FSTP ST0
0077ad53  FCOM float ptr [0x00890968]
0077ad59  FNSTSW AX
0077ad5b  TEST AH,0x5
0077ad5e  JP 0x0077ad8c
0077ad60  FLD float ptr [ESP + 0x7c]
0077ad64  FCHS
0077ad66  FSTP float ptr [ESP + 0x7c]
0077ad6a  FLD float ptr [ESP + 0x80]
0077ad71  FCHS
0077ad73  FSTP float ptr [ESP + 0x80]
0077ad7a  FLD float ptr [ESP + 0x84]
0077ad81  FCHS
0077ad83  FSTP float ptr [ESP + 0x84]
0077ad8a  FCHS
0077ad8c  MOV EAX,dword ptr [EBP]
0077ad8f  FST float ptr [ESP + 0x20]
0077ad93  PUSH EBX
0077ad94  FSTP float ptr [ESP + 0x8c]
0077ad9b  LEA ECX,[ESP + 0x18]
0077ad9f  PUSH ECX
0077ada0  LEA EDX,[ESP + 0x74]
0077ada4  PUSH EDX
0077ada5  MOV ECX,EBP
0077ada7  CALL dword ptr [EAX]
0077ada9  TEST AL,AL
0077adab  JZ 0x0077adec
0077adad  FLD float ptr [ESP + 0x7c]
0077adb1  FMUL float ptr [ESP + 0x88]
0077adb8  FADD float ptr [ESP + 0x24]
0077adbc  FSTP float ptr [ESP + 0x24]
0077adc0  FLD float ptr [ESP + 0x80]
0077adc7  FMUL float ptr [ESP + 0x88]
0077adce  FADD float ptr [ESP + 0x28]
0077add2  FSTP float ptr [ESP + 0x28]
0077add6  FLD float ptr [ESP + 0x84]
0077addd  FMUL float ptr [ESP + 0x88]
0077ade4  FADD float ptr [ESP + 0x2c]
0077ade8  FSTP float ptr [ESP + 0x2c]
0077adec  MOV byte ptr [ESP + 0x13],0x1
0077adf1  INC EDI
0077adf2  ADD ESI,0x20
0077adf5  CMP EDI,0x4
0077adf8  JC 0x0077abf3
0077adfe  MOV AL,byte ptr [ESP + 0x13]
0077ae02  POP EDI
0077ae03  POP ESI
0077ae04  POP EBP
0077ae05  POP EBX
0077ae06  ADD ESP,0x134
0077ae0c  RET 0x10
0077ae0f  POP EDI
0077ae10  POP ESI
0077ae11  POP EBP
0077ae12  MOV AL,0x1
0077ae14  POP EBX
0077ae15  ADD ESP,0x134
0077ae1b  RET 0x10
