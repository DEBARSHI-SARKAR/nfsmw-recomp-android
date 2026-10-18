0065fca0  MOV EAX,dword ptr [ESP + 0x8]
0065fca4  MOV EDX,dword ptr [ESP + 0x10]
0065fca8  PUSH EBX
0065fca9  MOV EBX,dword ptr [ESP + 0x8]
0065fcad  PUSH ESI
0065fcae  MOV ESI,ECX
0065fcb0  MOV ECX,dword ptr [ESP + 0x14]
0065fcb4  MOV dword ptr [ESI + 0xc],EAX
0065fcb7  MOV EAX,dword ptr [ESP + 0x1c]
0065fcbb  PUSH EDI
0065fcbc  PUSH EBX
0065fcbd  MOV byte ptr [ESI + 0x8],0x1
0065fcc1  MOV dword ptr [ESI + 0x10],ECX
0065fcc4  MOV dword ptr [ESI + 0x14],EDX
0065fcc7  MOV dword ptr [ESI + 0x18],EAX
0065fcca  CALL 0x00461970
0065fccf  XOR EDI,EDI
0065fcd1  PUSH EBX
0065fcd2  MOV dword ptr [ESI + 0x1c],EAX
0065fcd5  MOV dword ptr [ESI + 0x20],EDI
0065fcd8  MOV dword ptr [ESI + 0x2c],EDI
0065fcdb  MOV dword ptr [ESI + 0x30],EDI
0065fcde  MOV dword ptr [ESI + 0x4c],EDI
0065fce1  MOV dword ptr [ESI + 0x44],EDI
0065fce4  MOV dword ptr [ESI + 0x48],EDI
0065fce7  MOV dword ptr [ESI + 0x34],EDI
0065fcea  MOV dword ptr [ESI + 0x38],EDI
0065fced  MOV dword ptr [ESI + 0x28],0x2000
0065fcf4  CALL 0x00461970
0065fcf9  MOV ECX,dword ptr [ESI + 0x1c]
0065fcfc  PUSH ECX
0065fcfd  MOV dword ptr [ESI + 0x24],EAX
0065fd00  MOV dword ptr [ESI + 0x20],EDI
0065fd03  CALL 0x0065f740
0065fd08  ADD ESP,0xc
0065fd0b  CMP EAX,EDI
0065fd0d  MOV dword ptr [ESI + 0x40],EAX
0065fd10  JGE 0x0065fd15
0065fd12  MOV dword ptr [ESI + 0x40],EDI
0065fd15  CMP dword ptr [ESI + 0x40],EDI
0065fd18  MOV dword ptr [ESI + 0x3c],EDI
0065fd1b  JZ 0x0065fd27
0065fd1d  MOV EAX,dword ptr [ESI + 0x18]
0065fd20  CMP EAX,EDI
0065fd22  JZ 0x0065fd27
0065fd24  MOV dword ptr [ESI + 0x40],EAX
0065fd27  POP EDI
0065fd28  MOV EAX,ESI
0065fd2a  POP ESI
0065fd2b  POP EBX
0065fd2c  RET 0x14
