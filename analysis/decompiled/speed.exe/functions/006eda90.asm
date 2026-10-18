006eda90  PUSH -0x1
006eda92  PUSH 0x87e918
006eda97  MOV EAX,FS:[0x0]
006eda9d  PUSH EAX
006eda9e  MOV dword ptr FS:[0x0],ESP
006edaa5  PUSH ECX
006edaa6  MOV EAX,dword ptr [ESP + 0x14]
006edaaa  TEST EAX,EAX
006edaac  PUSH ESI
006edaad  MOV ESI,ECX
006edaaf  MOV dword ptr [ESP + 0x4],ESI
006edab3  JZ 0x006edac0
006edab5  PUSH EAX
006edab6  CALL 0x00454640
006edabb  ADD ESP,0x4
006edabe  JMP 0x006edac5
006edac0  MOV EAX,0x90a4d09a
006edac5  PUSH 0x0
006edac7  PUSH 0x0
006edac9  PUSH EAX
006edaca  MOV ECX,ESI
006edacc  CALL 0x004b8640
006edad1  MOV EAX,dword ptr [ESI + 0x4]
006edad4  TEST EAX,EAX
006edad6  MOV dword ptr [ESP + 0x10],0x0
006edade  JNZ 0x006edaed
006edae0  MOV EAX,[0x00988e18]
006edae5  PUSH EAX
006edae6  MOV ECX,ESI
006edae8  CALL 0x0045a760
006edaed  MOV ECX,dword ptr [ESP + 0x8]
006edaf1  MOV EAX,ESI
006edaf3  POP ESI
006edaf4  MOV dword ptr FS:[0x0],ECX
006edafb  ADD ESP,0x10
006edafe  RET 0x4
