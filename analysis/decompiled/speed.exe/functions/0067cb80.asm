0067cb80  PUSH -0x1
0067cb82  PUSH 0x87af08
0067cb87  MOV EAX,FS:[0x0]
0067cb8d  PUSH EAX
0067cb8e  MOV dword ptr FS:[0x0],ESP
0067cb95  PUSH ECX
0067cb96  PUSH ESI
0067cb97  MOV ESI,ECX
0067cb99  PUSH EDI
0067cb9a  MOV dword ptr [ESP + 0x8],ESI
0067cb9e  MOV dword ptr [ESI],0x8a9b20
0067cba4  MOV EAX,dword ptr [ESI + 0xc]
0067cba7  XOR EDI,EDI
0067cba9  CMP EAX,EDI
0067cbab  MOV dword ptr [ESP + 0x14],EDI
0067cbaf  JLE 0x0067cbba
0067cbb1  MOV ECX,EAX
0067cbb3  DEC ECX
0067cbb4  DEC EAX
0067cbb5  JNZ 0x0067cbb3
0067cbb7  MOV dword ptr [ESI + 0xc],ECX
0067cbba  MOV EAX,dword ptr [ESI + 0x4]
0067cbbd  CMP EAX,EDI
0067cbbf  JZ 0x0067cbd7
0067cbc1  MOV ECX,dword ptr [ESI + 0x8]
0067cbc4  PUSH ECX
0067cbc5  PUSH EAX
0067cbc6  MOV ECX,ESI
0067cbc8  CALL dword ptr [0x008a9b28]
0067cbce  MOV dword ptr [ESI + 0x4],EDI
0067cbd1  MOV dword ptr [ESI + 0x8],EDI
0067cbd4  MOV dword ptr [ESI + 0xc],EDI
0067cbd7  MOV ECX,dword ptr [ESP + 0xc]
0067cbdb  MOV dword ptr [ESI],0x8a9564
0067cbe1  POP EDI
0067cbe2  POP ESI
0067cbe3  MOV dword ptr FS:[0x0],ECX
0067cbea  ADD ESP,0x10
0067cbed  RET
