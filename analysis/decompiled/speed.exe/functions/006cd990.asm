006cd990  PUSH EBP
006cd991  MOV EBP,ESP
006cd993  SUB ESP,0x28
006cd996  PUSH ESI
006cd997  PUSH EAX
006cd998  MOV EAX,0xcfcecdcc
006cd99d  MOV EAX,0x6cd99d
006cd9a2  MOV EAX,0x1
006cd9a7  MOV EAX,0x0
006cd9ac  MOV EAX,0xcfcecdcc
006cd9b1  POP EAX
006cd9b2  MOV EAX,dword ptr [EBP + 0x8]
006cd9b5  MOV ECX,dword ptr [EAX + 0x14]
006cd9b8  MOV dword ptr [EBP + -0x20],ECX
006cd9bb  MOV EDX,dword ptr [EBP + 0x8]
006cd9be  MOV EAX,dword ptr [EDX + 0x18]
006cd9c1  MOV dword ptr [EBP + -0x1c],EAX
006cd9c4  MOV ECX,dword ptr [EBP + 0x8]
006cd9c7  MOV EDX,dword ptr [ECX + 0x1c]
006cd9ca  MOV dword ptr [EBP + -0x18],EDX
006cd9cd  MOV EAX,dword ptr [EBP + 0x8]
006cd9d0  MOV ECX,dword ptr [EAX + 0x20]
006cd9d3  MOV dword ptr [EBP + -0x14],ECX
006cd9d6  MOV EDX,dword ptr [EBP + 0x8]
006cd9d9  MOV EAX,dword ptr [EDX + 0x24]
006cd9dc  MOV dword ptr [EBP + -0xc],EAX
006cd9df  MOV ECX,dword ptr [EBP + 0x8]
006cd9e2  MOV EDX,dword ptr [ECX + 0x28]
006cd9e5  MOV dword ptr [EBP + -0x4],EDX
006cd9e8  MOV EAX,dword ptr [EBP + 0x8]
006cd9eb  MOV ECX,dword ptr [EAX + 0x2c]
006cd9ee  MOV dword ptr [EBP + -0x28],ECX
006cd9f1  MOV EDX,dword ptr [EBP + 0x8]
006cd9f4  MOV EAX,dword ptr [EDX + 0x30]
006cd9f7  MOV dword ptr [EBP + -0x24],EAX
006cd9fa  MOV ECX,dword ptr [EBP + 0x8]
006cd9fd  MOV EDX,dword ptr [ECX + 0x34]
006cda00  MOV dword ptr [EBP + -0x8],EDX
006cda03  MOV EAX,dword ptr [EBP + 0xc]
006cda06  AND EAX,dword ptr [EBP + -0x20]
006cda09  MOV ECX,dword ptr [EBP + 0xc]
006cda0c  AND ECX,dword ptr [EBP + -0x20]
006cda0f  ADD ECX,dword ptr [EBP + -0x4]
006cda12  IMUL ECX,dword ptr [EBP + -0x28]
006cda16  XOR EAX,ECX
006cda18  MOV EDX,dword ptr [EBP + 0xc]
006cda1b  AND EDX,dword ptr [EBP + -0x20]
006cda1e  ADD EDX,dword ptr [EBP + -0x24]
006cda21  IMUL EDX,dword ptr [EBP + -0x8]
006cda25  XOR EAX,EDX
006cda27  MOV ECX,dword ptr [EBP + -0x20]
006cda2a  NOT ECX
006cda2c  AND EAX,ECX
006cda2e  XOR EAX,dword ptr [EBP + 0xc]
006cda31  MOV EDX,dword ptr [EBP + 0xc]
006cda34  AND EDX,dword ptr [EBP + -0x20]
006cda37  MOV ECX,dword ptr [EBP + 0xc]
006cda3a  AND ECX,dword ptr [EBP + -0x20]
006cda3d  ADD ECX,dword ptr [EBP + -0x4]
006cda40  IMUL ECX,dword ptr [EBP + -0x28]
006cda44  XOR EDX,ECX
006cda46  MOV ECX,dword ptr [EBP + 0xc]
006cda49  AND ECX,dword ptr [EBP + -0x20]
006cda4c  ADD ECX,dword ptr [EBP + -0x24]
006cda4f  IMUL ECX,dword ptr [EBP + -0x8]
006cda53  XOR EDX,ECX
006cda55  MOV ECX,dword ptr [EBP + -0x20]
006cda58  NOT ECX
006cda5a  AND EDX,ECX
006cda5c  XOR EDX,dword ptr [EBP + 0xc]
006cda5f  MOV ECX,dword ptr [EBP + -0x20]
006cda62  NOT ECX
006cda64  AND EDX,ECX
006cda66  MOV ECX,dword ptr [EBP + 0xc]
006cda69  AND ECX,dword ptr [EBP + -0x20]
006cda6c  MOV ESI,dword ptr [EBP + 0xc]
006cda6f  AND ESI,dword ptr [EBP + -0x20]
006cda72  ADD ESI,dword ptr [EBP + -0x4]
006cda75  IMUL ESI,dword ptr [EBP + -0x28]
006cda79  XOR ECX,ESI
006cda7b  MOV ESI,dword ptr [EBP + 0xc]
006cda7e  AND ESI,dword ptr [EBP + -0x20]
006cda81  ADD ESI,dword ptr [EBP + -0x24]
006cda84  IMUL ESI,dword ptr [EBP + -0x8]
006cda88  XOR ECX,ESI
006cda8a  MOV ESI,dword ptr [EBP + -0x20]
006cda8d  NOT ESI
006cda8f  AND ECX,ESI
006cda91  XOR ECX,dword ptr [EBP + 0xc]
006cda94  MOV ESI,dword ptr [EBP + -0x20]
006cda97  NOT ESI
006cda99  AND ECX,ESI
006cda9b  ADD ECX,dword ptr [EBP + -0x18]
006cda9e  IMUL ECX,dword ptr [EBP + -0x1c]
006cdaa2  XOR EDX,ECX
006cdaa4  MOV ECX,dword ptr [EBP + 0xc]
006cdaa7  AND ECX,dword ptr [EBP + -0x20]
006cdaaa  MOV ESI,dword ptr [EBP + 0xc]
006cdaad  AND ESI,dword ptr [EBP + -0x20]
006cdab0  ADD ESI,dword ptr [EBP + -0x4]
006cdab3  IMUL ESI,dword ptr [EBP + -0x28]
006cdab7  XOR ECX,ESI
006cdab9  MOV ESI,dword ptr [EBP + 0xc]
006cdabc  AND ESI,dword ptr [EBP + -0x20]
006cdabf  ADD ESI,dword ptr [EBP + -0x24]
006cdac2  IMUL ESI,dword ptr [EBP + -0x8]
006cdac6  XOR ECX,ESI
006cdac8  MOV ESI,dword ptr [EBP + -0x20]
006cdacb  NOT ESI
006cdacd  AND ECX,ESI
006cdacf  XOR ECX,dword ptr [EBP + 0xc]
006cdad2  MOV ESI,dword ptr [EBP + -0x20]
006cdad5  NOT ESI
006cdad7  AND ECX,ESI
006cdad9  ADD ECX,dword ptr [EBP + -0xc]
006cdadc  IMUL ECX,dword ptr [EBP + -0x14]
006cdae0  XOR EDX,ECX
006cdae2  AND EDX,dword ptr [EBP + -0x20]
006cdae5  XOR EAX,EDX
006cdae7  MOV dword ptr [EBP + -0x10],EAX
006cdaea  PUSH EAX
006cdaeb  MOV EAX,0xcfcecdcc
006cdaf0  MOV EAX,0x6cd99d
006cdaf5  MOV EAX,0x0
006cdafa  MOV EAX,0x0
006cdaff  MOV EAX,0xcecdcccb
006cdb04  POP EAX
006cdb05  MOV EAX,dword ptr [EBP + -0x10]
006cdb08  POP ESI
006cdb09  MOV ESP,EBP
006cdb0b  POP EBP
006cdb0c  RET
