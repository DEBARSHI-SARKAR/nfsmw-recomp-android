004abcf0  PUSH -0x1
004abcf2  PUSH 0x86b158
004abcf7  MOV EAX,FS:[0x0]
004abcfd  PUSH EAX
004abcfe  MOV dword ptr FS:[0x0],ESP
004abd05  PUSH ECX
004abd06  MOV EAX,dword ptr [ESP + 0x1c]
004abd0a  MOV EDX,dword ptr [ESP + 0x14]
004abd0e  PUSH ESI
004abd0f  MOV ESI,ECX
004abd11  MOV ECX,dword ptr [ESP + 0x1c]
004abd15  PUSH EAX
004abd16  PUSH ECX
004abd17  PUSH EDX
004abd18  MOV ECX,ESI
004abd1a  MOV dword ptr [ESP + 0x10],ESI
004abd1e  CALL 0x00452380
004abd23  MOV EAX,dword ptr [ESI + 0x8]
004abd26  TEST EAX,EAX
004abd28  MOV dword ptr [ESP + 0x10],0x0
004abd30  JNZ 0x004abd3f
004abd32  PUSH 0x40
004abd34  CALL 0x006269b0
004abd39  ADD ESP,0x4
004abd3c  MOV dword ptr [ESI + 0x8],EAX
004abd3f  MOV ECX,dword ptr [ESP + 0x8]
004abd43  MOV EAX,ESI
004abd45  POP ESI
004abd46  MOV dword ptr FS:[0x0],ECX
004abd4d  ADD ESP,0x10
004abd50  RET 0xc
