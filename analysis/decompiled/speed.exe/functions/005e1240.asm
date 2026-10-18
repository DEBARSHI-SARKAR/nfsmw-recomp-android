005e1240  PUSH EBP
005e1241  MOV EBP,ESP
005e1243  SUB ESP,0x28
005e1246  PUSH ESI
005e1247  PUSH EAX
005e1248  MOV EAX,0xcfcecdcc
005e124d  MOV EAX,0x5e124d
005e1252  MOV EAX,0x1
005e1257  MOV EAX,0x0
005e125c  MOV EAX,0xcfcecdcc
005e1261  POP EAX
005e1262  MOV EAX,dword ptr [EBP + 0x8]
005e1265  MOV ECX,dword ptr [EAX + 0x14]
005e1268  MOV dword ptr [EBP + -0x20],ECX
005e126b  MOV EDX,dword ptr [EBP + 0x8]
005e126e  MOV EAX,dword ptr [EDX + 0x18]
005e1271  MOV dword ptr [EBP + -0x1c],EAX
005e1274  MOV ECX,dword ptr [EBP + 0x8]
005e1277  MOV EDX,dword ptr [ECX + 0x1c]
005e127a  MOV dword ptr [EBP + -0x18],EDX
005e127d  MOV EAX,dword ptr [EBP + 0x8]
005e1280  MOV ECX,dword ptr [EAX + 0x20]
005e1283  MOV dword ptr [EBP + -0x14],ECX
005e1286  MOV EDX,dword ptr [EBP + 0x8]
005e1289  MOV EAX,dword ptr [EDX + 0x24]
005e128c  MOV dword ptr [EBP + -0xc],EAX
005e128f  MOV ECX,dword ptr [EBP + 0x8]
005e1292  MOV EDX,dword ptr [ECX + 0x28]
005e1295  MOV dword ptr [EBP + -0x4],EDX
005e1298  MOV EAX,dword ptr [EBP + 0x8]
005e129b  MOV ECX,dword ptr [EAX + 0x2c]
005e129e  MOV dword ptr [EBP + -0x28],ECX
005e12a1  MOV EDX,dword ptr [EBP + 0x8]
005e12a4  MOV EAX,dword ptr [EDX + 0x30]
005e12a7  MOV dword ptr [EBP + -0x24],EAX
005e12aa  MOV ECX,dword ptr [EBP + 0x8]
005e12ad  MOV EDX,dword ptr [ECX + 0x34]
005e12b0  MOV dword ptr [EBP + -0x8],EDX
005e12b3  MOV EAX,dword ptr [EBP + -0x20]
005e12b6  NOT EAX
005e12b8  AND EAX,dword ptr [EBP + 0xc]
005e12bb  MOV ECX,dword ptr [EBP + -0x20]
005e12be  NOT ECX
005e12c0  AND ECX,dword ptr [EBP + 0xc]
005e12c3  ADD ECX,dword ptr [EBP + -0x18]
005e12c6  IMUL ECX,dword ptr [EBP + -0x1c]
005e12ca  XOR EAX,ECX
005e12cc  MOV EDX,dword ptr [EBP + -0x20]
005e12cf  NOT EDX
005e12d1  AND EDX,dword ptr [EBP + 0xc]
005e12d4  ADD EDX,dword ptr [EBP + -0xc]
005e12d7  IMUL EDX,dword ptr [EBP + -0x14]
005e12db  XOR EAX,EDX
005e12dd  AND EAX,dword ptr [EBP + -0x20]
005e12e0  XOR EAX,dword ptr [EBP + 0xc]
005e12e3  MOV ECX,dword ptr [EBP + -0x20]
005e12e6  NOT ECX
005e12e8  AND ECX,dword ptr [EBP + 0xc]
005e12eb  MOV EDX,dword ptr [EBP + -0x20]
005e12ee  NOT EDX
005e12f0  AND EDX,dword ptr [EBP + 0xc]
005e12f3  ADD EDX,dword ptr [EBP + -0x18]
005e12f6  IMUL EDX,dword ptr [EBP + -0x1c]
005e12fa  XOR ECX,EDX
005e12fc  MOV EDX,dword ptr [EBP + -0x20]
005e12ff  NOT EDX
005e1301  AND EDX,dword ptr [EBP + 0xc]
005e1304  ADD EDX,dword ptr [EBP + -0xc]
005e1307  IMUL EDX,dword ptr [EBP + -0x14]
005e130b  XOR ECX,EDX
005e130d  AND ECX,dword ptr [EBP + -0x20]
005e1310  XOR ECX,dword ptr [EBP + 0xc]
005e1313  AND ECX,dword ptr [EBP + -0x20]
005e1316  MOV EDX,dword ptr [EBP + -0x20]
005e1319  NOT EDX
005e131b  AND EDX,dword ptr [EBP + 0xc]
005e131e  MOV ESI,dword ptr [EBP + -0x20]
005e1321  NOT ESI
005e1323  AND ESI,dword ptr [EBP + 0xc]
005e1326  ADD ESI,dword ptr [EBP + -0x18]
005e1329  IMUL ESI,dword ptr [EBP + -0x1c]
005e132d  XOR EDX,ESI
005e132f  MOV ESI,dword ptr [EBP + -0x20]
005e1332  NOT ESI
005e1334  AND ESI,dword ptr [EBP + 0xc]
005e1337  ADD ESI,dword ptr [EBP + -0xc]
005e133a  IMUL ESI,dword ptr [EBP + -0x14]
005e133e  XOR EDX,ESI
005e1340  AND EDX,dword ptr [EBP + -0x20]
005e1343  XOR EDX,dword ptr [EBP + 0xc]
005e1346  AND EDX,dword ptr [EBP + -0x20]
005e1349  ADD EDX,dword ptr [EBP + -0x4]
005e134c  IMUL EDX,dword ptr [EBP + -0x28]
005e1350  XOR ECX,EDX
005e1352  MOV EDX,dword ptr [EBP + -0x20]
005e1355  NOT EDX
005e1357  AND EDX,dword ptr [EBP + 0xc]
005e135a  MOV ESI,dword ptr [EBP + -0x20]
005e135d  NOT ESI
005e135f  AND ESI,dword ptr [EBP + 0xc]
005e1362  ADD ESI,dword ptr [EBP + -0x18]
005e1365  IMUL ESI,dword ptr [EBP + -0x1c]
005e1369  XOR EDX,ESI
005e136b  MOV ESI,dword ptr [EBP + -0x20]
005e136e  NOT ESI
005e1370  AND ESI,dword ptr [EBP + 0xc]
005e1373  ADD ESI,dword ptr [EBP + -0xc]
005e1376  IMUL ESI,dword ptr [EBP + -0x14]
005e137a  XOR EDX,ESI
005e137c  AND EDX,dword ptr [EBP + -0x20]
005e137f  XOR EDX,dword ptr [EBP + 0xc]
005e1382  AND EDX,dword ptr [EBP + -0x20]
005e1385  ADD EDX,dword ptr [EBP + -0x24]
005e1388  IMUL EDX,dword ptr [EBP + -0x8]
005e138c  XOR ECX,EDX
005e138e  MOV EDX,dword ptr [EBP + -0x20]
005e1391  NOT EDX
005e1393  AND ECX,EDX
005e1395  XOR EAX,ECX
005e1397  MOV dword ptr [EBP + -0x10],EAX
005e139a  PUSH EAX
005e139b  MOV EAX,0xcfcecdcc
005e13a0  MOV EAX,0x5e124d
005e13a5  MOV EAX,0x0
005e13aa  MOV EAX,0x0
005e13af  MOV EAX,0xcecdcccb
005e13b4  POP EAX
005e13b5  MOV EAX,dword ptr [EBP + -0x10]
005e13b8  POP ESI
005e13b9  MOV ESP,EBP
005e13bb  POP EBP
005e13bc  RET
