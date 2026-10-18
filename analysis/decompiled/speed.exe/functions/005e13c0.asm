005e13c0  PUSH EBP
005e13c1  MOV EBP,ESP
005e13c3  SUB ESP,0x28
005e13c6  PUSH ESI
005e13c7  PUSH EAX
005e13c8  MOV EAX,0xcfcecdcc
005e13cd  MOV EAX,0x5e13cd
005e13d2  MOV EAX,0x1
005e13d7  MOV EAX,0x0
005e13dc  MOV EAX,0xcfcecdcc
005e13e1  POP EAX
005e13e2  MOV EAX,dword ptr [EBP + 0x8]
005e13e5  MOV ECX,dword ptr [EAX + 0x14]
005e13e8  MOV dword ptr [EBP + -0x20],ECX
005e13eb  MOV EDX,dword ptr [EBP + 0x8]
005e13ee  MOV EAX,dword ptr [EDX + 0x18]
005e13f1  MOV dword ptr [EBP + -0x1c],EAX
005e13f4  MOV ECX,dword ptr [EBP + 0x8]
005e13f7  MOV EDX,dword ptr [ECX + 0x1c]
005e13fa  MOV dword ptr [EBP + -0x18],EDX
005e13fd  MOV EAX,dword ptr [EBP + 0x8]
005e1400  MOV ECX,dword ptr [EAX + 0x20]
005e1403  MOV dword ptr [EBP + -0x14],ECX
005e1406  MOV EDX,dword ptr [EBP + 0x8]
005e1409  MOV EAX,dword ptr [EDX + 0x24]
005e140c  MOV dword ptr [EBP + -0xc],EAX
005e140f  MOV ECX,dword ptr [EBP + 0x8]
005e1412  MOV EDX,dword ptr [ECX + 0x28]
005e1415  MOV dword ptr [EBP + -0x4],EDX
005e1418  MOV EAX,dword ptr [EBP + 0x8]
005e141b  MOV ECX,dword ptr [EAX + 0x2c]
005e141e  MOV dword ptr [EBP + -0x28],ECX
005e1421  MOV EDX,dword ptr [EBP + 0x8]
005e1424  MOV EAX,dword ptr [EDX + 0x30]
005e1427  MOV dword ptr [EBP + -0x24],EAX
005e142a  MOV ECX,dword ptr [EBP + 0x8]
005e142d  MOV EDX,dword ptr [ECX + 0x34]
005e1430  MOV dword ptr [EBP + -0x8],EDX
005e1433  MOV EAX,dword ptr [EBP + 0xc]
005e1436  AND EAX,dword ptr [EBP + -0x20]
005e1439  MOV ECX,dword ptr [EBP + 0xc]
005e143c  AND ECX,dword ptr [EBP + -0x20]
005e143f  ADD ECX,dword ptr [EBP + -0x4]
005e1442  IMUL ECX,dword ptr [EBP + -0x28]
005e1446  XOR EAX,ECX
005e1448  MOV EDX,dword ptr [EBP + 0xc]
005e144b  AND EDX,dword ptr [EBP + -0x20]
005e144e  ADD EDX,dword ptr [EBP + -0x24]
005e1451  IMUL EDX,dword ptr [EBP + -0x8]
005e1455  XOR EAX,EDX
005e1457  MOV ECX,dword ptr [EBP + -0x20]
005e145a  NOT ECX
005e145c  AND EAX,ECX
005e145e  XOR EAX,dword ptr [EBP + 0xc]
005e1461  MOV EDX,dword ptr [EBP + 0xc]
005e1464  AND EDX,dword ptr [EBP + -0x20]
005e1467  MOV ECX,dword ptr [EBP + 0xc]
005e146a  AND ECX,dword ptr [EBP + -0x20]
005e146d  ADD ECX,dword ptr [EBP + -0x4]
005e1470  IMUL ECX,dword ptr [EBP + -0x28]
005e1474  XOR EDX,ECX
005e1476  MOV ECX,dword ptr [EBP + 0xc]
005e1479  AND ECX,dword ptr [EBP + -0x20]
005e147c  ADD ECX,dword ptr [EBP + -0x24]
005e147f  IMUL ECX,dword ptr [EBP + -0x8]
005e1483  XOR EDX,ECX
005e1485  MOV ECX,dword ptr [EBP + -0x20]
005e1488  NOT ECX
005e148a  AND EDX,ECX
005e148c  XOR EDX,dword ptr [EBP + 0xc]
005e148f  MOV ECX,dword ptr [EBP + -0x20]
005e1492  NOT ECX
005e1494  AND EDX,ECX
005e1496  MOV ECX,dword ptr [EBP + 0xc]
005e1499  AND ECX,dword ptr [EBP + -0x20]
005e149c  MOV ESI,dword ptr [EBP + 0xc]
005e149f  AND ESI,dword ptr [EBP + -0x20]
005e14a2  ADD ESI,dword ptr [EBP + -0x4]
005e14a5  IMUL ESI,dword ptr [EBP + -0x28]
005e14a9  XOR ECX,ESI
005e14ab  MOV ESI,dword ptr [EBP + 0xc]
005e14ae  AND ESI,dword ptr [EBP + -0x20]
005e14b1  ADD ESI,dword ptr [EBP + -0x24]
005e14b4  IMUL ESI,dword ptr [EBP + -0x8]
005e14b8  XOR ECX,ESI
005e14ba  MOV ESI,dword ptr [EBP + -0x20]
005e14bd  NOT ESI
005e14bf  AND ECX,ESI
005e14c1  XOR ECX,dword ptr [EBP + 0xc]
005e14c4  MOV ESI,dword ptr [EBP + -0x20]
005e14c7  NOT ESI
005e14c9  AND ECX,ESI
005e14cb  ADD ECX,dword ptr [EBP + -0x18]
005e14ce  IMUL ECX,dword ptr [EBP + -0x1c]
005e14d2  XOR EDX,ECX
005e14d4  MOV ECX,dword ptr [EBP + 0xc]
005e14d7  AND ECX,dword ptr [EBP + -0x20]
005e14da  MOV ESI,dword ptr [EBP + 0xc]
005e14dd  AND ESI,dword ptr [EBP + -0x20]
005e14e0  ADD ESI,dword ptr [EBP + -0x4]
005e14e3  IMUL ESI,dword ptr [EBP + -0x28]
005e14e7  XOR ECX,ESI
005e14e9  MOV ESI,dword ptr [EBP + 0xc]
005e14ec  AND ESI,dword ptr [EBP + -0x20]
005e14ef  ADD ESI,dword ptr [EBP + -0x24]
005e14f2  IMUL ESI,dword ptr [EBP + -0x8]
005e14f6  XOR ECX,ESI
005e14f8  MOV ESI,dword ptr [EBP + -0x20]
005e14fb  NOT ESI
005e14fd  AND ECX,ESI
005e14ff  XOR ECX,dword ptr [EBP + 0xc]
005e1502  MOV ESI,dword ptr [EBP + -0x20]
005e1505  NOT ESI
005e1507  AND ECX,ESI
005e1509  ADD ECX,dword ptr [EBP + -0xc]
005e150c  IMUL ECX,dword ptr [EBP + -0x14]
005e1510  XOR EDX,ECX
005e1512  AND EDX,dword ptr [EBP + -0x20]
005e1515  XOR EAX,EDX
005e1517  MOV dword ptr [EBP + -0x10],EAX
005e151a  PUSH EAX
005e151b  MOV EAX,0xcfcecdcc
005e1520  MOV EAX,0x5e13cd
005e1525  MOV EAX,0x0
005e152a  MOV EAX,0x0
005e152f  MOV EAX,0xcecdcccb
005e1534  POP EAX
005e1535  MOV EAX,dword ptr [EBP + -0x10]
005e1538  POP ESI
005e1539  MOV ESP,EBP
005e153b  POP EBP
005e153c  RET
