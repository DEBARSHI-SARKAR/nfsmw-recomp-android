0065ef50  PUSH ECX
0065ef51  PUSH ESI
0065ef52  MOV dword ptr [ESP + 0x4],0x0
0065ef5a  RDTSC
0065ef5c  MOV dword ptr [ESP + 0x4],EAX
0065ef60  MOV EDX,dword ptr [ESP + 0x4]
0065ef64  AND EDX,0x3
0065ef67  MOV EAX,dword ptr [EDX*0x4 + 0x8f8588]
0065ef6e  MOV EDX,dword ptr [EDX*0x4 + 0x8f8598]
0065ef75  MOV dword ptr [ECX],EDX
0065ef77  MOV EDX,dword ptr [ESP + 0xc]
0065ef7b  MOV dword ptr [ECX + 0x4],0x10804201
0065ef82  MOV dword ptr [ECX + 0x8],0x10804205
0065ef89  MOV dword ptr [ECX + 0xc],0x482c4810
0065ef90  MOV EDX,dword ptr [EDX]
0065ef92  MOV dword ptr [ECX + 0x10],EDX
0065ef95  MOV EDX,dword ptr [ESP + 0x10]
0065ef99  MOV EDX,dword ptr [EDX]
0065ef9b  MOV dword ptr [ECX + 0x14],EDX
0065ef9e  MOV EDX,EAX
0065efa0  IMUL EDX,EAX
0065efa3  XOR EDX,0x10804201
0065efa9  MOV dword ptr [ECX + 0x4],EDX
0065efac  IMUL EDX,EAX
0065efaf  XOR EDX,0x10804205
0065efb5  MOV ESI,dword ptr [ECX + 0x10]
0065efb8  MOV dword ptr [ECX + 0x8],EDX
0065efbb  IMUL EDX,EAX
0065efbe  XOR EDX,0x482c4810
0065efc4  MOV dword ptr [ECX + 0xc],EDX
0065efc7  IMUL EDX,EAX
0065efca  XOR ESI,EDX
0065efcc  MOV EDX,ESI
0065efce  IMUL EDX,EAX
0065efd1  MOV dword ptr [ECX + 0x10],ESI
0065efd4  MOV ESI,dword ptr [ECX + 0x14]
0065efd7  XOR ESI,EDX
0065efd9  MOV EDX,ESI
0065efdb  IMUL EDX,EAX
0065efde  MOV dword ptr [ECX + 0x14],ESI
0065efe1  MOV ESI,dword ptr [ECX + 0x18]
0065efe4  XOR ESI,EDX
0065efe6  MOV EDX,ESI
0065efe8  IMUL EDX,EAX
0065efeb  MOV EAX,dword ptr [ECX + 0x1c]
0065efee  XOR EAX,EDX
0065eff0  MOV dword ptr [ECX + 0x18],ESI
0065eff3  MOV dword ptr [ECX + 0x1c],EAX
0065eff6  MOV EAX,ECX
0065eff8  POP ESI
0065eff9  POP ECX
0065effa  RET 0x8
