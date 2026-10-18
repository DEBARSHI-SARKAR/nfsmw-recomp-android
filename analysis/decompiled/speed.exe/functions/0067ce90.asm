0067ce90  PUSH -0x1
0067ce92  PUSH 0x87afe8
0067ce97  MOV EAX,FS:[0x0]
0067ce9d  PUSH EAX
0067ce9e  MOV dword ptr FS:[0x0],ESP
0067cea5  PUSH ECX
0067cea6  PUSH ESI
0067cea7  MOV ESI,ECX
0067cea9  PUSH EDI
0067ceaa  MOV dword ptr [ESP + 0x8],ESI
0067ceae  MOV dword ptr [ESI],0x8a9bc8
0067ceb4  MOV EAX,dword ptr [ESI + 0xc]
0067ceb7  XOR EDI,EDI
0067ceb9  CMP EAX,EDI
0067cebb  MOV dword ptr [ESP + 0x14],EDI
0067cebf  JLE 0x0067ceca
0067cec1  MOV ECX,EAX
0067cec3  DEC ECX
0067cec4  DEC EAX
0067cec5  JNZ 0x0067cec3
0067cec7  MOV dword ptr [ESI + 0xc],ECX
0067ceca  MOV EAX,dword ptr [ESI + 0x4]
0067cecd  CMP EAX,EDI
0067cecf  JZ 0x0067cee7
0067ced1  MOV ECX,dword ptr [ESI + 0x8]
0067ced4  PUSH ECX
0067ced5  PUSH EAX
0067ced6  MOV ECX,ESI
0067ced8  CALL dword ptr [0x008a9bd0]
0067cede  MOV dword ptr [ESI + 0x4],EDI
0067cee1  MOV dword ptr [ESI + 0x8],EDI
0067cee4  MOV dword ptr [ESI + 0xc],EDI
0067cee7  MOV ECX,dword ptr [ESP + 0xc]
0067ceeb  MOV dword ptr [ESI],0x8a95f4
0067cef1  POP EDI
0067cef2  POP ESI
0067cef3  MOV dword ptr FS:[0x0],ECX
0067cefa  ADD ESP,0x10
0067cefd  RET
