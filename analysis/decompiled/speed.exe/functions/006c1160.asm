006c1160  PUSH EBP
006c1161  MOV EBP,ESP
006c1163  AND ESP,0xfffffff0
006c1166  SUB ESP,0x58
006c1169  PUSH ESI
006c116a  MOV ESI,dword ptr [0x0093cb1c]
006c1170  TEST ESI,ESI
006c1172  PUSH EDI
006c1173  JZ 0x006c1381
006c1179  CMP ESI,dword ptr [0x0093cb20]
006c117f  JNC 0x006c1381
006c1185  MOV ECX,dword ptr [EBP + 0x18]
006c1188  TEST ECX,ECX
006c118a  JZ 0x006c11db
006c118c  MOV EAX,dword ptr [EBP + 0x1c]
006c118f  TEST EAX,EAX
006c1191  JZ 0x006c11db
006c1193  MOV EDI,dword ptr [EBP + 0x8]
006c1196  MOV EDX,dword ptr [EDI + 0x50]
006c1199  MOV dword ptr [ESP + 0x50],EDX
006c119d  MOV EDX,dword ptr [EDI + 0x54]
006c11a0  MOV dword ptr [ESP + 0x54],EDX
006c11a4  MOV EDX,dword ptr [EDI + 0x58]
006c11a7  MOV dword ptr [ESP + 0x58],EDX
006c11ab  LEA EDX,[ESP + 0x30]
006c11af  PUSH EDX
006c11b0  LEA EDX,[ESP + 0x44]
006c11b4  PUSH EDX
006c11b5  LEA EDX,[ESP + 0x28]
006c11b9  PUSH EDX
006c11ba  LEA EDX,[ESP + 0x1c]
006c11be  PUSH EDX
006c11bf  PUSH EAX
006c11c0  PUSH ECX
006c11c1  LEA EAX,[ESP + 0x68]
006c11c5  PUSH EAX
006c11c6  MOV dword ptr [ESP + 0x78],0x3f800000
006c11ce  CALL 0x004fe220
006c11d3  ADD ESP,0x1c
006c11d6  JMP 0x006c1272
006c11db  MOV ECX,dword ptr [EBP + 0xc]
006c11de  MOV EDI,dword ptr [EBP + 0x8]
006c11e1  FLD float ptr [ECX]
006c11e3  FADD float ptr [EDI + 0x50]
006c11e6  MOV EAX,dword ptr [EBP + 0x10]
006c11e9  FLD ST0
006c11eb  FSUB float ptr [EAX]
006c11ed  FSTP float ptr [ESP + 0x10]
006c11f1  FLD float ptr [EDI + 0x54]
006c11f4  FADD float ptr [ECX + 0x4]
006c11f7  FLD ST0
006c11f9  FSUB float ptr [EAX + 0x4]
006c11fc  FSTP float ptr [ESP + 0x14]
006c1200  FLD float ptr [ECX + 0x8]
006c1203  FADD float ptr [EDI + 0x58]
006c1206  FST float ptr [ESP + 0xc]
006c120a  FSUB float ptr [EAX + 0x8]
006c120d  FSTP float ptr [ESP + 0x18]
006c1211  FXCH
006c1213  FADD float ptr [EAX]
006c1215  FSTP float ptr [ESP + 0x20]
006c1219  FADD float ptr [EAX + 0x4]
006c121c  FSTP float ptr [ESP + 0x24]
006c1220  FLD float ptr [ESP + 0xc]
006c1224  FADD float ptr [EAX + 0x8]
006c1227  FSTP float ptr [ESP + 0x28]
006c122b  FLD float ptr [EDI + 0x50]
006c122e  FSUB float ptr [ECX]
006c1230  FLD ST0
006c1232  FADD float ptr [EAX]
006c1234  FSTP float ptr [ESP + 0x30]
006c1238  FLD float ptr [EDI + 0x54]
006c123b  FSUB float ptr [ECX + 0x4]
006c123e  FLD ST0
006c1240  FADD float ptr [EAX + 0x4]
006c1243  FSTP float ptr [ESP + 0x34]
006c1247  FLD float ptr [EDI + 0x58]
006c124a  FSUB float ptr [ECX + 0x8]
006c124d  FST float ptr [ESP + 0xc]
006c1251  FADD float ptr [EAX + 0x8]
006c1254  FSTP float ptr [ESP + 0x38]
006c1258  FXCH
006c125a  FSUB float ptr [EAX]
006c125c  FSTP float ptr [ESP + 0x40]
006c1260  FSUB float ptr [EAX + 0x4]
006c1263  FSTP float ptr [ESP + 0x44]
006c1267  FLD float ptr [ESP + 0xc]
006c126b  FSUB float ptr [EAX + 0x8]
006c126e  FSTP float ptr [ESP + 0x48]
006c1272  MOVZX ECX,word ptr [EDI + 0x62]
006c1276  MOV EDX,dword ptr [EDI + 0x60]
006c1279  MOV dword ptr [ESP + 0xc],ECX
006c127d  AND EDX,0xffff
006c1283  TEST EDX,EDX
006c1285  FILD dword ptr [ESP + 0xc]
006c1289  MOV dword ptr [ESP + 0xc],EDX
006c128d  FMUL float ptr [0x00899ddc]
006c1293  FILD dword ptr [ESP + 0xc]
006c1297  JGE 0x006c129f
006c1299  FADD float ptr [0x00891214]
006c129f  MOVZX EAX,word ptr [EDI + 0x66]
006c12a3  MOV ECX,dword ptr [EDI + 0x64]
006c12a6  MOV dword ptr [ESP + 0xc],EAX
006c12aa  AND ECX,0xffff
006c12b0  TEST ECX,ECX
006c12b2  FMUL float ptr [0x00899ddc]
006c12b8  FILD dword ptr [ESP + 0xc]
006c12bc  MOV dword ptr [ESP + 0xc],ECX
006c12c0  FMUL float ptr [0x00899ddc]
006c12c6  FILD dword ptr [ESP + 0xc]
006c12ca  JGE 0x006c12d2
006c12cc  FADD float ptr [0x00891214]
006c12d2  MOV EDX,dword ptr [ESP + 0x10]
006c12d6  MOV dword ptr [ESI],EDX
006c12d8  MOV EAX,dword ptr [ESP + 0x14]
006c12dc  MOV dword ptr [ESI + 0x4],EAX
006c12df  MOV ECX,dword ptr [ESP + 0x18]
006c12e3  MOV dword ptr [ESI + 0x8],ECX
006c12e6  MOV EDX,dword ptr [EDI + 0x8]
006c12e9  MOV dword ptr [ESI + 0xc],EDX
006c12ec  ADD ESI,0x18
006c12ef  FMUL float ptr [0x00899ddc]
006c12f5  FLD ST1
006c12f7  ADD ESI,0x18
006c12fa  FSTP float ptr [ESI + -0x20]
006c12fd  ADD ESI,0x18
006c1300  FLD ST2
006c1302  ADD ESI,0x18
006c1305  FSTP float ptr [ESI + -0x4c]
006c1308  MOV EAX,dword ptr [ESP + 0x20]
006c130c  MOV dword ptr [ESI + -0x48],EAX
006c130f  FXCH
006c1311  MOV ECX,dword ptr [ESP + 0x24]
006c1315  MOV dword ptr [ESI + -0x44],ECX
006c1318  MOV EDX,dword ptr [ESP + 0x28]
006c131c  MOV dword ptr [ESI + -0x40],EDX
006c131f  MOV EAX,dword ptr [EDI + 0x8]
006c1322  FSTP float ptr [ESI + -0x38]
006c1325  MOV dword ptr [ESI + -0x3c],EAX
006c1328  FST float ptr [ESI + -0x34]
006c132b  MOV ECX,dword ptr [ESP + 0x30]
006c132f  MOV dword ptr [ESI + -0x30],ECX
006c1332  FLD ST2
006c1334  MOV EDX,dword ptr [ESP + 0x34]
006c1338  MOV dword ptr [ESI + -0x2c],EDX
006c133b  MOV EAX,dword ptr [ESP + 0x38]
006c133f  MOV dword ptr [ESI + -0x28],EAX
006c1342  MOV ECX,dword ptr [EDI + 0x8]
006c1345  FSTP float ptr [ESI + -0x20]
006c1348  MOV dword ptr [ESI + -0x24],ECX
006c134b  FSTP float ptr [ESI + -0x1c]
006c134e  MOV EDX,dword ptr [ESP + 0x40]
006c1352  MOV dword ptr [ESI + -0x18],EDX
006c1355  FXCH
006c1357  MOV EAX,dword ptr [ESP + 0x44]
006c135b  MOV dword ptr [ESI + -0x14],EAX
006c135e  MOV ECX,dword ptr [ESP + 0x48]
006c1362  MOV AL,byte ptr [EBP + 0x14]
006c1365  MOV dword ptr [ESI + -0x10],ECX
006c1368  MOV EDX,dword ptr [EDI + 0x8]
006c136b  FSTP float ptr [ESI + -0x8]
006c136e  MOV dword ptr [ESI + -0xc],EDX
006c1371  FSTP float ptr [ESI + -0x4]
006c1374  AND AL,0x1
006c1376  MOV dword ptr [0x0093cb1c],ESI
006c137c  MOV [0x0093cb10],AL
006c1381  POP EDI
006c1382  POP ESI
006c1383  MOV ESP,EBP
006c1385  POP EBP
006c1386  RET 0x18
