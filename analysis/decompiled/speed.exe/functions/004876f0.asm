004876f0  MOV EAX,dword ptr [ESP + 0x10]
004876f4  SUB ESP,0x10
004876f7  PUSH ESI
004876f8  MOV word ptr [ECX + 0x9c],AX
004876ff  DEC EAX
00487700  PUSH EDI
00487701  MOV ESI,0x0
00487706  JZ 0x0048789f
0048770c  DEC EAX
0048770d  JZ 0x0048771b
0048770f  MOV word ptr [ECX + 0x9c],SI
00487716  JMP 0x0048798d
0048771b  MOV EDX,dword ptr [0x008a2fd0]
00487721  LEA EAX,[ECX + 0x10]
00487724  MOV dword ptr [EAX],EDX
00487726  MOV EDX,dword ptr [0x008a2fd4]
0048772c  MOV dword ptr [EAX + 0x4],EDX
0048772f  MOV EDX,dword ptr [0x008a2fd8]
00487735  MOV dword ptr [EAX + 0x8],EDX
00487738  MOV EDX,dword ptr [0x008a2fdc]
0048773e  MOV dword ptr [EAX + 0xc],EDX
00487741  MOV EDX,dword ptr [0x008a2fd0]
00487747  LEA EAX,[ECX + 0x20]
0048774a  MOV dword ptr [EAX],EDX
0048774c  MOV EDX,dword ptr [0x008a2fd4]
00487752  MOV dword ptr [EAX + 0x4],EDX
00487755  MOV EDX,dword ptr [0x008a2fd8]
0048775b  MOV dword ptr [EAX + 0x8],EDX
0048775e  MOV EDX,dword ptr [0x008a2fdc]
00487764  MOV dword ptr [EAX + 0xc],EDX
00487767  MOV EDX,dword ptr [0x008a2fd0]
0048776d  LEA EAX,[ECX + 0x30]
00487770  MOV dword ptr [EAX],EDX
00487772  MOV EDX,dword ptr [0x008a2fd4]
00487778  MOV dword ptr [EAX + 0x4],EDX
0048777b  MOV EDX,dword ptr [0x008a2fd8]
00487781  MOV dword ptr [EAX + 0x8],EDX
00487784  MOV EDX,dword ptr [0x008a2fdc]
0048778a  MOV dword ptr [EAX + 0xc],EDX
0048778d  MOV EDX,dword ptr [0x008a2fd0]
00487793  LEA EAX,[ECX + 0x40]
00487796  MOV dword ptr [EAX],EDX
00487798  MOV EDX,dword ptr [0x008a2fd4]
0048779e  MOV dword ptr [EAX + 0x4],EDX
004877a1  MOV EDX,dword ptr [0x008a2fd8]
004877a7  MOV dword ptr [EAX + 0x8],EDX
004877aa  MOV EDX,dword ptr [0x008a2fdc]
004877b0  MOV dword ptr [EAX + 0xc],EDX
004877b3  MOV EDX,dword ptr [0x008a2fd0]
004877b9  LEA EAX,[ECX + 0x50]
004877bc  MOV dword ptr [EAX],EDX
004877be  MOV EDX,dword ptr [0x008a2fd4]
004877c4  MOV dword ptr [EAX + 0x4],EDX
004877c7  MOV EDX,dword ptr [0x008a2fd8]
004877cd  MOV dword ptr [EAX + 0x8],EDX
004877d0  MOV EDX,dword ptr [0x008a2fdc]
004877d6  MOV dword ptr [EAX + 0xc],EDX
004877d9  MOV EDX,dword ptr [0x008a2fd0]
004877df  LEA EAX,[ECX + 0x60]
004877e2  MOV dword ptr [EAX],EDX
004877e4  MOV EDX,dword ptr [0x008a2fd4]
004877ea  MOV dword ptr [EAX + 0x4],EDX
004877ed  MOV EDX,dword ptr [0x008a2fd8]
004877f3  MOV dword ptr [EAX + 0x8],EDX
004877f6  MOV EDX,dword ptr [0x008a2fdc]
004877fc  MOV dword ptr [EAX + 0xc],EDX
004877ff  MOV EAX,dword ptr [ESP + 0x20]
00487803  MOV EDX,dword ptr [EAX]
00487805  MOV dword ptr [ESP + 0x8],EDX
00487809  MOV EDX,dword ptr [EAX + 0x4]
0048780c  MOV EAX,dword ptr [EAX + 0x8]
0048780f  MOV dword ptr [ESP + 0xc],EDX
00487813  MOV dword ptr [ESP + 0x10],EAX
00487817  MOV EAX,dword ptr [ESP + 0x8]
0048781b  MOV EDX,ECX
0048781d  MOV dword ptr [EDX],EAX
0048781f  MOV EAX,dword ptr [ESP + 0xc]
00487823  MOV dword ptr [EDX + 0x4],EAX
00487826  MOV EAX,dword ptr [ESP + 0x10]
0048782a  MOV dword ptr [EDX + 0x8],EAX
0048782d  MOV dword ptr [ESP + 0x14],0x3f800000
00487835  MOV EAX,dword ptr [ESP + 0x14]
00487839  MOV dword ptr [EDX + 0xc],EAX
0048783c  MOV EDX,dword ptr [ESP + 0x24]
00487840  FLD float ptr [EDX + 0x8]
00487843  FLD float ptr [EDX + 0x4]
00487846  FST float ptr [ESP + 0x20]
0048784a  FCOMP
0048784c  FNSTSW AX
0048784e  TEST AH,0x41
00487851  JNZ 0x00487859
00487853  FSTP ST0
00487855  FLD float ptr [ESP + 0x20]
00487859  FLD float ptr [EDX]
0048785b  FST float ptr [ESP + 0x20]
0048785f  FCOMP
00487861  FNSTSW AX
00487863  TEST AH,0x41
00487866  JNZ 0x0048786e
00487868  FSTP ST0
0048786a  FLD float ptr [ESP + 0x20]
0048786e  MOV EAX,dword ptr [ESP + 0x2c]
00487872  FST float ptr [ECX + 0x98]
00487878  FST float ptr [ECX + 0x94]
0048787e  LEA EDX,[ECX + 0xa0]
00487884  FSTP float ptr [ECX + 0x90]
0048788a  MOV EDI,dword ptr [EAX]
0048788c  MOV dword ptr [EDX],EDI
0048788e  MOV EDI,dword ptr [EAX + 0x4]
00487891  MOV dword ptr [EDX + 0x4],EDI
00487894  MOV EAX,dword ptr [EAX + 0x8]
00487897  MOV dword ptr [EDX + 0x8],EAX
0048789a  JMP 0x0048798d
0048789f  MOV EDX,dword ptr [ESP + 0x20]
004878a3  MOV EDI,dword ptr [EDX]
004878a5  MOV EAX,ECX
004878a7  MOV dword ptr [EAX],EDI
004878a9  MOV EDI,dword ptr [EDX + 0x4]
004878ac  MOV dword ptr [EAX + 0x4],EDI
004878af  MOV EDX,dword ptr [EDX + 0x8]
004878b2  MOV dword ptr [EAX + 0x8],EDX
004878b5  MOV EAX,dword ptr [ESP + 0x24]
004878b9  MOV EDX,dword ptr [EAX]
004878bb  MOV dword ptr [ECX + 0x90],EDX
004878c1  MOV EDX,dword ptr [EAX + 0x4]
004878c4  MOV dword ptr [ECX + 0x94],EDX
004878ca  MOV EAX,dword ptr [EAX + 0x8]
004878cd  MOV dword ptr [ECX + 0x98],EAX
004878d3  MOV EAX,dword ptr [ESP + 0x2c]
004878d7  MOV EDI,dword ptr [EAX]
004878d9  LEA EDX,[ECX + 0xa0]
004878df  MOV dword ptr [EDX],EDI
004878e1  MOV EDI,dword ptr [EAX + 0x4]
004878e4  MOV dword ptr [EDX + 0x4],EDI
004878e7  MOV EAX,dword ptr [EAX + 0x8]
004878ea  MOV dword ptr [EDX + 0x8],EAX
004878ed  FLD float ptr [ECX + 0x90]
004878f3  MOV EDX,dword ptr [ESP + 0x1c]
004878f7  FLD ST0
004878f9  PUSH EBX
004878fa  LEA EAX,[ECX + 0x10]
004878fd  MOV EDI,EDX
004878ff  PUSH EBP
00487900  MOV EBP,dword ptr [EDI]
00487902  MOV EBX,EAX
00487904  MOV dword ptr [EBX],EBP
00487906  MOV EBP,dword ptr [EDI + 0x4]
00487909  MOV dword ptr [EBX + 0x4],EBP
0048790c  MOV EDI,dword ptr [EDI + 0x8]
0048790f  MOV dword ptr [EBX + 0x8],EDI
00487912  FMUL float ptr [EAX]
00487914  LEA EDI,[EDX + 0x10]
00487917  ADD EDX,0x20
0048791a  FSTP float ptr [ECX + 0x40]
0048791d  FLD ST0
0048791f  FMUL float ptr [EAX + 0x4]
00487922  FSTP float ptr [ECX + 0x44]
00487925  FMUL float ptr [EAX + 0x8]
00487928  LEA EAX,[ECX + 0x20]
0048792b  MOV EBX,EAX
0048792d  FSTP float ptr [ECX + 0x48]
00487930  MOV EBP,dword ptr [EDI]
00487932  FLD float ptr [ECX + 0x94]
00487938  MOV dword ptr [EBX],EBP
0048793a  MOV EBP,dword ptr [EDI + 0x4]
0048793d  FLD ST0
0048793f  MOV dword ptr [EBX + 0x4],EBP
00487942  MOV EDI,dword ptr [EDI + 0x8]
00487945  MOV dword ptr [EBX + 0x8],EDI
00487948  FMUL float ptr [EAX]
0048794a  POP EBP
0048794b  FSTP float ptr [ECX + 0x50]
0048794e  FLD ST0
00487950  FMUL float ptr [EAX + 0x4]
00487953  FSTP float ptr [ECX + 0x54]
00487956  FMUL float ptr [EAX + 0x8]
00487959  LEA EAX,[ECX + 0x30]
0048795c  MOV EDI,EAX
0048795e  FSTP float ptr [ECX + 0x58]
00487961  MOV EBX,dword ptr [EDX]
00487963  FLD float ptr [ECX + 0x98]
00487969  MOV dword ptr [EDI],EBX
0048796b  MOV EBX,dword ptr [EDX + 0x4]
0048796e  FLD ST0
00487970  MOV dword ptr [EDI + 0x4],EBX
00487973  MOV EDX,dword ptr [EDX + 0x8]
00487976  MOV dword ptr [EDI + 0x8],EDX
00487979  FMUL float ptr [EAX]
0048797b  FSTP float ptr [ECX + 0x60]
0048797e  FLD ST0
00487980  FMUL float ptr [EAX + 0x4]
00487983  FSTP float ptr [ECX + 0x64]
00487986  FMUL float ptr [EAX + 0x8]
00487989  FSTP float ptr [ECX + 0x68]
0048798c  POP EBX
0048798d  POP EDI
0048798e  MOV dword ptr [ECX + 0x8c],ESI
00487994  MOV dword ptr [ECX + 0x7c],ESI
00487997  MOV word ptr [ECX + 0x9e],SI
0048799e  MOV dword ptr [ECX + 0xac],0xc7c35000
004879a8  POP ESI
004879a9  ADD ESP,0x10
004879ac  RET 0x14
