006beba0  MOV EAX,dword ptr [ESP + 0x4]
006beba4  MOV ECX,dword ptr [ESP + 0x4]
006beba8  SHR EAX,0x10
006bebab  MOVZX EDX,AH
006bebae  SHL EDX,0x8
006bebb1  PUSH ESI
006bebb2  MOVZX ESI,CL
006bebb5  OR EDX,ESI
006bebb7  SHL EDX,0x8
006bebba  MOVZX ECX,CH
006bebbd  MOVZX EAX,AL
006bebc0  OR EDX,ECX
006bebc2  SHL EDX,0x8
006bebc5  OR EDX,EAX
006bebc7  MOV EAX,[0x00982ad8]
006bebcc  LEA ECX,[EAX + EAX*0x2]
006bebcf  MOV EAX,[0x00982ac4]
006bebd4  MOV dword ptr [EAX + ECX*0x8 + 0x10],EDX
006bebd8  INC dword ptr [0x00982ad8]
006bebde  POP ESI
006bebdf  RET
