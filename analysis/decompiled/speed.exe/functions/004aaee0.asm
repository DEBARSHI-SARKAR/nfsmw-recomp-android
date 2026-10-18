004aaee0  PUSH ESI
004aaee1  MOV ESI,ECX
004aaee3  PUSH EDI
004aaee4  MOV EDI,dword ptr [ESP + 0xc]
004aaee8  FLD float ptr [EDI + 0x4]
004aaeeb  MOV EAX,dword ptr [EDI]
004aaeed  FLD float ptr [EDI + 0x8]
004aaef0  MOV dword ptr [ESI],EAX
004aaef2  FXCH
004aaef4  FSTP float ptr [ESI + 0x4]
004aaef7  FSTP float ptr [ESI + 0x8]
004aaefa  MOV ECX,dword ptr [EDI + 0x10]
004aaefd  FLD float ptr [EDI + 0x14]
004aaf00  FLD float ptr [EDI + 0x18]
004aaf03  MOV dword ptr [ESI + 0x10],ECX
004aaf06  FXCH
004aaf08  LEA ECX,[EDI + 0x34]
004aaf0b  FSTP float ptr [ESI + 0x14]
004aaf0e  PUSH ECX
004aaf0f  LEA ECX,[ESI + 0x34]
004aaf12  FSTP float ptr [ESI + 0x18]
004aaf15  MOV EDX,dword ptr [EDI + 0x20]
004aaf18  FLD float ptr [EDI + 0x24]
004aaf1b  FLD float ptr [EDI + 0x28]
004aaf1e  MOV dword ptr [ESI + 0x20],EDX
004aaf21  FXCH
004aaf23  FSTP float ptr [ESI + 0x24]
004aaf26  FSTP float ptr [ESI + 0x28]
004aaf29  MOV EAX,dword ptr [EDI + 0x30]
004aaf2c  MOV dword ptr [ESI + 0x30],EAX
004aaf2f  CALL 0x00452950
004aaf34  MOV EDX,dword ptr [EDI + 0x40]
004aaf37  MOV dword ptr [ESI + 0x40],EDX
004aaf3a  MOV EAX,dword ptr [EDI + 0x44]
004aaf3d  MOV dword ptr [ESI + 0x44],EAX
004aaf40  POP EDI
004aaf41  MOV EAX,ESI
004aaf43  POP ESI
004aaf44  RET 0x4
