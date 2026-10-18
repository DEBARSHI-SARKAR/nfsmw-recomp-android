004debc0  PUSH ESI
004debc1  MOV ESI,ECX
004debc3  MOV AL,byte ptr [ESI + 0x8]
004debc6  TEST AL,AL
004debc8  JZ 0x004dec29
004debca  MOV EAX,dword ptr [ESI + 0x28]
004debcd  MOV CL,byte ptr [EAX + 0x97]
004debd3  TEST CL,CL
004debd5  JZ 0x004dec29
004debd7  MOV ECX,dword ptr [0x00911fa8]
004debdd  MOV ECX,dword ptr [ECX + 0x70]
004debe0  CMP ECX,0x1
004debe3  JZ 0x004dec29
004debe5  CMP ECX,0x8
004debe8  JZ 0x004dec29
004debea  MOV CL,byte ptr [EAX + 0x96]
004debf0  TEST CL,CL
004debf2  JZ 0x004dec29
004debf4  MOV EAX,[0x00914290]
004debf9  TEST EAX,EAX
004debfb  JZ 0x004dec29
004debfd  CALL 0x0081bab9
004dec02  MOV ECX,dword ptr [0x00914290]
004dec08  CALL 0x0081d93a
004dec0d  MOV EDX,dword ptr [ESI + 0x28]
004dec10  MOV EAX,dword ptr [EDX + 0x98]
004dec16  MOV ECX,dword ptr [EAX*0x4 + 0x914260]
004dec1d  PUSH ECX
004dec1e  MOV ECX,dword ptr [0x00914290]
004dec24  CALL 0x0081da87
004dec29  POP ESI
004dec2a  RET
