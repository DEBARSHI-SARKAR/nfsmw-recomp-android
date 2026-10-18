0067cf70  PUSH -0x1
0067cf72  PUSH 0x87b028
0067cf77  MOV EAX,FS:[0x0]
0067cf7d  PUSH EAX
0067cf7e  MOV dword ptr FS:[0x0],ESP
0067cf85  PUSH ECX
0067cf86  PUSH ESI
0067cf87  MOV ESI,ECX
0067cf89  PUSH EDI
0067cf8a  MOV dword ptr [ESP + 0x8],ESI
0067cf8e  MOV dword ptr [ESI],0x8a9bf8
0067cf94  MOV EAX,dword ptr [ESI + 0xc]
0067cf97  XOR EDI,EDI
0067cf99  CMP EAX,EDI
0067cf9b  MOV dword ptr [ESP + 0x14],EDI
0067cf9f  JLE 0x0067cfaa
0067cfa1  MOV ECX,EAX
0067cfa3  DEC ECX
0067cfa4  DEC EAX
0067cfa5  JNZ 0x0067cfa3
0067cfa7  MOV dword ptr [ESI + 0xc],ECX
0067cfaa  MOV EAX,dword ptr [ESI + 0x4]
0067cfad  CMP EAX,EDI
0067cfaf  JZ 0x0067cfc7
0067cfb1  MOV ECX,dword ptr [ESI + 0x8]
0067cfb4  PUSH ECX
0067cfb5  PUSH EAX
0067cfb6  MOV ECX,ESI
0067cfb8  CALL dword ptr [0x008a9c00]
0067cfbe  MOV dword ptr [ESI + 0x4],EDI
0067cfc1  MOV dword ptr [ESI + 0x8],EDI
0067cfc4  MOV dword ptr [ESI + 0xc],EDI
0067cfc7  MOV ECX,dword ptr [ESP + 0xc]
0067cfcb  MOV dword ptr [ESI],0x8a9624
0067cfd1  POP EDI
0067cfd2  POP ESI
0067cfd3  MOV dword ptr FS:[0x0],ECX
0067cfda  ADD ESP,0x10
0067cfdd  RET
