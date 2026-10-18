006ccb60  PUSH EBP
006ccb61  MOV EBP,ESP
006ccb63  SUB ESP,0x28
006ccb66  PUSH ESI
006ccb67  PUSH EAX
006ccb68  MOV EAX,0xcfcecdcc
006ccb6d  MOV EAX,0x6ccb6d
006ccb72  MOV EAX,0x1
006ccb77  MOV EAX,0x0
006ccb7c  MOV EAX,0xcfcecdcc
006ccb81  POP EAX
006ccb82  MOV EAX,dword ptr [EBP + 0x8]
006ccb85  MOV ECX,dword ptr [EAX + 0x14]
006ccb88  MOV dword ptr [EBP + -0x20],ECX
006ccb8b  MOV EDX,dword ptr [EBP + 0x8]
006ccb8e  MOV EAX,dword ptr [EDX + 0x18]
006ccb91  MOV dword ptr [EBP + -0x1c],EAX
006ccb94  MOV ECX,dword ptr [EBP + 0x8]
006ccb97  MOV EDX,dword ptr [ECX + 0x1c]
006ccb9a  MOV dword ptr [EBP + -0x18],EDX
006ccb9d  MOV EAX,dword ptr [EBP + 0x8]
006ccba0  MOV ECX,dword ptr [EAX + 0x20]
006ccba3  MOV dword ptr [EBP + -0x14],ECX
006ccba6  MOV EDX,dword ptr [EBP + 0x8]
006ccba9  MOV EAX,dword ptr [EDX + 0x24]
006ccbac  MOV dword ptr [EBP + -0xc],EAX
006ccbaf  MOV ECX,dword ptr [EBP + 0x8]
006ccbb2  MOV EDX,dword ptr [ECX + 0x28]
006ccbb5  MOV dword ptr [EBP + -0x4],EDX
006ccbb8  MOV EAX,dword ptr [EBP + 0x8]
006ccbbb  MOV ECX,dword ptr [EAX + 0x2c]
006ccbbe  MOV dword ptr [EBP + -0x28],ECX
006ccbc1  MOV EDX,dword ptr [EBP + 0x8]
006ccbc4  MOV EAX,dword ptr [EDX + 0x30]
006ccbc7  MOV dword ptr [EBP + -0x24],EAX
006ccbca  MOV ECX,dword ptr [EBP + 0x8]
006ccbcd  MOV EDX,dword ptr [ECX + 0x34]
006ccbd0  MOV dword ptr [EBP + -0x8],EDX
006ccbd3  MOV EAX,dword ptr [EBP + -0x20]
006ccbd6  NOT EAX
006ccbd8  AND EAX,dword ptr [EBP + 0xc]
006ccbdb  MOV ECX,dword ptr [EBP + -0x20]
006ccbde  NOT ECX
006ccbe0  AND ECX,dword ptr [EBP + 0xc]
006ccbe3  ADD ECX,dword ptr [EBP + -0x18]
006ccbe6  IMUL ECX,dword ptr [EBP + -0x1c]
006ccbea  XOR EAX,ECX
006ccbec  MOV EDX,dword ptr [EBP + -0x20]
006ccbef  NOT EDX
006ccbf1  AND EDX,dword ptr [EBP + 0xc]
006ccbf4  ADD EDX,dword ptr [EBP + -0xc]
006ccbf7  IMUL EDX,dword ptr [EBP + -0x14]
006ccbfb  XOR EAX,EDX
006ccbfd  AND EAX,dword ptr [EBP + -0x20]
006ccc00  XOR EAX,dword ptr [EBP + 0xc]
006ccc03  MOV ECX,dword ptr [EBP + -0x20]
006ccc06  NOT ECX
006ccc08  AND ECX,dword ptr [EBP + 0xc]
006ccc0b  MOV EDX,dword ptr [EBP + -0x20]
006ccc0e  NOT EDX
006ccc10  AND EDX,dword ptr [EBP + 0xc]
006ccc13  ADD EDX,dword ptr [EBP + -0x18]
006ccc16  IMUL EDX,dword ptr [EBP + -0x1c]
006ccc1a  XOR ECX,EDX
006ccc1c  MOV EDX,dword ptr [EBP + -0x20]
006ccc1f  NOT EDX
006ccc21  AND EDX,dword ptr [EBP + 0xc]
006ccc24  ADD EDX,dword ptr [EBP + -0xc]
006ccc27  IMUL EDX,dword ptr [EBP + -0x14]
006ccc2b  XOR ECX,EDX
006ccc2d  AND ECX,dword ptr [EBP + -0x20]
006ccc30  XOR ECX,dword ptr [EBP + 0xc]
006ccc33  AND ECX,dword ptr [EBP + -0x20]
006ccc36  MOV EDX,dword ptr [EBP + -0x20]
006ccc39  NOT EDX
006ccc3b  AND EDX,dword ptr [EBP + 0xc]
006ccc3e  MOV ESI,dword ptr [EBP + -0x20]
006ccc41  NOT ESI
006ccc43  AND ESI,dword ptr [EBP + 0xc]
006ccc46  ADD ESI,dword ptr [EBP + -0x18]
006ccc49  IMUL ESI,dword ptr [EBP + -0x1c]
006ccc4d  XOR EDX,ESI
006ccc4f  MOV ESI,dword ptr [EBP + -0x20]
006ccc52  NOT ESI
006ccc54  AND ESI,dword ptr [EBP + 0xc]
006ccc57  ADD ESI,dword ptr [EBP + -0xc]
006ccc5a  IMUL ESI,dword ptr [EBP + -0x14]
006ccc5e  XOR EDX,ESI
006ccc60  AND EDX,dword ptr [EBP + -0x20]
006ccc63  XOR EDX,dword ptr [EBP + 0xc]
006ccc66  AND EDX,dword ptr [EBP + -0x20]
006ccc69  ADD EDX,dword ptr [EBP + -0x4]
006ccc6c  IMUL EDX,dword ptr [EBP + -0x28]
006ccc70  XOR ECX,EDX
006ccc72  MOV EDX,dword ptr [EBP + -0x20]
006ccc75  NOT EDX
006ccc77  AND EDX,dword ptr [EBP + 0xc]
006ccc7a  MOV ESI,dword ptr [EBP + -0x20]
006ccc7d  NOT ESI
006ccc7f  AND ESI,dword ptr [EBP + 0xc]
006ccc82  ADD ESI,dword ptr [EBP + -0x18]
006ccc85  IMUL ESI,dword ptr [EBP + -0x1c]
006ccc89  XOR EDX,ESI
006ccc8b  MOV ESI,dword ptr [EBP + -0x20]
006ccc8e  NOT ESI
006ccc90  AND ESI,dword ptr [EBP + 0xc]
006ccc93  ADD ESI,dword ptr [EBP + -0xc]
006ccc96  IMUL ESI,dword ptr [EBP + -0x14]
006ccc9a  XOR EDX,ESI
006ccc9c  AND EDX,dword ptr [EBP + -0x20]
006ccc9f  XOR EDX,dword ptr [EBP + 0xc]
006ccca2  AND EDX,dword ptr [EBP + -0x20]
006ccca5  ADD EDX,dword ptr [EBP + -0x24]
006ccca8  IMUL EDX,dword ptr [EBP + -0x8]
006cccac  XOR ECX,EDX
006cccae  MOV EDX,dword ptr [EBP + -0x20]
006cccb1  NOT EDX
006cccb3  AND ECX,EDX
006cccb5  XOR EAX,ECX
006cccb7  MOV dword ptr [EBP + -0x10],EAX
006cccba  PUSH EAX
006cccbb  MOV EAX,0xcfcecdcc
006cccc0  MOV EAX,0x6ccb6d
006cccc5  MOV EAX,0x0
006cccca  MOV EAX,0x0
006ccccf  MOV EAX,0xcecdcccb
006cccd4  POP EAX
006cccd5  MOV EAX,dword ptr [EBP + -0x10]
006cccd8  POP ESI
006cccd9  MOV ESP,EBP
006cccdb  POP EBP
006cccdc  RET
