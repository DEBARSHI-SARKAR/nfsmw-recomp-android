004aa9b0  PUSH -0x1
004aa9b2  PUSH 0x86afd8
004aa9b7  MOV EAX,FS:[0x0]
004aa9bd  PUSH EAX
004aa9be  MOV dword ptr FS:[0x0],ESP
004aa9c5  PUSH ECX
004aa9c6  MOV EAX,dword ptr [ESP + 0x14]
004aa9ca  PUSH ESI
004aa9cb  MOV ESI,ECX
004aa9cd  PUSH EAX
004aa9ce  MOV dword ptr [ESP + 0x8],ESI
004aa9d2  CALL 0x004523c0
004aa9d7  MOV EAX,dword ptr [ESI + 0x8]
004aa9da  TEST EAX,EAX
004aa9dc  MOV dword ptr [ESP + 0x10],0x0
004aa9e4  JNZ 0x004aa9f6
004aa9e6  PUSH 0xfc
004aa9eb  CALL 0x006269b0
004aa9f0  ADD ESP,0x4
004aa9f3  MOV dword ptr [ESI + 0x8],EAX
004aa9f6  MOV ECX,dword ptr [ESP + 0x8]
004aa9fa  MOV EAX,ESI
004aa9fc  POP ESI
004aa9fd  MOV dword ptr FS:[0x0],ECX
004aaa04  ADD ESP,0x10
004aaa07  RET 0x4
