006ed740  SUB ESP,0x54
006ed743  MOV EAX,dword ptr [ESP + 0x58]
006ed747  FLD float ptr [EAX]
006ed749  MOV ECX,EAX
006ed74b  MOV EDX,dword ptr [ECX]
006ed74d  MOV dword ptr [ESP + 0xc],EDX
006ed751  MOV EDX,dword ptr [ECX + 0x4]
006ed754  MOV ECX,dword ptr [ECX + 0x8]
006ed757  MOV dword ptr [ESP + 0x14],ECX
006ed75b  MOV ECX,dword ptr [ESP + 0x60]
006ed75f  FSUB float ptr [ECX]
006ed761  PUSH EBX
006ed762  PUSH EBP
006ed763  PUSH ESI
006ed764  FSTP float ptr [ESP + 0xc]
006ed768  MOV ESI,dword ptr [ESP + 0x74]
006ed76c  FLD float ptr [EAX + 0x4]
006ed76f  MOV dword ptr [ESP + 0x1c],EDX
006ed773  FSUB float ptr [ECX + 0x4]
006ed776  PUSH EDI
006ed777  FSTP float ptr [ESP + 0x14]
006ed77b  FLD float ptr [EAX + 0x8]
006ed77e  FSUB float ptr [ECX + 0x8]
006ed781  FSTP float ptr [ESP + 0x18]
006ed785  FLD float ptr [ESI + 0x8]
006ed788  FLD float ptr [ESI + 0x4]
006ed78b  FLD float ptr [ESI]
006ed78d  FLD ST0
006ed78f  FMUL ST1
006ed791  FLD ST2
006ed793  FMUL ST3
006ed795  FADDP
006ed797  FLD ST3
006ed799  FMUL ST4
006ed79b  FADDP
006ed79d  FSTP float ptr [ESP + 0x68]
006ed7a1  MOV EDX,dword ptr [ESP + 0x68]
006ed7a5  FSTP ST0
006ed7a7  PUSH EDX
006ed7a8  FSTP ST0
006ed7aa  FSTP ST0
006ed7ac  CALL 0x005c5e80
006ed7b1  FSTP float ptr [ESP + 0x6c]
006ed7b5  FLD float ptr [ESP + 0x18]
006ed7b9  FMUL float ptr [ESP + 0x18]
006ed7bd  FLD float ptr [ESP + 0x1c]
006ed7c1  FMUL float ptr [ESP + 0x1c]
006ed7c5  FADDP
006ed7c7  FLD float ptr [ESP + 0x14]
006ed7cb  FMUL float ptr [ESP + 0x14]
006ed7cf  FADDP
006ed7d1  FSTP float ptr [ESP]
006ed7d4  CALL 0x005c5e80
006ed7d9  FADD float ptr [ESP + 0x6c]
006ed7dd  MOV EDI,dword ptr [ESP + 0x70]
006ed7e1  MOV EBX,dword ptr [ESP + 0x78]
006ed7e5  LEA EAX,[EBX + 0x10]
006ed7e8  FLD ST0
006ed7ea  LEA ECX,[EBX + 0x20]
006ed7ed  FMUL float ptr [EDI]
006ed7ef  ADD ESP,0x4
006ed7f2  MOV dword ptr [ESP + 0x4c],EBX
006ed7f6  MOV dword ptr [ESP + 0x50],EAX
006ed7fa  FADD float ptr [ESP + 0x1c]
006ed7fe  MOV dword ptr [ESP + 0x54],ECX
006ed802  FSTP float ptr [ESP + 0x40]
006ed806  FLD ST0
006ed808  FMUL float ptr [EDI + 0x4]
006ed80b  FADD float ptr [ESP + 0x20]
006ed80f  FSTP float ptr [ESP + 0x44]
006ed813  FMUL float ptr [EDI + 0x8]
006ed816  FADD float ptr [ESP + 0x24]
006ed81a  FSTP float ptr [ESP + 0x48]
006ed81e  MOV EDX,dword ptr [ESI]
006ed820  MOV EAX,dword ptr [ESI + 0x4]
006ed823  MOV ECX,dword ptr [ESI + 0x8]
006ed826  XOR EBP,EBP
006ed828  MOV dword ptr [ESP + 0x58],EDX
006ed82c  MOV dword ptr [ESP + 0x5c],EAX
006ed830  MOV dword ptr [ESP + 0x60],ECX
006ed834  MOV dword ptr [ESP + 0x68],0x8b04d0
006ed83c  MOV dword ptr [ESP + 0x78],EBP
006ed840  MOV EDX,dword ptr [ESP + 0x68]
006ed844  MOV EAX,dword ptr [EDX]
006ed846  MOV ECX,dword ptr [EDX + 0x4]
006ed849  MOV EDX,dword ptr [EDX + 0x8]
006ed84c  MOV dword ptr [ESP + 0x10],EAX
006ed850  FLD float ptr [ESP + 0x10]
006ed854  FMUL float ptr [ESI]
006ed856  MOV dword ptr [ESP + 0x14],ECX
006ed85a  MOV dword ptr [ESP + 0x18],EDX
006ed85e  LEA EAX,[ESP + 0x10]
006ed862  FSTP float ptr [ESP + 0x10]
006ed866  PUSH EAX
006ed867  FLD float ptr [ESP + 0x18]
006ed86b  MOV ECX,EAX
006ed86d  FMUL float ptr [ESI + 0x4]
006ed870  PUSH EBX
006ed871  PUSH ECX
006ed872  FSTP float ptr [ESP + 0x20]
006ed876  FLD float ptr [ESP + 0x24]
006ed87a  FMUL float ptr [ESI + 0x8]
006ed87d  FSTP float ptr [ESP + 0x24]
006ed881  CALL 0x00486610
006ed886  LEA EDX,[ESP + 0x40]
006ed88a  PUSH EDX
006ed88b  LEA EAX,[ESP + 0x20]
006ed88f  PUSH EAX
006ed890  CALL 0x0040fe20
006ed895  FLD float ptr [ESP + 0x48]
006ed899  FMUL float ptr [EDI]
006ed89b  ADD ESP,0x14
006ed89e  FLD float ptr [ESP + 0x38]
006ed8a2  FMUL float ptr [EDI + 0x4]
006ed8a5  FADDP
006ed8a7  FLD float ptr [ESP + 0x3c]
006ed8ab  FMUL float ptr [EDI + 0x8]
006ed8ae  FADDP
006ed8b0  FCOMP float ptr [0x00890968]
006ed8b6  FNSTSW AX
006ed8b8  TEST AH,0x41
006ed8bb  JZ 0x006ed999
006ed8c1  MOV EAX,dword ptr [ESP + 0x70]
006ed8c5  FLD float ptr [ESP + 0x10]
006ed8c9  FADD float ptr [EAX]
006ed8cb  LEA ECX,[ESP + 0x6c]
006ed8cf  PUSH ECX
006ed8d0  LEA EDX,[ESP + 0x2c]
006ed8d4  FSTP float ptr [ESP + 0x14]
006ed8d8  PUSH EDX
006ed8d9  FLD float ptr [ESP + 0x1c]
006ed8dd  LEA ECX,[ESP + 0x18]
006ed8e1  FADD float ptr [EAX + 0x4]
006ed8e4  LEA EDX,[ESP + 0x48]
006ed8e8  FSTP float ptr [ESP + 0x1c]
006ed8ec  FLD float ptr [ESP + 0x20]
006ed8f0  FADD float ptr [EAX + 0x8]
006ed8f3  LEA EAX,[ESP + 0x3c]
006ed8f7  PUSH EAX
006ed8f8  PUSH ECX
006ed8f9  PUSH EDX
006ed8fa  FSTP float ptr [ESP + 0x2c]
006ed8fe  LEA EAX,[ESP + 0x30]
006ed902  PUSH EAX
006ed903  CALL 0x007677d0
006ed908  ADD ESP,0x18
006ed90b  TEST AL,AL
006ed90d  JZ 0x006ed999
006ed913  FLD float ptr [ESP + 0x28]
006ed917  MOV EDX,EBP
006ed919  FSUB float ptr [ESP + 0x10]
006ed91d  XOR ECX,ECX
006ed91f  FLD float ptr [ESP + 0x2c]
006ed923  SHR EDX,0x1
006ed925  FSUB float ptr [ESP + 0x14]
006ed929  FLD float ptr [ESP + 0x30]
006ed92d  FSUB float ptr [ESP + 0x18]
006ed931  CMP ECX,EDX
006ed933  JZ 0x006ed965
006ed935  MOV EAX,dword ptr [ESP + ECX*0x4 + 0x4c]
006ed939  FLD ST0
006ed93b  FMUL float ptr [EAX + 0x8]
006ed93e  FLD ST2
006ed940  FMUL float ptr [EAX + 0x4]
006ed943  FADDP
006ed945  FLD ST3
006ed947  FMUL float ptr [EAX]
006ed949  FADDP
006ed94b  FCOM float ptr [0x00890968]
006ed951  FNSTSW AX
006ed953  TEST AH,0x5
006ed956  JP 0x006ed95a
006ed958  FCHS
006ed95a  FCOMP float ptr [ESP + ECX*0x4 + 0x58]
006ed95e  FNSTSW AX
006ed960  TEST AH,0x41
006ed963  JZ 0x006ed993
006ed965  INC ECX
006ed966  CMP ECX,0x3
006ed969  JC 0x006ed931
006ed96b  MOV EDX,dword ptr [ESP + 0x28]
006ed96f  FSTP ST0
006ed971  MOV ECX,dword ptr [ESP + 0x7c]
006ed975  FSTP ST0
006ed977  MOV EAX,dword ptr [ESP + 0x2c]
006ed97b  FSTP ST0
006ed97d  POP EDI
006ed97e  MOV dword ptr [ECX],EDX
006ed980  MOV EDX,dword ptr [ESP + 0x2c]
006ed984  POP ESI
006ed985  MOV dword ptr [ECX + 0x4],EAX
006ed988  POP EBP
006ed989  MOV dword ptr [ECX + 0x8],EDX
006ed98c  MOV AL,0x1
006ed98e  POP EBX
006ed98f  ADD ESP,0x54
006ed992  RET
006ed993  FSTP ST0
006ed995  FSTP ST0
006ed997  FSTP ST0
006ed999  MOV EAX,dword ptr [ESP + 0x78]
006ed99d  MOV EDX,dword ptr [ESP + 0x68]
006ed9a1  ADD EAX,0xc
006ed9a4  ADD EDX,0xc
006ed9a7  INC EBP
006ed9a8  CMP EAX,0x48
006ed9ab  MOV dword ptr [ESP + 0x78],EAX
006ed9af  MOV dword ptr [ESP + 0x68],EDX
006ed9b3  JC 0x006ed840
006ed9b9  POP EDI
006ed9ba  POP ESI
006ed9bb  POP EBP
006ed9bc  XOR AL,AL
006ed9be  POP EBX
006ed9bf  ADD ESP,0x54
006ed9c2  RET
