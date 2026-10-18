005baa70  PUSH -0x1
005baa72  PUSH 0x87411b
005baa77  MOV EAX,FS:[0x0]
005baa7d  PUSH EAX
005baa7e  MOV dword ptr FS:[0x0],ESP
005baa85  PUSH ECX
005baa86  PUSH EBX
005baa87  MOV EBX,dword ptr [ESP + 0x18]
005baa8b  PUSH EBP
005baa8c  PUSH ESI
005baa8d  PUSH EDI
005baa8e  XOR EDI,EDI
005baa90  CMP EBX,EDI
005baa92  MOV EBP,ECX
005baa94  JNZ 0x005baac8
005baa96  MOV EAX,dword ptr [EBP + 0x24]
005baa99  CMP EAX,EDI
005baa9b  JZ 0x005baaba
005baa9d  MOV ECX,dword ptr [EAX + -0x4]
005baaa0  LEA ESI,[EAX + -0x4]
005baaa3  PUSH 0x5ba980
005baaa8  PUSH ECX
005baaa9  PUSH 0x1c
005baaab  PUSH EAX
005baaac  CALL 0x007c8f50
005baab1  PUSH ESI
005baab2  CALL 0x00652b10
005baab7  ADD ESP,0x4
005baaba  MOV dword ptr [EBP + 0x24],EDI
005baabd  MOV dword ptr [EBP + 0x18],EDI
005baac0  MOV dword ptr [EBP + 0x1c],EDI
005baac3  JMP 0x005bab84
005baac8  MOV EDX,EBX
005baaca  IMUL EDX,EDX,0x1c
005baacd  ADD EDX,0x4
005baad0  PUSH EDX
005baad1  CALL 0x00652ad0
005baad6  ADD ESP,0x4
005baad9  MOV dword ptr [ESP + 0x24],EAX
005baadd  CMP EAX,EDI
005baadf  MOV dword ptr [ESP + 0x1c],EDI
005baae3  JZ 0x005bab03
005baae5  PUSH 0x5ba980
005baaea  PUSH 0x5afa60
005baaef  PUSH EBX
005baaf0  LEA ESI,[EAX + 0x4]
005baaf3  PUSH 0x1c
005baaf5  PUSH ESI
005baaf6  MOV dword ptr [EAX],EBX
005baaf8  CALL 0x007c90a0
005baafd  MOV dword ptr [ESP + 0x24],ESI
005bab01  JMP 0x005bab07
005bab03  MOV dword ptr [ESP + 0x24],EDI
005bab07  MOV EAX,dword ptr [EBP + 0x18]
005bab0a  CMP EBX,EAX
005bab0c  MOV dword ptr [ESP + 0x1c],0xffffffff
005bab14  MOV dword ptr [ESP + 0x10],EBX
005bab18  JBE 0x005bab1e
005bab1a  MOV dword ptr [ESP + 0x10],EAX
005bab1e  MOV EAX,dword ptr [ESP + 0x10]
005bab22  MOV ESI,dword ptr [EBP + 0x24]
005bab25  IMUL EAX,EAX,0x1c
005bab28  MOV EDI,dword ptr [ESP + 0x24]
005bab2c  MOV ECX,EAX
005bab2e  MOV EDX,ECX
005bab30  SHR ECX,0x2
005bab33  MOVSD.REP ES:EDI,ESI
005bab35  MOV ECX,EDX
005bab37  AND ECX,0x3
005bab3a  MOVSB.REP ES:EDI,ESI
005bab3c  MOV EDI,dword ptr [EBP + 0x24]
005bab3f  MOV ECX,EAX
005bab41  SHR ECX,0x2
005bab44  XOR EAX,EAX
005bab46  STOSD.REP ES:EDI
005bab48  MOV ECX,EDX
005bab4a  AND ECX,0x3
005bab4d  STOSB.REP ES:EDI
005bab4f  MOV EAX,dword ptr [EBP + 0x24]
005bab52  TEST EAX,EAX
005bab54  JZ 0x005bab73
005bab56  MOV ECX,dword ptr [EAX + -0x4]
005bab59  LEA ESI,[EAX + -0x4]
005bab5c  PUSH 0x5ba980
005bab61  PUSH ECX
005bab62  PUSH 0x1c
005bab64  PUSH EAX
005bab65  CALL 0x007c8f50
005bab6a  PUSH ESI
005bab6b  CALL 0x00652b10
005bab70  ADD ESP,0x4
005bab73  MOV EDX,dword ptr [ESP + 0x24]
005bab77  MOV EAX,dword ptr [ESP + 0x10]
005bab7b  MOV dword ptr [EBP + 0x24],EDX
005bab7e  MOV dword ptr [EBP + 0x1c],EBX
005bab81  MOV dword ptr [EBP + 0x18],EAX
005bab84  MOV ECX,dword ptr [ESP + 0x14]
005bab88  POP EDI
005bab89  POP ESI
005bab8a  MOV byte ptr [EBP + 0x20],0x0
005bab8e  POP EBP
005bab8f  POP EBX
005bab90  MOV dword ptr FS:[0x0],ECX
005bab97  ADD ESP,0x10
005bab9a  RET 0x4
