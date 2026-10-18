005ece20  PUSH ECX
005ece21  MOV EDX,dword ptr [ESP + 0xc]
005ece25  MOV byte ptr [ESP],0x0
005ece29  MOV EAX,dword ptr [ESP]
005ece2c  PUSH EAX
005ece2d  MOV EAX,dword ptr [ESP + 0xc]
005ece31  PUSH ECX
005ece32  MOV ECX,dword ptr [ESP + 0x18]
005ece36  PUSH ECX
005ece37  PUSH EDX
005ece38  PUSH EAX
005ece39  CALL 0x005e2200
005ece3e  ADD ESP,0x18
005ece41  RET 0xc
