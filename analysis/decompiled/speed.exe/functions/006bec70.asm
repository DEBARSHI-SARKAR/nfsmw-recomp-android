006bec70  MOV EAX,dword ptr [ESP + 0x4]
006bec74  MOV ECX,dword ptr [ESP + 0x4]
006bec78  SHR ECX,0x18
006bec7b  MOVZX EDX,AL
006bec7e  SHL ECX,0x8
006bec81  OR ECX,EDX
006bec83  MOV EDX,dword ptr [ESP + 0x4]
006bec87  MOVZX EAX,AH
006bec8a  SHL ECX,0x8
006bec8d  OR ECX,EAX
006bec8f  MOV EAX,[0x00982ad8]
006bec94  SHR EDX,0x10
006bec97  MOVZX EDX,DL
006bec9a  SHL ECX,0x8
006bec9d  OR ECX,EDX
006bec9f  MOV EDX,dword ptr [0x00982ac4]
006beca5  LEA EAX,[EAX + EAX*0x2]
006beca8  MOV dword ptr [EDX + EAX*0x8 + 0x10],ECX
006becac  INC dword ptr [0x00982ad8]
006becb2  RET
