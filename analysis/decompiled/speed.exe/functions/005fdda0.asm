005fdda0  MOV EAX,FS:[0x0]
005fdda6  PUSH -0x1
005fdda8  PUSH 0x87608f
005fddad  PUSH EAX
005fddae  MOV EAX,[0x0091e000]
005fddb3  TEST EAX,EAX
005fddb5  MOV dword ptr FS:[0x0],ESP
005fddbc  PUSH EBX
005fddbd  PUSH ESI
005fddbe  PUSH EDI
005fddbf  MOV EDI,ECX
005fddc1  JZ 0x005fde6c
005fddc7  MOV EDX,dword ptr [EAX + 0x1960]
005fddcd  MOV EAX,dword ptr [EAX + 0x1968]
005fddd3  TEST EDX,EDX
005fddd5  SETZ BL
005fddd8  TEST EAX,EAX
005fddda  JZ 0x005fddeb
005fdddc  MOV ECX,EAX
005fddde  CALL 0x005fbe70
005fdde3  TEST AL,AL
005fdde5  JZ 0x005fddeb
005fdde7  MOV AL,0x1
005fdde9  JMP 0x005fdded
005fddeb  XOR AL,AL
005fdded  TEST BL,BL
005fddef  JNZ 0x005fddf5
005fddf1  TEST AL,AL
005fddf3  JZ 0x005fde6c
005fddf5  MOV EAX,dword ptr [EDI]
005fddf7  MOV ESI,dword ptr [ESP + 0x1c]
005fddfb  TEST ESI,EAX
005fddfd  JNZ 0x005fde69
005fddff  OR EAX,ESI
005fde01  PUSH 0xc
005fde03  MOV dword ptr [EDI],EAX
005fde05  CALL 0x00627400
005fde0a  ADD ESP,0x4
005fde0d  MOV dword ptr [ESP + 0x1c],EAX
005fde11  TEST EAX,EAX
005fde13  MOV dword ptr [ESP + 0x14],0x0
005fde1b  JZ 0x005fde25
005fde1d  PUSH ESI
005fde1e  MOV ECX,EAX
005fde20  CALL 0x00624770
005fde25  MOV EAX,dword ptr [EDI]
005fde27  XOR ECX,ECX
005fde29  TEST EAX,EAX
005fde2b  MOV dword ptr [ESP + 0x14],0xffffffff
005fde33  MOV dword ptr [ESP + 0x1c],ECX
005fde37  JZ 0x005fde51
005fde39  LEA ESP,[ESP]
005fde40  MOV EDX,EAX
005fde42  AND EDX,0x1
005fde45  SHR EAX,0x1
005fde47  ADD ECX,EDX
005fde49  TEST EAX,EAX
005fde4b  JNZ 0x005fde40
005fde4d  MOV dword ptr [ESP + 0x1c],ECX
005fde51  FILD dword ptr [ESP + 0x1c]
005fde55  PUSH ECX
005fde56  MOV ECX,dword ptr [0x0091e00c]
005fde5c  FSTP float ptr [ESP]
005fde5f  PUSH 0x89d608
005fde64  CALL 0x005eda20
005fde69  INC dword ptr [EDI + 0x4]
005fde6c  MOV ECX,dword ptr [ESP + 0xc]
005fde70  POP EDI
005fde71  POP ESI
005fde72  MOV dword ptr FS:[0x0],ECX
005fde79  POP EBX
005fde7a  ADD ESP,0xc
005fde7d  RET 0x4
