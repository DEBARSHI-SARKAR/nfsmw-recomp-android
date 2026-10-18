0046bdc0  MOVSX EAX,word ptr [ECX + 0x28]
0046bdc4  DEC EAX
0046bdc5  JZ 0x0046be4e
0046bdcb  DEC EAX
0046bdcc  JNZ 0x0046bec9
0046bdd2  CMP word ptr [ECX + 0x2a],0x0
0046bdd7  MOV dword ptr [ECX + 0x20],0x0
0046bdde  JNZ 0x0046bde6
0046bde0  MOV word ptr [ECX + 0x28],0x1
0046bde6  FLD float ptr [ESP + 0x8]
0046bdea  FCOMP float ptr [0x00890968]
0046bdf0  FNSTSW AX
0046bdf2  TEST AH,0x41
0046bdf5  JNZ 0x0046be01
0046bdf7  MOV EAX,dword ptr [ESP + 0x8]
0046bdfb  PUSH EAX
0046bdfc  CALL 0x0046bc80
0046be01  FLD float ptr [ECX + 0x8]
0046be04  MOV EAX,dword ptr [ECX]
0046be06  FSUB float ptr [ECX]
0046be08  MOV EDX,dword ptr [ECX + 0x4]
0046be0b  FLD float ptr [ECX + 0xc]
0046be0e  MOV dword ptr [ECX + 0x1c],EAX
0046be11  FADD float ptr [ECX + 0x4]
0046be14  MOV dword ptr [ECX + 0x18],EDX
0046be17  FLD ST1
0046be19  FADD ST0,ST0
0046be1b  FSUBP
0046be1d  FSTP float ptr [ECX + 0x10]
0046be20  FMUL float ptr [0x008945ec]
0046be26  FSUB float ptr [ECX + 0xc]
0046be29  FLD float ptr [ECX + 0x4]
0046be2c  FADD ST0,ST0
0046be2e  FSUBP
0046be30  FSTP float ptr [ECX + 0x14]
0046be33  FLD float ptr [ESP + 0xc]
0046be37  FCOMP float ptr [0x00890968]
0046be3d  FNSTSW AX
0046be3f  TEST AH,0x41
0046be42  JNZ 0x0046be4e
0046be44  MOV EDX,dword ptr [ESP + 0xc]
0046be48  PUSH EDX
0046be49  CALL 0x0046bce0
0046be4e  FLD float ptr [ECX + 0x24]
0046be51  MOV EDX,0x3f800000
0046be56  FCOMP float ptr [0x00894584]
0046be5c  FNSTSW AX
0046be5e  TEST AH,0x41
0046be61  JNZ 0x0046be72
0046be63  FLD float ptr [ESP + 0x4]
0046be67  FDIV float ptr [ECX + 0x24]
0046be6a  FADD float ptr [ECX + 0x20]
0046be6d  FSTP float ptr [ECX + 0x20]
0046be70  JMP 0x0046be75
0046be72  MOV dword ptr [ECX + 0x20],EDX
0046be75  FLD float ptr [ECX + 0x20]
0046be78  FCOMP float ptr [0x0089096c]
0046be7e  FNSTSW AX
0046be80  TEST AH,0x41
0046be83  JNZ 0x0046be99
0046be85  MOV EAX,dword ptr [ECX + 0x8]
0046be88  MOV dword ptr [ECX + 0x20],EDX
0046be8b  MOV EDX,dword ptr [ECX + 0xc]
0046be8e  MOV dword ptr [ECX],EAX
0046be90  MOV dword ptr [ECX + 0x4],EDX
0046be93  MOV word ptr [ECX + 0x28],0x0
0046be99  FLD float ptr [ECX + 0x20]
0046be9c  FLD ST0
0046be9e  FMUL float ptr [ECX + 0x10]
0046bea1  FLD ST0
0046bea3  FADD float ptr [ECX + 0x14]
0046bea6  FMUL ST2
0046bea8  FADD float ptr [ECX + 0x18]
0046beab  FMUL ST2
0046bead  FADD float ptr [ECX + 0x1c]
0046beb0  FSTP float ptr [ECX]
0046beb2  FMUL float ptr [0x008945ec]
0046beb8  FLD float ptr [ECX + 0x14]
0046bebb  FADD ST0,ST0
0046bebd  FADDP
0046bebf  FMUL ST1
0046bec1  FADD float ptr [ECX + 0x18]
0046bec4  FSTP float ptr [ECX + 0x4]
0046bec7  FSTP ST0
0046bec9  RET 0xc
