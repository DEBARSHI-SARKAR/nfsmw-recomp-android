005dbd80  SUB ESP,0x44
005dbd83  PUSH EBX
005dbd84  PUSH EBP
005dbd85  PUSH ESI
005dbd86  MOV EBX,ECX
005dbd88  PUSH EDI
005dbd89  MOV dword ptr [ESP + 0x10],EBX
005dbd8d  MOV ESI,0x78
005dbd92  MOV ECX,dword ptr [EBX + 0x1958]
005dbd98  XOR EAX,EAX
005dbd9a  TEST ECX,ECX
005dbd9c  JLE 0x005dbdb0
005dbd9e  LEA EDX,[EBX + 0x18]
005dbda1  MOV dword ptr [ESP + EAX*0x4 + 0x14],EDX
005dbda5  INC EAX
005dbda6  ADD EDX,0x194
005dbdac  CMP EAX,ECX
005dbdae  JL 0x005dbda1
005dbdb0  DEC ECX
005dbdb1  TEST ECX,ECX
005dbdb3  JLE 0x005dbe6e
005dbdb9  LEA EDX,[ESP + ECX*0x4 + 0x14]
005dbdbd  LEA ECX,[ECX]
005dbdc0  XOR EDI,EDI
005dbdc2  CMP ECX,0x4
005dbdc5  JL 0x005dbe39
005dbdc7  MOV EBX,dword ptr [ESP + EDI*0x4 + 0x14]
005dbdcb  MOV EBP,dword ptr [EDX]
005dbdcd  FLD float ptr [EBX + ESI*0x1]
005dbdd0  FCOMP float ptr [ESI + EBP*0x1]
005dbdd3  FNSTSW AX
005dbdd5  TEST AH,0x5
005dbdd8  JP 0x005dbde0
005dbdda  MOV dword ptr [EDX],EBX
005dbddc  MOV dword ptr [ESP + EDI*0x4 + 0x14],EBP
005dbde0  MOV EBX,dword ptr [ESP + EDI*0x4 + 0x18]
005dbde4  MOV EBP,dword ptr [EDX]
005dbde6  FLD float ptr [EBX + ESI*0x1]
005dbde9  FCOMP float ptr [ESI + EBP*0x1]
005dbdec  FNSTSW AX
005dbdee  TEST AH,0x5
005dbdf1  JP 0x005dbdf9
005dbdf3  MOV dword ptr [EDX],EBX
005dbdf5  MOV dword ptr [ESP + EDI*0x4 + 0x18],EBP
005dbdf9  MOV EBX,dword ptr [ESP + EDI*0x4 + 0x1c]
005dbdfd  MOV EBP,dword ptr [EDX]
005dbdff  FLD float ptr [EBX + ESI*0x1]
005dbe02  FCOMP float ptr [ESI + EBP*0x1]
005dbe05  FNSTSW AX
005dbe07  TEST AH,0x5
005dbe0a  JP 0x005dbe12
005dbe0c  MOV dword ptr [EDX],EBX
005dbe0e  MOV dword ptr [ESP + EDI*0x4 + 0x1c],EBP
005dbe12  MOV EBX,dword ptr [ESP + EDI*0x4 + 0x20]
005dbe16  MOV EBP,dword ptr [EDX]
005dbe18  FLD float ptr [EBX + ESI*0x1]
005dbe1b  FCOMP float ptr [ESI + EBP*0x1]
005dbe1e  FNSTSW AX
005dbe20  TEST AH,0x5
005dbe23  JP 0x005dbe2b
005dbe25  MOV dword ptr [EDX],EBX
005dbe27  MOV dword ptr [ESP + EDI*0x4 + 0x20],EBP
005dbe2b  ADD EDI,0x4
005dbe2e  LEA EAX,[ECX + -0x3]
005dbe31  CMP EDI,EAX
005dbe33  JL 0x005dbdc7
005dbe35  MOV EBX,dword ptr [ESP + 0x10]
005dbe39  CMP EDI,ECX
005dbe3b  JGE 0x005dbe62
005dbe3d  LEA ECX,[ECX]
005dbe40  MOV EBX,dword ptr [ESP + EDI*0x4 + 0x14]
005dbe44  MOV EBP,dword ptr [EDX]
005dbe46  FLD float ptr [EBX + ESI*0x1]
005dbe49  FCOMP float ptr [ESI + EBP*0x1]
005dbe4c  FNSTSW AX
005dbe4e  TEST AH,0x5
005dbe51  JP 0x005dbe59
005dbe53  MOV dword ptr [EDX],EBX
005dbe55  MOV dword ptr [ESP + EDI*0x4 + 0x14],EBP
005dbe59  INC EDI
005dbe5a  CMP EDI,ECX
005dbe5c  JL 0x005dbe40
005dbe5e  MOV EBX,dword ptr [ESP + 0x10]
005dbe62  DEC ECX
005dbe63  SUB EDX,0x4
005dbe66  TEST ECX,ECX
005dbe68  JG 0x005dbdc0
005dbe6e  MOV ECX,dword ptr [EBX + 0x1958]
005dbe74  XOR EAX,EAX
005dbe76  TEST ECX,ECX
005dbe78  JLE 0x005dbe97
005dbe7a  LEA EBX,[EBX]
005dbe80  LEA EDX,[EAX + 0x1]
005dbe83  MOV EAX,dword ptr [ESP + EAX*0x4 + 0x14]
005dbe87  MOV dword ptr [ESI + EAX*0x1 + 0x40],EDX
005dbe8b  MOV ECX,dword ptr [EBX + 0x1958]
005dbe91  MOV EAX,EDX
005dbe93  CMP EAX,ECX
005dbe95  JL 0x005dbe80
005dbe97  ADD ESI,0x4
005dbe9a  CMP ESI,0xb8
005dbea0  JL 0x005dbd92
005dbea6  POP EDI
005dbea7  POP ESI
005dbea8  POP EBP
005dbea9  POP EBX
005dbeaa  ADD ESP,0x44
005dbead  RET
