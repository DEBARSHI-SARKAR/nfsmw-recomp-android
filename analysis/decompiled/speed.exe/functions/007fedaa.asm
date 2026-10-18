007fedaa  PUSH EBP
007fedab  MOV EBP,ESP
007fedad  MOV EAX,dword ptr [EBP + 0x10]
007fedb0  TEST EAX,EAX
007fedb2  PUSH EDI
007fedb3  MOV EDI,dword ptr [EBP + 0x8]
007fedb6  JBE 0x007fee26
007fedb8  PUSH EBX
007fedb9  PUSH ESI
007fedba  MOV ESI,dword ptr [EBP + 0xc]
007fedbd  LEA ECX,[EDI + ESI*0x2]
007fedc0  MOV dword ptr [EBP + 0x8],EAX
007fedc3  MOVZX EAX,byte ptr [EDI + ESI*0x1]
007fedc7  MOVZX EDX,byte ptr [EDI]
007fedca  IMUL EDX,EDX,0x66
007fedcd  MOV EBX,EAX
007fedcf  IMUL EBX,EBX,0x9a
007fedd5  LEA EDX,[EDX + EBX*0x1 + 0x80]
007feddc  SHR EDX,0x8
007feddf  MOV byte ptr [EDI + ESI*0x1],DL
007fede2  MOVZX EDX,byte ptr [ECX]
007fede5  MOV EBX,EAX
007fede7  IMUL EAX,EAX,0x33
007fedea  IMUL EBX,EBX,0xcd
007fedf0  MOV dword ptr [EBP + 0x10],EDX
007fedf3  IMUL EDX,EDX,0x33
007fedf6  LEA EDX,[EBX + EDX*0x1 + 0x80]
007fedfd  SHR EDX,0x8
007fee00  MOV byte ptr [ECX],DL
007fee02  MOV EDX,dword ptr [EBP + 0x10]
007fee05  MOV EBX,EDX
007fee07  IMUL EBX,EBX,0xcd
007fee0d  LEA EAX,[EBX + EAX*0x1 + 0x80]
007fee14  SHR EAX,0x8
007fee17  MOV byte ptr [ECX + ESI*0x1],AL
007fee1a  MOV byte ptr [EDI + ESI*0x4],DL
007fee1d  INC EDI
007fee1e  INC ECX
007fee1f  DEC dword ptr [EBP + 0x8]
007fee22  JNZ 0x007fedc3
007fee24  POP ESI
007fee25  POP EBX
007fee26  POP EDI
007fee27  POP EBP
007fee28  RET
