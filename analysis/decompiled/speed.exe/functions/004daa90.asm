004daa90  PUSH ESI
004daa91  MOV ESI,dword ptr [ESP + 0x8]
004daa95  MOV EAX,dword ptr [ESI]
004daa97  PUSH EDI
004daa98  MOV EDI,ECX
004daa9a  MOV ECX,ESI
004daa9c  CALL dword ptr [EAX + 0x4]
004daa9f  MOV EAX,dword ptr [EAX]
004daaa1  SAR EAX,0x4
004daaa4  AND EAX,0xfff
004daaa9  DEC EAX
004daaaa  JZ 0x004daac4
004daaac  SUB EAX,0xa
004daaaf  JZ 0x004daabc
004daab1  DEC EAX
004daab2  JNZ 0x004daac7
004daab4  MOV dword ptr [EDI + 0x2c],ESI
004daab7  POP EDI
004daab8  POP ESI
004daab9  RET 0x4
004daabc  MOV dword ptr [EDI + 0x30],ESI
004daabf  POP EDI
004daac0  POP ESI
004daac1  RET 0x4
004daac4  MOV dword ptr [EDI + 0x28],ESI
004daac7  POP EDI
004daac8  POP ESI
004daac9  RET 0x4
