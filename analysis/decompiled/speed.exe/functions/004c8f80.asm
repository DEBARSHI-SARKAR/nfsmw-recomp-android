004c8f80  PUSH -0x1
004c8f82  PUSH 0x86bf78
004c8f87  MOV EAX,FS:[0x0]
004c8f8d  PUSH EAX
004c8f8e  MOV dword ptr FS:[0x0],ESP
004c8f95  PUSH ECX
004c8f96  PUSH ESI
004c8f97  MOV ESI,ECX
004c8f99  PUSH EDI
004c8f9a  MOV dword ptr [ESP + 0x8],ESI
004c8f9e  MOV dword ptr [ESI],0x8975e4
004c8fa4  MOV EAX,dword ptr [ESI + 0xc]
004c8fa7  XOR EDI,EDI
004c8fa9  CMP EAX,EDI
004c8fab  MOV dword ptr [ESP + 0x14],EDI
004c8faf  JLE 0x004c8fba
004c8fb1  MOV ECX,EAX
004c8fb3  DEC ECX
004c8fb4  DEC EAX
004c8fb5  JNZ 0x004c8fb3
004c8fb7  MOV dword ptr [ESI + 0xc],ECX
004c8fba  MOV EAX,dword ptr [ESI + 0x4]
004c8fbd  CMP EAX,EDI
004c8fbf  JZ 0x004c8fd7
004c8fc1  MOV ECX,dword ptr [ESI + 0x8]
004c8fc4  PUSH ECX
004c8fc5  PUSH EAX
004c8fc6  MOV ECX,ESI
004c8fc8  CALL dword ptr [0x008975ec]
004c8fce  MOV dword ptr [ESI + 0x4],EDI
004c8fd1  MOV dword ptr [ESI + 0x8],EDI
004c8fd4  MOV dword ptr [ESI + 0xc],EDI
004c8fd7  MOV ECX,dword ptr [ESP + 0xc]
004c8fdb  MOV dword ptr [ESI],0x896ed4
004c8fe1  POP EDI
004c8fe2  POP ESI
004c8fe3  MOV dword ptr FS:[0x0],ECX
004c8fea  ADD ESP,0x10
004c8fed  RET
