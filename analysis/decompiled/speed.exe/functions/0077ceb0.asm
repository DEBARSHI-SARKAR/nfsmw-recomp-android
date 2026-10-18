0077ceb0  PUSH -0x1
0077ceb2  PUSH 0x881c88
0077ceb7  MOV EAX,FS:[0x0]
0077cebd  PUSH EAX
0077cebe  MOV dword ptr FS:[0x0],ESP
0077cec5  PUSH ECX
0077cec6  XOR EAX,EAX
0077cec8  PUSH ESI
0077cec9  MOV ESI,ECX
0077cecb  MOV dword ptr [ESP + 0x4],ESI
0077cecf  MOV dword ptr [ESI + 0x4],EAX
0077ced2  MOV dword ptr [ESI + 0x8],EAX
0077ced5  MOV dword ptr [ESI + 0xc],EAX
0077ced8  PUSH 0x64
0077ceda  MOV dword ptr [ESP + 0x14],EAX
0077cede  MOV dword ptr [ESI],0x8b5d6c
0077cee4  CALL 0x00771480
0077cee9  MOV ECX,dword ptr [ESP + 0x8]
0077ceed  MOV EAX,ESI
0077ceef  POP ESI
0077cef0  MOV dword ptr FS:[0x0],ECX
0077cef7  ADD ESP,0x10
0077cefa  RET
