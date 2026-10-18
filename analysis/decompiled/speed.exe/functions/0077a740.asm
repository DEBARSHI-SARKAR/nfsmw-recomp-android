0077a740  MOV DL,byte ptr [ECX + 0x10]
0077a743  XOR EAX,EAX
0077a745  CMP DL,AL
0077a747  JNZ 0x0077a74a
0077a749  RET
0077a74a  CMP byte ptr [ECX + 0x11],AL
0077a74d  PUSH ESI
0077a74e  JNZ 0x0077a76a
0077a750  MOV EDX,dword ptr [ECX + 0x8]
0077a753  CMP EDX,EAX
0077a755  JLE 0x0077a76a
0077a757  MOV EAX,dword ptr [ECX + 0xc]
0077a75a  LEA ESI,[EAX + 0x4]
0077a75d  DEC EDX
0077a75e  MOV dword ptr [ECX + 0xc],ESI
0077a761  MOV dword ptr [ECX + 0x8],EDX
0077a764  MOV byte ptr [ECX + 0x10],0x1
0077a768  POP ESI
0077a769  RET
0077a76a  MOV EDX,dword ptr [ECX + 0x4]
0077a76d  CMP dword ptr [EDX],EAX
0077a76f  JZ 0x0077a7bc
0077a771  MOV ESI,dword ptr [ECX + 0x14]
0077a774  MOV byte ptr [ECX + 0x11],0x1
0077a778  MOV EDX,dword ptr [EDX]
0077a77a  PUSH EDI
0077a77b  CMP ESI,dword ptr [EDX + 0x4]
0077a77e  JZ 0x0077a79f
0077a780  MOV EDX,dword ptr [ECX + 0x14]
0077a783  MOV EDX,dword ptr [EDX + 0xc]
0077a786  CMP EDX,dword ptr [ECX]
0077a788  JZ 0x0077a79f
0077a78a  MOV EDX,dword ptr [ECX + 0x14]
0077a78d  MOV EDX,dword ptr [EDX]
0077a78f  MOV dword ptr [ECX + 0x14],EDX
0077a792  MOV EDX,dword ptr [ECX + 0x4]
0077a795  MOV EDX,dword ptr [EDX]
0077a797  MOV ESI,dword ptr [ECX + 0x14]
0077a79a  CMP ESI,dword ptr [EDX + 0x4]
0077a79d  JNZ 0x0077a780
0077a79f  MOV ESI,dword ptr [ECX + 0x4]
0077a7a2  MOV ESI,dword ptr [ESI]
0077a7a4  MOV EDI,dword ptr [ESI + 0x4]
0077a7a7  MOV EDX,dword ptr [ECX + 0x14]
0077a7aa  CMP EDX,EDI
0077a7ac  POP EDI
0077a7ad  JZ 0x0077a7bc
0077a7af  LEA EAX,[EDX + 0x8]
0077a7b2  MOV dword ptr [ECX + 0xc],EAX
0077a7b5  MOV EDX,dword ptr [EDX]
0077a7b7  MOV dword ptr [ECX + 0x14],EDX
0077a7ba  POP ESI
0077a7bb  RET
0077a7bc  MOV dword ptr [ECX + 0xc],EAX
0077a7bf  MOV byte ptr [ECX + 0x10],AL
0077a7c2  POP ESI
0077a7c3  RET
