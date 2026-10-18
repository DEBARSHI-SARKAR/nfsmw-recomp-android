005bec90  MOV EDX,dword ptr [ESP + 0x4]
005bec94  MOV AL,byte ptr [ECX + 0x14]
005bec97  TEST AL,AL
005bec99  PUSH EBX
005bec9a  MOV EBX,dword ptr [ESP + 0xc]
005bec9e  PUSH EBP
005bec9f  MOV EBP,dword ptr [EBX + 0x10]
005beca2  PUSH ESI
005beca3  MOV ESI,dword ptr [EBX + 0x20]
005beca6  PUSH EDI
005beca7  MOV EDI,dword ptr [EDX + 0x2c]
005becaa  MOV dword ptr [ESP + 0x18],EDI
005becae  JZ 0x005bed85
005becb4  TEST ESI,ESI
005becb6  JZ 0x005bed07
005becb8  TEST dword ptr [ESI + 0x4],0xff000000
005becbf  JNZ 0x005bed07
005becc1  MOV AL,byte ptr [ESI + 0x3]
005becc4  TEST AL,AL
005becc6  JNS 0x005beceb
005becc8  MOV EAX,[0x008f5798]
005beccd  MOV ECX,dword ptr [EDX + 0x1c]
005becd0  PUSH EDI
005becd1  OR EAX,0xff7fffff
005becd6  AND ECX,EAX
005becd8  PUSH EBP
005becd9  PUSH ESI
005becda  MOV dword ptr [EDX + 0x1c],ECX
005becdd  CALL 0x005bddd0
005bece2  MOV EDX,dword ptr [ESP + 0x20]
005bece6  ADD ESP,0xc
005bece9  JMP 0x005bed1b
005beceb  MOV EAX,dword ptr [EDX + 0x1c]
005becee  PUSH EDI
005becef  OR EAX,0x800000
005becf4  PUSH EBP
005becf5  PUSH ESI
005becf6  MOV dword ptr [EDX + 0x1c],EAX
005becf9  CALL 0x005bddd0
005becfe  MOV EDX,dword ptr [ESP + 0x20]
005bed02  ADD ESP,0xc
005bed05  JMP 0x005bed1b
005bed07  MOV ECX,dword ptr [0x008f5798]
005bed0d  MOV EAX,dword ptr [EDX + 0x1c]
005bed10  OR ECX,0xff7fffff
005bed16  AND EAX,ECX
005bed18  MOV dword ptr [EDX + 0x1c],EAX
005bed1b  MOV EAX,dword ptr [EDX + 0x2c]
005bed1e  MOV ECX,dword ptr [EAX + 0xc]
005bed21  TEST ECX,ECX
005bed23  MOV EDI,0x80
005bed28  JZ 0x005bed5e
005bed2a  MOV AL,byte ptr [EBX + 0x1c]
005bed2d  TEST AL,AL
005bed2f  JBE 0x005bed5e
005bed31  MOVZX EBX,AL
005bed34  MOVZX ECX,byte ptr [ESI + 0x3]
005bed38  MOVSX EDX,byte ptr [ESI + 0x7]
005bed3c  MOV EAX,dword ptr [ESP + 0x18]
005bed40  AND EDI,ECX
005bed42  LEA ECX,[EAX + EDX*0x4]
005bed45  PUSH ECX
005bed46  PUSH EBP
005bed47  PUSH ESI
005bed48  CALL 0x005bddd0
005bed4d  ADD ESP,0xc
005bed50  ADD ESI,0x38
005bed53  DEC EBX
005bed54  JNZ 0x005bed34
005bed56  TEST EDI,EDI
005bed58  MOV EDX,dword ptr [ESP + 0x14]
005bed5c  JZ 0x005bed75
005bed5e  MOV EAX,[0x008f5798]
005bed63  MOV ECX,dword ptr [EDX + 0x1c]
005bed66  OR EAX,0xfeffffff
005bed6b  AND ECX,EAX
005bed6d  MOV dword ptr [EDX + 0x1c],ECX
005bed70  JMP 0x005bee07
005bed75  MOV EAX,dword ptr [ESP + 0x14]
005bed79  OR dword ptr [EAX + 0x1c],0x1000000
005bed80  JMP 0x005bee07
005bed85  TEST ESI,ESI
005bed87  JZ 0x005bedbc
005bed89  TEST dword ptr [ESI + 0x4],0xff000000
005bed90  JNZ 0x005bedbc
005bed92  MOVZX EAX,byte ptr [ESI + 0x2]
005bed96  SUB EAX,0x0
005bed99  JZ 0x005bedad
005bed9b  DEC EAX
005bed9c  JZ 0x005beda3
005bed9e  SUB EAX,0x2
005beda1  JNZ 0x005bedbc
005beda3  PUSH EDI
005beda4  PUSH EBP
005beda5  PUSH ESI
005beda6  CALL 0x005b9d10
005bedab  JMP 0x005bedb5
005bedad  PUSH EDI
005bedae  PUSH EBP
005bedaf  PUSH ESI
005bedb0  CALL 0x005b5840
005bedb5  MOV EDX,dword ptr [ESP + 0x20]
005bedb9  ADD ESP,0xc
005bedbc  MOV ECX,dword ptr [EDX + 0x2c]
005bedbf  MOV EAX,dword ptr [ECX + 0xc]
005bedc2  TEST EAX,EAX
005bedc4  JZ 0x005bee07
005bedc6  MOV AL,byte ptr [EBX + 0x1c]
005bedc9  TEST AL,AL
005bedcb  JBE 0x005bee07
005bedcd  MOVZX EBX,AL
005bedd0  MOVSX EAX,byte ptr [ESI + 0x7]
005bedd4  LEA ECX,[EDI + EAX*0x4]
005bedd7  MOVZX EAX,byte ptr [ESI + 0x2]
005beddb  SUB EAX,0x0
005bedde  JZ 0x005bedf2
005bede0  DEC EAX
005bede1  JZ 0x005bede8
005bede3  SUB EAX,0x2
005bede6  JNZ 0x005bee01
005bede8  PUSH ECX
005bede9  PUSH EBP
005bedea  PUSH ESI
005bedeb  CALL 0x005b9d10
005bedf0  JMP 0x005bedfa
005bedf2  PUSH ECX
005bedf3  PUSH EBP
005bedf4  PUSH ESI
005bedf5  CALL 0x005b5840
005bedfa  MOV EDX,dword ptr [ESP + 0x20]
005bedfe  ADD ESP,0xc
005bee01  ADD ESI,0x38
005bee04  DEC EBX
005bee05  JNZ 0x005bedd0
005bee07  MOV EAX,dword ptr [EDX + 0x1c]
005bee0a  TEST EAX,0x1c00000
005bee0f  POP EDI
005bee10  POP ESI
005bee11  POP EBP
005bee12  POP EBX
005bee13  JZ 0x005bee1d
005bee15  OR EAX,0x2000000
005bee1a  MOV dword ptr [EDX + 0x1c],EAX
005bee1d  RET 0x8
