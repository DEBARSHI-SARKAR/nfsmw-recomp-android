0048dec0  SUB ESP,0x18
0048dec3  MOV EAX,dword ptr [ESP + 0x1c]
0048dec7  FLD float ptr [EAX]
0048dec9  MOV ECX,dword ptr [ESP + 0x24]
0048decd  FADD ST0,ST0
0048decf  FLD float ptr [EAX + 0x4]
0048ded2  FADD ST0,ST0
0048ded4  FLD float ptr [EAX + 0x8]
0048ded7  FADD ST0,ST0
0048ded9  FSTP float ptr [ESP + 0x1c]
0048dedd  FLD ST1
0048dedf  FMUL float ptr [EAX + 0xc]
0048dee2  FSTP float ptr [ESP + 0x14]
0048dee6  FLD ST0
0048dee8  FMUL float ptr [EAX + 0xc]
0048deeb  FSTP float ptr [ESP + 0x10]
0048deef  FLD float ptr [ESP + 0x1c]
0048def3  FMUL float ptr [EAX + 0xc]
0048def6  FSTP float ptr [ESP + 0x4]
0048defa  FXCH
0048defc  FMUL float ptr [EAX]
0048defe  FSTP float ptr [ESP + 0x8]
0048df02  FLD ST0
0048df04  FMUL float ptr [EAX]
0048df06  FSTP float ptr [ESP]
0048df09  FLD float ptr [ESP + 0x1c]
0048df0d  FMUL float ptr [EAX]
0048df0f  FSTP float ptr [ESP + 0xc]
0048df13  FMUL float ptr [EAX + 0x4]
0048df16  FLD float ptr [ESP + 0x1c]
0048df1a  FMUL float ptr [EAX + 0x4]
0048df1d  FLD float ptr [ESP + 0x1c]
0048df21  FMUL float ptr [EAX + 0x8]
0048df24  MOV EAX,dword ptr [ESP + 0x20]
0048df28  FLD ST0
0048df2a  FADD ST0,ST3
0048df2c  FSUBR float ptr [0x0089096c]
0048df32  FMUL float ptr [EAX]
0048df34  FLD float ptr [ESP + 0xc]
0048df38  FADD float ptr [ESP + 0x10]
0048df3c  FMUL float ptr [EAX + 0x8]
0048df3f  FADDP
0048df41  FLD float ptr [ESP]
0048df44  FSUB float ptr [ESP + 0x4]
0048df48  FMUL float ptr [EAX + 0x4]
0048df4b  FADDP
0048df4d  FSTP float ptr [ECX]
0048df4f  FADD float ptr [ESP + 0x8]
0048df53  FSUBR float ptr [0x0089096c]
0048df59  FMUL float ptr [EAX + 0x4]
0048df5c  FLD float ptr [ESP]
0048df5f  FADD float ptr [ESP + 0x4]
0048df63  FMUL float ptr [EAX]
0048df65  FADDP
0048df67  FLD ST1
0048df69  FSUB float ptr [ESP + 0x14]
0048df6d  FMUL float ptr [EAX + 0x8]
0048df70  FADDP
0048df72  FSTP float ptr [ECX + 0x4]
0048df75  FXCH
0048df77  FADD float ptr [ESP + 0x8]
0048df7b  FSUBR float ptr [0x0089096c]
0048df81  FMUL float ptr [EAX + 0x8]
0048df84  FLD float ptr [ESP + 0xc]
0048df88  FSUB float ptr [ESP + 0x10]
0048df8c  FMUL float ptr [EAX]
0048df8e  FADDP
0048df90  FXCH
0048df92  FADD float ptr [ESP + 0x14]
0048df96  FMUL float ptr [EAX + 0x4]
0048df99  FADDP
0048df9b  MOV dword ptr [ECX + 0xc],0x3f800000
0048dfa2  FSTP float ptr [ECX + 0x8]
0048dfa5  ADD ESP,0x18
0048dfa8  RET
