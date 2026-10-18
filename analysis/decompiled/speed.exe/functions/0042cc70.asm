0042cc70  PUSH -0x1
0042cc72  PUSH 0x868268
0042cc77  MOV EAX,FS:[0x0]
0042cc7d  PUSH EAX
0042cc7e  MOV dword ptr FS:[0x0],ESP
0042cc85  PUSH ECX
0042cc86  PUSH ESI
0042cc87  MOV ESI,ECX
0042cc89  PUSH EDI
0042cc8a  MOV dword ptr [ESP + 0x8],ESI
0042cc8e  MOV dword ptr [ESI],0x8915b8
0042cc94  MOV EAX,dword ptr [ESI + 0xc]
0042cc97  XOR EDI,EDI
0042cc99  CMP EAX,EDI
0042cc9b  MOV dword ptr [ESP + 0x14],EDI
0042cc9f  JLE 0x0042ccaa
0042cca1  MOV ECX,EAX
0042cca3  DEC ECX
0042cca4  DEC EAX
0042cca5  JNZ 0x0042cca3
0042cca7  MOV dword ptr [ESI + 0xc],ECX
0042ccaa  MOV EAX,dword ptr [ESI + 0x4]
0042ccad  CMP EAX,EDI
0042ccaf  JZ 0x0042ccc7
0042ccb1  MOV ECX,dword ptr [ESI + 0x8]
0042ccb4  PUSH ECX
0042ccb5  PUSH EAX
0042ccb6  MOV ECX,ESI
0042ccb8  CALL dword ptr [0x008915c0]
0042ccbe  MOV dword ptr [ESI + 0x4],EDI
0042ccc1  MOV dword ptr [ESI + 0x8],EDI
0042ccc4  MOV dword ptr [ESI + 0xc],EDI
0042ccc7  MOV ECX,dword ptr [ESP + 0xc]
0042cccb  MOV dword ptr [ESI],0x890ef8
0042ccd1  POP EDI
0042ccd2  POP ESI
0042ccd3  MOV dword ptr FS:[0x0],ECX
0042ccda  ADD ESP,0x10
0042ccdd  RET
