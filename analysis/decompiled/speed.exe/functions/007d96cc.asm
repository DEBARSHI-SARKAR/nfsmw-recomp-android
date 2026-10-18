007d96cc  PUSH EDX
007d96cd  SUB ESP,0x30
007d96d0  FSTP extended double ptr [ESP + 0x18]
007d96d4  FSTP extended double ptr [ESP]
007d96d7  XOR EDX,EDX
007d96d9  MOV EAX,dword ptr [ESP + 0x6]
007d96dd  TEST EAX,0x7fff0000
007d96e2  JZ 0x007d96ee
007d96e4  CALL 0x007d94c6
007d96e9  ADD ESP,0x30
007d96ec  POP EDX
007d96ed  RET
007d96ee  FLD extended double ptr [ESP]
007d96f1  FLD extended double ptr [ESP + 0x18]
007d96f5  MOV EAX,dword ptr [ESP]
007d96f8  OR EAX,dword ptr [ESP + 0x4]
007d96fc  JZ 0x007d9777
007d96fe  FXCH
007d9700  FSTP extended double ptr [ESP + 0xc]
007d9704  FLD extended double ptr [ESP]
007d9707  FXCH
007d9709  OR EDX,0x2
007d970c  FNSTCW word ptr [ESP + 0x24]
007d9710  MOV EAX,dword ptr [ESP + 0x24]
007d9714  OR EAX,0x33f
007d9719  MOV dword ptr [ESP + 0x28],EAX
007d971d  FLDCW word ptr [ESP + 0x28]
007d9721  MOV EAX,dword ptr [ESP + 0x20]
007d9725  AND EAX,0x7fff
007d972a  CMP EAX,0x7fbe
007d972f  JA 0x007d9749
007d9731  OR EDX,0x1
007d9734  FMUL double ptr [0x00906d94]
007d973a  FSTP extended double ptr [ESP + 0x18]
007d973e  FMUL double ptr [0x00906d94]
007d9744  FSTP extended double ptr [ESP]
007d9747  JMP 0x007d9769
007d9749  FNSTCW word ptr [ESP + 0x24]
007d974d  MOV EAX,dword ptr [ESP + 0x24]
007d9751  OR EAX,0x300
007d9756  MOV dword ptr [ESP + 0x28],EAX
007d975a  FLDCW word ptr [ESP + 0x28]
007d975e  FSTP ST0
007d9760  FMUL double ptr [0x00906d94]
007d9766  FSTP extended double ptr [ESP]
007d9769  FLDCW word ptr [ESP + 0x24]
007d976d  CALL 0x007d94c6
007d9772  ADD ESP,0x30
007d9775  POP EDX
007d9776  RET
007d9777  FPREM
007d9779  ADD ESP,0x30
007d977c  POP EDX
007d977d  RET
