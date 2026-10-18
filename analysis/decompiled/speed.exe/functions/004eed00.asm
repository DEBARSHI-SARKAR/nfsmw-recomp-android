004eed00  SUB ESP,0x1c
004eed03  PUSH EBX
004eed04  PUSH EBP
004eed05  PUSH ESI
004eed06  MOV ESI,ECX
004eed08  MOV EBP,dword ptr [ESI + 0x50]
004eed0b  XOR EBX,EBX
004eed0d  CMP EBP,EBX
004eed0f  JZ 0x004eedaa
004eed15  CMP byte ptr [EBP + 0x20],BL
004eed18  JNZ 0x004eed30
004eed1a  MOV EAX,dword ptr [EBP]
004eed1d  PUSH 0x1
004eed1f  MOV ECX,EBP
004eed21  CALL dword ptr [EAX]
004eed23  MOV dword ptr [ESI + 0x50],EBX
004eed26  MOV byte ptr [ESI + 0x28],BL
004eed29  POP ESI
004eed2a  POP EBP
004eed2b  POP EBX
004eed2c  ADD ESP,0x1c
004eed2f  RET
004eed30  PUSH EDI
004eed31  MOV EDI,dword ptr [ESI + 0x10]
004eed34  CMP EDI,EBX
004eed36  MOV dword ptr [ESP + 0x18],0x7fff
004eed3e  MOV dword ptr [ESP + 0x14],EBX
004eed42  MOV dword ptr [ESP + 0x20],EBX
004eed46  MOV dword ptr [ESP + 0x24],EBX
004eed4a  MOV dword ptr [ESP + 0x28],EBX
004eed4e  MOV dword ptr [ESP + 0x1c],0x1000
004eed56  JZ 0x004eed68
004eed58  MOV EAX,dword ptr [EDI]
004eed5a  SAR EAX,0x10
004eed5d  AND EAX,0x7fff
004eed62  MOV dword ptr [ESP + 0x10],EAX
004eed66  JMP 0x004eed6c
004eed68  MOV dword ptr [ESP + 0x10],EBX
004eed6c  FILD dword ptr [ESP + 0x10]
004eed70  FMUL float ptr [ESI + 0x48]
004eed73  CALL 0x007c4b80
004eed78  CMP EDI,EBX
004eed7a  MOV dword ptr [ESP + 0x18],EAX
004eed7e  JZ 0x004eed97
004eed80  MOV ECX,dword ptr [0x00911fa8]
004eed86  MOV EDX,dword ptr [ECX + 0x24]
004eed89  CMP dword ptr [EDX + 0x24],EBX
004eed8c  MOV EAX,dword ptr [EDI]
004eed8e  JZ 0x004eed97
004eed90  AND EAX,0xffff
004eed95  JMP 0x004eed99
004eed97  XOR EAX,EAX
004eed99  MOV dword ptr [ESP + 0x20],EAX
004eed9d  LEA EAX,[ESP + 0x14]
004eeda1  PUSH EAX
004eeda2  MOV ECX,EBP
004eeda4  CALL 0x004cd570
004eeda9  POP EDI
004eedaa  MOV byte ptr [ESI + 0x28],BL
004eedad  POP ESI
004eedae  POP EBP
004eedaf  POP EBX
004eedb0  ADD ESP,0x1c
004eedb3  RET
