005dfad0  MOV EAX,dword ptr [ECX]
005dfad2  MOV DL,byte ptr [EAX + 0x15]
005dfad5  TEST DL,DL
005dfad7  JNZ 0x005dfb26
005dfad9  MOV EDX,dword ptr [EAX + 0x8]
005dfadc  PUSH EBX
005dfadd  MOV BL,byte ptr [EDX + 0x15]
005dfae0  TEST BL,BL
005dfae2  JNZ 0x005dfaff
005dfae4  MOV EAX,dword ptr [EDX]
005dfae6  MOV BL,byte ptr [EAX + 0x15]
005dfae9  TEST BL,BL
005dfaeb  JNZ 0x005dfafb
005dfaed  LEA ECX,[ECX]
005dfaf0  MOV EDX,EAX
005dfaf2  MOV EAX,dword ptr [EDX]
005dfaf4  MOV BL,byte ptr [EAX + 0x15]
005dfaf7  TEST BL,BL
005dfaf9  JZ 0x005dfaf0
005dfafb  MOV dword ptr [ECX],EDX
005dfafd  POP EBX
005dfafe  RET
005dfaff  MOV EAX,dword ptr [EAX + 0x4]
005dfb02  MOV DL,byte ptr [EAX + 0x15]
005dfb05  TEST DL,DL
005dfb07  JNZ 0x005dfb23
005dfb09  LEA ESP,[ESP]
005dfb10  MOV EDX,dword ptr [ECX]
005dfb12  CMP EDX,dword ptr [EAX + 0x8]
005dfb15  JNZ 0x005dfb23
005dfb17  MOV dword ptr [ECX],EAX
005dfb19  MOV EAX,dword ptr [EAX + 0x4]
005dfb1c  MOV DL,byte ptr [EAX + 0x15]
005dfb1f  TEST DL,DL
005dfb21  JZ 0x005dfb10
005dfb23  MOV dword ptr [ECX],EAX
005dfb25  POP EBX
005dfb26  RET
