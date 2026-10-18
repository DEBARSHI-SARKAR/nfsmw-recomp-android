004e1280  MOV EAX,dword ptr [ESP + 0x4]
004e1284  PUSH EDI
004e1285  XOR EDI,EDI
004e1287  MOV dword ptr [ECX + 0x4],EDI
004e128a  MOV dword ptr [ECX + 0x8],EDI
004e128d  MOV dword ptr [ECX + 0xc],EDI
004e1290  MOV dword ptr [ECX + 0x10],EDI
004e1293  MOV dword ptr [ECX + 0x14],EDI
004e1296  MOV dword ptr [ECX + 0x18],EDI
004e1299  CMP byte ptr [EAX],0x47
004e129c  JNZ 0x004e1343
004e12a2  CMP byte ptr [EAX + 0x1],0x6e
004e12a6  JNZ 0x004e1343
004e12ac  CMP byte ptr [EAX + 0x2],0x73
004e12b0  JNZ 0x004e1343
004e12b6  CMP byte ptr [EAX + 0x3],0x75
004e12ba  JNZ 0x004e1343
004e12c0  CMP byte ptr [EAX + 0x4],0x32
004e12c4  JNZ 0x004e1343
004e12c6  MOV EDX,dword ptr [EAX + 0x8]
004e12c9  MOV dword ptr [ECX + 0x4],EDX
004e12cc  MOV EDX,dword ptr [EAX + 0xc]
004e12cf  MOV dword ptr [ECX + 0x8],EDX
004e12d2  MOV EDX,dword ptr [EAX + 0x10]
004e12d5  MOV dword ptr [ECX + 0xc],EDX
004e12d8  MOV EDX,dword ptr [EAX + 0x14]
004e12db  MOV dword ptr [ECX + 0x10],EDX
004e12de  MOV EDX,dword ptr [EAX + 0x18]
004e12e1  MOV dword ptr [ECX + 0x14],EDX
004e12e4  MOV EDX,dword ptr [EAX + 0x1c]
004e12e7  ADD EAX,0x20
004e12ea  MOV dword ptr [ECX + 0x18],EDX
004e12ed  MOV EDX,dword ptr [ECX + 0xc]
004e12f0  MOV dword ptr [ECX + 0x1c],EAX
004e12f3  LEA EAX,[EAX + EDX*0x4 + 0x4]
004e12f7  MOV EDX,dword ptr [ECX + 0x10]
004e12fa  CMP EDX,EDI
004e12fc  PUSH ESI
004e12fd  LEA ESI,[EAX + EDX*0x4 + 0x4]
004e1301  MOV dword ptr [ECX + 0x24],ESI
004e1304  MOV ESI,dword ptr [ECX + 0x14]
004e1307  MOV dword ptr [ECX + 0x20],EAX
004e130a  MOV dword ptr [ECX + 0xac],0xffffffff
004e1314  MOV dword ptr [ESP + 0xc],ESI
004e1318  JLE 0x004e1335
004e131a  MOV EDI,dword ptr [ECX + 0x10]
004e131d  MOV EDX,EAX
004e131f  NOP
004e1320  MOV EAX,dword ptr [EDX + 0x4]
004e1323  SUB EAX,dword ptr [EDX]
004e1325  CMP EAX,ESI
004e1327  JGE 0x004e132b
004e1329  MOV ESI,EAX
004e132b  ADD EDX,0x4
004e132e  DEC EDI
004e132f  JNZ 0x004e1320
004e1331  MOV dword ptr [ESP + 0xc],ESI
004e1335  FILD dword ptr [ESP + 0xc]
004e1339  POP ESI
004e133a  MOV AL,0x1
004e133c  POP EDI
004e133d  FSTP float ptr [ECX + 0x28]
004e1340  RET 0x4
004e1343  XOR AL,AL
004e1345  POP EDI
004e1346  RET 0x4
