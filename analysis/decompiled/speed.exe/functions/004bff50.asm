004bff50  PUSH ESI
004bff51  MOV ESI,ECX
004bff53  MOV EAX,dword ptr [ESI + 0x8]
004bff56  PUSH EDI
004bff57  MOV EDI,dword ptr [ESP + 0xc]
004bff5b  CMP EDI,EAX
004bff5d  JBE 0x004bffb6
004bff5f  MOV EAX,dword ptr [ESI]
004bff61  PUSH EBX
004bff62  PUSH EBP
004bff63  PUSH EDI
004bff64  CALL dword ptr [EAX + 0x14]
004bff67  MOV ECX,dword ptr [ESI + 0x8]
004bff6a  MOV EDX,dword ptr [ESI]
004bff6c  MOV EBX,dword ptr [ESI + 0x4]
004bff6f  MOV EBP,dword ptr [ESI + 0xc]
004bff72  PUSH 0x10
004bff74  MOV dword ptr [ESP + 0x18],ECX
004bff78  PUSH EDI
004bff79  MOV ECX,ESI
004bff7b  CALL dword ptr [EDX + 0x4]
004bff7e  CMP EBX,EAX
004bff80  MOV dword ptr [ESI + 0x4],EAX
004bff83  MOV dword ptr [ESI + 0x8],EDI
004bff86  JZ 0x004bffb4
004bff88  TEST EBP,EBP
004bff8a  MOV dword ptr [ESI + 0xc],0x0
004bff91  JLE 0x004bffa3
004bff93  MOV EDI,EBX
004bff95  PUSH EDI
004bff96  MOV ECX,ESI
004bff98  CALL 0x004c0540
004bff9d  ADD EDI,0x4
004bffa0  DEC EBP
004bffa1  JNZ 0x004bff95
004bffa3  TEST EBX,EBX
004bffa5  JZ 0x004bffb4
004bffa7  MOV ECX,dword ptr [ESP + 0x14]
004bffab  MOV EAX,dword ptr [ESI]
004bffad  PUSH ECX
004bffae  PUSH EBX
004bffaf  MOV ECX,ESI
004bffb1  CALL dword ptr [EAX + 0x8]
004bffb4  POP EBP
004bffb5  POP EBX
004bffb6  POP EDI
004bffb7  POP ESI
004bffb8  RET 0x4
