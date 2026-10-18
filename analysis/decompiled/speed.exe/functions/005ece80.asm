005ece80  PUSH ECX
005ece81  MOV EDX,dword ptr [ESP + 0xc]
005ece85  MOV byte ptr [ESP],0x0
005ece89  MOV EAX,dword ptr [ESP]
005ece8c  PUSH EAX
005ece8d  MOV EAX,dword ptr [ESP + 0xc]
005ece91  PUSH ECX
005ece92  MOV ECX,dword ptr [ESP + 0x18]
005ece96  PUSH ECX
005ece97  PUSH EDX
005ece98  PUSH EAX
005ece99  CALL 0x005e2260
005ece9e  ADD ESP,0x18
005ecea1  RET 0xc
