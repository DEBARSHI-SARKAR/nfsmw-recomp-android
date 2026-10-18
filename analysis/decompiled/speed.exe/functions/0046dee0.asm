0046dee0  MOV EAX,dword ptr [ECX + 0xc4]
0046dee6  TEST EAX,EAX
0046dee8  JZ 0x0046df17
0046deea  MOV DL,byte ptr [EAX + 0x2]
0046deed  TEST DL,DL
0046deef  JZ 0x0046df17
0046def1  MOV EAX,dword ptr [ECX + 0x90]
0046def7  FLD float ptr [ESP + 0x4]
0046defb  FMUL float ptr [EAX + 0x10]
0046defe  FADD float ptr [EAX + 0x14]
0046df01  FMUL float ptr [ESP + 0x4]
0046df05  FADD float ptr [EAX + 0x18]
0046df08  FMUL float ptr [ESP + 0x4]
0046df0c  FADD float ptr [EAX + 0x1c]
0046df0f  CALL 0x007c4b80
0046df14  RET 0x4
0046df17  FLD float ptr [0x0089096c]
0046df1d  MOV ECX,dword ptr [ECX + 0x90]
0046df23  FSUB float ptr [ESP + 0x4]
0046df27  FMUL float ptr [ECX]
0046df29  FLD float ptr [ESP + 0x4]
0046df2d  FMUL float ptr [ECX + 0x8]
0046df30  FADDP
0046df32  CALL 0x007c4b80
0046df37  RET 0x4
