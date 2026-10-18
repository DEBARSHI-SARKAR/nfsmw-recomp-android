005e1080  PUSH EBP
005e1081  MOV EBP,ESP
005e1083  SUB ESP,0x28
005e1086  PUSH ESI
005e1087  PUSH EAX
005e1088  MOV EAX,0xcfcecdcc
005e108d  MOV EAX,0x5e108d
005e1092  MOV EAX,0x1
005e1097  MOV EAX,0x0
005e109c  MOV EAX,0xcfcecdcc
005e10a1  POP EAX
005e10a2  MOV EAX,dword ptr [EBP + 0x8]
005e10a5  MOV ECX,dword ptr [EAX + 0x14]
005e10a8  MOV dword ptr [EBP + -0x20],ECX
005e10ab  MOV EDX,dword ptr [EBP + 0x8]
005e10ae  MOV EAX,dword ptr [EDX + 0x18]
005e10b1  MOV dword ptr [EBP + -0x1c],EAX
005e10b4  MOV ECX,dword ptr [EBP + 0x8]
005e10b7  MOV EDX,dword ptr [ECX + 0x1c]
005e10ba  MOV dword ptr [EBP + -0x18],EDX
005e10bd  MOV EAX,dword ptr [EBP + 0x8]
005e10c0  MOV ECX,dword ptr [EAX + 0x20]
005e10c3  MOV dword ptr [EBP + -0x14],ECX
005e10c6  MOV EDX,dword ptr [EBP + 0x8]
005e10c9  MOV EAX,dword ptr [EDX + 0x24]
005e10cc  MOV dword ptr [EBP + -0xc],EAX
005e10cf  MOV ECX,dword ptr [EBP + 0x8]
005e10d2  MOV EDX,dword ptr [ECX + 0x28]
005e10d5  MOV dword ptr [EBP + -0x4],EDX
005e10d8  MOV EAX,dword ptr [EBP + 0x8]
005e10db  MOV ECX,dword ptr [EAX + 0x2c]
005e10de  MOV dword ptr [EBP + -0x28],ECX
005e10e1  MOV EDX,dword ptr [EBP + 0x8]
005e10e4  MOV EAX,dword ptr [EDX + 0x30]
005e10e7  MOV dword ptr [EBP + -0x24],EAX
005e10ea  MOV ECX,dword ptr [EBP + 0x8]
005e10ed  MOV EDX,dword ptr [ECX + 0x34]
005e10f0  MOV dword ptr [EBP + -0x8],EDX
005e10f3  MOV EAX,dword ptr [EBP + 0xc]
005e10f6  AND EAX,dword ptr [EBP + -0x20]
005e10f9  MOV ECX,dword ptr [EBP + 0xc]
005e10fc  AND ECX,dword ptr [EBP + -0x20]
005e10ff  ADD ECX,dword ptr [EBP + -0x4]
005e1102  IMUL ECX,dword ptr [EBP + -0x28]
005e1106  XOR EAX,ECX
005e1108  MOV EDX,dword ptr [EBP + 0xc]
005e110b  AND EDX,dword ptr [EBP + -0x20]
005e110e  ADD EDX,dword ptr [EBP + -0x24]
005e1111  IMUL EDX,dword ptr [EBP + -0x8]
005e1115  XOR EAX,EDX
005e1117  MOV ECX,dword ptr [EBP + -0x20]
005e111a  NOT ECX
005e111c  AND EAX,ECX
005e111e  XOR EAX,dword ptr [EBP + 0xc]
005e1121  MOV EDX,dword ptr [EBP + 0xc]
005e1124  AND EDX,dword ptr [EBP + -0x20]
005e1127  MOV ECX,dword ptr [EBP + 0xc]
005e112a  AND ECX,dword ptr [EBP + -0x20]
005e112d  ADD ECX,dword ptr [EBP + -0x4]
005e1130  IMUL ECX,dword ptr [EBP + -0x28]
005e1134  XOR EDX,ECX
005e1136  MOV ECX,dword ptr [EBP + 0xc]
005e1139  AND ECX,dword ptr [EBP + -0x20]
005e113c  ADD ECX,dword ptr [EBP + -0x24]
005e113f  IMUL ECX,dword ptr [EBP + -0x8]
005e1143  XOR EDX,ECX
005e1145  MOV ECX,dword ptr [EBP + -0x20]
005e1148  NOT ECX
005e114a  AND EDX,ECX
005e114c  XOR EDX,dword ptr [EBP + 0xc]
005e114f  MOV ECX,dword ptr [EBP + -0x20]
005e1152  NOT ECX
005e1154  AND EDX,ECX
005e1156  MOV ECX,dword ptr [EBP + 0xc]
005e1159  AND ECX,dword ptr [EBP + -0x20]
005e115c  MOV ESI,dword ptr [EBP + 0xc]
005e115f  AND ESI,dword ptr [EBP + -0x20]
005e1162  ADD ESI,dword ptr [EBP + -0x4]
005e1165  IMUL ESI,dword ptr [EBP + -0x28]
005e1169  XOR ECX,ESI
005e116b  MOV ESI,dword ptr [EBP + 0xc]
005e116e  AND ESI,dword ptr [EBP + -0x20]
005e1171  ADD ESI,dword ptr [EBP + -0x24]
005e1174  IMUL ESI,dword ptr [EBP + -0x8]
005e1178  XOR ECX,ESI
005e117a  MOV ESI,dword ptr [EBP + -0x20]
005e117d  NOT ESI
005e117f  AND ECX,ESI
005e1181  XOR ECX,dword ptr [EBP + 0xc]
005e1184  MOV ESI,dword ptr [EBP + -0x20]
005e1187  NOT ESI
005e1189  AND ECX,ESI
005e118b  ADD ECX,dword ptr [EBP + -0x18]
005e118e  IMUL ECX,dword ptr [EBP + -0x1c]
005e1192  XOR EDX,ECX
005e1194  MOV ECX,dword ptr [EBP + 0xc]
005e1197  AND ECX,dword ptr [EBP + -0x20]
005e119a  MOV ESI,dword ptr [EBP + 0xc]
005e119d  AND ESI,dword ptr [EBP + -0x20]
005e11a0  ADD ESI,dword ptr [EBP + -0x4]
005e11a3  IMUL ESI,dword ptr [EBP + -0x28]
005e11a7  XOR ECX,ESI
005e11a9  MOV ESI,dword ptr [EBP + 0xc]
005e11ac  AND ESI,dword ptr [EBP + -0x20]
005e11af  ADD ESI,dword ptr [EBP + -0x24]
005e11b2  IMUL ESI,dword ptr [EBP + -0x8]
005e11b6  XOR ECX,ESI
005e11b8  MOV ESI,dword ptr [EBP + -0x20]
005e11bb  NOT ESI
005e11bd  AND ECX,ESI
005e11bf  XOR ECX,dword ptr [EBP + 0xc]
005e11c2  MOV ESI,dword ptr [EBP + -0x20]
005e11c5  NOT ESI
005e11c7  AND ECX,ESI
005e11c9  ADD ECX,dword ptr [EBP + -0xc]
005e11cc  IMUL ECX,dword ptr [EBP + -0x14]
005e11d0  XOR EDX,ECX
005e11d2  AND EDX,dword ptr [EBP + -0x20]
005e11d5  XOR EAX,EDX
005e11d7  MOV dword ptr [EBP + -0x10],EAX
005e11da  PUSH EAX
005e11db  MOV EAX,0xcfcecdcc
005e11e0  MOV EAX,0x5e108d
005e11e5  MOV EAX,0x0
005e11ea  MOV EAX,0x0
005e11ef  MOV EAX,0xcecdcccb
005e11f4  POP EAX
005e11f5  MOV EAX,dword ptr [EBP + -0x10]
005e11f8  POP ESI
005e11f9  MOV ESP,EBP
005e11fb  POP EBP
005e11fc  RET
