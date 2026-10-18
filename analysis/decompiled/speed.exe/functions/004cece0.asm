004cece0  MOV EAX,FS:[0x0]
004cece6  PUSH -0x1
004cece8  PUSH 0x86c728
004ceced  PUSH EAX
004cecee  MOV EAX,dword ptr [ESP + 0x18]
004cecf2  MOV dword ptr FS:[0x0],ESP
004cecf9  SUB ESP,0x14
004cecfc  PUSH EDI
004cecfd  XOR EDI,EDI
004cecff  CMP EAX,EDI
004ced01  JNZ 0x004ced15
004ced03  XOR EAX,EAX
004ced05  POP EDI
004ced06  MOV ECX,dword ptr [ESP + 0x14]
004ced0a  MOV dword ptr FS:[0x0],ECX
004ced11  ADD ESP,0x20
004ced14  RET
004ced15  PUSH EBX
004ced16  MOV EBX,dword ptr [ESP + 0x2c]
004ced1a  IMUL EBX,EBX,0x74
004ced1d  PUSH EBP
004ced1e  PUSH ESI
004ced1f  LEA ECX,[ESP + 0x18]
004ced23  MOV dword ptr [ESP + 0x10],EDI
004ced27  ADD EBX,0x913c50
004ced2d  CALL 0x004c03f0
004ced32  MOV ESI,EAX
004ced34  MOV dword ptr [ESP + 0x1c],ESI
004ced38  MOV dword ptr [ESP + 0x20],EDI
004ced3c  MOV EBP,dword ptr [EBX + 0x4]
004ced3f  MOV EAX,dword ptr [EBX + 0xc]
004ced42  LEA ECX,[EBP + EAX*0x4]
004ced46  CMP EBP,ECX
004ced48  MOV dword ptr [ESP + 0x2c],EDI
004ced4c  JZ 0x004cedba
004ced4e  MOV EDI,EDI
004ced50  MOV EAX,dword ptr [EBP]
004ced53  CMP dword ptr [EAX],0x0
004ced56  MOV dword ptr [ESP + 0x14],EAX
004ced5a  JZ 0x004ceda0
004ced5c  MOV EAX,dword ptr [EAX + 0x4]
004ced5f  MOVZX EDX,byte ptr [EAX + 0xe]
004ced63  CMP EDX,dword ptr [ESP + 0x38]
004ced67  JG 0x004ceda0
004ced69  MOV ECX,dword ptr [ESI + 0x4]
004ced6c  LEA EAX,[ESP + 0x14]
004ced70  LEA EDI,[ESI + 0x4]
004ced73  PUSH EAX
004ced74  PUSH ECX
004ced75  PUSH ESI
004ced76  LEA ECX,[ESP + 0x24]
004ced7a  CALL 0x004c0840
004ced7f  PUSH 0x1
004ced81  LEA ECX,[ESP + 0x1c]
004ced85  MOV ESI,EAX
004ced87  CALL 0x004cd1e0
004ced8c  MOV dword ptr [EDI],ESI
004ced8e  MOV EAX,dword ptr [ESI + 0x4]
004ced91  MOV dword ptr [EAX],ESI
004ced93  MOV EAX,dword ptr [ESP + 0x10]
004ced97  MOV ESI,dword ptr [ESP + 0x1c]
004ced9b  INC EAX
004ced9c  MOV dword ptr [ESP + 0x10],EAX
004ceda0  MOV EDX,dword ptr [ESP + 0x10]
004ceda4  CMP dword ptr [ESP + 0x3c],EDX
004ceda8  JZ 0x004cedba
004cedaa  MOV EAX,dword ptr [EBX + 0xc]
004cedad  MOV ECX,dword ptr [EBX + 0x4]
004cedb0  ADD EBP,0x4
004cedb3  LEA EDX,[ECX + EAX*0x4]
004cedb6  CMP EBP,EDX
004cedb8  JNZ 0x004ced50
004cedba  MOV EDI,dword ptr [ESI]
004cedbc  CMP EDI,ESI
004cedbe  JZ 0x004cedce
004cedc0  MOV ECX,dword ptr [EDI + 0x8]
004cedc3  CALL 0x004cab80
004cedc8  MOV EDI,dword ptr [EDI]
004cedca  CMP EDI,ESI
004cedcc  JNZ 0x004cedc0
004cedce  MOV EAX,dword ptr [ESI]
004cedd0  CMP EAX,ESI
004cedd2  MOV dword ptr [ESI],ESI
004cedd4  MOV dword ptr [ESP + 0x2c],0xffffffff
004ceddc  MOV dword ptr [ESI + 0x4],ESI
004ceddf  JZ 0x004cedf8
004cede1  MOV EDI,dword ptr [EAX]
004cede3  PUSH 0x0
004cede5  PUSH 0xc
004cede7  PUSH EAX
004cede8  MOV ECX,0x925b30
004ceded  CALL 0x005d0370
004cedf2  CMP EDI,ESI
004cedf4  MOV EAX,EDI
004cedf6  JNZ 0x004cede1
004cedf8  PUSH 0x0
004cedfa  PUSH 0xc
004cedfc  PUSH ESI
004cedfd  MOV ECX,0x925b30
004cee02  CALL 0x005d0370
004cee07  MOV ECX,dword ptr [ESP + 0x24]
004cee0b  MOV EAX,dword ptr [ESP + 0x10]
004cee0f  POP ESI
004cee10  POP EBP
004cee11  POP EBX
004cee12  POP EDI
004cee13  MOV dword ptr FS:[0x0],ECX
004cee1a  ADD ESP,0x20
004cee1d  RET
