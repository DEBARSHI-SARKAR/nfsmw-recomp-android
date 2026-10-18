004d1a60  PUSH ESI
004d1a61  MOV ESI,ECX
004d1a63  MOV dword ptr [ESI + 0x90],0x0
004d1a6d  MOV EAX,[0x00911fa8]
004d1a72  MOV ECX,dword ptr [EAX + 0x94]
004d1a78  PUSH EDI
004d1a79  CALL 0x004abe60
004d1a7e  TEST EAX,EAX
004d1a80  MOV dword ptr [ESI + 0xf0],EAX
004d1a86  JLE 0x004d1a96
004d1a88  PUSH 0x0
004d1a8a  PUSH EAX
004d1a8b  LEA ECX,[ESI + 0xdc]
004d1a91  CALL 0x004ce820
004d1a96  XOR EDI,EDI
004d1a98  PUSH 0x2
004d1a9a  PUSH EDI
004d1a9b  MOV ECX,ESI
004d1a9d  CALL 0x004ca660
004d1aa2  INC EDI
004d1aa3  CMP EDI,0x7
004d1aa6  JL 0x004d1a98
004d1aa8  MOV dword ptr [ESI + 0x9c],0xffffffff
004d1ab2  MOV dword ptr [ESI + 0xa0],0x0
004d1abc  MOV ECX,dword ptr [ESI + 0xbc]
004d1ac2  MOV EAX,dword ptr [ECX]
004d1ac4  MOV dword ptr [ECX],ECX
004d1ac6  MOV ECX,dword ptr [ESI + 0xbc]
004d1acc  MOV dword ptr [ECX + 0x4],ECX
004d1acf  CMP EAX,dword ptr [ESI + 0xbc]
004d1ad5  MOV dword ptr [ESI + 0xc0],0x0
004d1adf  JZ 0x004d1afc
004d1ae1  MOV EDI,dword ptr [EAX]
004d1ae3  PUSH 0x0
004d1ae5  PUSH 0x30
004d1ae7  PUSH EAX
004d1ae8  MOV ECX,0x925b30
004d1aed  CALL 0x005d0370
004d1af2  CMP EDI,dword ptr [ESI + 0xbc]
004d1af8  MOV EAX,EDI
004d1afa  JNZ 0x004d1ae1
004d1afc  LEA ECX,[ESI + 0xa4]
004d1b02  CALL 0x004d0c40
004d1b07  MOV ECX,dword ptr [ESI + 0xb4]
004d1b0d  MOV dword ptr [ESI + 0xb0],ECX
004d1b13  XOR EDX,EDX
004d1b15  MOV dword ptr [0x00911ed4],EDX
004d1b1b  MOV dword ptr [0x00911ed8],EDX
004d1b21  MOV dword ptr [0x00911edc],EDX
004d1b27  POP EDI
004d1b28  MOV dword ptr [0x00911ee0],EDX
004d1b2e  POP ESI
004d1b2f  RET
