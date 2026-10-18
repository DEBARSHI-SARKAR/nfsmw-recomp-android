004dea30  PUSH ESI
004dea31  MOV ESI,dword ptr [ESP + 0x8]
004dea35  MOV EAX,dword ptr [ESI]
004dea37  PUSH EDI
004dea38  MOV EDI,ECX
004dea3a  MOV ECX,ESI
004dea3c  CALL dword ptr [EAX + 0x4]
004dea3f  MOV ECX,dword ptr [EAX]
004dea41  AND ECX,0xfff0
004dea47  CMP ECX,0x60
004dea4a  JNZ 0x004dea4f
004dea4c  MOV dword ptr [EDI + 0x28],ESI
004dea4f  POP EDI
004dea50  POP ESI
004dea51  RET 0x4
