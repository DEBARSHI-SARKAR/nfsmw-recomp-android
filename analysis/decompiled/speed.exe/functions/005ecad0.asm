005ecad0  PUSH ECX
005ecad1  PUSH ESI
005ecad2  MOV dword ptr [ESP + 0x4],0x0
005ecada  RDTSC
005ecadc  MOV dword ptr [ESP + 0x4],EAX
005ecae0  MOV EDX,dword ptr [ESP + 0x4]
005ecae4  AND EDX,0x3
005ecae7  MOV EAX,dword ptr [EDX*0x4 + 0x8f5be8]
005ecaee  MOV EDX,dword ptr [EDX*0x4 + 0x8f5bf8]
005ecaf5  MOV dword ptr [ECX],EDX
005ecaf7  MOV EDX,dword ptr [ESP + 0xc]
005ecafb  MOV dword ptr [ECX + 0x4],0x18005801
005ecb02  MOV dword ptr [ECX + 0x8],0x58084a02
005ecb09  MOV dword ptr [ECX + 0xc],0x482c5892
005ecb10  MOV EDX,dword ptr [EDX]
005ecb12  MOV dword ptr [ECX + 0x10],EDX
005ecb15  MOV EDX,dword ptr [ESP + 0x10]
005ecb19  MOV EDX,dword ptr [EDX]
005ecb1b  MOV dword ptr [ECX + 0x14],EDX
005ecb1e  MOV EDX,EAX
005ecb20  IMUL EDX,EAX
005ecb23  XOR EDX,0x18005801
005ecb29  MOV dword ptr [ECX + 0x4],EDX
005ecb2c  IMUL EDX,EAX
005ecb2f  XOR EDX,0x58084a02
005ecb35  MOV ESI,dword ptr [ECX + 0x10]
005ecb38  MOV dword ptr [ECX + 0x8],EDX
005ecb3b  IMUL EDX,EAX
005ecb3e  XOR EDX,0x482c5892
005ecb44  MOV dword ptr [ECX + 0xc],EDX
005ecb47  IMUL EDX,EAX
005ecb4a  XOR ESI,EDX
005ecb4c  MOV EDX,ESI
005ecb4e  IMUL EDX,EAX
005ecb51  MOV dword ptr [ECX + 0x10],ESI
005ecb54  MOV ESI,dword ptr [ECX + 0x14]
005ecb57  XOR ESI,EDX
005ecb59  MOV EDX,ESI
005ecb5b  IMUL EDX,EAX
005ecb5e  MOV dword ptr [ECX + 0x14],ESI
005ecb61  MOV ESI,dword ptr [ECX + 0x18]
005ecb64  XOR ESI,EDX
005ecb66  MOV EDX,ESI
005ecb68  IMUL EDX,EAX
005ecb6b  MOV EAX,dword ptr [ECX + 0x1c]
005ecb6e  XOR EAX,EDX
005ecb70  MOV dword ptr [ECX + 0x18],ESI
005ecb73  MOV dword ptr [ECX + 0x1c],EAX
005ecb76  MOV EAX,ECX
005ecb78  POP ESI
005ecb79  POP ECX
005ecb7a  RET 0x8
