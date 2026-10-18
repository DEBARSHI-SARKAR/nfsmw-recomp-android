004cdba0  PUSH EBP
004cdba1  MOV EBP,ESP
004cdba3  PUSH -0x1
004cdba5  PUSH 0x86c690
004cdbaa  MOV EAX,FS:[0x0]
004cdbb0  PUSH EAX
004cdbb1  MOV dword ptr FS:[0x0],ESP
004cdbb8  SUB ESP,0x14
004cdbbb  MOV EAX,dword ptr [EBP + 0x10]
004cdbbe  PUSH EBX
004cdbbf  PUSH ESI
004cdbc0  MOV ESI,ECX
004cdbc2  MOV ECX,dword ptr [EAX]
004cdbc4  MOV dword ptr [EBP + -0x18],ECX
004cdbc7  MOV ECX,dword ptr [ESI + 0x4]
004cdbca  TEST ECX,ECX
004cdbcc  PUSH EDI
004cdbcd  MOV dword ptr [EBP + -0x10],ESP
004cdbd0  MOV dword ptr [EBP + -0x20],ESI
004cdbd3  JNZ 0x004cdbd9
004cdbd5  XOR EDI,EDI
004cdbd7  JMP 0x004cdbe6
004cdbd9  MOV EAX,dword ptr [ESI + 0xc]
004cdbdc  SUB EAX,ECX
004cdbde  SAR EAX,0x2
004cdbe1  MOV dword ptr [EBP + 0x10],EAX
004cdbe4  MOV EDI,EAX
004cdbe6  MOV EDX,dword ptr [EBP + 0xc]
004cdbe9  TEST EDX,EDX
004cdbeb  JZ 0x004cde19
004cdbf1  TEST ECX,ECX
004cdbf3  JNZ 0x004cdbf9
004cdbf5  XOR EAX,EAX
004cdbf7  JMP 0x004cdc01
004cdbf9  MOV EAX,dword ptr [ESI + 0x8]
004cdbfc  SUB EAX,ECX
004cdbfe  SAR EAX,0x2
004cdc01  MOV EBX,0x3fffffff
004cdc06  SUB EBX,EAX
004cdc08  CMP EBX,EDX
004cdc0a  JNC 0x004cdc13
004cdc0c  MOV ECX,ESI
004cdc0e  CALL 0x004ccf90
004cdc13  TEST ECX,ECX
004cdc15  JNZ 0x004cdc1b
004cdc17  XOR EAX,EAX
004cdc19  JMP 0x004cdc23
004cdc1b  MOV EAX,dword ptr [ESI + 0x8]
004cdc1e  SUB EAX,ECX
004cdc20  SAR EAX,0x2
004cdc23  ADD EAX,EDX
004cdc25  CMP EDI,EAX
004cdc27  JNC 0x004cdd63
004cdc2d  MOV EAX,EDI
004cdc2f  SHR EAX,0x1
004cdc31  MOV EBX,0x3fffffff
004cdc36  SUB EBX,EAX
004cdc38  CMP EBX,EDI
004cdc3a  JNC 0x004cdc45
004cdc3c  XOR EBX,EBX
004cdc3e  MOV dword ptr [EBP + 0x10],EBX
004cdc41  MOV EDI,EBX
004cdc43  JMP 0x004cdc4c
004cdc45  ADD EDI,EAX
004cdc47  MOV dword ptr [EBP + 0x10],EDI
004cdc4a  XOR EBX,EBX
004cdc4c  CMP ECX,EBX
004cdc4e  JNZ 0x004cdc54
004cdc50  XOR EAX,EAX
004cdc52  JMP 0x004cdc5c
004cdc54  MOV EAX,dword ptr [ESI + 0x8]
004cdc57  SUB EAX,ECX
004cdc59  SAR EAX,0x2
004cdc5c  ADD EAX,EDX
004cdc5e  CMP EDI,EAX
004cdc60  JNC 0x004cdc79
004cdc62  CMP ECX,EBX
004cdc64  JNZ 0x004cdc6a
004cdc66  XOR EAX,EAX
004cdc68  JMP 0x004cdc72
004cdc6a  MOV EAX,dword ptr [ESI + 0x8]
004cdc6d  SUB EAX,ECX
004cdc6f  SAR EAX,0x2
004cdc72  ADD EAX,EDX
004cdc74  MOV dword ptr [EBP + 0x10],EAX
004cdc77  MOV EDI,EAX
004cdc79  CMP EDI,EBX
004cdc7b  JZ 0x004cdc95
004cdc7d  PUSH EBX
004cdc7e  LEA EDX,[EDI*0x4 + 0x0]
004cdc85  PUSH EDX
004cdc86  MOV ECX,0x925b30
004cdc8b  CALL 0x005d29d0
004cdc90  MOV dword ptr [EBP + -0x14],EAX
004cdc93  JMP 0x004cdc98
004cdc95  MOV dword ptr [EBP + -0x14],EBX
004cdc98  MOV EDX,dword ptr [EBP + -0x14]
004cdc9b  MOV EAX,dword ptr [ESI + 0x4]
004cdc9e  MOV byte ptr [EBP + -0x1c],0x0
004cdca2  MOV ECX,dword ptr [EBP + -0x1c]
004cdca5  PUSH ECX
004cdca6  MOV ECX,dword ptr [EBP + 0x8]
004cdca9  PUSH ESI
004cdcaa  PUSH EDX
004cdcab  PUSH ECX
004cdcac  PUSH EAX
004cdcad  MOV dword ptr [EBP + -0x4],EBX
004cdcb0  CALL 0x004b8560
004cdcb5  MOV EBX,dword ptr [EBP + 0xc]
004cdcb8  ADD ESP,0x14
004cdcbb  MOV byte ptr [EBP + -0x1c],0x0
004cdcbf  MOV EDX,dword ptr [EBP + -0x1c]
004cdcc2  PUSH EDX
004cdcc3  MOV EDI,EAX
004cdcc5  PUSH ESI
004cdcc6  LEA EAX,[EBP + -0x18]
004cdcc9  PUSH EAX
004cdcca  PUSH EBX
004cdccb  PUSH EDI
004cdccc  CALL 0x004c1a10
004cdcd1  MOV ECX,dword ptr [ESI + 0x8]
004cdcd4  ADD ESP,0x14
004cdcd7  MOV byte ptr [EBP + 0xc],0x0
004cdcdb  MOV EDX,dword ptr [EBP + 0xc]
004cdcde  PUSH EDX
004cdcdf  PUSH ESI
004cdce0  LEA EAX,[EDI + EBX*0x4]
004cdce3  PUSH EAX
004cdce4  MOV EAX,dword ptr [EBP + 0x8]
004cdce7  PUSH ECX
004cdce8  PUSH EAX
004cdce9  CALL 0x004b8560
004cdcee  MOV ECX,dword ptr [ESI + 0x4]
004cdcf1  ADD ESP,0x14
004cdcf4  TEST ECX,ECX
004cdcf6  MOV dword ptr [EBP + -0x4],0xffffffff
004cdcfd  JNZ 0x004cdd03
004cdcff  XOR EAX,EAX
004cdd01  JMP 0x004cdd0b
004cdd03  MOV EAX,dword ptr [ESI + 0x8]
004cdd06  SUB EAX,ECX
004cdd08  SAR EAX,0x2
004cdd0b  ADD EBX,EAX
004cdd0d  TEST ECX,ECX
004cdd0f  JZ 0x004cdd22
004cdd11  MOV EDX,dword ptr [ESI + 0xc]
004cdd14  SUB EDX,ECX
004cdd16  SAR EDX,0x2
004cdd19  PUSH EDX
004cdd1a  PUSH ECX
004cdd1b  MOV ECX,ESI
004cdd1d  CALL 0x004b73e0
004cdd22  MOV EAX,dword ptr [EBP + -0x14]
004cdd25  MOV ECX,dword ptr [EBP + 0x10]
004cdd28  LEA EDX,[EAX + ECX*0x4]
004cdd2b  LEA ECX,[EAX + EBX*0x4]
004cdd2e  MOV dword ptr [ESI + 0xc],EDX
004cdd31  MOV dword ptr [ESI + 0x8],ECX
004cdd34  MOV dword ptr [ESI + 0x4],EAX
004cdd37  MOV ECX,dword ptr [EBP + -0xc]
004cdd3a  MOV dword ptr FS:[0x0],ECX
004cdd41  POP EDI
004cdd42  POP ESI
004cdd43  POP EBX
004cdd44  MOV ESP,EBP
004cdd46  POP EBP
004cdd47  RET 0xc
004cdd63  MOV EBX,dword ptr [ESI + 0x8]
004cdd66  MOV EDI,dword ptr [EBP + 0x8]
004cdd69  MOV ECX,EBX
004cdd6b  SUB ECX,EDI
004cdd6d  SAR ECX,0x2
004cdd70  CMP ECX,EDX
004cdd72  JNC 0x004cdddd
004cdd74  LEA EAX,[EDX*0x4 + 0x0]
004cdd7b  MOV dword ptr [EBP + 0x8],EAX
004cdd7e  ADD EAX,EDI
004cdd80  PUSH EAX
004cdd81  PUSH EBX
004cdd82  PUSH EDI
004cdd83  MOV ECX,ESI
004cdd85  CALL 0x004c9880
004cdd8a  MOV ECX,dword ptr [ESI + 0x8]
004cdd8d  MOV EAX,dword ptr [EBP + 0xc]
004cdd90  LEA EDX,[EBP + -0x18]
004cdd93  PUSH EDX
004cdd94  MOV EDX,ECX
004cdd96  SUB EDX,EDI
004cdd98  SAR EDX,0x2
004cdd9b  SUB EAX,EDX
004cdd9d  PUSH EAX
004cdd9e  PUSH ECX
004cdd9f  MOV ECX,ESI
004cdda1  MOV dword ptr [EBP + -0x4],0x2
004cdda8  CALL 0x004cbaa0
004cddad  MOV EBX,dword ptr [ESI + 0x8]
004cddb0  MOV EAX,dword ptr [EBP + 0x8]
004cddb3  ADD EBX,EAX
004cddb5  MOV dword ptr [ESI + 0x8],EBX
004cddb8  LEA ECX,[EBP + -0x18]
004cddbb  MOV ESI,EBX
004cddbd  PUSH ECX
004cddbe  SUB ESI,EAX
004cddc0  PUSH ESI
004cddc1  PUSH EDI
004cddc2  CALL 0x004b7bd0
004cddc7  ADD ESP,0xc
004cddca  MOV ECX,dword ptr [EBP + -0xc]
004cddcd  MOV dword ptr FS:[0x0],ECX
004cddd4  POP EDI
004cddd5  POP ESI
004cddd6  POP EBX
004cddd7  MOV ESP,EBP
004cddd9  POP EBP
004cddda  RET 0xc
004cdddd  LEA ECX,[EDX*0x4 + 0x0]
004cdde4  PUSH EBX
004cdde5  MOV EAX,EBX
004cdde7  SUB EAX,ECX
004cdde9  PUSH EBX
004cddea  MOV dword ptr [EBP + 0x8],ECX
004cdded  PUSH EAX
004cddee  MOV ECX,ESI
004cddf0  MOV dword ptr [EBP + 0xc],EAX
004cddf3  CALL 0x004c9880
004cddf8  MOV EDX,dword ptr [EBP + 0xc]
004cddfb  PUSH EBX
004cddfc  PUSH EDX
004cddfd  PUSH EDI
004cddfe  MOV dword ptr [ESI + 0x8],EAX
004cde01  CALL 0x004c1240
004cde06  MOV ECX,dword ptr [EBP + 0x8]
004cde09  LEA EAX,[EBP + -0x18]
004cde0c  PUSH EAX
004cde0d  ADD ECX,EDI
004cde0f  PUSH ECX
004cde10  PUSH EDI
004cde11  CALL 0x004b7bd0
004cde16  ADD ESP,0x18
004cde19  MOV ECX,dword ptr [EBP + -0xc]
004cde1c  POP EDI
004cde1d  POP ESI
004cde1e  MOV dword ptr FS:[0x0],ECX
004cde25  POP EBX
004cde26  MOV ESP,EBP
004cde28  POP EBP
004cde29  RET 0xc
