0069abf0  SUB ESP,0x24
0069abf3  MOV EAX,dword ptr [ESP + 0x2c]
0069abf7  PUSH EBX
0069abf8  MOV EBX,dword ptr [ESP + 0x2c]
0069abfc  PUSH EBP
0069abfd  PUSH ESI
0069abfe  MOV ESI,dword ptr [ESP + 0x3c]
0069ac02  PUSH EDI
0069ac03  PUSH ESI
0069ac04  PUSH EAX
0069ac05  PUSH EBX
0069ac06  MOV EBP,ECX
0069ac08  CALL 0x006982a0
0069ac0d  MOV EDX,dword ptr [EBX + 0x48]
0069ac10  LEA EDI,[EBX + 0x48]
0069ac13  MOV ECX,EDI
0069ac15  CALL dword ptr [EDX + 0x10]
0069ac18  MOV ECX,dword ptr [EBP + 0x138]
0069ac1e  MOV dword ptr [ESP + 0x40],EAX
0069ac22  MOV EAX,dword ptr [ECX]
0069ac24  CALL dword ptr [EAX + 0xbc]
0069ac2a  TEST AL,AL
0069ac2c  JNZ 0x0069ae1f
0069ac32  MOV EAX,dword ptr [ESP + 0x40]
0069ac36  CMP EAX,0x1
0069ac39  JNZ 0x0069ade1
0069ac3f  MOV EDX,dword ptr [EBP + 0x48]
0069ac42  LEA EBX,[EBP + 0x48]
0069ac45  MOV ECX,EBX
0069ac47  CALL dword ptr [EDX + 0x4]
0069ac4a  MOV EDX,dword ptr [EAX]
0069ac4c  MOV ECX,EAX
0069ac4e  CALL dword ptr [EDX + 0x24]
0069ac51  TEST AL,AL
0069ac53  JZ 0x0069acee
0069ac59  MOV EAX,dword ptr [EBP + 0x13c]
0069ac5f  TEST EAX,EAX
0069ac61  JZ 0x0069ae30
0069ac67  MOV ECX,EAX
0069ac69  MOV EAX,dword ptr [ECX]
0069ac6b  CALL dword ptr [EAX + 0x4c]
0069ac6e  CMP EAX,0x2
0069ac71  JLE 0x0069ae30
0069ac77  MOV EDX,dword ptr [EDI]
0069ac79  LEA ECX,[ESP + 0x40]
0069ac7d  PUSH ECX
0069ac7e  MOV ECX,EDI
0069ac80  CALL dword ptr [EDX + 0x4]
0069ac83  MOV ECX,EAX
0069ac85  CALL 0x0040e4e0
0069ac8a  TEST AL,AL
0069ac8c  JZ 0x0069ae30
0069ac92  MOV ECX,dword ptr [ESP + 0x40]
0069ac96  MOV EAX,dword ptr [ECX]
0069ac98  CALL dword ptr [EAX + 0x4c]
0069ac9b  CMP EAX,0x2
0069ac9e  JLE 0x0069ae30
0069aca4  MOV ECX,dword ptr [ESI + 0x8c]
0069acaa  MOV EDX,dword ptr [ESI + 0x90]
0069acb0  MOV EAX,dword ptr [ESI + 0x94]
0069acb6  MOV dword ptr [ESP + 0x10],ECX
0069acba  MOV dword ptr [ESP + 0x14],EDX
0069acbe  MOV EDX,dword ptr [EBX]
0069acc0  MOV ECX,EBX
0069acc2  MOV dword ptr [ESP + 0x18],EAX
0069acc6  CALL dword ptr [EDX + 0x20]
0069acc9  MOV ECX,dword ptr [ESP + 0x3c]
0069accd  FLD float ptr [ECX + 0x4]
0069acd0  LEA EDX,[ESP + 0x10]
0069acd4  FSUB float ptr [EAX + 0x4]
0069acd7  PUSH EDX
0069acd8  MOV ECX,ESI
0069acda  FSUB float ptr [0x00890f14]
0069ace0  FSTP float ptr [ESP + 0x18]
0069ace4  CALL 0x00487330
0069ace9  JMP 0x0069ae30
0069acee  MOV EAX,dword ptr [EBP + 0x184]
0069acf4  TEST EAX,EAX
0069acf6  JZ 0x0069ae30
0069acfc  MOV EAX,dword ptr [EDI]
0069acfe  MOV ECX,EDI
0069ad00  CALL dword ptr [EAX + 0x4]
0069ad03  MOV ECX,dword ptr [EAX + 0x4]
0069ad06  PUSH 0x4040e0
0069ad0b  CALL 0x005d59f0
0069ad10  TEST EAX,EAX
0069ad12  JZ 0x0069ae30
0069ad18  MOV EDX,dword ptr [EAX]
0069ad1a  MOV ECX,EAX
0069ad1c  CALL dword ptr [EDX + 0x58]
0069ad1f  CMP EAX,0x3
0069ad22  JZ 0x0069ad2c
0069ad24  TEST EAX,EAX
0069ad26  JNZ 0x0069ae30
0069ad2c  MOV EAX,dword ptr [ESP + 0x3c]
0069ad30  PUSH EAX
0069ad31  MOV ECX,EBP
0069ad33  CALL 0x0068bef0
0069ad38  MOV EDI,EAX
0069ad3a  FLD float ptr [EDI]
0069ad3c  PUSH 0x3f800000
0069ad41  FADD float ptr [ESI + 0x10c]
0069ad47  PUSH 0x0
0069ad49  PUSH ECX
0069ad4a  FSTP float ptr [ESP]
0069ad4d  CALL 0x00401d70
0069ad52  FSTP float ptr [ESI + 0x10c]
0069ad58  ADD ESP,0xc
0069ad5b  FLD float ptr [EDI + 0xc]
0069ad5e  FCOMP float ptr [0x00890968]
0069ad64  FNSTSW AX
0069ad66  TEST AH,0x41
0069ad69  JNZ 0x0069ad9f
0069ad6b  MOV ECX,dword ptr [EDI + 0xc]
0069ad6e  PUSH ECX
0069ad6f  LEA EDX,[ESI + 0x80]
0069ad75  PUSH EDX
0069ad76  LEA EAX,[ESP + 0x30]
0069ad7a  PUSH EAX
0069ad7b  CALL 0x00444e80
0069ad80  ADD ESP,0xc
0069ad83  PUSH EAX
0069ad84  MOV ECX,ESI
0069ad86  CALL 0x004872e0
0069ad8b  FLD float ptr [ESI + 0xd0]
0069ad91  FMUL float ptr [EDI + 0xc]
0069ad94  PUSH ECX
0069ad95  MOV ECX,ESI
0069ad97  FSTP float ptr [ESP]
0069ad9a  CALL 0x00487310
0069ad9f  MOV EDX,dword ptr [ESI + 0x90]
0069ada5  MOV ECX,dword ptr [ESI + 0x8c]
0069adab  MOV EAX,dword ptr [ESI + 0x94]
0069adb1  MOV dword ptr [ESP + 0x14],EDX
0069adb5  FLD float ptr [ESP + 0x14]
0069adb9  MOV dword ptr [ESP + 0x10],ECX
0069adbd  MOV dword ptr [ESP + 0x18],EAX
0069adc1  FADD float ptr [EDI + 0x4]
0069adc4  LEA ECX,[ESP + 0x10]
0069adc8  PUSH ECX
0069adc9  FSTP float ptr [ESP + 0x18]
0069adcd  MOV ECX,ESI
0069adcf  FLD float ptr [ESP + 0x1c]
0069add3  FADD float ptr [EDI + 0x8]
0069add6  FSTP float ptr [ESP + 0x1c]
0069adda  CALL 0x00487330
0069addf  JMP 0x0069ae30
0069ade1  CMP EAX,0x2
0069ade4  JNZ 0x0069ae30
0069ade6  MOV EDX,dword ptr [EBX + 0x60]
0069ade9  LEA ECX,[EBX + 0x60]
0069adec  CALL dword ptr [EDX + 0x34]
0069adef  TEST AL,AL
0069adf1  JNZ 0x0069ae30
0069adf3  MOV byte ptr [ESP + 0x3c],AL
0069adf7  MOV EAX,dword ptr [EDI]
0069adf9  MOV ECX,EDI
0069adfb  CALL dword ptr [EAX + 0x4]
0069adfe  MOV EDX,dword ptr [EAX]
0069ae00  MOV ECX,EAX
0069ae02  CALL dword ptr [EDX + 0x44]
0069ae05  PUSH 0x0
0069ae07  LEA ECX,[ESP + 0x40]
0069ae0b  PUSH ECX
0069ae0c  MOV ECX,EAX
0069ae0e  CALL 0x00696180
0069ae13  TEST AL,AL
0069ae15  JZ 0x0069ae30
0069ae17  MOV AL,byte ptr [ESP + 0x3c]
0069ae1b  TEST AL,AL
0069ae1d  JZ 0x0069ae30
0069ae1f  MOV byte ptr [ESI + 0xc8],0x1
0069ae26  MOV dword ptr [ESI + 0xcc],0x0
0069ae30  FLD float ptr [EBP + 0x16c]
0069ae36  FCOMP float ptr [0x008aabe0]
0069ae3c  FNSTSW AX
0069ae3e  TEST AH,0x41
0069ae41  JNZ 0x0069aec0
0069ae43  MOV AL,byte ptr [ESI + 0xc8]
0069ae49  TEST AL,AL
0069ae4b  JNZ 0x0069aec0
0069ae4d  FLD float ptr [ESI + 0xd0]
0069ae53  FCOMP float ptr [0x00890968]
0069ae59  FNSTSW AX
0069ae5b  TEST AH,0x41
0069ae5e  JNZ 0x0069ae6e
0069ae60  FLD float ptr [0x0089096c]
0069ae66  FDIV float ptr [ESI + 0xd0]
0069ae6c  JMP 0x0069ae74
0069ae6e  FLD float ptr [0x00890968]
0069ae74  FMUL float ptr [EBP + 0x16c]
0069ae7a  LEA EAX,[ESP + 0x10]
0069ae7e  PUSH EAX
0069ae7f  MOV ECX,ESI
0069ae81  FLD ST0
0069ae83  FMUL float ptr [ESI + 0x80]
0069ae89  FLD ST1
0069ae8b  FMUL float ptr [ESI + 0x84]
0069ae91  FXCH ST2
0069ae93  FMUL float ptr [ESI + 0x88]
0069ae99  FSTP float ptr [ESP + 0x34]
0069ae9d  MOV EDX,dword ptr [ESP + 0x34]
0069aea1  MOV dword ptr [ESP + 0x1c],EDX
0069aea5  FSTP float ptr [ESP + 0x14]
0069aea9  FSTP float ptr [ESP + 0x18]
0069aead  CALL 0x004872e0
0069aeb2  MOV ECX,dword ptr [EBP + 0x16c]
0069aeb8  PUSH ECX
0069aeb9  MOV ECX,ESI
0069aebb  CALL 0x00487310
0069aec0  FLD float ptr [EBP + 0x160]
0069aec6  LEA EDX,[ESP + 0x1c]
0069aeca  FADD float ptr [ESI + 0x8c]
0069aed0  PUSH EDX
0069aed1  MOV ECX,ESI
0069aed3  FSTP float ptr [ESP + 0x20]
0069aed7  FLD float ptr [ESI + 0x90]
0069aedd  FADD float ptr [EBP + 0x164]
0069aee3  FSTP float ptr [ESP + 0x24]
0069aee7  FLD float ptr [ESI + 0x94]
0069aeed  FADD float ptr [EBP + 0x168]
0069aef3  FSTP float ptr [ESP + 0x28]
0069aef7  CALL 0x00487330
0069aefc  POP EDI
0069aefd  POP ESI
0069aefe  POP EBP
0069aeff  POP EBX
0069af00  ADD ESP,0x24
0069af03  RET 0xc
