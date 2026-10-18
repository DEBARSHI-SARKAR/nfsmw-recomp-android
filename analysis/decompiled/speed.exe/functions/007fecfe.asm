007fecfe  PUSH EBP
007fecff  MOV EBP,ESP
007fed01  PUSH ECX
007fed02  MOV EAX,dword ptr [EBP + 0x10]
007fed05  TEST EAX,EAX
007fed07  PUSH EDI
007fed08  MOV EDI,dword ptr [EBP + 0x8]
007fed0b  MOV dword ptr [EBP + 0x8],EDI
007fed0e  JBE 0x007feda7
007fed14  PUSH EBX
007fed15  PUSH ESI
007fed16  MOV ESI,dword ptr [EBP + 0xc]
007fed19  LEA ECX,[EDI + ESI*0x4]
007fed1c  MOV dword ptr [EBP + 0x10],ECX
007fed1f  LEA EDI,[EDI + ESI*0x2]
007fed22  MOV dword ptr [EBP + -0x4],EAX
007fed25  MOV EDX,dword ptr [EBP + 0x8]
007fed28  LEA ECX,[EDX + ESI*0x1]
007fed2b  MOVZX EDX,byte ptr [EDX]
007fed2e  MOVZX EAX,byte ptr [ECX]
007fed31  IMUL EDX,EDX,0x66
007fed34  MOV EBX,EAX
007fed36  IMUL EBX,EBX,0x9a
007fed3c  LEA EDX,[EDX + EBX*0x1 + 0x80]
007fed43  SHR EDX,0x8
007fed46  MOV byte ptr [ECX],DL
007fed48  MOVZX ECX,byte ptr [EDI]
007fed4b  MOV EDX,EAX
007fed4d  IMUL EAX,EAX,0x33
007fed50  IMUL EDX,EDX,0xcd
007fed56  MOV EBX,ECX
007fed58  IMUL EBX,EBX,0x33
007fed5b  LEA EDX,[EDX + EBX*0x1 + 0x80]
007fed62  SHR EDX,0x8
007fed65  MOV byte ptr [EDI],DL
007fed67  MOV EDX,ECX
007fed69  IMUL ECX,ECX,0x9a
007fed6f  IMUL EDX,EDX,0xcd
007fed75  LEA EAX,[EDX + EAX*0x1 + 0x80]
007fed7c  SHR EAX,0x8
007fed7f  MOV byte ptr [EDI + ESI*0x1],AL
007fed82  MOV EAX,dword ptr [EBP + 0x10]
007fed85  MOVZX EDX,byte ptr [EAX + ESI*0x1]
007fed89  IMUL EDX,EDX,0x66
007fed8c  LEA ECX,[EDX + ECX*0x1 + 0x80]
007fed93  SHR ECX,0x8
007fed96  INC dword ptr [EBP + 0x8]
007fed99  INC EDI
007fed9a  MOV byte ptr [EAX],CL
007fed9c  INC EAX
007fed9d  DEC dword ptr [EBP + -0x4]
007feda0  MOV dword ptr [EBP + 0x10],EAX
007feda3  JNZ 0x007fed25
007feda5  POP ESI
007feda6  POP EBX
007feda7  POP EDI
007feda8  LEAVE
007feda9  RET
