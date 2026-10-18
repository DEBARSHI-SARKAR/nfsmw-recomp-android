0050cae0  PUSH -0x1
0050cae2  PUSH 0x86e17e
0050cae7  MOV EAX,FS:[0x0]
0050caed  PUSH EAX
0050caee  MOV dword ptr FS:[0x0],ESP
0050caf5  PUSH ECX
0050caf6  PUSH EBP
0050caf7  PUSH ESI
0050caf8  PUSH EDI
0050caf9  PUSH 0x507e60
0050cafe  PUSH 0x507f90
0050cb03  MOV ESI,ECX
0050cb05  PUSH 0x42
0050cb07  PUSH 0x8
0050cb09  LEA EAX,[ESI + 0x10c]
0050cb0f  PUSH EAX
0050cb10  MOV dword ptr [ESP + 0x20],ESI
0050cb14  CALL 0x007c90a0
0050cb19  LEA EDI,[ESI + 0x360]
0050cb1f  XOR EBP,EBP
0050cb21  MOV ECX,EDI
0050cb23  MOV dword ptr [ESP + 0x18],EBP
0050cb27  CALL 0x005047f0
0050cb2c  MOV dword ptr [EDI + 0x4],EAX
0050cb2f  MOV byte ptr [EAX + 0x15],0x1
0050cb33  MOV EAX,dword ptr [EDI + 0x4]
0050cb36  MOV dword ptr [EAX + 0x4],EAX
0050cb39  MOV EAX,dword ptr [EDI + 0x4]
0050cb3c  MOV dword ptr [EAX],EAX
0050cb3e  MOV EAX,dword ptr [EDI + 0x4]
0050cb41  MOV dword ptr [EAX + 0x8],EAX
0050cb44  MOV dword ptr [EDI + 0x8],EBP
0050cb47  LEA EDI,[ESI + 0x36c]
0050cb4d  MOV ECX,EDI
0050cb4f  MOV byte ptr [ESP + 0x18],0x1
0050cb54  CALL 0x005048f0
0050cb59  MOV dword ptr [EDI + 0x4],EAX
0050cb5c  MOV byte ptr [EAX + 0x15],0x1
0050cb60  MOV EAX,dword ptr [EDI + 0x4]
0050cb63  MOV dword ptr [EAX + 0x4],EAX
0050cb66  MOV EAX,dword ptr [EDI + 0x4]
0050cb69  MOV dword ptr [EAX],EAX
0050cb6b  MOV EAX,dword ptr [EDI + 0x4]
0050cb6e  MOV dword ptr [EAX + 0x8],EAX
0050cb71  MOV dword ptr [EDI + 0x8],EBP
0050cb74  LEA EAX,[ESI + 0x378]
0050cb7a  MOV dword ptr [EAX],EAX
0050cb7c  MOV dword ptr [EAX + 0x4],EAX
0050cb7f  LEA EAX,[ESI + 0x380]
0050cb85  MOV dword ptr [EAX],EAX
0050cb87  MOV dword ptr [EAX + 0x4],EAX
0050cb8a  LEA ECX,[ESI + 0x398]
0050cb90  MOV dword ptr [ECX + 0x4],EBP
0050cb93  MOV dword ptr [ECX + 0x8],EBP
0050cb96  MOV dword ptr [ECX + 0xc],EBP
0050cb99  PUSH 0x190
0050cb9e  MOV byte ptr [ESP + 0x1c],0x5
0050cba3  MOV dword ptr [ESI + 0x390],EBP
0050cba9  MOV dword ptr [ESI + 0x394],EBP
0050cbaf  MOV dword ptr [ESI + 0x38c],EBP
0050cbb5  CALL 0x0050b720
0050cbba  MOV dword ptr [ESI],EBP
0050cbbc  XOR EAX,EAX
0050cbbe  LEA EDI,[ESI + 0x4]
0050cbc1  MOV ECX,0x42
0050cbc6  STOSD.REP ES:EDI
0050cbc8  MOV ECX,dword ptr [ESP + 0x10]
0050cbcc  POP EDI
0050cbcd  MOV EAX,ESI
0050cbcf  POP ESI
0050cbd0  POP EBP
0050cbd1  MOV dword ptr FS:[0x0],ECX
0050cbd8  ADD ESP,0x10
0050cbdb  RET
