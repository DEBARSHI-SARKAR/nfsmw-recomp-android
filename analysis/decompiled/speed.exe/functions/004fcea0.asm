004fcea0  SUB ESP,0xc
004fcea3  PUSH EBX
004fcea4  PUSH EBP
004fcea5  MOV EBP,ECX
004fcea7  MOV ECX,dword ptr [EBP + 0x18]
004fceaa  XOR EBX,EBX
004fceac  XOR EAX,EAX
004fceae  CMP ECX,EBX
004fceb0  MOV dword ptr [ESP + 0x8],EBX
004fceb4  MOV dword ptr [ESP + 0x10],EBX
004fceb8  MOV dword ptr [ESP + 0xc],EAX
004fcebc  JLE 0x004fcf8d
004fcec2  PUSH ESI
004fcec3  PUSH EDI
004fcec4  MOV EDI,dword ptr [ESP + 0x20]
004fcec8  JMP 0x004fced0
004fced0  MOV ECX,dword ptr [EBP + 0x14]
004fced3  MOV EDX,dword ptr [ECX + 0x74]
004fced6  MOV ESI,dword ptr [EDX + EAX*0x8 + 0x4]
004fceda  CMP ESI,EBX
004fcedc  JZ 0x004fcf70
004fcee2  MOV EAX,dword ptr [ESI + 0x38]
004fcee5  XOR CL,CL
004fcee7  CMP EAX,EBX
004fcee9  JZ 0x004fcf01
004fceeb  MOV EAX,dword ptr [ESI + 0x30]
004fceee  CMP EAX,EDI
004fcef0  JL 0x004fcf01
004fcef2  MOV EDX,dword ptr [ESP + 0x24]
004fcef6  ADD EDX,EDI
004fcef8  CMP EAX,EDX
004fcefa  JGE 0x004fcf01
004fcefc  MOV CL,0x1
004fcefe  MOV dword ptr [ESI + 0x70],EBX
004fcf01  CMP dword ptr [ESI + 0x3c],EBX
004fcf04  JZ 0x004fcf1c
004fcf06  MOV EAX,dword ptr [ESI + 0x34]
004fcf09  CMP EAX,EDI
004fcf0b  JL 0x004fcf1c
004fcf0d  MOV EDX,dword ptr [ESP + 0x24]
004fcf11  ADD EDX,EDI
004fcf13  CMP EAX,EDX
004fcf15  JGE 0x004fcf1c
004fcf17  MOV CL,0x1
004fcf19  MOV dword ptr [ESI + 0x74],EBX
004fcf1c  CMP dword ptr [ESI + 0x70],EBX
004fcf1f  JNZ 0x004fcf70
004fcf21  CMP CL,BL
004fcf23  JZ 0x004fcf70
004fcf25  MOV ECX,ESI
004fcf27  CALL 0x006dadf0
004fcf2c  MOV EAX,dword ptr [ESI + 0x24]
004fcf2f  AND EAX,0xff
004fcf34  MOV dword ptr [EAX*0x4 + 0x915198],EBX
004fcf3b  MOV EAX,dword ptr [ESI + 0x24]
004fcf3e  CMP EAX,0x530b82b0
004fcf43  JZ 0x004fcf5a
004fcf45  CMP EAX,0x530b82b1
004fcf4a  JZ 0x004fcf5a
004fcf4c  CMP EAX,0x530b82b2
004fcf51  JZ 0x004fcf5a
004fcf53  CMP EAX,0x530b82b3
004fcf58  JNZ 0x004fcf63
004fcf5a  PUSH EAX
004fcf5b  CALL 0x0073ad20
004fcf60  ADD ESP,0x4
004fcf63  MOV EAX,dword ptr [ESP + 0x10]
004fcf67  INC EAX
004fcf68  MOV dword ptr [ESP + 0x18],ESI
004fcf6c  MOV dword ptr [ESP + 0x10],EAX
004fcf70  MOV EAX,dword ptr [ESP + 0x14]
004fcf74  MOV ECX,dword ptr [EBP + 0x18]
004fcf77  INC EAX
004fcf78  CMP EAX,ECX
004fcf7a  MOV dword ptr [ESP + 0x14],EAX
004fcf7e  JL 0x004fced0
004fcf84  CMP dword ptr [ESP + 0x10],0x1
004fcf89  POP EDI
004fcf8a  POP ESI
004fcf8b  JZ 0x004fcf91
004fcf8d  XOR EAX,EAX
004fcf8f  JMP 0x004fcf95
004fcf91  MOV EAX,dword ptr [ESP + 0x10]
004fcf95  PUSH EBX
004fcf96  PUSH EAX
004fcf97  PUSH EBP
004fcf98  CALL 0x00506ef0
004fcf9d  PUSH EBX
004fcf9e  PUSH EBP
004fcf9f  CALL 0x00585d10
004fcfa4  ADD ESP,0x14
004fcfa7  POP EBP
004fcfa8  MOV dword ptr [0x00915fe4],0x1
004fcfb2  POP EBX
004fcfb3  ADD ESP,0xc
004fcfb6  RET 0x8
