005ceb90  PUSH EBX
005ceb91  PUSH ESI
005ceb92  MOV ESI,ECX
005ceb94  LEA EAX,[ESI + 0x3]
005ceb97  CMP ESI,EAX
005ceb99  JNC 0x005cebae
005ceb9b  JMP 0x005ceba0
005ceba0  MOV BL,byte ptr [EAX]
005ceba2  MOV DL,byte ptr [ECX]
005ceba4  MOV byte ptr [ECX],BL
005ceba6  INC ECX
005ceba7  MOV byte ptr [EAX],DL
005ceba9  DEC EAX
005cebaa  CMP ECX,EAX
005cebac  JC 0x005ceba0
005cebae  PUSH 0x5
005cebb0  PUSH 0x1b
005cebb2  PUSH 0x4
005cebb4  PUSH 0x1
005cebb6  PUSH 0x3
005cebb8  PUSH 0x1
005cebba  PUSH 0x2
005cebbc  PUSH 0x1
005cebbe  PUSH 0x1
005cebc0  PUSH 0x1
005cebc2  PUSH 0x0
005cebc4  PUSH 0x1
005cebc6  LEA EAX,[ESI + 0x4]
005cebc9  PUSH 0x6
005cebcb  PUSH EAX
005cebcc  CALL 0x005ce500
005cebd1  LEA EAX,[ESI + 0x8]
005cebd4  LEA ECX,[EAX + 0x3]
005cebd7  ADD ESP,0x38
005cebda  CMP EAX,ECX
005cebdc  JNC 0x005cebee
005cebde  MOV EDI,EDI
005cebe0  MOV BL,byte ptr [ECX]
005cebe2  MOV DL,byte ptr [EAX]
005cebe4  MOV byte ptr [EAX],BL
005cebe6  INC EAX
005cebe7  MOV byte ptr [ECX],DL
005cebe9  DEC ECX
005cebea  CMP EAX,ECX
005cebec  JC 0x005cebe0
005cebee  LEA EAX,[ESI + 0xc]
005cebf1  LEA ECX,[EAX + 0x3]
005cebf4  CMP EAX,ECX
005cebf6  JNC 0x005cec06
005cebf8  MOV BL,byte ptr [ECX]
005cebfa  MOV DL,byte ptr [EAX]
005cebfc  MOV byte ptr [EAX],BL
005cebfe  INC EAX
005cebff  MOV byte ptr [ECX],DL
005cec01  DEC ECX
005cec02  CMP EAX,ECX
005cec04  JC 0x005cebf8
005cec06  POP ESI
005cec07  POP EBX
005cec08  RET
