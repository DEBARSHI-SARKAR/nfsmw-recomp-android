005faab0  PUSH ESI
005faab1  MOV ESI,ECX
005faab3  MOV EAX,dword ptr [ESI + 0x4]
005faab6  TEST EAX,EAX
005faab8  JZ 0x005faac0
005faaba  MOVZX EAX,byte ptr [EAX + 0x29]
005faabe  POP ESI
005faabf  RET
005faac0  MOV EAX,dword ptr [ESI + 0xc]
005faac3  TEST EAX,EAX
005faac5  JZ 0x005faad8
005faac7  CMP dword ptr [EAX],0x0
005faaca  JNZ 0x005faad8
005faacc  MOV ECX,dword ptr [0x0091e00c]
005faad2  PUSH EAX
005faad3  CALL 0x005fa780
005faad8  MOV EAX,dword ptr [ESI + 0x10]
005faadb  TEST EAX,EAX
005faadd  JZ 0x005faaf0
005faadf  CMP dword ptr [EAX],0x0
005faae2  JNZ 0x005faaf0
005faae4  MOV ECX,dword ptr [0x0091e00c]
005faaea  PUSH EAX
005faaeb  CALL 0x005fa780
005faaf0  MOV ECX,dword ptr [ESI + 0x8]
005faaf3  PUSH 0x0
005faaf5  PUSH 0xcb01e454
005faafa  CALL 0x00454810
005faaff  TEST EAX,EAX
005fab01  JNZ 0x005fab0d
005fab03  PUSH 0x4
005fab05  CALL 0x006269b0
005fab0a  ADD ESP,0x4
005fab0d  PUSH EDI
005fab0e  MOV EDI,dword ptr [EAX]
005fab10  XOR ESI,ESI
005fab12  MOV EAX,dword ptr [ESI*0x8 + 0x8f5d30]
005fab19  PUSH EAX
005fab1a  PUSH EDI
005fab1b  CALL 0x00460d20
005fab20  ADD ESP,0x8
005fab23  TEST EAX,EAX
005fab25  JZ 0x005fab33
005fab27  INC ESI
005fab28  CMP ESI,0x3
005fab2b  JL 0x005fab12
005fab2d  POP EDI
005fab2e  OR EAX,0xffffffff
005fab31  POP ESI
005fab32  RET
005fab33  MOV EAX,dword ptr [ESI*0x8 + 0x8f5d34]
005fab3a  POP EDI
005fab3b  POP ESI
005fab3c  RET
