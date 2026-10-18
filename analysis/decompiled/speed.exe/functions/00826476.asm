00826476  PUSH ESI
00826477  MOV ESI,dword ptr [ESP + 0xc]
0082647b  TEST ESI,ESI
0082647d  JLE 0x008264f5
0082647f  MOV ECX,dword ptr [ESP + 0x10]
00826483  MOV EDX,dword ptr [ESP + 0x14]
00826487  MOV EAX,dword ptr [ESP + 0x8]
0082648b  SUB EDX,ECX
0082648d  PUSH EDI
0082648e  FLD float ptr [EAX + 0x1c]
00826491  FADD float ptr [ECX]
00826493  FMUL float ptr [EAX + 0x20]
00826496  FLD float ptr [EAX + 0x8]
00826499  FADD float ptr [EAX + 0x10]
0082649c  FMUL float ptr [EAX + 0x2c]
0082649f  FADDP
008264a1  FLD float ptr [EAX + 0x14]
008264a4  FADD float ptr [EAX + 0x4]
008264a7  FMUL float ptr [EAX + 0x28]
008264aa  FADDP
008264ac  FLD float ptr [EAX]
008264ae  FADD float ptr [EAX + 0x18]
008264b1  FMUL float ptr [EAX + 0x24]
008264b4  FADDP
008264b6  FLD float ptr [EAX + 0xc]
008264b9  FMUL float ptr [EAX + 0x30]
008264bc  FADDP
008264be  FSTP float ptr [EDX + ECX*0x1]
008264c1  MOV EDI,dword ptr [EAX + 0x18]
008264c4  MOV dword ptr [EAX + 0x1c],EDI
008264c7  MOV EDI,dword ptr [EAX + 0x14]
008264ca  MOV dword ptr [EAX + 0x18],EDI
008264cd  MOV EDI,dword ptr [EAX + 0x10]
008264d0  MOV dword ptr [EAX + 0x14],EDI
008264d3  MOV EDI,dword ptr [EAX + 0xc]
008264d6  MOV dword ptr [EAX + 0x10],EDI
008264d9  MOV EDI,dword ptr [EAX + 0x8]
008264dc  MOV dword ptr [EAX + 0xc],EDI
008264df  MOV EDI,dword ptr [EAX + 0x4]
008264e2  MOV dword ptr [EAX + 0x8],EDI
008264e5  MOV EDI,dword ptr [EAX]
008264e7  MOV dword ptr [EAX + 0x4],EDI
008264ea  MOV EDI,dword ptr [ECX]
008264ec  ADD ECX,0x4
008264ef  DEC ESI
008264f0  MOV dword ptr [EAX],EDI
008264f2  JNZ 0x0082648e
008264f4  POP EDI
008264f5  POP ESI
008264f6  RET
