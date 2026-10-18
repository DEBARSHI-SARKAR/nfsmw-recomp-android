006cdb20  PUSH EBP
006cdb21  MOV EBP,ESP
006cdb23  SUB ESP,0x28
006cdb26  PUSH ESI
006cdb27  PUSH EAX
006cdb28  MOV EAX,0xcfcecdcc
006cdb2d  MOV EAX,0x6cdb2d
006cdb32  MOV EAX,0x1
006cdb37  MOV EAX,0x0
006cdb3c  MOV EAX,0xcfcecdcc
006cdb41  POP EAX
006cdb42  MOV EAX,dword ptr [EBP + 0x8]
006cdb45  MOV ECX,dword ptr [EAX + 0x14]
006cdb48  MOV dword ptr [EBP + -0x20],ECX
006cdb4b  MOV EDX,dword ptr [EBP + 0x8]
006cdb4e  MOV EAX,dword ptr [EDX + 0x18]
006cdb51  MOV dword ptr [EBP + -0x1c],EAX
006cdb54  MOV ECX,dword ptr [EBP + 0x8]
006cdb57  MOV EDX,dword ptr [ECX + 0x1c]
006cdb5a  MOV dword ptr [EBP + -0x18],EDX
006cdb5d  MOV EAX,dword ptr [EBP + 0x8]
006cdb60  MOV ECX,dword ptr [EAX + 0x20]
006cdb63  MOV dword ptr [EBP + -0x14],ECX
006cdb66  MOV EDX,dword ptr [EBP + 0x8]
006cdb69  MOV EAX,dword ptr [EDX + 0x24]
006cdb6c  MOV dword ptr [EBP + -0xc],EAX
006cdb6f  MOV ECX,dword ptr [EBP + 0x8]
006cdb72  MOV EDX,dword ptr [ECX + 0x28]
006cdb75  MOV dword ptr [EBP + -0x4],EDX
006cdb78  MOV EAX,dword ptr [EBP + 0x8]
006cdb7b  MOV ECX,dword ptr [EAX + 0x2c]
006cdb7e  MOV dword ptr [EBP + -0x28],ECX
006cdb81  MOV EDX,dword ptr [EBP + 0x8]
006cdb84  MOV EAX,dword ptr [EDX + 0x30]
006cdb87  MOV dword ptr [EBP + -0x24],EAX
006cdb8a  MOV ECX,dword ptr [EBP + 0x8]
006cdb8d  MOV EDX,dword ptr [ECX + 0x34]
006cdb90  MOV dword ptr [EBP + -0x8],EDX
006cdb93  MOV EAX,dword ptr [EBP + -0x20]
006cdb96  NOT EAX
006cdb98  AND EAX,dword ptr [EBP + 0xc]
006cdb9b  MOV ECX,dword ptr [EBP + -0x20]
006cdb9e  NOT ECX
006cdba0  AND ECX,dword ptr [EBP + 0xc]
006cdba3  ADD ECX,dword ptr [EBP + -0x18]
006cdba6  IMUL ECX,dword ptr [EBP + -0x1c]
006cdbaa  XOR EAX,ECX
006cdbac  MOV EDX,dword ptr [EBP + -0x20]
006cdbaf  NOT EDX
006cdbb1  AND EDX,dword ptr [EBP + 0xc]
006cdbb4  ADD EDX,dword ptr [EBP + -0xc]
006cdbb7  IMUL EDX,dword ptr [EBP + -0x14]
006cdbbb  XOR EAX,EDX
006cdbbd  AND EAX,dword ptr [EBP + -0x20]
006cdbc0  XOR EAX,dword ptr [EBP + 0xc]
006cdbc3  MOV ECX,dword ptr [EBP + -0x20]
006cdbc6  NOT ECX
006cdbc8  AND ECX,dword ptr [EBP + 0xc]
006cdbcb  MOV EDX,dword ptr [EBP + -0x20]
006cdbce  NOT EDX
006cdbd0  AND EDX,dword ptr [EBP + 0xc]
006cdbd3  ADD EDX,dword ptr [EBP + -0x18]
006cdbd6  IMUL EDX,dword ptr [EBP + -0x1c]
006cdbda  XOR ECX,EDX
006cdbdc  MOV EDX,dword ptr [EBP + -0x20]
006cdbdf  NOT EDX
006cdbe1  AND EDX,dword ptr [EBP + 0xc]
006cdbe4  ADD EDX,dword ptr [EBP + -0xc]
006cdbe7  IMUL EDX,dword ptr [EBP + -0x14]
006cdbeb  XOR ECX,EDX
006cdbed  AND ECX,dword ptr [EBP + -0x20]
006cdbf0  XOR ECX,dword ptr [EBP + 0xc]
006cdbf3  AND ECX,dword ptr [EBP + -0x20]
006cdbf6  MOV EDX,dword ptr [EBP + -0x20]
006cdbf9  NOT EDX
006cdbfb  AND EDX,dword ptr [EBP + 0xc]
006cdbfe  MOV ESI,dword ptr [EBP + -0x20]
006cdc01  NOT ESI
006cdc03  AND ESI,dword ptr [EBP + 0xc]
006cdc06  ADD ESI,dword ptr [EBP + -0x18]
006cdc09  IMUL ESI,dword ptr [EBP + -0x1c]
006cdc0d  XOR EDX,ESI
006cdc0f  MOV ESI,dword ptr [EBP + -0x20]
006cdc12  NOT ESI
006cdc14  AND ESI,dword ptr [EBP + 0xc]
006cdc17  ADD ESI,dword ptr [EBP + -0xc]
006cdc1a  IMUL ESI,dword ptr [EBP + -0x14]
006cdc1e  XOR EDX,ESI
006cdc20  AND EDX,dword ptr [EBP + -0x20]
006cdc23  XOR EDX,dword ptr [EBP + 0xc]
006cdc26  AND EDX,dword ptr [EBP + -0x20]
006cdc29  ADD EDX,dword ptr [EBP + -0x4]
006cdc2c  IMUL EDX,dword ptr [EBP + -0x28]
006cdc30  XOR ECX,EDX
006cdc32  MOV EDX,dword ptr [EBP + -0x20]
006cdc35  NOT EDX
006cdc37  AND EDX,dword ptr [EBP + 0xc]
006cdc3a  MOV ESI,dword ptr [EBP + -0x20]
006cdc3d  NOT ESI
006cdc3f  AND ESI,dword ptr [EBP + 0xc]
006cdc42  ADD ESI,dword ptr [EBP + -0x18]
006cdc45  IMUL ESI,dword ptr [EBP + -0x1c]
006cdc49  XOR EDX,ESI
006cdc4b  MOV ESI,dword ptr [EBP + -0x20]
006cdc4e  NOT ESI
006cdc50  AND ESI,dword ptr [EBP + 0xc]
006cdc53  ADD ESI,dword ptr [EBP + -0xc]
006cdc56  IMUL ESI,dword ptr [EBP + -0x14]
006cdc5a  XOR EDX,ESI
006cdc5c  AND EDX,dword ptr [EBP + -0x20]
006cdc5f  XOR EDX,dword ptr [EBP + 0xc]
006cdc62  AND EDX,dword ptr [EBP + -0x20]
006cdc65  ADD EDX,dword ptr [EBP + -0x24]
006cdc68  IMUL EDX,dword ptr [EBP + -0x8]
006cdc6c  XOR ECX,EDX
006cdc6e  MOV EDX,dword ptr [EBP + -0x20]
006cdc71  NOT EDX
006cdc73  AND ECX,EDX
006cdc75  XOR EAX,ECX
006cdc77  MOV dword ptr [EBP + -0x10],EAX
006cdc7a  PUSH EAX
006cdc7b  MOV EAX,0xcfcecdcc
006cdc80  MOV EAX,0x6cdb2d
006cdc85  MOV EAX,0x0
006cdc8a  MOV EAX,0x0
006cdc8f  MOV EAX,0xcecdcccb
006cdc94  POP EAX
006cdc95  MOV EAX,dword ptr [EBP + -0x10]
006cdc98  POP ESI
006cdc99  MOV ESP,EBP
006cdc9b  POP EBP
006cdc9c  RET
