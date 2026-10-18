005ecc30  PUSH ECX
005ecc31  PUSH ESI
005ecc32  MOV dword ptr [ESP + 0x4],0x0
005ecc3a  RDTSC
005ecc3c  MOV dword ptr [ESP + 0x4],EAX
005ecc40  MOV EDX,dword ptr [ESP + 0x4]
005ecc44  AND EDX,0x3
005ecc47  MOV EAX,dword ptr [EDX*0x4 + 0x8f5c28]
005ecc4e  MOV EDX,dword ptr [EDX*0x4 + 0x8f5c38]
005ecc55  MOV dword ptr [ECX],EDX
005ecc57  MOV EDX,dword ptr [ESP + 0xc]
005ecc5b  MOV dword ptr [ECX + 0x4],0x18005801
005ecc62  MOV dword ptr [ECX + 0x8],0x58084a02
005ecc69  MOV dword ptr [ECX + 0xc],0x58084a06
005ecc70  MOV EDX,dword ptr [EDX]
005ecc72  MOV dword ptr [ECX + 0x10],EDX
005ecc75  MOV EDX,dword ptr [ESP + 0x10]
005ecc79  MOV EDX,dword ptr [EDX]
005ecc7b  MOV dword ptr [ECX + 0x14],EDX
005ecc7e  MOV EDX,EAX
005ecc80  IMUL EDX,EAX
005ecc83  XOR EDX,0x18005801
005ecc89  MOV dword ptr [ECX + 0x4],EDX
005ecc8c  IMUL EDX,EAX
005ecc8f  XOR EDX,0x58084a02
005ecc95  MOV ESI,dword ptr [ECX + 0x10]
005ecc98  MOV dword ptr [ECX + 0x8],EDX
005ecc9b  IMUL EDX,EAX
005ecc9e  XOR EDX,0x58084a06
005ecca4  MOV dword ptr [ECX + 0xc],EDX
005ecca7  IMUL EDX,EAX
005eccaa  XOR ESI,EDX
005eccac  MOV EDX,ESI
005eccae  IMUL EDX,EAX
005eccb1  MOV dword ptr [ECX + 0x10],ESI
005eccb4  MOV ESI,dword ptr [ECX + 0x14]
005eccb7  XOR ESI,EDX
005eccb9  MOV EDX,ESI
005eccbb  IMUL EDX,EAX
005eccbe  MOV dword ptr [ECX + 0x14],ESI
005eccc1  MOV ESI,dword ptr [ECX + 0x18]
005eccc4  XOR ESI,EDX
005eccc6  MOV EDX,ESI
005eccc8  IMUL EDX,EAX
005ecccb  MOV EAX,dword ptr [ECX + 0x1c]
005eccce  XOR EAX,EDX
005eccd0  MOV dword ptr [ECX + 0x18],ESI
005eccd3  MOV dword ptr [ECX + 0x1c],EAX
005eccd6  MOV EAX,ECX
005eccd8  POP ESI
005eccd9  POP ECX
005eccda  RET 0x8
