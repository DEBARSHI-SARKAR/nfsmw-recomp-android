005eabb0  PUSH EBX
005eabb1  MOV EBX,dword ptr [ESP + 0x8]
005eabb5  MOV EAX,dword ptr [EBX + 0x4]
005eabb8  PUSH ESI
005eabb9  MOV ESI,ECX
005eabbb  MOV ECX,dword ptr [EAX + 0x4]
005eabbe  PUSH EDI
005eabbf  MOV EDI,dword ptr [ESI + 0x4]
005eabc2  PUSH EDI
005eabc3  PUSH ECX
005eabc4  MOV ECX,ESI
005eabc6  CALL 0x005e7110
005eabcb  MOV dword ptr [EDI + 0x4],EAX
005eabce  MOV EDX,dword ptr [EBX + 0x8]
005eabd1  MOV dword ptr [ESI + 0x8],EDX
005eabd4  MOV EDX,dword ptr [ESI + 0x4]
005eabd7  MOV EAX,dword ptr [EDX + 0x4]
005eabda  MOV CL,byte ptr [EAX + 0xf]
005eabdd  TEST CL,CL
005eabdf  JNZ 0x005eac25
005eabe1  MOV ECX,dword ptr [EAX]
005eabe3  MOV BL,byte ptr [ECX + 0xf]
005eabe6  TEST BL,BL
005eabe8  JNZ 0x005eabfb
005eabea  LEA EBX,[EBX]
005eabf0  MOV EAX,ECX
005eabf2  MOV ECX,dword ptr [EAX]
005eabf4  MOV BL,byte ptr [ECX + 0xf]
005eabf7  TEST BL,BL
005eabf9  JZ 0x005eabf0
005eabfb  MOV dword ptr [EDX],EAX
005eabfd  MOV ESI,dword ptr [ESI + 0x4]
005eac00  MOV ECX,dword ptr [ESI + 0x4]
005eac03  MOV EAX,dword ptr [ECX + 0x8]
005eac06  MOV DL,byte ptr [EAX + 0xf]
005eac09  TEST DL,DL
005eac0b  JNZ 0x005eac1c
005eac0d  LEA ECX,[ECX]
005eac10  MOV ECX,EAX
005eac12  MOV EAX,dword ptr [ECX + 0x8]
005eac15  MOV DL,byte ptr [EAX + 0xf]
005eac18  TEST DL,DL
005eac1a  JZ 0x005eac10
005eac1c  POP EDI
005eac1d  MOV dword ptr [ESI + 0x8],ECX
005eac20  POP ESI
005eac21  POP EBX
005eac22  RET 0x4
005eac25  MOV dword ptr [EDX],EDX
005eac27  MOV ESI,dword ptr [ESI + 0x4]
005eac2a  POP EDI
005eac2b  MOV dword ptr [ESI + 0x8],ESI
005eac2e  POP ESI
005eac2f  POP EBX
005eac30  RET 0x4
