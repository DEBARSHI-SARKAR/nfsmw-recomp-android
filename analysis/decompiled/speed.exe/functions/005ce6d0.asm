005ce6d0  SUB ESP,0x14
005ce6d3  MOV ECX,dword ptr [ESP + 0x18]
005ce6d7  FLD float ptr [ECX + 0x18]
005ce6da  FCHS
005ce6dc  FST float ptr [ESP]
005ce6df  FMUL float ptr [ESP]
005ce6e2  FSUBR float ptr [0x0089096c]
005ce6e8  FSQRT
005ce6ea  FSTP float ptr [ESP + 0x18]
005ce6ee  FLD float ptr [0x00890968]
005ce6f4  FLD float ptr [ESP + 0x18]
005ce6f8  FUCOMPP
005ce6fa  FNSTSW AX
005ce6fc  TEST AH,0x44
005ce6ff  JP 0x005ce723
005ce701  FLD float ptr [ECX + 0x14]
005ce704  MOV EAX,dword ptr [ECX + 0x10]
005ce707  FCHS
005ce709  MOV dword ptr [ESP + 0x4],EAX
005ce70d  FSTP float ptr [ESP + 0x8]
005ce711  MOV dword ptr [ESP + 0x10],0x0
005ce719  MOV dword ptr [ESP + 0xc],0x3f800000
005ce721  JMP 0x005ce74e
005ce723  FLD float ptr [0x0089096c]
005ce729  FDIV float ptr [ESP + 0x18]
005ce72d  FLD ST0
005ce72f  FMUL float ptr [ECX + 0x1c]
005ce732  FSTP float ptr [ESP + 0x8]
005ce736  FLD ST0
005ce738  FMUL float ptr [ECX + 0x20]
005ce73b  FSTP float ptr [ESP + 0x4]
005ce73f  FLD ST0
005ce741  FMUL float ptr [ECX + 0xc]
005ce744  FSTP float ptr [ESP + 0x10]
005ce748  FMUL float ptr [ECX]
005ce74a  FSTP float ptr [ESP + 0xc]
005ce74e  MOV ECX,dword ptr [ESP + 0x4]
005ce752  MOV EDX,dword ptr [ESP + 0x8]
005ce756  PUSH ECX
005ce757  PUSH EDX
005ce758  CALL 0x005cb5d0
005ce75d  FCHS
005ce75f  MOV ECX,dword ptr [ESP + 0x24]
005ce763  FLD ST0
005ce765  FSTP float ptr [ECX]
005ce767  ADD ESP,0x8
005ce76a  FCOM float ptr [0x00890968]
005ce770  FNSTSW AX
005ce772  TEST AH,0x5
005ce775  JP 0x005ce781
005ce777  FADD float ptr [0x0089096c]
005ce77d  FSTP float ptr [ECX]
005ce77f  JMP 0x005ce783
005ce781  FSTP ST0
005ce783  MOV EAX,dword ptr [ESP + 0x18]
005ce787  MOV ECX,dword ptr [ESP]
005ce78a  PUSH EAX
005ce78b  PUSH ECX
005ce78c  CALL 0x005cb5d0
005ce791  FCHS
005ce793  MOV ECX,dword ptr [ESP + 0x28]
005ce797  FLD ST0
005ce799  FSTP float ptr [ECX]
005ce79b  ADD ESP,0x8
005ce79e  FCOM float ptr [0x00890968]
005ce7a4  FNSTSW AX
005ce7a6  TEST AH,0x5
005ce7a9  JP 0x005ce7b5
005ce7ab  FADD float ptr [0x0089096c]
005ce7b1  FSTP float ptr [ECX]
005ce7b3  JMP 0x005ce7b7
005ce7b5  FSTP ST0
005ce7b7  MOV EDX,dword ptr [ESP + 0xc]
005ce7bb  MOV EAX,dword ptr [ESP + 0x10]
005ce7bf  PUSH EDX
005ce7c0  PUSH EAX
005ce7c1  CALL 0x005cb5d0
005ce7c6  FCHS
005ce7c8  MOV ECX,dword ptr [ESP + 0x2c]
005ce7cc  FLD ST0
005ce7ce  FSTP float ptr [ECX]
005ce7d0  ADD ESP,0x8
005ce7d3  FCOM float ptr [0x00890968]
005ce7d9  FNSTSW AX
005ce7db  TEST AH,0x5
005ce7de  JP 0x005ce7ec
005ce7e0  FADD float ptr [0x0089096c]
005ce7e6  FSTP float ptr [ECX]
005ce7e8  ADD ESP,0x14
005ce7eb  RET
005ce7ec  FSTP ST0
005ce7ee  ADD ESP,0x14
005ce7f1  RET
