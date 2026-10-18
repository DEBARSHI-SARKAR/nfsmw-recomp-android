007fada4  PUSH EBP
007fada5  MOV EBP,ESP
007fada7  PUSH ESI
007fada8  PUSH EDI
007fada9  PUSH 0x8
007fadab  POP ESI
007fadac  MOVZX EDI,byte ptr [EAX]
007fadaf  ADD EDI,EDX
007fadb1  SHL EDI,0x10
007fadb4  MOV dword ptr [ECX],EDI
007fadb6  MOVZX EDI,byte ptr [EAX + 0x1]
007fadba  ADD EDI,EDX
007fadbc  SHL EDI,0x10
007fadbf  MOV dword ptr [ECX + 0x4],EDI
007fadc2  MOVZX EDI,byte ptr [EAX + 0x2]
007fadc6  ADD EDI,EDX
007fadc8  SHL EDI,0x10
007fadcb  MOV dword ptr [ECX + 0x8],EDI
007fadce  MOVZX EDI,byte ptr [EAX + 0x3]
007fadd2  ADD EDI,EDX
007fadd4  SHL EDI,0x10
007fadd7  MOV dword ptr [ECX + 0xc],EDI
007fadda  MOVZX EDI,byte ptr [EAX + 0x4]
007fadde  ADD EDI,EDX
007fade0  SHL EDI,0x10
007fade3  MOV dword ptr [ECX + 0x10],EDI
007fade6  MOVZX EDI,byte ptr [EAX + 0x5]
007fadea  ADD EDI,EDX
007fadec  SHL EDI,0x10
007fadef  MOV dword ptr [ECX + 0x14],EDI
007fadf2  MOVZX EDI,byte ptr [EAX + 0x6]
007fadf6  ADD EDI,EDX
007fadf8  SHL EDI,0x10
007fadfb  MOV dword ptr [ECX + 0x18],EDI
007fadfe  MOVZX EDI,byte ptr [EAX + 0x7]
007fae02  ADD EAX,dword ptr [EBP + 0x8]
007fae05  ADD EDI,EDX
007fae07  SHL EDI,0x10
007fae0a  MOV dword ptr [ECX + 0x1c],EDI
007fae0d  ADD ECX,0x40
007fae10  DEC ESI
007fae11  JNZ 0x007fadac
007fae13  POP EDI
007fae14  POP ESI
007fae15  POP EBP
007fae16  RET
