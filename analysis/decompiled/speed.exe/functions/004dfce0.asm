004dfce0  PUSH -0x1
004dfce2  PUSH 0x86cd0b
004dfce7  MOV EAX,FS:[0x0]
004dfced  PUSH EAX
004dfcee  MOV dword ptr FS:[0x0],ESP
004dfcf5  PUSH ECX
004dfcf6  PUSH ESI
004dfcf7  MOV ESI,ECX
004dfcf9  MOV ECX,dword ptr [0x00911fa8]
004dfcff  PUSH ESI
004dfd00  CALL 0x004b8db0
004dfd05  PUSH 0x34
004dfd07  CALL 0x00831667
004dfd0c  ADD ESP,0x4
004dfd0f  MOV dword ptr [ESP + 0x4],EAX
004dfd13  TEST EAX,EAX
004dfd15  MOV dword ptr [ESP + 0x10],0x0
004dfd1d  JZ 0x004dfd58
004dfd1f  MOV ECX,dword ptr [ESI + 0x54]
004dfd22  MOV EDX,dword ptr [ESI + 0x50]
004dfd25  PUSH ECX
004dfd26  MOV ECX,dword ptr [ESI + 0x4c]
004dfd29  PUSH EDX
004dfd2a  MOV EDX,dword ptr [ESI + 0x48]
004dfd2d  PUSH ECX
004dfd2e  MOV ECX,dword ptr [ESI + 0x44]
004dfd31  PUSH EDX
004dfd32  MOV EDX,dword ptr [ESI + 0x40]
004dfd35  PUSH ECX
004dfd36  MOV ECX,dword ptr [ESI + 0x3c]
004dfd39  PUSH EDX
004dfd3a  MOV EDX,dword ptr [ESI + 0x38]
004dfd3d  PUSH ECX
004dfd3e  MOV ECX,dword ptr [ESI + 0x34]
004dfd41  PUSH EDX
004dfd42  MOV EDX,dword ptr [ESI + 0x30]
004dfd45  PUSH ECX
004dfd46  MOV ECX,dword ptr [ESI + 0x2c]
004dfd49  PUSH EDX
004dfd4a  MOV EDX,dword ptr [ESI + 0x28]
004dfd4d  PUSH ECX
004dfd4e  PUSH EDX
004dfd4f  MOV ECX,EAX
004dfd51  CALL 0x004d7810
004dfd56  JMP 0x004dfd5a
004dfd58  XOR EAX,EAX
004dfd5a  MOV dword ptr [ESI + 0x58],EAX
004dfd5d  MOV ESI,dword ptr [ESI + 0x10]
004dfd60  TEST ESI,ESI
004dfd62  JZ 0x004dfd6b
004dfd64  MOV dword ptr [ESI + 0x3c],0x1
004dfd6b  MOV ECX,dword ptr [ESP + 0x8]
004dfd6f  POP ESI
004dfd70  MOV dword ptr FS:[0x0],ECX
004dfd77  ADD ESP,0x10
004dfd7a  RET
