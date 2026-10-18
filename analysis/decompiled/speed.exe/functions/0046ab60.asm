0046ab60  PUSH EBP
0046ab61  MOV EBP,ESP
0046ab63  AND ESP,0xfffffff0
0046ab66  SUB ESP,0xb4
0046ab6c  MOV EAX,dword ptr [EBP + 0xc]
0046ab6f  FLD float ptr [0x0089096c]
0046ab75  FSUB float ptr [EBP + 0x14]
0046ab78  PUSH EBX
0046ab79  PUSH ESI
0046ab7a  MOV ESI,dword ptr [EBP + 0x10]
0046ab7d  FST float ptr [ESP + 0x14]
0046ab81  PUSH EDI
0046ab82  FMUL float ptr [ESI + 0x4]
0046ab85  MOV EDI,dword ptr [EBP + 0x8]
0046ab88  FLD float ptr [EBP + 0x14]
0046ab8b  FMUL float ptr [EAX + 0x4]
0046ab8e  FADDP
0046ab90  FLD float ptr [ESP + 0x18]
0046ab94  FMUL float ptr [ESI + 0x8]
0046ab97  FLD float ptr [EBP + 0x14]
0046ab9a  FMUL float ptr [EAX + 0x8]
0046ab9d  FADDP
0046ab9f  FLD float ptr [ESP + 0x18]
0046aba3  FMUL float ptr [ESI + 0xc]
0046aba6  FLD float ptr [EBP + 0x14]
0046aba9  FMUL float ptr [EAX + 0xc]
0046abac  FADDP
0046abae  FSTP float ptr [ESP + 0x1c]
0046abb2  FLD float ptr [EBP + 0x14]
0046abb5  MOV ECX,dword ptr [ESP + 0x1c]
0046abb9  FMUL float ptr [EAX]
0046abbb  FLD float ptr [ESP + 0x18]
0046abbf  FMUL float ptr [ESI]
0046abc1  MOV dword ptr [EDI + 0xc],ECX
0046abc4  FADDP
0046abc6  FSTP float ptr [EDI]
0046abc8  FXCH
0046abca  FSTP float ptr [EDI + 0x4]
0046abcd  FSTP float ptr [EDI + 0x8]
0046abd0  FLD float ptr [EBP + 0x14]
0046abd3  FMUL float ptr [EAX + 0x10]
0046abd6  FSTP float ptr [ESP + 0x60]
0046abda  FLD float ptr [EBP + 0x14]
0046abdd  FMUL float ptr [EAX + 0x14]
0046abe0  FSTP float ptr [ESP + 0x64]
0046abe4  FLD float ptr [EBP + 0x14]
0046abe7  FMUL float ptr [EAX + 0x18]
0046abea  FSTP float ptr [ESP + 0x68]
0046abee  FLD float ptr [EBP + 0x14]
0046abf1  FMUL float ptr [EAX + 0x20]
0046abf4  FSTP float ptr [ESP + 0x40]
0046abf8  FLD float ptr [EBP + 0x14]
0046abfb  FMUL float ptr [EAX + 0x24]
0046abfe  FSTP float ptr [ESP + 0x44]
0046ac02  FLD float ptr [EBP + 0x14]
0046ac05  FMUL float ptr [EAX + 0x28]
0046ac08  FSTP float ptr [ESP + 0x48]
0046ac0c  FLD float ptr [EBP + 0x14]
0046ac0f  FMUL float ptr [EAX + 0x30]
0046ac12  FSTP float ptr [ESP + 0x80]
0046ac19  FLD float ptr [EBP + 0x14]
0046ac1c  FMUL float ptr [EAX + 0x34]
0046ac1f  FSTP float ptr [ESP + 0x84]
0046ac26  FLD float ptr [EBP + 0x14]
0046ac29  FMUL float ptr [EAX + 0x38]
0046ac2c  FSTP float ptr [ESP + 0x88]
0046ac33  FLD float ptr [EBP + 0x14]
0046ac36  FMUL float ptr [EAX + 0x40]
0046ac39  FSTP float ptr [ESP + 0x20]
0046ac3d  FLD float ptr [EBP + 0x14]
0046ac40  FMUL float ptr [EAX + 0x44]
0046ac43  FSTP float ptr [ESP + 0x24]
0046ac47  FLD float ptr [EBP + 0x14]
0046ac4a  FMUL float ptr [EAX + 0x48]
0046ac4d  FSTP float ptr [ESP + 0x28]
0046ac51  FLD float ptr [EBP + 0x14]
0046ac54  FMUL float ptr [EAX + 0x50]
0046ac57  FSTP float ptr [ESP + 0xa0]
0046ac5e  FLD float ptr [EBP + 0x14]
0046ac61  FMUL float ptr [EAX + 0x54]
0046ac64  FSTP float ptr [ESP + 0xa4]
0046ac6b  FLD float ptr [EBP + 0x14]
0046ac6e  FMUL float ptr [EAX + 0x58]
0046ac71  FSTP float ptr [ESP + 0xa8]
0046ac78  FLD float ptr [EBP + 0x14]
0046ac7b  FMUL float ptr [EAX + 0x60]
0046ac7e  MOV EBX,dword ptr [ESP + 0x18]
0046ac82  PUSH EBX
0046ac83  LEA EDX,[ESI + 0x10]
0046ac86  FSTP float ptr [ESP + 0x34]
0046ac8a  PUSH EDX
0046ac8b  FLD float ptr [EBP + 0x14]
0046ac8e  LEA ECX,[EDI + 0x10]
0046ac91  FMUL float ptr [EAX + 0x64]
0046ac94  FSTP float ptr [ESP + 0x3c]
0046ac98  FLD float ptr [EBP + 0x14]
0046ac9b  FMUL float ptr [EAX + 0x68]
0046ac9e  FSTP float ptr [ESP + 0x40]
0046aca2  FLD float ptr [EBP + 0x14]
0046aca5  FMUL float ptr [EAX + 0x70]
0046aca8  FSTP float ptr [ESP + 0x58]
0046acac  FLD float ptr [EBP + 0x14]
0046acaf  FMUL float ptr [EAX + 0x74]
0046acb2  FSTP float ptr [ESP + 0x5c]
0046acb6  FLD float ptr [EBP + 0x14]
0046acb9  FMUL float ptr [EAX + 0x78]
0046acbc  FSTP float ptr [ESP + 0x60]
0046acc0  FLD float ptr [EBP + 0x14]
0046acc3  FMUL float ptr [EAX + 0x80]
0046acc9  FSTP float ptr [ESP + 0x78]
0046accd  FLD float ptr [EBP + 0x14]
0046acd0  FMUL float ptr [EAX + 0x84]
0046acd6  FSTP float ptr [ESP + 0x7c]
0046acda  FLD float ptr [EBP + 0x14]
0046acdd  FMUL float ptr [EAX + 0x88]
0046ace3  FSTP float ptr [ESP + 0x80]
0046acea  FLD float ptr [EBP + 0x14]
0046aced  FMUL float ptr [EAX + 0x90]
0046acf3  FSTP float ptr [ESP + 0x98]
0046acfa  FLD float ptr [EBP + 0x14]
0046acfd  FMUL float ptr [EAX + 0x94]
0046ad03  FSTP float ptr [ESP + 0x9c]
0046ad0a  FLD float ptr [EBP + 0x14]
0046ad0d  FMUL float ptr [EAX + 0x98]
0046ad13  FSTP float ptr [ESP + 0xa0]
0046ad1a  FLD float ptr [EBP + 0x14]
0046ad1d  FMUL float ptr [EAX + 0xa0]
0046ad23  FSTP float ptr [ESP + 0xb8]
0046ad2a  FLD float ptr [EBP + 0x14]
0046ad2d  FMUL float ptr [EAX + 0xa4]
0046ad33  FSTP float ptr [ESP + 0xbc]
0046ad3a  FLD float ptr [EBP + 0x14]
0046ad3d  FMUL float ptr [EAX + 0xa8]
0046ad43  LEA EAX,[ESP + 0x68]
0046ad47  PUSH EAX
0046ad48  PUSH ECX
0046ad49  FSTP float ptr [ESP + 0xc8]
0046ad50  CALL 0x0045f640
0046ad55  PUSH EBX
0046ad56  LEA EDX,[ESI + 0x20]
0046ad59  PUSH EDX
0046ad5a  LEA EAX,[ESP + 0x58]
0046ad5e  PUSH EAX
0046ad5f  LEA ECX,[EDI + 0x20]
0046ad62  PUSH ECX
0046ad63  CALL 0x0045f640
0046ad68  PUSH EBX
0046ad69  LEA EDX,[ESI + 0x30]
0046ad6c  PUSH EDX
0046ad6d  LEA EAX,[ESP + 0xa8]
0046ad74  PUSH EAX
0046ad75  LEA ECX,[EDI + 0x30]
0046ad78  PUSH ECX
0046ad79  CALL 0x0045f640
0046ad7e  PUSH EBX
0046ad7f  LEA EDX,[ESI + 0x40]
0046ad82  PUSH EDX
0046ad83  LEA EAX,[ESP + 0x58]
0046ad87  PUSH EAX
0046ad88  LEA ECX,[EDI + 0x40]
0046ad8b  PUSH ECX
0046ad8c  CALL 0x0045f640
0046ad91  ADD ESP,0x40
0046ad94  PUSH EBX
0046ad95  LEA EDX,[ESI + 0x50]
0046ad98  PUSH EDX
0046ad99  LEA EAX,[ESP + 0xa8]
0046ada0  PUSH EAX
0046ada1  LEA ECX,[EDI + 0x50]
0046ada4  PUSH ECX
0046ada5  CALL 0x0045f640
0046adaa  PUSH EBX
0046adab  LEA EDX,[ESI + 0x60]
0046adae  PUSH EDX
0046adaf  LEA EAX,[ESP + 0x48]
0046adb3  PUSH EAX
0046adb4  LEA ECX,[EDI + 0x60]
0046adb7  PUSH ECX
0046adb8  CALL 0x0045f640
0046adbd  PUSH EBX
0046adbe  LEA EDX,[ESI + 0x70]
0046adc1  PUSH EDX
0046adc2  LEA EAX,[ESP + 0x78]
0046adc6  PUSH EAX
0046adc7  LEA ECX,[EDI + 0x70]
0046adca  PUSH ECX
0046adcb  CALL 0x0045f640
0046add0  PUSH EBX
0046add1  LEA EDX,[ESI + 0x80]
0046add7  PUSH EDX
0046add8  LEA EAX,[ESP + 0xa8]
0046addf  PUSH EAX
0046ade0  LEA ECX,[EDI + 0x80]
0046ade6  PUSH ECX
0046ade7  CALL 0x0045f640
0046adec  ADD ESP,0x40
0046adef  PUSH EBX
0046adf0  LEA EDX,[ESI + 0x90]
0046adf6  PUSH EDX
0046adf7  LEA EAX,[ESP + 0x98]
0046adfe  PUSH EAX
0046adff  LEA ECX,[EDI + 0x90]
0046ae05  PUSH ECX
0046ae06  CALL 0x0045f640
0046ae0b  PUSH EBX
0046ae0c  ADD ESI,0xa0
0046ae12  PUSH ESI
0046ae13  LEA EDX,[ESP + 0xc8]
0046ae1a  PUSH EDX
0046ae1b  ADD EDI,0xa0
0046ae21  PUSH EDI
0046ae22  CALL 0x0045f640
0046ae27  ADD ESP,0x20
0046ae2a  POP EDI
0046ae2b  POP ESI
0046ae2c  POP EBX
0046ae2d  MOV ESP,EBP
0046ae2f  POP EBP
0046ae30  RET 0x10
