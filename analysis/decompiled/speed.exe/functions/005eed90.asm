005eed90  PUSH EBP
005eed91  PUSH ESI
005eed92  MOV EBP,ECX
005eed94  PUSH EDI
005eed95  JMP 0x005eeda0
005eeda0  MOV ECX,dword ptr [EBP + 0x80]
005eeda6  TEST ECX,ECX
005eeda8  JZ 0x005eee5c
005eedae  MOV EAX,dword ptr [EBP + 0x84]
005eedb4  SUB EAX,ECX
005eedb6  SAR EAX,0x2
005eedb9  TEST EAX,EAX
005eedbb  JBE 0x005eee5c
005eedc1  MOV EAX,ECX
005eedc3  MOV ESI,dword ptr [EAX]
005eedc5  TEST byte ptr [ESI + 0x4d],0x2
005eedc9  JZ 0x005eee19
005eedcb  MOV EDX,dword ptr [0x0091e00c]
005eedd1  MOV ECX,dword ptr [EDX + 0x84]
005eedd7  MOV EAX,dword ptr [EDX + 0x80]
005eeddd  CMP EAX,ECX
005eeddf  JZ 0x005eee15
005eede1  CMP dword ptr [EAX],ESI
005eede3  JZ 0x005eedec
005eede5  ADD EAX,0x4
005eede8  CMP EAX,ECX
005eedea  JNZ 0x005eede1
005eedec  CMP EAX,ECX
005eedee  JZ 0x005eee15
005eedf0  LEA EDI,[EDX + 0x84]
005eedf6  MOV EDX,dword ptr [EDI]
005eedf8  LEA ECX,[EAX + 0x4]
005eedfb  SUB EDX,ECX
005eedfd  SAR EDX,0x2
005eee00  SHL EDX,0x2
005eee03  PUSH EDX
005eee04  PUSH ECX
005eee05  PUSH EAX
005eee06  CALL 0x007c4840
005eee0b  MOV EAX,dword ptr [EDI]
005eee0d  ADD ESP,0xc
005eee10  ADD EAX,-0x4
005eee13  MOV dword ptr [EDI],EAX
005eee15  AND byte ptr [ESI + 0x4d],0xfd
005eee19  MOV EAX,dword ptr [ESI + 0x6c]
005eee1c  TEST EAX,EAX
005eee1e  JZ 0x005eee53
005eee20  MOV CL,byte ptr [ESI + 0x4d]
005eee23  NOT CL
005eee25  XOR EDI,EDI
005eee27  TEST CL,0x1
005eee2a  JZ 0x005eee3b
005eee2c  MOV ECX,dword ptr [EAX + 0x4]
005eee2f  PUSH 0x402830
005eee34  CALL 0x005d59f0
005eee39  MOV EDI,EAX
005eee3b  MOV EAX,dword ptr [ESI + 0x6c]
005eee3e  MOV EDX,dword ptr [ESI + 0x28]
005eee41  LEA ECX,[ESI + 0x28]
005eee44  PUSH EAX
005eee45  CALL dword ptr [EDX + 0x8]
005eee48  TEST EDI,EDI
005eee4a  JZ 0x005eee53
005eee4c  MOV EDX,dword ptr [EDI]
005eee4e  MOV ECX,EDI
005eee50  CALL dword ptr [EDX + 0x8]
005eee53  MOV byte ptr [ESI + 0x4c],0x1
005eee57  JMP 0x005eeda0
005eee5c  MOV EAX,dword ptr [EBP + 0x80]
005eee62  TEST EAX,EAX
005eee64  POP EDI
005eee65  POP ESI
005eee66  JZ 0x005eee84
005eee68  MOV ECX,dword ptr [EBP + 0x88]
005eee6e  SUB ECX,EAX
005eee70  SAR ECX,0x2
005eee73  PUSH 0x0
005eee75  SHL ECX,0x2
005eee78  PUSH ECX
005eee79  PUSH EAX
005eee7a  MOV ECX,0x925b30
005eee7f  CALL 0x005d0370
005eee84  MOV dword ptr [EBP + 0x80],0x0
005eee8e  MOV dword ptr [EBP + 0x84],0x0
005eee98  MOV dword ptr [EBP + 0x88],0x0
005eeea2  POP EBP
005eeea3  RET
