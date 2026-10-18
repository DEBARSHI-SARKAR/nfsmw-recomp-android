00583440  PUSH EBP
00583441  MOV EBP,ESP
00583443  AND ESP,0xfffffff0
00583446  SUB ESP,0xd4
0058344c  MOV EDX,dword ptr [EBP + 0x20]
0058344f  MOV ECX,dword ptr [EBP + 0x8]
00583452  PUSH EBX
00583453  MOV EBX,dword ptr [EBP + 0x18]
00583456  DEC EDX
00583457  PUSH ESI
00583458  MOV ESI,dword ptr [EBP + 0x1c]
0058345b  PUSH EDI
0058345c  MOV EDI,dword ptr [EBP + 0x14]
0058345f  MOV dword ptr [ESP + 0x34],EDX
00583463  SHL EDX,0x4
00583466  FLD float ptr [EDX + EDI*0x1]
00583469  FCOMP float ptr [EBP + 0x24]
0058346c  FNSTSW AX
0058346e  TEST AH,0x1
00583471  MOV EAX,dword ptr [EBP + 0x10]
00583474  JNZ 0x005834d4
00583476  FLD float ptr [EDX + EDI*0x1 + 0x4]
0058347a  MOV EAX,dword ptr [EDX + EDI*0x1]
0058347d  FLD float ptr [EDX + EDI*0x1 + 0x8]
00583481  MOV dword ptr [ECX],EAX
00583483  MOV EAX,dword ptr [ESP + 0x34]
00583487  FXCH
00583489  FSTP float ptr [ECX + 0x4]
0058348c  MOV dword ptr [ESP + 0x1c],0x1
00583494  MOV byte ptr [ESP + 0x1b],0x1
00583499  FSTP float ptr [ECX + 0x8]
0058349c  MOV ECX,dword ptr [EBX + EAX*0x8]
0058349f  FLD float ptr [EBX + EAX*0x8 + 0x4]
005834a3  MOV EAX,dword ptr [EBP + 0xc]
005834a6  FSTP float ptr [EAX + 0x4]
005834a9  MOV dword ptr [EAX],ECX
005834ab  FLD float ptr [EDX + ESI*0x1 + 0x4]
005834af  MOV ECX,dword ptr [EDX + ESI*0x1]
005834b2  FLD float ptr [EDX + ESI*0x1 + 0x8]
005834b6  MOV EAX,dword ptr [EBP + 0x10]
005834b9  FLD float ptr [EDX + ESI*0x1 + 0xc]
005834bd  MOV dword ptr [EAX],ECX
005834bf  FSTP float ptr [ESP + 0x28]
005834c3  MOV ECX,dword ptr [ESP + 0x28]
005834c7  FXCH
005834c9  FSTP float ptr [EAX + 0x4]
005834cc  MOV dword ptr [EAX + 0xc],ECX
005834cf  FSTP float ptr [EAX + 0x8]
005834d2  JMP 0x005834e1
005834d4  MOV dword ptr [ESP + 0x1c],0x0
005834dc  MOV byte ptr [ESP + 0x1b],0x0
005834e1  MOV ECX,dword ptr [EBP + 0x20]
005834e4  TEST ECX,ECX
005834e6  MOV dword ptr [ESP + 0x2c],0x0
005834ee  JBE 0x0058391e
005834f4  MOV ECX,dword ptr [ESP + 0x34]
005834f8  SHL ECX,0x3
005834fb  MOV dword ptr [ESP + 0x30],ECX
005834ff  MOV ECX,dword ptr [ESP + 0x1c]
00583503  SHL ECX,0x4
00583506  ADD EAX,ECX
00583508  MOV dword ptr [ESP + 0x28],EAX
0058350c  MOV EAX,dword ptr [EBP + 0x8]
0058350f  ADD ECX,EAX
00583511  LEA EAX,[ESI + 0xc]
00583514  MOV dword ptr [ESP + 0x24],EAX
00583518  LEA EAX,[EDI + 0x8]
0058351b  MOV dword ptr [ESP + 0x20],EAX
0058351f  MOV EAX,ESI
00583521  SUB EAX,EDI
00583523  MOV dword ptr [ESP + 0x34],EAX
00583527  MOV EAX,0xfffffff8
0058352c  SUB EAX,EDI
0058352e  MOV dword ptr [ESP + 0x48],EAX
00583532  JMP 0x00583540
00583534  MOV EBX,dword ptr [EBP + 0x18]
00583537  JMP 0x00583540
00583540  MOV EAX,dword ptr [ESP + 0x20]
00583544  FLD float ptr [EAX + -0x8]
00583547  FCOMP float ptr [EBP + 0x24]
0058354a  FNSTSW AX
0058354c  MOV AL,byte ptr [ESP + 0x1b]
00583550  TEST AH,0x1
00583553  JNZ 0x0058375a
00583559  TEST AL,AL
0058355b  MOV EAX,dword ptr [ESP + 0x20]
0058355f  JNZ 0x005836e7
00583565  FLD float ptr [EAX + -0x8]
00583568  FSUB float ptr [EDX + EDI*0x1]
0058356b  FLD float ptr [EAX + -0x4]
0058356e  FSUB float ptr [EDX + EDI*0x1 + 0x4]
00583572  FLD float ptr [EAX]
00583574  FSUB float ptr [EDX + EDI*0x1 + 0x8]
00583578  FSTP float ptr [ESP + 0xc8]
0058357f  MOV EAX,dword ptr [ESP + 0xc8]
00583586  MOV dword ptr [ECX + 0x8],EAX
00583589  FXCH
0058358b  FSTP float ptr [ECX]
0058358d  MOV EAX,dword ptr [ESP + 0x2c]
00583591  FSTP float ptr [ECX + 0x4]
00583594  FLD float ptr [EBP + 0x24]
00583597  FSUB float ptr [EDX + EDI*0x1]
0058359a  FDIV float ptr [ECX]
0058359c  FLD ST0
0058359e  FMUL float ptr [ECX]
005835a0  FSTP float ptr [ECX]
005835a2  FLD ST0
005835a4  FMUL float ptr [ECX + 0x4]
005835a7  FSTP float ptr [ECX + 0x4]
005835aa  FLD ST0
005835ac  FMUL float ptr [ECX + 0x8]
005835af  FSTP float ptr [ECX + 0x8]
005835b2  FLD float ptr [EDX + EDI*0x1 + 0x4]
005835b6  FLD float ptr [EDX + EDI*0x1 + 0x8]
005835ba  FLD float ptr [ECX]
005835bc  FADD float ptr [EDX + EDI*0x1]
005835bf  FSTP float ptr [ECX]
005835c1  FXCH
005835c3  FADD float ptr [ECX + 0x4]
005835c6  FSTP float ptr [ECX + 0x4]
005835c9  FADD float ptr [ECX + 0x8]
005835cc  FSTP float ptr [ECX + 0x8]
005835cf  FLD float ptr [EBX + EAX*0x8]
005835d2  MOV EAX,dword ptr [ESP + 0x30]
005835d6  FSUB float ptr [EAX + EBX*0x1]
005835d9  MOV EAX,dword ptr [ESP + 0x2c]
005835dd  FLD float ptr [EBX + EAX*0x8 + 0x4]
005835e1  MOV EAX,dword ptr [ESP + 0x30]
005835e5  FSUB float ptr [EAX + EBX*0x1 + 0x4]
005835e9  FXCH
005835eb  FMUL ST2
005835ed  FSTP float ptr [ESP + 0x38]
005835f1  MOV EAX,dword ptr [ESP + 0x38]
005835f5  MOV dword ptr [ESP + 0x40],EAX
005835f9  FMUL ST1
005835fb  FSTP float ptr [ESP + 0x3c]
005835ff  MOV EAX,dword ptr [ESP + 0x3c]
00583603  FLD float ptr [ESP + 0x40]
00583607  MOV dword ptr [ESP + 0x44],EAX
0058360b  MOV EAX,dword ptr [ESP + 0x30]
0058360f  FADD float ptr [EAX + EBX*0x1]
00583612  FLD float ptr [ESP + 0x44]
00583616  FADD float ptr [EAX + EBX*0x1 + 0x4]
0058361a  MOV EBX,dword ptr [EBP + 0xc]
0058361d  MOV EAX,dword ptr [ESP + 0x1c]
00583621  FXCH
00583623  FSTP float ptr [EBX + EAX*0x8]
00583626  FSTP float ptr [EBX + EAX*0x8 + 0x4]
0058362a  MOV EAX,dword ptr [ESP + 0x24]
0058362e  FLD float ptr [EAX + -0xc]
00583631  MOV EBX,dword ptr [ESP + 0x34]
00583635  FSUB float ptr [EDX + ESI*0x1]
00583638  FLD float ptr [EAX + -0x8]
0058363b  MOV EAX,dword ptr [ESP + 0x20]
0058363f  FSUB float ptr [EDX + ESI*0x1 + 0x4]
00583643  FLD float ptr [EBX + EAX*0x1]
00583646  MOV EBX,dword ptr [ESP + 0x24]
0058364a  FSUB float ptr [EDX + ESI*0x1 + 0x8]
0058364e  FSTP float ptr [ESP + 0xb8]
00583655  FLD float ptr [EBX]
00583657  FSUB float ptr [EDX + ESI*0x1 + 0xc]
0058365b  FSTP float ptr [ESP + 0xbc]
00583662  FXCH
00583664  FMUL ST2
00583666  FSTP float ptr [ESP + 0x70]
0058366a  FMUL ST1
0058366c  FSTP float ptr [ESP + 0x74]
00583670  FLD float ptr [ESP + 0xb8]
00583677  ADD ECX,0x10
0058367a  FMUL ST1
0058367c  MOV byte ptr [ESP + 0x1b],0x1
00583681  FSTP float ptr [ESP + 0x78]
00583685  FMUL float ptr [ESP + 0xbc]
0058368c  FLD float ptr [ESP + 0x70]
00583690  FADD float ptr [EDX + ESI*0x1]
00583693  FLD float ptr [ESP + 0x74]
00583697  FADD float ptr [EDX + ESI*0x1 + 0x4]
0058369b  FLD float ptr [ESP + 0x78]
0058369f  FADD float ptr [EDX + ESI*0x1 + 0x8]
005836a3  FSTP float ptr [ESP + 0xa8]
005836aa  MOV EBX,dword ptr [ESP + 0xa8]
005836b1  FXCH ST2
005836b3  FADD float ptr [EDX + ESI*0x1 + 0xc]
005836b7  MOV EDX,dword ptr [ESP + 0x28]
005836bb  MOV dword ptr [EDX + 0x8],EBX
005836be  FSTP float ptr [ESP + 0xac]
005836c5  MOV EBX,dword ptr [ESP + 0xac]
005836cc  MOV dword ptr [EDX + 0xc],EBX
005836cf  MOV EBX,dword ptr [ESP + 0x1c]
005836d3  FSTP float ptr [EDX]
005836d5  INC EBX
005836d6  FSTP float ptr [EDX + 0x4]
005836d9  ADD EDX,0x10
005836dc  MOV dword ptr [ESP + 0x1c],EBX
005836e0  MOV EBX,dword ptr [EBP + 0x18]
005836e3  MOV dword ptr [ESP + 0x28],EDX
005836e7  FLD float ptr [EAX + -0x4]
005836ea  MOV EDX,dword ptr [EAX + -0x8]
005836ed  FLD float ptr [EAX]
005836ef  MOV EAX,dword ptr [ESP + 0x2c]
005836f3  MOV dword ptr [ECX],EDX
005836f5  FXCH
005836f7  MOV EDX,dword ptr [EBP + 0xc]
005836fa  FSTP float ptr [ECX + 0x4]
005836fd  ADD ECX,0x10
00583700  FSTP float ptr [ECX + -0x8]
00583703  FLD float ptr [EBX + EAX*0x8 + 0x4]
00583707  MOV EBX,dword ptr [EBX + EAX*0x8]
0058370a  MOV EAX,dword ptr [ESP + 0x1c]
0058370e  MOV dword ptr [EDX + EAX*0x8],EBX
00583711  FSTP float ptr [EDX + EAX*0x8 + 0x4]
00583715  MOV EDX,dword ptr [ESP + 0x24]
00583719  FLD float ptr [EDX + -0x8]
0058371c  MOV EDX,dword ptr [ESP + 0x34]
00583720  MOV EBX,dword ptr [ESP + 0x20]
00583724  FLD float ptr [EDX + EBX*0x1]
00583727  MOV EDX,dword ptr [ESP + 0x24]
0058372b  MOV EBX,dword ptr [EDX]
0058372d  FXCH
0058372f  MOV dword ptr [ESP + 0x54],EBX
00583733  MOV EBX,dword ptr [EDX + -0xc]
00583736  MOV EDX,dword ptr [ESP + 0x28]
0058373a  FSTP float ptr [EDX + 0x4]
0058373d  MOV dword ptr [EDX],EBX
0058373f  MOV EBX,dword ptr [ESP + 0x54]
00583743  INC EAX
00583744  FSTP float ptr [EDX + 0x8]
00583747  MOV dword ptr [EDX + 0xc],EBX
0058374a  ADD EDX,0x10
0058374d  MOV dword ptr [ESP + 0x1c],EAX
00583751  MOV dword ptr [ESP + 0x28],EDX
00583755  JMP 0x005838e5
0058375a  TEST AL,AL
0058375c  JZ 0x005838e5
00583762  MOV EAX,dword ptr [ESP + 0x20]
00583766  FLD float ptr [EAX + -0x8]
00583769  FSUB float ptr [EDX + EDI*0x1]
0058376c  FLD float ptr [EAX + -0x4]
0058376f  FSUB float ptr [EDX + EDI*0x1 + 0x4]
00583773  FLD float ptr [EAX]
00583775  FSUB float ptr [EDX + EDI*0x1 + 0x8]
00583779  FSTP float ptr [ESP + 0xd8]
00583780  MOV EAX,dword ptr [ESP + 0xd8]
00583787  MOV dword ptr [ECX + 0x8],EAX
0058378a  FXCH
0058378c  FSTP float ptr [ECX]
0058378e  MOV EAX,dword ptr [ESP + 0x2c]
00583792  FSTP float ptr [ECX + 0x4]
00583795  FLD float ptr [EBP + 0x24]
00583798  FSUB float ptr [EDX + EDI*0x1]
0058379b  FDIV float ptr [ECX]
0058379d  FLD ST0
0058379f  FMUL float ptr [ECX]
005837a1  FSTP float ptr [ECX]
005837a3  FLD ST0
005837a5  FMUL float ptr [ECX + 0x4]
005837a8  FSTP float ptr [ECX + 0x4]
005837ab  FLD ST0
005837ad  FMUL float ptr [ECX + 0x8]
005837b0  FSTP float ptr [ECX + 0x8]
005837b3  FLD float ptr [EDX + EDI*0x1 + 0x4]
005837b7  FLD float ptr [EDX + EDI*0x1 + 0x8]
005837bb  FLD float ptr [ECX]
005837bd  FADD float ptr [EDX + EDI*0x1]
005837c0  FSTP float ptr [ECX]
005837c2  FXCH
005837c4  FADD float ptr [ECX + 0x4]
005837c7  FSTP float ptr [ECX + 0x4]
005837ca  FADD float ptr [ECX + 0x8]
005837cd  FSTP float ptr [ECX + 0x8]
005837d0  FLD float ptr [EBX + EAX*0x8]
005837d3  MOV EAX,dword ptr [ESP + 0x30]
005837d7  FSUB float ptr [EAX + EBX*0x1]
005837da  MOV EAX,dword ptr [ESP + 0x2c]
005837de  FLD float ptr [EBX + EAX*0x8 + 0x4]
005837e2  MOV EAX,dword ptr [ESP + 0x30]
005837e6  FSUB float ptr [EAX + EBX*0x1 + 0x4]
005837ea  FXCH
005837ec  FMUL ST2
005837ee  FSTP float ptr [ESP + 0x4c]
005837f2  MOV EAX,dword ptr [ESP + 0x4c]
005837f6  MOV dword ptr [ESP + 0x58],EAX
005837fa  FMUL ST1
005837fc  FSTP float ptr [ESP + 0x50]
00583800  MOV EAX,dword ptr [ESP + 0x50]
00583804  FLD float ptr [ESP + 0x58]
00583808  MOV dword ptr [ESP + 0x5c],EAX
0058380c  MOV EAX,dword ptr [ESP + 0x30]
00583810  FADD float ptr [EAX + EBX*0x1]
00583813  FLD float ptr [ESP + 0x5c]
00583817  FADD float ptr [EAX + EBX*0x1 + 0x4]
0058381b  MOV EBX,dword ptr [EBP + 0xc]
0058381e  MOV EAX,dword ptr [ESP + 0x1c]
00583822  FXCH
00583824  FSTP float ptr [EBX + EAX*0x8]
00583827  FSTP float ptr [EBX + EAX*0x8 + 0x4]
0058382b  MOV EAX,dword ptr [ESP + 0x24]
0058382f  FLD float ptr [EAX + -0xc]
00583832  MOV EBX,dword ptr [ESP + 0x20]
00583836  FSUB float ptr [EDX + ESI*0x1]
00583839  FLD float ptr [EAX + -0x8]
0058383c  MOV EAX,dword ptr [ESP + 0x34]
00583840  FSUB float ptr [EDX + ESI*0x1 + 0x4]
00583844  FLD float ptr [EAX + EBX*0x1]
00583847  MOV EAX,dword ptr [ESP + 0x24]
0058384b  FSUB float ptr [EDX + ESI*0x1 + 0x8]
0058384f  FSTP float ptr [ESP + 0x88]
00583856  FLD float ptr [EAX]
00583858  FSUB float ptr [EDX + ESI*0x1 + 0xc]
0058385c  FSTP float ptr [ESP + 0x8c]
00583863  FXCH
00583865  FMUL ST2
00583867  FSTP float ptr [ESP + 0x60]
0058386b  FMUL ST1
0058386d  FSTP float ptr [ESP + 0x64]
00583871  MOV EAX,dword ptr [ESP + 0x28]
00583875  FLD float ptr [ESP + 0x88]
0058387c  ADD ECX,0x10
0058387f  FMUL ST1
00583881  MOV byte ptr [ESP + 0x1b],0x0
00583886  FSTP float ptr [ESP + 0x68]
0058388a  FMUL float ptr [ESP + 0x8c]
00583891  FLD float ptr [ESP + 0x60]
00583895  FADD float ptr [EDX + ESI*0x1]
00583898  FLD float ptr [ESP + 0x64]
0058389c  FADD float ptr [EDX + ESI*0x1 + 0x4]
005838a0  FLD float ptr [ESP + 0x68]
005838a4  FADD float ptr [EDX + ESI*0x1 + 0x8]
005838a8  FSTP float ptr [ESP + 0x98]
005838af  FXCH ST2
005838b1  FADD float ptr [EDX + ESI*0x1 + 0xc]
005838b5  MOV EDX,dword ptr [ESP + 0x98]
005838bc  MOV dword ptr [EAX + 0x8],EDX
005838bf  FSTP float ptr [ESP + 0x9c]
005838c6  MOV EDX,dword ptr [ESP + 0x9c]
005838cd  MOV dword ptr [EAX + 0xc],EDX
005838d0  MOV EDX,dword ptr [ESP + 0x1c]
005838d4  FSTP float ptr [EAX]
005838d6  INC EDX
005838d7  FSTP float ptr [EAX + 0x4]
005838da  ADD EAX,0x10
005838dd  MOV dword ptr [ESP + 0x1c],EDX
005838e1  MOV dword ptr [ESP + 0x28],EAX
005838e5  MOV EAX,dword ptr [ESP + 0x2c]
005838e9  MOV EBX,dword ptr [ESP + 0x20]
005838ed  LEA EDX,[EAX*0x8 + 0x0]
005838f4  MOV dword ptr [ESP + 0x30],EDX
005838f8  MOV EDX,dword ptr [ESP + 0x48]
005838fc  ADD EDX,EBX
005838fe  ADD EBX,0x10
00583901  MOV dword ptr [ESP + 0x20],EBX
00583905  MOV EBX,dword ptr [ESP + 0x24]
00583909  ADD EBX,0x10
0058390c  INC EAX
0058390d  MOV dword ptr [ESP + 0x24],EBX
00583911  CMP EAX,dword ptr [EBP + 0x20]
00583914  MOV dword ptr [ESP + 0x2c],EAX
00583918  JC 0x00583534
0058391e  MOV EAX,dword ptr [ESP + 0x1c]
00583922  POP EDI
00583923  POP ESI
00583924  POP EBX
00583925  MOV ESP,EBP
00583927  POP EBP
00583928  RET
