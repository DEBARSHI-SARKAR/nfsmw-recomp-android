0046d800  PUSH EBP
0046d801  MOV EBP,ESP
0046d803  AND ESP,0xfffffff0
0046d806  SUB ESP,0x80
0046d80c  FLD float ptr [EAX]
0046d80e  MOV dword ptr [ESP + 0x2c],0x0
0046d816  FSUB float ptr [EDI]
0046d818  FSTP float ptr [ESP + 0x20]
0046d81c  FLD float ptr [EAX + 0x4]
0046d81f  FSUB float ptr [EDI + 0x4]
0046d822  FSTP float ptr [ESP + 0x24]
0046d826  FLD float ptr [EAX + 0x8]
0046d829  LEA EAX,[ESP + 0x20]
0046d82d  FSUB float ptr [EDI + 0x8]
0046d830  PUSH EAX
0046d831  MOV ECX,EAX
0046d833  PUSH ECX
0046d834  FSTP float ptr [ESP + 0x30]
0046d838  CALL 0x0045f490
0046d83d  LEA EDX,[ESP + 0x28]
0046d841  PUSH EDX
0046d842  LEA EAX,[ESP + 0x1c]
0046d846  PUSH EAX
0046d847  LEA ECX,[ESP + 0x10]
0046d84b  PUSH ECX
0046d84c  MOV dword ptr [ESP + 0x44],0x0
0046d854  MOV dword ptr [ESP + 0x48],0x0
0046d85c  MOV dword ptr [ESP + 0x4c],0x3f800000
0046d864  MOV dword ptr [ESP + 0x50],0x0
0046d86c  MOV dword ptr [ESP + 0x24],0x0
0046d874  MOV dword ptr [ESP + 0x28],0x0
0046d87c  MOV dword ptr [ESP + 0x2c],0xbf800000
0046d884  MOV dword ptr [ESP + 0x30],0x0
0046d88c  MOV dword ptr [ESP + 0x14],0x0
0046d894  MOV dword ptr [ESP + 0x18],0x0
0046d89c  MOV dword ptr [ESP + 0x1c],0x0
0046d8a4  MOV dword ptr [ESP + 0x20],0x0
0046d8ac  CALL 0x0045f7c0
0046d8b1  LEA EDX,[ESP + 0x14]
0046d8b5  PUSH EDX
0046d8b6  LEA EAX,[ESP + 0x38]
0046d8ba  PUSH EAX
0046d8bb  LEA ECX,[ESP + 0x2c]
0046d8bf  PUSH ECX
0046d8c0  CALL 0x0045f7c0
0046d8c5  LEA EDX,[ESP + 0x20]
0046d8c9  PUSH EDX
0046d8ca  MOV EAX,EDX
0046d8cc  PUSH EAX
0046d8cd  CALL 0x0045f490
0046d8d2  LEA ECX,[ESP + 0x38]
0046d8d6  PUSH ECX
0046d8d7  MOV EDX,ECX
0046d8d9  PUSH EDX
0046d8da  CALL 0x0045f490
0046d8df  MOV EAX,dword ptr [ESP + 0x30]
0046d8e3  MOV ECX,dword ptr [ESP + 0x40]
0046d8e7  MOV EDX,dword ptr [ESP + 0x50]
0046d8eb  MOV dword ptr [ESI],EAX
0046d8ed  XOR EAX,EAX
0046d8ef  MOV dword ptr [ESI + 0x4],ECX
0046d8f2  MOV ECX,dword ptr [ESP + 0x34]
0046d8f6  MOV dword ptr [ESI + 0x8],EDX
0046d8f9  MOV EDX,dword ptr [ESP + 0x44]
0046d8fd  MOV dword ptr [ESI + 0xc],EAX
0046d900  MOV dword ptr [ESI + 0x10],ECX
0046d903  MOV ECX,dword ptr [ESP + 0x54]
0046d907  MOV dword ptr [ESI + 0x14],EDX
0046d90a  MOV EDX,dword ptr [ESP + 0x38]
0046d90e  MOV dword ptr [ESI + 0x1c],EAX
0046d911  MOV dword ptr [ESI + 0x2c],EAX
0046d914  MOV dword ptr [ESI + 0x30],EAX
0046d917  MOV dword ptr [ESI + 0x34],EAX
0046d91a  MOV dword ptr [ESI + 0x38],EAX
0046d91d  MOV EAX,dword ptr [EBP + 0x8]
0046d920  PUSH EAX
0046d921  MOV dword ptr [ESI + 0x18],ECX
0046d924  MOV ECX,dword ptr [ESP + 0x4c]
0046d928  MOV dword ptr [ESI + 0x20],EDX
0046d92b  MOV EDX,dword ptr [ESP + 0x5c]
0046d92f  PUSH ESI
0046d930  MOV dword ptr [ESI + 0x24],ECX
0046d933  MOV dword ptr [ESI + 0x28],EDX
0046d936  MOV dword ptr [ESI + 0x3c],0x3f800000
0046d93d  PUSH ESI
0046d93e  CALL 0x006bdd20
0046d943  FLD float ptr [EDI]
0046d945  FCHS
0046d947  LEA ECX,[ESP + 0x7c]
0046d94b  FSTP float ptr [ESP + 0xac]
0046d952  PUSH ECX
0046d953  FLD float ptr [EDI + 0x4]
0046d956  PUSH ESI
0046d957  FCHS
0046d959  PUSH ESI
0046d95a  FSTP float ptr [ESP + 0xbc]
0046d961  MOV dword ptr [ESP + 0x88],0x3f800000
0046d96c  FLD float ptr [EDI + 0x8]
0046d96f  MOV dword ptr [ESP + 0x8c],0x0
0046d97a  FCHS
0046d97c  MOV dword ptr [ESP + 0x90],0x0
0046d987  FSTP float ptr [ESP + 0xc0]
0046d98e  MOV dword ptr [ESP + 0x94],0x0
0046d999  MOV dword ptr [ESP + 0x98],0x0
0046d9a4  MOV dword ptr [ESP + 0x9c],0x3f800000
0046d9af  MOV dword ptr [ESP + 0xa0],0x0
0046d9ba  MOV dword ptr [ESP + 0xa4],0x0
0046d9c5  MOV dword ptr [ESP + 0xa8],0x0
0046d9d0  MOV dword ptr [ESP + 0xac],0x0
0046d9db  MOV dword ptr [ESP + 0xb0],0x3f800000
0046d9e6  MOV dword ptr [ESP + 0xb4],0x0
0046d9f1  MOV dword ptr [ESP + 0xc4],0x3f800000
0046d9fc  CALL 0x0045ecf0
0046da01  ADD ESP,0x48
0046da04  MOV ESP,EBP
0046da06  POP EBP
0046da07  RET
