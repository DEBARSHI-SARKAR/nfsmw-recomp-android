004b4dd0  PUSH ESI
004b4dd1  MOV ESI,ECX
004b4dd3  FILD dword ptr [ESI + 0x74]
004b4dd6  PUSH EDI
004b4dd7  MOV EDI,dword ptr [ESI + 0x28]
004b4dda  FMUL float ptr [EDI + 0xec]
004b4de0  CALL 0x007c4b80
004b4de5  FILD dword ptr [ESI + 0x38]
004b4de8  MOV dword ptr [ESI + 0x74],EAX
004b4deb  FMUL float ptr [EDI + 0x108]
004b4df1  CALL 0x007c4b80
004b4df6  FILD dword ptr [ESI + 0x3c]
004b4df9  MOV dword ptr [ESI + 0x38],EAX
004b4dfc  FMUL float ptr [EDI + 0x108]
004b4e02  CALL 0x007c4b80
004b4e07  FILD dword ptr [ESI + 0x40]
004b4e0a  MOV dword ptr [ESI + 0x3c],EAX
004b4e0d  FMUL float ptr [EDI + 0x108]
004b4e13  CALL 0x007c4b80
004b4e18  POP EDI
004b4e19  MOV dword ptr [ESI + 0x40],EAX
004b4e1c  POP ESI
004b4e1d  RET
