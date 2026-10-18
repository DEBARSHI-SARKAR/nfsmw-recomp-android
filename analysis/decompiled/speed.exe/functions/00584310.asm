00584310  PUSH EBP
00584311  MOV EBP,ESP
00584313  AND ESP,0xfffffff0
00584316  SUB ESP,0xd4
0058431c  MOV EDX,dword ptr [EBP + 0x20]
0058431f  MOV ECX,dword ptr [EBP + 0x8]
00584322  PUSH EBX
00584323  MOV EBX,dword ptr [EBP + 0x18]
00584326  DEC EDX
00584327  PUSH ESI
00584328  MOV ESI,dword ptr [EBP + 0x1c]
0058432b  PUSH EDI
0058432c  MOV EDI,dword ptr [EBP + 0x14]
0058432f  MOV dword ptr [ESP + 0x34],EDX
00584333  SHL EDX,0x4
00584336  FLD float ptr [EDX + EDI*0x1 + 0x4]
0058433a  FCOMP float ptr [EBP + 0x24]
0058433d  FNSTSW AX
0058433f  TEST AH,0x41
00584342  MOV EAX,dword ptr [EBP + 0x10]
00584345  JP 0x005843a5
00584347  FLD float ptr [EDX + EDI*0x1 + 0x4]
0058434b  MOV EAX,dword ptr [EDX + EDI*0x1]
0058434e  FLD float ptr [EDX + EDI*0x1 + 0x8]
00584352  MOV dword ptr [ECX],EAX
00584354  MOV EAX,dword ptr [ESP + 0x34]
00584358  FXCH
0058435a  FSTP float ptr [ECX + 0x4]
0058435d  MOV dword ptr [ESP + 0x1c],0x1
00584365  MOV byte ptr [ESP + 0x1b],0x1
0058436a  FSTP float ptr [ECX + 0x8]
0058436d  MOV ECX,dword ptr [EBX + EAX*0x8]
00584370  FLD float ptr [EBX + EAX*0x8 + 0x4]
00584374  MOV EAX,dword ptr [EBP + 0xc]
00584377  FSTP float ptr [EAX + 0x4]
0058437a  MOV dword ptr [EAX],ECX
0058437c  FLD float ptr [EDX + ESI*0x1 + 0x4]
00584380  MOV ECX,dword ptr [EDX + ESI*0x1]
00584383  FLD float ptr [EDX + ESI*0x1 + 0x8]
00584387  MOV EAX,dword ptr [EBP + 0x10]
0058438a  FLD float ptr [EDX + ESI*0x1 + 0xc]
0058438e  MOV dword ptr [EAX],ECX
00584390  FSTP float ptr [ESP + 0x24]
00584394  MOV ECX,dword ptr [ESP + 0x24]
00584398  FXCH
0058439a  FSTP float ptr [EAX + 0x4]
0058439d  MOV dword ptr [EAX + 0xc],ECX
005843a0  FSTP float ptr [EAX + 0x8]
005843a3  JMP 0x005843b2
005843a5  MOV dword ptr [ESP + 0x1c],0x0
005843ad  MOV byte ptr [ESP + 0x1b],0x0
005843b2  MOV ECX,dword ptr [EBP + 0x20]
005843b5  TEST ECX,ECX
005843b7  MOV dword ptr [ESP + 0x2c],0x0
005843bf  JBE 0x005847ed
005843c5  MOV ECX,dword ptr [ESP + 0x34]
005843c9  SHL ECX,0x3
005843cc  MOV dword ptr [ESP + 0x28],ECX
005843d0  MOV ECX,dword ptr [ESP + 0x1c]
005843d4  SHL ECX,0x4
005843d7  ADD EAX,ECX
005843d9  MOV dword ptr [ESP + 0x24],EAX
005843dd  MOV EAX,dword ptr [EBP + 0x8]
005843e0  ADD ECX,EAX
005843e2  LEA EAX,[ESI + 0xc]
005843e5  MOV dword ptr [ESP + 0x30],EAX
005843e9  LEA EAX,[EDI + 0x4]
005843ec  MOV dword ptr [ESP + 0x20],EAX
005843f0  MOV EAX,ESI
005843f2  SUB EAX,EDI
005843f4  MOV dword ptr [ESP + 0x34],EAX
005843f8  MOV EAX,0xfffffffc
005843fd  SUB EAX,EDI
005843ff  MOV dword ptr [ESP + 0x48],EAX
00584403  JMP 0x00584410
00584405  MOV EBX,dword ptr [EBP + 0x18]
00584408  JMP 0x00584410
00584410  MOV EAX,dword ptr [ESP + 0x20]
00584414  FLD float ptr [EAX]
00584416  FCOMP float ptr [EBP + 0x24]
00584419  FNSTSW AX
0058441b  MOV AL,byte ptr [ESP + 0x1b]
0058441f  TEST AH,0x41
00584422  JP 0x00584627
00584428  TEST AL,AL
0058442a  MOV EAX,dword ptr [ESP + 0x20]
0058442e  JNZ 0x005845b8
00584434  FLD float ptr [EAX + -0x4]
00584437  FSUB float ptr [EDX + EDI*0x1]
0058443a  FLD float ptr [EAX]
0058443c  FSUB float ptr [EDX + EDI*0x1 + 0x4]
00584440  FLD float ptr [EAX + 0x4]
00584443  FSUB float ptr [EDX + EDI*0x1 + 0x8]
00584447  FSTP float ptr [ESP + 0xc8]
0058444e  MOV EAX,dword ptr [ESP + 0xc8]
00584455  MOV dword ptr [ECX + 0x8],EAX
00584458  FXCH
0058445a  FSTP float ptr [ECX]
0058445c  MOV EAX,dword ptr [ESP + 0x2c]
00584460  FSTP float ptr [ECX + 0x4]
00584463  FLD float ptr [EBP + 0x24]
00584466  FSUB float ptr [EDX + EDI*0x1 + 0x4]
0058446a  FDIV float ptr [ECX + 0x4]
0058446d  FLD ST0
0058446f  FMUL float ptr [ECX]
00584471  FSTP float ptr [ECX]
00584473  FLD ST0
00584475  FMUL float ptr [ECX + 0x4]
00584478  FSTP float ptr [ECX + 0x4]
0058447b  FLD ST0
0058447d  FMUL float ptr [ECX + 0x8]
00584480  FSTP float ptr [ECX + 0x8]
00584483  FLD float ptr [EDX + EDI*0x1 + 0x4]
00584487  FLD float ptr [EDX + EDI*0x1 + 0x8]
0058448b  FLD float ptr [ECX]
0058448d  FADD float ptr [EDX + EDI*0x1]
00584490  FSTP float ptr [ECX]
00584492  FXCH
00584494  FADD float ptr [ECX + 0x4]
00584497  FSTP float ptr [ECX + 0x4]
0058449a  FADD float ptr [ECX + 0x8]
0058449d  FSTP float ptr [ECX + 0x8]
005844a0  FLD float ptr [EBX + EAX*0x8]
005844a3  MOV EAX,dword ptr [ESP + 0x28]
005844a7  FSUB float ptr [EAX + EBX*0x1]
005844aa  MOV EAX,dword ptr [ESP + 0x2c]
005844ae  FLD float ptr [EBX + EAX*0x8 + 0x4]
005844b2  MOV EAX,dword ptr [ESP + 0x28]
005844b6  FSUB float ptr [EAX + EBX*0x1 + 0x4]
005844ba  FXCH
005844bc  FMUL ST2
005844be  FSTP float ptr [ESP + 0x38]
005844c2  MOV EAX,dword ptr [ESP + 0x38]
005844c6  MOV dword ptr [ESP + 0x40],EAX
005844ca  FMUL ST1
005844cc  FSTP float ptr [ESP + 0x3c]
005844d0  MOV EAX,dword ptr [ESP + 0x3c]
005844d4  FLD float ptr [ESP + 0x40]
005844d8  MOV dword ptr [ESP + 0x44],EAX
005844dc  MOV EAX,dword ptr [ESP + 0x28]
005844e0  FADD float ptr [EAX + EBX*0x1]
005844e3  FLD float ptr [ESP + 0x44]
005844e7  FADD float ptr [EAX + EBX*0x1 + 0x4]
005844eb  MOV EBX,dword ptr [EBP + 0xc]
005844ee  MOV EAX,dword ptr [ESP + 0x1c]
005844f2  FXCH
005844f4  FSTP float ptr [EBX + EAX*0x8]
005844f7  FSTP float ptr [EBX + EAX*0x8 + 0x4]
005844fb  MOV EAX,dword ptr [ESP + 0x30]
005844ff  FLD float ptr [EAX + -0xc]
00584502  MOV EBX,dword ptr [ESP + 0x34]
00584506  FSUB float ptr [EDX + ESI*0x1]
00584509  MOV EAX,dword ptr [ESP + 0x20]
0058450d  FLD float ptr [EBX + EAX*0x1]
00584510  MOV EBX,dword ptr [ESP + 0x30]
00584514  FSUB float ptr [EDX + ESI*0x1 + 0x4]
00584518  FLD float ptr [EBX + -0x4]
0058451b  FSUB float ptr [EDX + ESI*0x1 + 0x8]
0058451f  FSTP float ptr [ESP + 0xb8]
00584526  FLD float ptr [EBX]
00584528  FSUB float ptr [EDX + ESI*0x1 + 0xc]
0058452c  FSTP float ptr [ESP + 0xbc]
00584533  FXCH
00584535  FMUL ST2
00584537  FSTP float ptr [ESP + 0x70]
0058453b  FMUL ST1
0058453d  FSTP float ptr [ESP + 0x74]
00584541  FLD float ptr [ESP + 0xb8]
00584548  ADD ECX,0x10
0058454b  FMUL ST1
0058454d  MOV byte ptr [ESP + 0x1b],0x1
00584552  FSTP float ptr [ESP + 0x78]
00584556  FMUL float ptr [ESP + 0xbc]
0058455d  FLD float ptr [ESP + 0x70]
00584561  FADD float ptr [EDX + ESI*0x1]
00584564  FLD float ptr [ESP + 0x74]
00584568  FADD float ptr [EDX + ESI*0x1 + 0x4]
0058456c  FLD float ptr [ESP + 0x78]
00584570  FADD float ptr [EDX + ESI*0x1 + 0x8]
00584574  FSTP float ptr [ESP + 0xa8]
0058457b  MOV EBX,dword ptr [ESP + 0xa8]
00584582  FXCH ST2
00584584  FADD float ptr [EDX + ESI*0x1 + 0xc]
00584588  MOV EDX,dword ptr [ESP + 0x24]
0058458c  MOV dword ptr [EDX + 0x8],EBX
0058458f  FSTP float ptr [ESP + 0xac]
00584596  MOV EBX,dword ptr [ESP + 0xac]
0058459d  MOV dword ptr [EDX + 0xc],EBX
005845a0  MOV EBX,dword ptr [ESP + 0x1c]
005845a4  FSTP float ptr [EDX]
005845a6  INC EBX
005845a7  FSTP float ptr [EDX + 0x4]
005845aa  ADD EDX,0x10
005845ad  MOV dword ptr [ESP + 0x1c],EBX
005845b1  MOV EBX,dword ptr [EBP + 0x18]
005845b4  MOV dword ptr [ESP + 0x24],EDX
005845b8  FLD float ptr [EAX]
005845ba  MOV EDX,dword ptr [EAX + -0x4]
005845bd  FLD float ptr [EAX + 0x4]
005845c0  MOV EAX,dword ptr [ESP + 0x2c]
005845c4  MOV dword ptr [ECX],EDX
005845c6  FXCH
005845c8  MOV EDX,dword ptr [EBP + 0xc]
005845cb  FSTP float ptr [ECX + 0x4]
005845ce  ADD ECX,0x10
005845d1  FSTP float ptr [ECX + -0x8]
005845d4  FLD float ptr [EBX + EAX*0x8 + 0x4]
005845d8  MOV EBX,dword ptr [EBX + EAX*0x8]
005845db  MOV EAX,dword ptr [ESP + 0x1c]
005845df  MOV dword ptr [EDX + EAX*0x8],EBX
005845e2  FSTP float ptr [EDX + EAX*0x8 + 0x4]
005845e6  MOV EDX,dword ptr [ESP + 0x34]
005845ea  MOV EBX,dword ptr [ESP + 0x20]
005845ee  FLD float ptr [EDX + EBX*0x1]
005845f1  MOV EDX,dword ptr [ESP + 0x30]
005845f5  MOV EBX,dword ptr [EDX]
005845f7  FLD float ptr [EDX + -0x4]
005845fa  MOV dword ptr [ESP + 0x54],EBX
005845fe  FXCH
00584600  MOV EBX,dword ptr [EDX + -0xc]
00584603  MOV EDX,dword ptr [ESP + 0x24]
00584607  FSTP float ptr [EDX + 0x4]
0058460a  MOV dword ptr [EDX],EBX
0058460c  MOV EBX,dword ptr [ESP + 0x54]
00584610  INC EAX
00584611  FSTP float ptr [EDX + 0x8]
00584614  MOV dword ptr [EDX + 0xc],EBX
00584617  ADD EDX,0x10
0058461a  MOV dword ptr [ESP + 0x1c],EAX
0058461e  MOV dword ptr [ESP + 0x24],EDX
00584622  JMP 0x005847b4
00584627  TEST AL,AL
00584629  JZ 0x005847b4
0058462f  MOV EAX,dword ptr [ESP + 0x20]
00584633  FLD float ptr [EAX + -0x4]
00584636  FSUB float ptr [EDX + EDI*0x1]
00584639  FLD float ptr [EAX]
0058463b  FSUB float ptr [EDX + EDI*0x1 + 0x4]
0058463f  FLD float ptr [EAX + 0x4]
00584642  FSUB float ptr [EDX + EDI*0x1 + 0x8]
00584646  FSTP float ptr [ESP + 0xd8]
0058464d  MOV EAX,dword ptr [ESP + 0xd8]
00584654  MOV dword ptr [ECX + 0x8],EAX
00584657  FXCH
00584659  FSTP float ptr [ECX]
0058465b  MOV EAX,dword ptr [ESP + 0x2c]
0058465f  FSTP float ptr [ECX + 0x4]
00584662  FLD float ptr [EBP + 0x24]
00584665  FSUB float ptr [EDX + EDI*0x1 + 0x4]
00584669  FDIV float ptr [ECX + 0x4]
0058466c  FLD ST0
0058466e  FMUL float ptr [ECX]
00584670  FSTP float ptr [ECX]
00584672  FLD ST0
00584674  FMUL float ptr [ECX + 0x4]
00584677  FSTP float ptr [ECX + 0x4]
0058467a  FLD ST0
0058467c  FMUL float ptr [ECX + 0x8]
0058467f  FSTP float ptr [ECX + 0x8]
00584682  FLD float ptr [EDX + EDI*0x1 + 0x4]
00584686  FLD float ptr [EDX + EDI*0x1 + 0x8]
0058468a  FLD float ptr [ECX]
0058468c  FADD float ptr [EDX + EDI*0x1]
0058468f  FSTP float ptr [ECX]
00584691  FXCH
00584693  FADD float ptr [ECX + 0x4]
00584696  FSTP float ptr [ECX + 0x4]
00584699  FADD float ptr [ECX + 0x8]
0058469c  FSTP float ptr [ECX + 0x8]
0058469f  FLD float ptr [EBX + EAX*0x8]
005846a2  MOV EAX,dword ptr [ESP + 0x28]
005846a6  FSUB float ptr [EAX + EBX*0x1]
005846a9  MOV EAX,dword ptr [ESP + 0x2c]
005846ad  FLD float ptr [EBX + EAX*0x8 + 0x4]
005846b1  MOV EAX,dword ptr [ESP + 0x28]
005846b5  FSUB float ptr [EAX + EBX*0x1 + 0x4]
005846b9  FXCH
005846bb  FMUL ST2
005846bd  FSTP float ptr [ESP + 0x4c]
005846c1  MOV EAX,dword ptr [ESP + 0x4c]
005846c5  MOV dword ptr [ESP + 0x58],EAX
005846c9  FMUL ST1
005846cb  FSTP float ptr [ESP + 0x50]
005846cf  MOV EAX,dword ptr [ESP + 0x50]
005846d3  FLD float ptr [ESP + 0x58]
005846d7  MOV dword ptr [ESP + 0x5c],EAX
005846db  MOV EAX,dword ptr [ESP + 0x28]
005846df  FADD float ptr [EAX + EBX*0x1]
005846e2  FLD float ptr [ESP + 0x5c]
005846e6  FADD float ptr [EAX + EBX*0x1 + 0x4]
005846ea  MOV EBX,dword ptr [EBP + 0xc]
005846ed  MOV EAX,dword ptr [ESP + 0x1c]
005846f1  FXCH
005846f3  FSTP float ptr [EBX + EAX*0x8]
005846f6  FSTP float ptr [EBX + EAX*0x8 + 0x4]
005846fa  MOV EAX,dword ptr [ESP + 0x30]
005846fe  FLD float ptr [EAX + -0xc]
00584701  MOV EAX,dword ptr [ESP + 0x34]
00584705  FSUB float ptr [EDX + ESI*0x1]
00584708  MOV EBX,dword ptr [ESP + 0x20]
0058470c  FLD float ptr [EAX + EBX*0x1]
0058470f  MOV EAX,dword ptr [ESP + 0x30]
00584713  FSUB float ptr [EDX + ESI*0x1 + 0x4]
00584717  FLD float ptr [EAX + -0x4]
0058471a  FSUB float ptr [EDX + ESI*0x1 + 0x8]
0058471e  FSTP float ptr [ESP + 0x88]
00584725  FLD float ptr [EAX]
00584727  FSUB float ptr [EDX + ESI*0x1 + 0xc]
0058472b  FSTP float ptr [ESP + 0x8c]
00584732  FXCH
00584734  FMUL ST2
00584736  FSTP float ptr [ESP + 0x60]
0058473a  FMUL ST1
0058473c  FSTP float ptr [ESP + 0x64]
00584740  MOV EAX,dword ptr [ESP + 0x24]
00584744  FLD float ptr [ESP + 0x88]
0058474b  ADD ECX,0x10
0058474e  FMUL ST1
00584750  MOV byte ptr [ESP + 0x1b],0x0
00584755  FSTP float ptr [ESP + 0x68]
00584759  FMUL float ptr [ESP + 0x8c]
00584760  FLD float ptr [ESP + 0x60]
00584764  FADD float ptr [EDX + ESI*0x1]
00584767  FLD float ptr [ESP + 0x64]
0058476b  FADD float ptr [EDX + ESI*0x1 + 0x4]
0058476f  FLD float ptr [ESP + 0x68]
00584773  FADD float ptr [EDX + ESI*0x1 + 0x8]
00584777  FSTP float ptr [ESP + 0x98]
0058477e  FXCH ST2
00584780  FADD float ptr [EDX + ESI*0x1 + 0xc]
00584784  MOV EDX,dword ptr [ESP + 0x98]
0058478b  MOV dword ptr [EAX + 0x8],EDX
0058478e  FSTP float ptr [ESP + 0x9c]
00584795  MOV EDX,dword ptr [ESP + 0x9c]
0058479c  MOV dword ptr [EAX + 0xc],EDX
0058479f  MOV EDX,dword ptr [ESP + 0x1c]
005847a3  FSTP float ptr [EAX]
005847a5  INC EDX
005847a6  FSTP float ptr [EAX + 0x4]
005847a9  ADD EAX,0x10
005847ac  MOV dword ptr [ESP + 0x1c],EDX
005847b0  MOV dword ptr [ESP + 0x24],EAX
005847b4  MOV EAX,dword ptr [ESP + 0x2c]
005847b8  MOV EBX,dword ptr [ESP + 0x20]
005847bc  LEA EDX,[EAX*0x8 + 0x0]
005847c3  MOV dword ptr [ESP + 0x28],EDX
005847c7  MOV EDX,dword ptr [ESP + 0x48]
005847cb  ADD EDX,EBX
005847cd  ADD EBX,0x10
005847d0  MOV dword ptr [ESP + 0x20],EBX
005847d4  MOV EBX,dword ptr [ESP + 0x30]
005847d8  ADD EBX,0x10
005847db  INC EAX
005847dc  MOV dword ptr [ESP + 0x30],EBX
005847e0  CMP EAX,dword ptr [EBP + 0x20]
005847e3  MOV dword ptr [ESP + 0x2c],EAX
005847e7  JC 0x00584405
005847ed  MOV EAX,dword ptr [ESP + 0x1c]
005847f1  POP EDI
005847f2  POP ESI
005847f3  POP EBX
005847f4  MOV ESP,EBP
005847f6  POP EBP
005847f7  RET
