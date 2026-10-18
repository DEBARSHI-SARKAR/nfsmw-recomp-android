007aac70  PUSH EBP
007aac71  PUSH ESI
007aac72  MOV ESI,dword ptr [ESP + 0xc]
007aac76  MOV EBP,ECX
007aac78  MOV ECX,ESI
007aac7a  CALL 0x005fab40
007aac7f  PUSH EAX
007aac80  CALL 0x00576a20
007aac85  ADD ESP,0x4
007aac88  TEST AL,AL
007aac8a  JZ 0x007aadd4
007aac90  MOV ECX,ESI
007aac92  CALL 0x005fc110
007aac97  TEST AL,AL
007aac99  JNZ 0x007aadd4
007aac9f  MOV ECX,ESI
007aaca1  CALL 0x005faa20
007aaca6  MOV ECX,dword ptr [0x0091cf90]
007aacac  CMP EAX,dword ptr [ECX + 0x18]
007aacaf  JNZ 0x007aadd4
007aacb5  MOV ECX,ESI
007aacb7  CALL 0x005fbd20
007aacbc  TEST AL,AL
007aacbe  JNZ 0x007aadd4
007aacc4  CALL 0x0056e2b0
007aacc9  TEST EAX,EAX
007aaccb  JZ 0x007aad18
007aaccd  PUSH ESI
007aacce  MOV ECX,EBP
007aacd0  CALL 0x007a3140
007aacd5  TEST AL,AL
007aacd7  JZ 0x007aadd4
007aacdd  PUSH 0x14
007aacdf  CALL 0x00652ad0
007aace4  ADD ESP,0x4
007aace7  TEST EAX,EAX
007aace9  JZ 0x007aacfb
007aaceb  MOV EDX,dword ptr [ESP + 0x14]
007aacef  MOV dword ptr [EAX + 0x8],ESI
007aacf2  MOV byte ptr [EAX + 0xc],0x0
007aacf6  MOV dword ptr [EAX + 0x10],EDX
007aacf9  JMP 0x007aacfd
007aacfb  XOR EAX,EAX
007aacfd  MOV EDX,dword ptr [EBP + 0x100]
007aad03  LEA ECX,[EBP + 0xfc]
007aad09  MOV dword ptr [EDX],EAX
007aad0b  MOV dword ptr [ECX + 0x4],EAX
007aad0e  POP ESI
007aad0f  MOV dword ptr [EAX + 0x4],EDX
007aad12  MOV dword ptr [EAX],ECX
007aad14  POP EBP
007aad15  RET 0xc
007aad18  MOV ECX,dword ptr [0x0091cf90]
007aad1e  PUSH EBX
007aad1f  PUSH 0xb
007aad21  CALL 0x0056dbe0
007aad26  MOV BL,byte ptr [EAX + 0xd]
007aad29  MOV ECX,ESI
007aad2b  CALL 0x005faab0
007aad30  MOVZX ECX,BL
007aad33  CMP EAX,ECX
007aad35  JZ 0x007aad40
007aad37  CMP BL,0x3
007aad3a  JNZ 0x007aadd3
007aad40  PUSH 0x0
007aad42  MOV ECX,ESI
007aad44  CALL 0x005fab40
007aad49  MOV EDX,dword ptr [ESP + 0x18]
007aad4d  PUSH EAX
007aad4e  PUSH EDX
007aad4f  CALL 0x00576790
007aad54  PUSH 0x14
007aad56  MOV BL,AL
007aad58  CALL 0x00652ad0
007aad5d  ADD ESP,0x10
007aad60  TEST EAX,EAX
007aad62  JZ 0x007aad78
007aad64  MOV EDX,dword ptr [ESP + 0x18]
007aad68  TEST BL,BL
007aad6a  SETZ CL
007aad6d  MOV dword ptr [EAX + 0x8],ESI
007aad70  MOV byte ptr [EAX + 0xc],CL
007aad73  MOV dword ptr [EAX + 0x10],EDX
007aad76  JMP 0x007aad7a
007aad78  XOR EAX,EAX
007aad7a  MOV EDX,dword ptr [EBP + 0x100]
007aad80  LEA ECX,[EBP + 0xfc]
007aad86  MOV dword ptr [EDX],EAX
007aad88  MOV dword ptr [ECX + 0x4],EAX
007aad8b  MOV dword ptr [EAX + 0x4],EDX
007aad8e  MOV dword ptr [EAX],ECX
007aad90  MOV ECX,dword ptr [0x0091cf90]
007aad96  MOV EAX,dword ptr [ECX + 0x12c]
007aad9c  MOV EDX,EAX
007aad9e  SHR EDX,0x3
007aada1  TEST DL,0x1
007aada4  PUSH EDI
007aada5  JNZ 0x007aadb9
007aada7  SHR EAX,0x6
007aadaa  TEST AL,0x1
007aadac  JNZ 0x007aadb9
007aadae  PUSH 0xb
007aadb0  CALL 0x0056dbe0
007aadb5  MOV EDI,dword ptr [EAX]
007aadb7  JMP 0x007aadbb
007aadb9  XOR EDI,EDI
007aadbb  MOV ECX,ESI
007aadbd  CALL 0x005fab40
007aadc2  CMP EAX,EDI
007aadc4  POP EDI
007aadc5  JNZ 0x007aadd3
007aadc7  MOV EAX,dword ptr [EBP + 0x100]
007aadcd  MOV dword ptr [EBP + 0x104],EAX
007aadd3  POP EBX
007aadd4  POP ESI
007aadd5  POP EBP
007aadd6  RET 0xc
