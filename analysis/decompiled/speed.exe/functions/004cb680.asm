004cb680  PUSH -0x1
004cb682  PUSH 0x86c258
004cb687  MOV EAX,FS:[0x0]
004cb68d  PUSH EAX
004cb68e  MOV dword ptr FS:[0x0],ESP
004cb695  PUSH ECX
004cb696  XOR EAX,EAX
004cb698  PUSH ESI
004cb699  MOV ESI,ECX
004cb69b  MOV dword ptr [ESP + 0x4],ESI
004cb69f  MOV dword ptr [ESI + 0x4],EAX
004cb6a2  MOV dword ptr [ESI + 0x8],EAX
004cb6a5  MOV dword ptr [ESI + 0xc],EAX
004cb6a8  PUSH 0x14
004cb6aa  MOV dword ptr [ESP + 0x14],EAX
004cb6ae  MOV dword ptr [ESI],0x89778c
004cb6b4  CALL 0x004bffc0
004cb6b9  MOV ECX,dword ptr [ESP + 0x8]
004cb6bd  MOV EAX,ESI
004cb6bf  POP ESI
004cb6c0  MOV dword ptr FS:[0x0],ECX
004cb6c7  ADD ESP,0x10
004cb6ca  RET
