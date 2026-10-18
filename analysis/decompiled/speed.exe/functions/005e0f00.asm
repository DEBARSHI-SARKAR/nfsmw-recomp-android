005e0f00  PUSH EBP
005e0f01  MOV EBP,ESP
005e0f03  SUB ESP,0x28
005e0f06  PUSH ESI
005e0f07  PUSH EAX
005e0f08  MOV EAX,0xcfcecdcc
005e0f0d  MOV EAX,0x5e0f0d
005e0f12  MOV EAX,0x1
005e0f17  MOV EAX,0x0
005e0f1c  MOV EAX,0xcfcecdcc
005e0f21  POP EAX
005e0f22  MOV EAX,dword ptr [EBP + 0x8]
005e0f25  MOV ECX,dword ptr [EAX + 0x14]
005e0f28  MOV dword ptr [EBP + -0x20],ECX
005e0f2b  MOV EDX,dword ptr [EBP + 0x8]
005e0f2e  MOV EAX,dword ptr [EDX + 0x18]
005e0f31  MOV dword ptr [EBP + -0x1c],EAX
005e0f34  MOV ECX,dword ptr [EBP + 0x8]
005e0f37  MOV EDX,dword ptr [ECX + 0x1c]
005e0f3a  MOV dword ptr [EBP + -0x18],EDX
005e0f3d  MOV EAX,dword ptr [EBP + 0x8]
005e0f40  MOV ECX,dword ptr [EAX + 0x20]
005e0f43  MOV dword ptr [EBP + -0x14],ECX
005e0f46  MOV EDX,dword ptr [EBP + 0x8]
005e0f49  MOV EAX,dword ptr [EDX + 0x24]
005e0f4c  MOV dword ptr [EBP + -0xc],EAX
005e0f4f  MOV ECX,dword ptr [EBP + 0x8]
005e0f52  MOV EDX,dword ptr [ECX + 0x28]
005e0f55  MOV dword ptr [EBP + -0x4],EDX
005e0f58  MOV EAX,dword ptr [EBP + 0x8]
005e0f5b  MOV ECX,dword ptr [EAX + 0x2c]
005e0f5e  MOV dword ptr [EBP + -0x28],ECX
005e0f61  MOV EDX,dword ptr [EBP + 0x8]
005e0f64  MOV EAX,dword ptr [EDX + 0x30]
005e0f67  MOV dword ptr [EBP + -0x24],EAX
005e0f6a  MOV ECX,dword ptr [EBP + 0x8]
005e0f6d  MOV EDX,dword ptr [ECX + 0x34]
005e0f70  MOV dword ptr [EBP + -0x8],EDX
005e0f73  MOV EAX,dword ptr [EBP + -0x20]
005e0f76  NOT EAX
005e0f78  AND EAX,dword ptr [EBP + 0xc]
005e0f7b  MOV ECX,dword ptr [EBP + -0x20]
005e0f7e  NOT ECX
005e0f80  AND ECX,dword ptr [EBP + 0xc]
005e0f83  ADD ECX,dword ptr [EBP + -0x18]
005e0f86  IMUL ECX,dword ptr [EBP + -0x1c]
005e0f8a  XOR EAX,ECX
005e0f8c  MOV EDX,dword ptr [EBP + -0x20]
005e0f8f  NOT EDX
005e0f91  AND EDX,dword ptr [EBP + 0xc]
005e0f94  ADD EDX,dword ptr [EBP + -0xc]
005e0f97  IMUL EDX,dword ptr [EBP + -0x14]
005e0f9b  XOR EAX,EDX
005e0f9d  AND EAX,dword ptr [EBP + -0x20]
005e0fa0  XOR EAX,dword ptr [EBP + 0xc]
005e0fa3  MOV ECX,dword ptr [EBP + -0x20]
005e0fa6  NOT ECX
005e0fa8  AND ECX,dword ptr [EBP + 0xc]
005e0fab  MOV EDX,dword ptr [EBP + -0x20]
005e0fae  NOT EDX
005e0fb0  AND EDX,dword ptr [EBP + 0xc]
005e0fb3  ADD EDX,dword ptr [EBP + -0x18]
005e0fb6  IMUL EDX,dword ptr [EBP + -0x1c]
005e0fba  XOR ECX,EDX
005e0fbc  MOV EDX,dword ptr [EBP + -0x20]
005e0fbf  NOT EDX
005e0fc1  AND EDX,dword ptr [EBP + 0xc]
005e0fc4  ADD EDX,dword ptr [EBP + -0xc]
005e0fc7  IMUL EDX,dword ptr [EBP + -0x14]
005e0fcb  XOR ECX,EDX
005e0fcd  AND ECX,dword ptr [EBP + -0x20]
005e0fd0  XOR ECX,dword ptr [EBP + 0xc]
005e0fd3  AND ECX,dword ptr [EBP + -0x20]
005e0fd6  MOV EDX,dword ptr [EBP + -0x20]
005e0fd9  NOT EDX
005e0fdb  AND EDX,dword ptr [EBP + 0xc]
005e0fde  MOV ESI,dword ptr [EBP + -0x20]
005e0fe1  NOT ESI
005e0fe3  AND ESI,dword ptr [EBP + 0xc]
005e0fe6  ADD ESI,dword ptr [EBP + -0x18]
005e0fe9  IMUL ESI,dword ptr [EBP + -0x1c]
005e0fed  XOR EDX,ESI
005e0fef  MOV ESI,dword ptr [EBP + -0x20]
005e0ff2  NOT ESI
005e0ff4  AND ESI,dword ptr [EBP + 0xc]
005e0ff7  ADD ESI,dword ptr [EBP + -0xc]
005e0ffa  IMUL ESI,dword ptr [EBP + -0x14]
005e0ffe  XOR EDX,ESI
005e1000  AND EDX,dword ptr [EBP + -0x20]
005e1003  XOR EDX,dword ptr [EBP + 0xc]
005e1006  AND EDX,dword ptr [EBP + -0x20]
005e1009  ADD EDX,dword ptr [EBP + -0x4]
005e100c  IMUL EDX,dword ptr [EBP + -0x28]
005e1010  XOR ECX,EDX
005e1012  MOV EDX,dword ptr [EBP + -0x20]
005e1015  NOT EDX
005e1017  AND EDX,dword ptr [EBP + 0xc]
005e101a  MOV ESI,dword ptr [EBP + -0x20]
005e101d  NOT ESI
005e101f  AND ESI,dword ptr [EBP + 0xc]
005e1022  ADD ESI,dword ptr [EBP + -0x18]
005e1025  IMUL ESI,dword ptr [EBP + -0x1c]
005e1029  XOR EDX,ESI
005e102b  MOV ESI,dword ptr [EBP + -0x20]
005e102e  NOT ESI
005e1030  AND ESI,dword ptr [EBP + 0xc]
005e1033  ADD ESI,dword ptr [EBP + -0xc]
005e1036  IMUL ESI,dword ptr [EBP + -0x14]
005e103a  XOR EDX,ESI
005e103c  AND EDX,dword ptr [EBP + -0x20]
005e103f  XOR EDX,dword ptr [EBP + 0xc]
005e1042  AND EDX,dword ptr [EBP + -0x20]
005e1045  ADD EDX,dword ptr [EBP + -0x24]
005e1048  IMUL EDX,dword ptr [EBP + -0x8]
005e104c  XOR ECX,EDX
005e104e  MOV EDX,dword ptr [EBP + -0x20]
005e1051  NOT EDX
005e1053  AND ECX,EDX
005e1055  XOR EAX,ECX
005e1057  MOV dword ptr [EBP + -0x10],EAX
005e105a  PUSH EAX
005e105b  MOV EAX,0xcfcecdcc
005e1060  MOV EAX,0x5e0f0d
005e1065  MOV EAX,0x0
005e106a  MOV EAX,0x0
005e106f  MOV EAX,0xcecdcccb
005e1074  POP EAX
005e1075  MOV EAX,dword ptr [EBP + -0x10]
005e1078  POP ESI
005e1079  MOV ESP,EBP
005e107b  POP EBP
005e107c  RET
