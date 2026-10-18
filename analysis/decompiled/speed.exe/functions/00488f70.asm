00488f70  SUB ESP,0x354
00488f76  PUSH EBX
00488f77  PUSH EBP
00488f78  MOV EBP,dword ptr [ESP + 0x364]
00488f7f  PUSH ESI
00488f80  MOV ESI,ECX
00488f82  LEA EAX,[EBP + 0xc]
00488f85  MOV ECX,dword ptr [EAX]
00488f87  MOV EDX,dword ptr [EAX + 0x4]
00488f8a  MOV EAX,dword ptr [EAX + 0x8]
00488f8d  XOR EBX,EBX
00488f8f  MOV dword ptr [ESP + 0x1c],ECX
00488f93  PUSH EDI
00488f94  LEA ECX,[ESP + 0x20]
00488f98  MOV dword ptr [ESP + 0x50],EBX
00488f9c  MOV dword ptr [ESP + 0x54],EBX
00488fa0  MOV dword ptr [ESP + 0x58],EBX
00488fa4  MOV dword ptr [ESP + 0x44],EBX
00488fa8  MOV dword ptr [ESP + 0x48],EBX
00488fac  MOV dword ptr [ESP + 0x4c],EBX
00488fb0  MOV dword ptr [ESP + 0x24],EDX
00488fb4  MOV dword ptr [ESP + 0x28],EAX
00488fb8  CALL 0x00488680
00488fbd  FSTP ST0
00488fbf  MOV AL,byte ptr [ESI + 0xc8]
00488fc5  CMP AL,BL
00488fc7  MOV EDI,dword ptr [ESP + 0x368]
00488fce  JZ 0x00488fdc
00488fd0  CMP byte ptr [EDI + 0xc8],BL
00488fd6  MOV byte ptr [ESP + 0x13],BL
00488fda  JNZ 0x00488fe0
00488fdc  MOV byte ptr [ESP + 0x13],AL
00488fe0  CMP AL,BL
00488fe2  JZ 0x00488ff2
00488fe4  CMP byte ptr [EDI + 0xc8],BL
00488fea  JZ 0x00488ff2
00488fec  MOV byte ptr [ESP + 0x12],BL
00488ff0  JMP 0x00488ffc
00488ff2  MOV CL,byte ptr [EDI + 0xc8]
00488ff8  MOV byte ptr [ESP + 0x12],CL
00488ffc  CMP byte ptr [ESP + 0x13],BL
00489000  JZ 0x00489010
00489002  CMP byte ptr [ESP + 0x12],BL
00489006  JZ 0x00489010
00489008  MOV byte ptr [ESP + 0x13],BL
0048900c  MOV byte ptr [ESP + 0x12],BL
00489010  LEA EDX,[ESP + 0x50]
00489014  PUSH EDX
00489015  PUSH EBP
00489016  MOV ECX,ESI
00489018  CALL 0x00486e30
0048901d  FLD float ptr [ESI + 0x80]
00489023  FMUL float ptr [ESI + 0xbc]
00489029  LEA EAX,[ESP + 0x2e4]
00489030  PUSH EAX
00489031  PUSH ESI
00489032  FSTP float ptr [ESP + 0x1c]
00489036  LEA ECX,[ESP + 0x1c]
0048903a  FLD float ptr [ESI + 0x84]
00489040  FMUL float ptr [ESI + 0xc0]
00489046  FSTP float ptr [ESP + 0x20]
0048904a  FLD float ptr [ESI + 0x88]
00489050  FMUL float ptr [ESI + 0xc4]
00489056  FSTP float ptr [ESP + 0x24]
0048905a  CALL 0x00486bd0
0048905f  MOV ECX,dword ptr [ESP + 0x50]
00489063  MOV EDX,dword ptr [ESP + 0x54]
00489067  MOV EAX,dword ptr [ESP + 0x58]
0048906b  MOV dword ptr [ESP + 0x14],ECX
0048906f  LEA ECX,[ESP + 0x14]
00489073  MOV dword ptr [ESP + 0x18],EDX
00489077  MOV dword ptr [ESP + 0x1c],EAX
0048907b  CALL 0x00488680
00489080  FSTP ST0
00489082  LEA ECX,[ESP + 0x44]
00489086  PUSH ECX
00489087  PUSH EBP
00489088  MOV ECX,EDI
0048908a  CALL 0x00486e30
0048908f  FLD float ptr [EDI + 0x80]
00489095  FMUL float ptr [EDI + 0xbc]
0048909b  LEA EDX,[ESP + 0x324]
004890a2  PUSH EDX
004890a3  PUSH EDI
004890a4  FSTP float ptr [ESP + 0x1c]
004890a8  LEA ECX,[ESP + 0x1c]
004890ac  FLD float ptr [EDI + 0x84]
004890b2  FMUL float ptr [EDI + 0xc0]
004890b8  FSTP float ptr [ESP + 0x20]
004890bc  FLD float ptr [EDI + 0x88]
004890c2  FMUL float ptr [EDI + 0xc4]
004890c8  FSTP float ptr [ESP + 0x24]
004890cc  CALL 0x00486bd0
004890d1  MOV ECX,dword ptr [ESP + 0x48]
004890d5  MOV EAX,dword ptr [ESP + 0x44]
004890d9  MOV EDX,dword ptr [ESP + 0x4c]
004890dd  MOV dword ptr [ESP + 0x18],ECX
004890e1  LEA ECX,[ESP + 0x14]
004890e5  MOV dword ptr [ESP + 0x14],EAX
004890e9  MOV dword ptr [ESP + 0x1c],EDX
004890ed  CALL 0x00488680
004890f2  FSTP ST0
004890f4  LEA EBP,[ESI + 0xa4]
004890fa  MOV EAX,EBP
004890fc  MOV ECX,dword ptr [EAX]
004890fe  MOV EDX,dword ptr [EAX + 0x4]
00489101  MOV EAX,dword ptr [EAX + 0x8]
00489104  MOV dword ptr [ESP + 0x60],EDX
00489108  MOV dword ptr [ESP + 0x64],EAX
0048910c  MOV dword ptr [ESP + 0x5c],ECX
00489110  LEA ECX,[ESI + 0x98]
00489116  MOV EDX,ECX
00489118  MOV EAX,dword ptr [EDX]
0048911a  MOV dword ptr [ESP + 0xac],EAX
00489121  MOV EAX,dword ptr [EDX + 0x4]
00489124  MOV EDX,dword ptr [EDX + 0x8]
00489127  MOV dword ptr [ESP + 0xb0],EAX
0048912e  LEA EAX,[EDI + 0xa4]
00489134  MOV dword ptr [ESP + 0xd0],EAX
0048913b  MOV dword ptr [ESP + 0xb4],EDX
00489142  MOV EDX,dword ptr [EAX]
00489144  MOV dword ptr [ESP + 0x6c],EDX
00489148  MOV EDX,dword ptr [EAX + 0x4]
0048914b  MOV EAX,dword ptr [EAX + 0x8]
0048914e  MOV dword ptr [ESP + 0x140],EBP
00489155  MOV dword ptr [ESP + 0x104],ECX
0048915c  MOV dword ptr [ESP + 0x70],EDX
00489160  MOV dword ptr [ESP + 0x74],EAX
00489164  LEA EAX,[EDI + 0x98]
0048916a  MOV dword ptr [ESP + 0x1f0],EAX
00489171  MOV EDX,dword ptr [EAX]
00489173  MOV dword ptr [ESP + 0x88],EDX
0048917a  MOV EDX,dword ptr [EAX + 0x4]
0048917d  MOV EAX,dword ptr [EAX + 0x8]
00489180  MOV dword ptr [ESP + 0x90],EAX
00489187  CMP byte ptr [ESP + 0x13],BL
0048918b  MOV dword ptr [ESP + 0x8c],EDX
00489192  JZ 0x004891a0
00489194  MOV EDX,dword ptr [EDI + 0xd0]
0048919a  MOV dword ptr [ESP + 0x2c],EDX
0048919e  JMP 0x004891d0
004891a0  CMP byte ptr [ESP + 0x12],BL
004891a4  JZ 0x004891b2
004891a6  MOV EAX,dword ptr [ESI + 0xd0]
004891ac  MOV dword ptr [ESP + 0x2c],EAX
004891b0  JMP 0x004891d0
004891b2  FLD float ptr [EDI + 0xd0]
004891b8  FMUL float ptr [ESI + 0xd0]
004891be  FLD float ptr [EDI + 0xd0]
004891c4  FADD float ptr [ESI + 0xd0]
004891ca  FDIVP
004891cc  FSTP float ptr [ESP + 0x2c]
004891d0  CMP dword ptr [ESP + 0x370],EBX
004891d7  MOV dword ptr [ESP + 0x3c],0x0
004891df  MOV dword ptr [ESP + 0xb8],EBX
004891e6  MOV dword ptr [ESP + 0xbc],EBX
004891ed  MOV dword ptr [ESP + 0xc0],EBX
004891f4  MOV dword ptr [ESP + 0xa0],EBX
004891fb  MOV dword ptr [ESP + 0xa4],EBX
00489202  MOV dword ptr [ESP + 0xa8],EBX
00489209  MOV dword ptr [ESP + 0xc4],EBX
00489210  MOV dword ptr [ESP + 0xc8],EBX
00489217  MOV dword ptr [ESP + 0xcc],EBX
0048921e  MOV dword ptr [ESP + 0x94],EBX
00489225  MOV dword ptr [ESP + 0x98],EBX
0048922c  MOV dword ptr [ESP + 0x9c],EBX
00489233  MOV dword ptr [ESP + 0x40],EBX
00489237  JLE 0x0048987b
0048923d  FLD float ptr [ESP + 0x58]
00489241  MOV EDX,dword ptr [ESP + 0xd0]
00489248  FMUL float ptr [ESP + 0x60]
0048924c  FLD float ptr [ESP + 0x54]
00489250  FMUL float ptr [ESP + 0x64]
00489254  FSUBP
00489256  FSTP float ptr [ESP + 0x200]
0048925d  MOV EAX,dword ptr [ESP + 0x200]
00489264  FLD float ptr [ESP + 0x64]
00489268  MOV dword ptr [ESP + 0x19c],EAX
0048926f  FMUL float ptr [ESP + 0x50]
00489273  FLD float ptr [ESP + 0x58]
00489277  FMUL float ptr [ESP + 0x5c]
0048927b  FSUBP
0048927d  FSTP float ptr [ESP + 0x204]
00489284  MOV EAX,dword ptr [ESP + 0x204]
0048928b  FLD float ptr [ESP + 0x54]
0048928f  MOV dword ptr [ESP + 0x1a0],EAX
00489296  FMUL float ptr [ESP + 0x5c]
0048929a  FLD float ptr [ESP + 0x60]
0048929e  FMUL float ptr [ESP + 0x50]
004892a2  FSUBP
004892a4  FSTP float ptr [ESP + 0x208]
004892ab  MOV EAX,dword ptr [ESP + 0x208]
004892b2  FLD float ptr [ESP + 0x19c]
004892b9  MOV dword ptr [ESP + 0x1a4],EAX
004892c0  FADD float ptr [ESP + 0xac]
004892c7  FSTP float ptr [ESP + 0x114]
004892ce  FLD float ptr [ESP + 0x1a0]
004892d5  FADD float ptr [ESP + 0xb0]
004892dc  FSTP float ptr [ESP + 0x118]
004892e3  FLD float ptr [ESP + 0x1a4]
004892ea  FADD float ptr [ESP + 0xb4]
004892f1  FSTP float ptr [ESP + 0x11c]
004892f8  FLD float ptr [ESP + 0x4c]
004892fc  FMUL float ptr [ESP + 0x70]
00489300  FLD float ptr [ESP + 0x48]
00489304  FMUL float ptr [ESP + 0x74]
00489308  FSUBP
0048930a  FSTP float ptr [ESP + 0x1f4]
00489311  MOV EAX,dword ptr [ESP + 0x1f4]
00489318  FLD float ptr [ESP + 0x74]
0048931c  MOV dword ptr [ESP + 0x184],EAX
00489323  FMUL float ptr [ESP + 0x44]
00489327  FLD float ptr [ESP + 0x4c]
0048932b  FMUL float ptr [ESP + 0x6c]
0048932f  FSUBP
00489331  FSTP float ptr [ESP + 0x1f8]
00489338  MOV EAX,dword ptr [ESP + 0x1f8]
0048933f  FLD float ptr [ESP + 0x48]
00489343  MOV dword ptr [ESP + 0x188],EAX
0048934a  FMUL float ptr [ESP + 0x6c]
0048934e  FLD float ptr [ESP + 0x70]
00489352  FMUL float ptr [ESP + 0x44]
00489356  FSUBP
00489358  FSTP float ptr [ESP + 0x1fc]
0048935f  MOV EAX,dword ptr [ESP + 0x1fc]
00489366  FLD float ptr [ESP + 0x184]
0048936d  MOV dword ptr [ESP + 0x18c],EAX
00489374  FADD float ptr [ESP + 0x88]
0048937b  FSTP float ptr [ESP + 0x108]
00489382  FLD float ptr [ESP + 0x188]
00489389  FADD float ptr [ESP + 0x8c]
00489390  FSTP float ptr [ESP + 0x10c]
00489397  FLD float ptr [ESP + 0x18c]
0048939e  FADD float ptr [ESP + 0x90]
004893a5  FSTP float ptr [ESP + 0x110]
004893ac  FLD float ptr [ESP + 0x114]
004893b3  FSUB float ptr [ESP + 0x108]
004893ba  FST float ptr [ESP + 0x120]
004893c1  FLD float ptr [ESP + 0x118]
004893c8  FSUB float ptr [ESP + 0x10c]
004893cf  FST float ptr [ESP + 0x144]
004893d6  FLD float ptr [ESP + 0x11c]
004893dd  FSUB float ptr [ESP + 0x110]
004893e4  FST float ptr [ESP + 0x78]
004893e8  FSTP float ptr [ESP + 0x2e0]
004893ef  FXCH
004893f1  FMUL float ptr [ESP + 0x2c]
004893f5  FSTP float ptr [ESP + 0x260]
004893fc  MOV EAX,dword ptr [ESP + 0x260]
00489403  MOV dword ptr [ESP + 0x248],EAX
0048940a  FMUL float ptr [ESP + 0x2c]
0048940e  FLD float ptr [ESP + 0x2e0]
00489415  FMUL float ptr [ESP + 0x2c]
00489419  FLD ST1
0048941b  FSTP float ptr [ESP + 0x24c]
00489422  FST float ptr [ESP + 0x250]
00489429  FLD float ptr [ESP + 0x260]
00489430  FMUL float ptr [ESP + 0x20]
00489434  FLD float ptr [ESP + 0x28]
00489438  FMUL ST2
0048943a  FADDP
0048943c  FLD float ptr [ESP + 0x24]
00489440  FMUL ST3
00489442  FADDP
00489444  FSTP float ptr [ESP + 0x68]
00489448  FSTP ST0
0048944a  FSTP ST0
0048944c  FLD float ptr [ESP + 0x68]
00489450  FCOMP float ptr [0x00890968]
00489456  FNSTSW AX
00489458  TEST AH,0x1
0048945b  JZ 0x00489871
00489461  FLD float ptr [ESP + 0x68]
00489465  LEA EAX,[ESP + 0x30]
00489469  FCHS
0048946b  PUSH EAX
0048946c  FST float ptr [ESP + 0x134]
00489473  LEA EAX,[ESP + 0x24c]
0048947a  FLD float ptr [ESP + 0x24]
0048947e  MOV dword ptr [ESP + 0x34],EBX
00489482  FMUL ST1
00489484  MOV dword ptr [ESP + 0x38],EBX
00489488  MOV dword ptr [ESP + 0x3c],EBX
0048948c  FST float ptr [ESP + 0x14c]
00489493  FLD float ptr [ESP + 0x28]
00489497  FMUL ST2
00489499  FSTP float ptr [ESP + 0x150]
004894a0  MOV ECX,dword ptr [ESP + 0x150]
004894a7  FLD float ptr [ESP + 0x2c]
004894ab  MOV dword ptr [ESP + 0x84],ECX
004894b2  FMUL ST2
004894b4  LEA ECX,[ESP + 0x24]
004894b8  PUSH ECX
004894b9  MOV ECX,dword ptr [ESP + 0x374]
004894c0  FSTP float ptr [ESP + 0x158]
004894c7  MOV EDX,dword ptr [ESP + 0x158]
004894ce  MOV dword ptr [ESP + 0x8c],EDX
004894d5  MOV EDX,dword ptr [ESP + 0x70]
004894d9  FSTP float ptr [ESP + 0x84]
004894e0  PUSH EDX
004894e1  PUSH EAX
004894e2  FSTP ST0
004894e4  ADD ECX,0x18
004894e7  CALL 0x004886f0
004894ec  MOV ECX,EAX
004894ee  CMP dword ptr [ESP + 0x40],EBX
004894f2  JNZ 0x0048988a
004894f8  FLD float ptr [ESP + 0x120]
004894ff  LEA EAX,[ESI + 0xd8]
00489505  FLD float ptr [ESP + 0x144]
0048950c  FLD float ptr [ESP + 0x78]
00489510  FMUL float ptr [ESP + 0x28]
00489514  FXCH
00489516  FMUL float ptr [ESP + 0x24]
0048951a  FADDP
0048951c  FXCH
0048951e  FMUL float ptr [ESP + 0x20]
00489522  FADDP
00489524  FLD float ptr [ESP + 0x20]
00489528  FMUL ST1
0048952a  FLD float ptr [ESP + 0x24]
0048952e  FMUL ST2
00489530  FLD float ptr [ESP + 0x28]
00489534  FMUL ST3
00489536  FSTP float ptr [ESP + 0x2c8]
0048953d  MOV EDX,dword ptr [ESP + 0x2c8]
00489544  MOV dword ptr [ESP + 0x1ec],EDX
0048954b  FXCH
0048954d  FSTP float ptr [ESP + 0x1e4]
00489554  MOV EBP,dword ptr [ESP + 0x1e4]
0048955b  MOV EDX,EAX
0048955d  MOV dword ptr [EDX],EBP
0048955f  FSTP float ptr [ESP + 0x1e8]
00489566  MOV EBP,dword ptr [ESP + 0x1e8]
0048956d  MOV dword ptr [EDX + 0x4],EBP
00489570  FSTP ST0
00489572  MOV EBP,dword ptr [ESP + 0x1ec]
00489579  FLD float ptr [ESP + 0x120]
00489580  MOV dword ptr [EDX + 0x8],EBP
00489583  FSUB float ptr [EAX]
00489585  MOV EDX,dword ptr [ESP + 0x144]
0048958c  MOV dword ptr [ESP + 0x228],EDX
00489593  FLD float ptr [ESP + 0x228]
0048959a  FSUB float ptr [EAX + 0x4]
0048959d  MOV EDX,dword ptr [ESP + 0x78]
004895a1  MOV dword ptr [ESP + 0x22c],EDX
004895a8  FLD float ptr [ESP + 0x22c]
004895af  FSUB float ptr [EAX + 0x8]
004895b2  LEA EDX,[ESI + 0xe4]
004895b8  MOV dword ptr [ESI + 0x108],ECX
004895be  FSTP float ptr [ESP + 0x28c]
004895c5  MOV EAX,dword ptr [ESP + 0x28c]
004895cc  MOV dword ptr [ESP + 0x1d4],EAX
004895d3  FXCH
004895d5  FSTP float ptr [ESP + 0x1cc]
004895dc  MOV EAX,dword ptr [ESP + 0x1cc]
004895e3  MOV dword ptr [EDX],EAX
004895e5  FSTP float ptr [ESP + 0x1d0]
004895ec  MOV EAX,dword ptr [ESP + 0x1d0]
004895f3  FLD float ptr [ESI + 0xcc]
004895f9  MOV dword ptr [EDX + 0x4],EAX
004895fc  MOV EAX,dword ptr [ESP + 0x1d4]
00489603  FCOMP float ptr [0x00890968]
00489609  MOV dword ptr [EDX + 0x8],EAX
0048960c  MOV EAX,dword ptr [ESP + 0x30]
00489610  LEA EDX,[ESI + 0xfc]
00489616  MOV dword ptr [EDX],EAX
00489618  MOV EAX,dword ptr [ESP + 0x34]
0048961c  MOV dword ptr [EDX + 0x4],EAX
0048961f  MOV EAX,dword ptr [ESP + 0x38]
00489623  MOV dword ptr [EDX + 0x8],EAX
00489626  FNSTSW AX
00489628  TEST AH,0x41
0048962b  JNZ 0x00489669
0048962d  FLD float ptr [ESP + 0x130]
00489634  FCOMP float ptr [ESI + 0xcc]
0048963a  FNSTSW AX
0048963c  TEST AH,0x41
0048963f  JNZ 0x00489669
00489641  MOV byte ptr [ESI + 0xc8],BL
00489647  FLD float ptr [EDI + 0xd0]
0048964d  FMUL float ptr [ESI + 0xd0]
00489653  MOV byte ptr [ESP + 0x13],BL
00489657  FLD float ptr [EDI + 0xd0]
0048965d  FADD float ptr [ESI + 0xd0]
00489663  FDIVP
00489665  FSTP float ptr [ESP + 0x2c]
00489669  FLD float ptr [ESP + 0x108]
00489670  LEA EAX,[EDI + 0xd8]
00489676  FSUB float ptr [ESP + 0x114]
0048967d  FST float ptr [ESP + 0x26c]
00489684  FLD float ptr [ESP + 0x10c]
0048968b  FSUB float ptr [ESP + 0x118]
00489692  FLD ST0
00489694  FLD float ptr [ESP + 0x110]
0048969b  FSUB float ptr [ESP + 0x11c]
004896a2  FST float ptr [ESP + 0x78]
004896a6  FMUL float ptr [ESP + 0x28]
004896aa  FXCH
004896ac  FMUL float ptr [ESP + 0x24]
004896b0  FADDP
004896b2  FLD float ptr [ESP + 0x26c]
004896b9  FMUL float ptr [ESP + 0x20]
004896bd  FADDP
004896bf  FLD float ptr [ESP + 0x20]
004896c3  FMUL ST1
004896c5  FLD float ptr [ESP + 0x24]
004896c9  FMUL ST2
004896cb  FLD float ptr [ESP + 0x28]
004896cf  FMUL ST3
004896d1  FSTP float ptr [ESP + 0x2a4]
004896d8  MOV EDX,dword ptr [ESP + 0x2a4]
004896df  MOV dword ptr [ESP + 0x198],EDX
004896e6  FXCH
004896e8  FSTP float ptr [ESP + 0x190]
004896ef  MOV EBP,dword ptr [ESP + 0x190]
004896f6  MOV EDX,EAX
004896f8  FSTP float ptr [ESP + 0x194]
004896ff  MOV dword ptr [EDX],EBP
00489701  MOV EBP,dword ptr [ESP + 0x194]
00489708  FSTP ST0
0048970a  MOV dword ptr [EDX + 0x4],EBP
0048970d  MOV EBP,dword ptr [ESP + 0x198]
00489714  FXCH
00489716  FSTP float ptr [ESP + 0x20c]
0048971d  MOV dword ptr [EDX + 0x8],EBP
00489720  LEA EDX,[EDI + 0xe4]
00489726  FSTP float ptr [ESP + 0x210]
0048972d  FLD float ptr [ESP + 0x78]
00489731  FLD float ptr [ESP + 0x20c]
00489738  FSUB float ptr [EAX]
0048973a  FLD float ptr [ESP + 0x210]
00489741  FSUB float ptr [EAX + 0x4]
00489744  FXCH ST2
00489746  FSUB float ptr [EAX + 0x8]
00489749  MOV dword ptr [EDI + 0x108],ECX
0048974f  FSTP float ptr [ESP + 0x2d4]
00489756  MOV EAX,dword ptr [ESP + 0x2d4]
0048975d  MOV dword ptr [ESP + 0x1b0],EAX
00489764  FSTP float ptr [ESP + 0x1a8]
0048976b  MOV EAX,dword ptr [ESP + 0x1a8]
00489772  MOV dword ptr [EDX],EAX
00489774  FSTP float ptr [ESP + 0x1ac]
0048977b  MOV EAX,dword ptr [ESP + 0x1ac]
00489782  FLD float ptr [ESP + 0x30]
00489786  MOV dword ptr [EDX + 0x4],EAX
00489789  FMUL float ptr [0x00890da8]
0048978f  MOV EAX,dword ptr [ESP + 0x1b0]
00489796  FLD float ptr [ESP + 0x34]
0048979a  MOV dword ptr [EDX + 0x8],EAX
0048979d  FMUL float ptr [0x00890da8]
004897a3  LEA EDX,[EDI + 0xfc]
004897a9  FLD float ptr [ESP + 0x38]
004897ad  FMUL float ptr [0x00890da8]
004897b3  FSTP float ptr [ESP + 0x2bc]
004897ba  MOV ECX,dword ptr [ESP + 0x2bc]
004897c1  FXCH
004897c3  MOV dword ptr [ESP + 0x1c8],ECX
004897ca  FSTP float ptr [ESP + 0x1c0]
004897d1  MOV EAX,dword ptr [ESP + 0x1c0]
004897d8  MOV dword ptr [EDX],EAX
004897da  MOV EAX,dword ptr [ESP + 0x1c8]
004897e1  FSTP float ptr [ESP + 0x1c4]
004897e8  MOV ECX,dword ptr [ESP + 0x1c4]
004897ef  MOV dword ptr [EDX + 0x4],ECX
004897f2  FLD float ptr [EDI + 0xcc]
004897f8  MOV dword ptr [EDX + 0x8],EAX
004897fb  FCOMP float ptr [0x00890968]
00489801  FNSTSW AX
00489803  TEST AH,0x41
00489806  JNZ 0x00489844
00489808  FLD float ptr [ESP + 0x130]
0048980f  FCOMP float ptr [EDI + 0xcc]
00489815  FNSTSW AX
00489817  TEST AH,0x41
0048981a  JNZ 0x00489844
0048981c  FLD float ptr [EDI + 0xd0]
00489822  MOV byte ptr [EDI + 0xc8],BL
00489828  FMUL float ptr [ESI + 0xd0]
0048982e  MOV byte ptr [ESP + 0x12],BL
00489832  FLD float ptr [EDI + 0xd0]
00489838  FADD float ptr [ESI + 0xd0]
0048983e  FDIVP
00489840  FSTP float ptr [ESP + 0x2c]
00489844  MOV EBP,dword ptr [ESP + 0x140]
0048984b  MOV EAX,dword ptr [ESP + 0x40]
0048984f  MOV ECX,dword ptr [ESP + 0x370]
00489856  INC EAX
00489857  CMP EAX,ECX
00489859  MOV ECX,dword ptr [ESP + 0x104]
00489860  MOV dword ptr [ESP + 0x40],EAX
00489864  JL 0x0048923d
0048986a  MOV EDX,dword ptr [ESP + 0xd0]
00489871  CMP dword ptr [ESP + 0x40],EBX
00489875  JNZ 0x00489eb0
0048987b  POP EDI
0048987c  POP ESI
0048987d  POP EBP
0048987e  XOR AL,AL
00489880  POP EBX
00489881  ADD ESP,0x354
00489887  RET 0xc
0048988a  FILD dword ptr [ESP + 0x40]
0048988e  MOV AL,byte ptr [ESP + 0x13]
00489892  CMP AL,BL
00489894  FIDIV dword ptr [ESP + 0x370]
0048989b  FLD float ptr [ESP + 0x148]
004898a2  FMUL ST1
004898a4  FSTP float ptr [ESP + 0x7c]
004898a8  FLD float ptr [ESP + 0x14c]
004898af  FMUL ST1
004898b1  FSTP float ptr [ESP + 0x80]
004898b8  FLD float ptr [ESP + 0x150]
004898bf  FMUL ST1
004898c1  FSTP float ptr [ESP + 0x84]
004898c8  FLD float ptr [ESP + 0x30]
004898cc  FMUL ST1
004898ce  FSTP float ptr [ESP + 0x30]
004898d2  FLD float ptr [ESP + 0x34]
004898d6  FMUL ST1
004898d8  FSTP float ptr [ESP + 0x34]
004898dc  FLD float ptr [ESP + 0x38]
004898e0  FMUL ST1
004898e2  FSTP float ptr [ESP + 0x38]
004898e6  FMUL float ptr [ESP + 0x68]
004898ea  FSUBR float ptr [ESP + 0x3c]
004898ee  FSTP float ptr [ESP + 0x3c]
004898f2  JNZ 0x00489bb0
004898f8  LEA ECX,[ESP + 0xe0]
004898ff  PUSH ECX
00489900  LEA EDX,[ESP + 0xf0]
00489907  PUSH EDX
00489908  LEA EAX,[ESP + 0x2ec]
0048990f  PUSH EAX
00489910  LEA ECX,[ESP + 0x5c]
00489914  PUSH ECX
00489915  LEA EDX,[ESP + 0x8c]
0048991c  PUSH EDX
0048991d  MOV ECX,ESI
0048991f  MOV dword ptr [ESP + 0x100],EBX
00489926  MOV dword ptr [ESP + 0x104],EBX
0048992d  MOV dword ptr [ESP + 0x108],EBX
00489934  MOV dword ptr [ESP + 0x180],EBX
0048993b  MOV dword ptr [ESP + 0x184],EBX
00489942  MOV dword ptr [ESP + 0x188],EBX
00489949  MOV dword ptr [ESP + 0xf4],EBX
00489950  MOV dword ptr [ESP + 0xf8],EBX
00489957  MOV dword ptr [ESP + 0xfc],EBX
0048995e  MOV dword ptr [ESP + 0x168],EBX
00489965  MOV dword ptr [ESP + 0x16c],EBX
0048996c  MOV dword ptr [ESP + 0x170],EBX
00489973  CALL 0x00486da0
00489978  LEA EAX,[ESP + 0x154]
0048997f  PUSH EAX
00489980  LEA ECX,[ESP + 0x170]
00489987  PUSH ECX
00489988  LEA EDX,[ESP + 0x2ec]
0048998f  PUSH EDX
00489990  LEA EAX,[ESP + 0x5c]
00489994  PUSH EAX
00489995  LEA ECX,[ESP + 0x40]
00489999  PUSH ECX
0048999a  MOV ECX,ESI
0048999c  CALL 0x00486da0
004899a1  FLD float ptr [ESP + 0x16c]
004899a8  FADD float ptr [ESP + 0xec]
004899af  MOV AL,byte ptr [ESI + 0x110]
004899b5  CMP AL,BL
004899b7  FSTP float ptr [ESP + 0x124]
004899be  FLD float ptr [ESP + 0x170]
004899c5  FADD float ptr [ESP + 0xf0]
004899cc  FSTP float ptr [ESP + 0x128]
004899d3  FLD float ptr [ESP + 0x174]
004899da  FADD float ptr [ESP + 0xf4]
004899e1  FSTP float ptr [ESP + 0x12c]
004899e8  FLD float ptr [ESP + 0x154]
004899ef  FADD float ptr [ESP + 0xe0]
004899f6  FLD float ptr [ESP + 0x158]
004899fd  FADD float ptr [ESP + 0xe4]
00489a04  FSTP float ptr [ESP + 0x1dc]
00489a0b  FLD float ptr [ESP + 0x15c]
00489a12  FADD float ptr [ESP + 0xe8]
00489a19  FSTP float ptr [ESP + 0x1e0]
00489a20  JNZ 0x00489af9
00489a26  FLD float ptr [ESP + 0x124]
00489a2d  FADD float ptr [ESP + 0xac]
00489a34  FSTP float ptr [ESP + 0xac]
00489a3b  FLD float ptr [ESP + 0x128]
00489a42  FADD float ptr [ESP + 0xb0]
00489a49  FSTP float ptr [ESP + 0xb0]
00489a50  FLD float ptr [ESP + 0x12c]
00489a57  FADD float ptr [ESP + 0xb4]
00489a5e  FSTP float ptr [ESP + 0xb4]
00489a65  FLD float ptr [ESI + 0x10c]
00489a6b  FLD float ptr [ESP + 0xec]
00489a72  FMUL ST1
00489a74  FLD float ptr [ESP + 0xf0]
00489a7b  FMUL ST2
00489a7d  FSTP float ptr [ESP + 0x258]
00489a84  FLD float ptr [ESP + 0xf4]
00489a8b  FMUL ST2
00489a8d  FSTP float ptr [ESP + 0x25c]
00489a94  FADD float ptr [ESP + 0x124]
00489a9b  FSTP ST1
00489a9d  FLD float ptr [ESP + 0x258]
00489aa4  FADD float ptr [ESP + 0x128]
00489aab  FLD float ptr [ESP + 0x25c]
00489ab2  FADD float ptr [ESP + 0x12c]
00489ab9  FSTP float ptr [ESP + 0x280]
00489ac0  FLD float ptr [ESP + 0xb8]
00489ac7  FADD ST0,ST2
00489ac9  FSTP float ptr [ESP + 0xb8]
00489ad0  FLD float ptr [ESP + 0xbc]
00489ad7  FADD ST0,ST1
00489ad9  FSTP float ptr [ESP + 0xbc]
00489ae0  FSTP ST0
00489ae2  FSTP ST0
00489ae4  FLD float ptr [ESP + 0xc0]
00489aeb  FADD float ptr [ESP + 0x280]
00489af2  FSTP float ptr [ESP + 0xc0]
00489af9  FLD float ptr [ESP + 0x5c]
00489afd  FADD ST0,ST1
00489aff  FSTP float ptr [ESP + 0x5c]
00489b03  FLD float ptr [ESP + 0x1dc]
00489b0a  FADD float ptr [ESP + 0x60]
00489b0e  FSTP float ptr [ESP + 0x60]
00489b12  FLD float ptr [ESP + 0x1e0]
00489b19  FADD float ptr [ESP + 0x64]
00489b1d  FSTP float ptr [ESP + 0x64]
00489b21  FLD float ptr [ESI + 0x10c]
00489b27  FLD float ptr [ESP + 0xe0]
00489b2e  FMUL ST1
00489b30  FLD float ptr [ESP + 0xe4]
00489b37  FMUL ST2
00489b39  FSTP float ptr [ESP + 0x240]
00489b40  FLD float ptr [ESP + 0xe8]
00489b47  FMUL ST2
00489b49  FSTP float ptr [ESP + 0x244]
00489b50  FADDP ST2,ST0
00489b52  FSTP ST0
00489b54  FLD float ptr [ESP + 0x240]
00489b5b  FADD float ptr [ESP + 0x1dc]
00489b62  FLD float ptr [ESP + 0x244]
00489b69  FADD float ptr [ESP + 0x1e0]
00489b70  FSTP float ptr [ESP + 0x298]
00489b77  FLD float ptr [ESP + 0xa0]
00489b7e  FADD ST0,ST2
00489b80  FSTP float ptr [ESP + 0xa0]
00489b87  FLD float ptr [ESP + 0xa4]
00489b8e  FADD ST0,ST1
00489b90  FSTP float ptr [ESP + 0xa4]
00489b97  FSTP ST0
00489b99  FSTP ST0
00489b9b  FLD float ptr [ESP + 0xa8]
00489ba2  FADD float ptr [ESP + 0x298]
00489ba9  FSTP float ptr [ESP + 0xa8]
00489bb0  CMP byte ptr [ESP + 0x12],BL
00489bb4  JNZ 0x0048984b
00489bba  FLD float ptr [ESP + 0x7c]
00489bbe  LEA EDX,[ESP + 0xd4]
00489bc5  FCHS
00489bc7  PUSH EDX
00489bc8  FSTP float ptr [ESP + 0x80]
00489bcf  LEA EAX,[ESP + 0xfc]
00489bd6  FLD float ptr [ESP + 0x84]
00489bdd  PUSH EAX
00489bde  FCHS
00489be0  LEA ECX,[ESP + 0x32c]
00489be7  FSTP float ptr [ESP + 0x88]
00489bee  PUSH ECX
00489bef  FLD float ptr [ESP + 0x90]
00489bf6  LEA EDX,[ESP + 0x50]
00489bfa  FCHS
00489bfc  PUSH EDX
00489bfd  FSTP float ptr [ESP + 0x94]
00489c04  LEA EAX,[ESP + 0x8c]
00489c0b  FLD float ptr [ESP + 0x40]
00489c0f  PUSH EAX
00489c10  FCHS
00489c12  MOV ECX,EDI
00489c14  FSTP float ptr [ESP + 0x44]
00489c18  MOV dword ptr [ESP + 0x10c],EBX
00489c1f  FLD float ptr [ESP + 0x48]
00489c23  MOV dword ptr [ESP + 0x110],EBX
00489c2a  FCHS
00489c2c  MOV dword ptr [ESP + 0x114],EBX
00489c33  FSTP float ptr [ESP + 0x48]
00489c37  MOV dword ptr [ESP + 0x174],EBX
00489c3e  FLD float ptr [ESP + 0x4c]
00489c42  MOV dword ptr [ESP + 0x178],EBX
00489c49  FCHS
00489c4b  MOV dword ptr [ESP + 0x17c],EBX
00489c52  FSTP float ptr [ESP + 0x4c]
00489c56  MOV dword ptr [ESP + 0xe8],EBX
00489c5d  MOV dword ptr [ESP + 0xec],EBX
00489c64  MOV dword ptr [ESP + 0xf0],EBX
00489c6b  MOV dword ptr [ESP + 0x18c],EBX
00489c72  MOV dword ptr [ESP + 0x190],EBX
00489c79  MOV dword ptr [ESP + 0x194],EBX
00489c80  CALL 0x00486da0
00489c85  LEA ECX,[ESP + 0x178]
00489c8c  PUSH ECX
00489c8d  LEA EDX,[ESP + 0x164]
00489c94  PUSH EDX
00489c95  LEA EAX,[ESP + 0x32c]
00489c9c  PUSH EAX
00489c9d  LEA ECX,[ESP + 0x50]
00489ca1  PUSH ECX
00489ca2  LEA EDX,[ESP + 0x40]
00489ca6  PUSH EDX
00489ca7  MOV ECX,EDI
00489ca9  CALL 0x00486da0
00489cae  FLD float ptr [ESP + 0x160]
00489cb5  FADD float ptr [ESP + 0xf8]
00489cbc  MOV AL,byte ptr [EDI + 0x110]
00489cc2  CMP AL,BL
00489cc4  FSTP float ptr [ESP + 0x134]
00489ccb  FLD float ptr [ESP + 0x164]
00489cd2  FADD float ptr [ESP + 0xfc]
00489cd9  FSTP float ptr [ESP + 0x138]
00489ce0  FLD float ptr [ESP + 0x168]
00489ce7  FADD float ptr [ESP + 0x100]
00489cee  FSTP float ptr [ESP + 0x13c]
00489cf5  FLD float ptr [ESP + 0x178]
00489cfc  FADD float ptr [ESP + 0xd4]
00489d03  FLD float ptr [ESP + 0x17c]
00489d0a  FADD float ptr [ESP + 0xd8]
00489d11  FSTP float ptr [ESP + 0x18]
00489d15  FLD float ptr [ESP + 0x180]
00489d1c  FADD float ptr [ESP + 0xdc]
00489d23  FSTP float ptr [ESP + 0x1c]
00489d27  JNZ 0x00489e00
00489d2d  FLD float ptr [ESP + 0x134]
00489d34  FADD float ptr [ESP + 0x88]
00489d3b  FSTP float ptr [ESP + 0x88]
00489d42  FLD float ptr [ESP + 0x138]
00489d49  FADD float ptr [ESP + 0x8c]
00489d50  FSTP float ptr [ESP + 0x8c]
00489d57  FLD float ptr [ESP + 0x13c]
00489d5e  FADD float ptr [ESP + 0x90]
00489d65  FSTP float ptr [ESP + 0x90]
00489d6c  FLD float ptr [EDI + 0x10c]
00489d72  FLD float ptr [ESP + 0xf8]
00489d79  FMUL ST1
00489d7b  FLD float ptr [ESP + 0xfc]
00489d82  FMUL ST2
00489d84  FSTP float ptr [ESP + 0x21c]
00489d8b  FLD float ptr [ESP + 0x100]
00489d92  FMUL ST2
00489d94  FSTP float ptr [ESP + 0x220]
00489d9b  FADD float ptr [ESP + 0x134]
00489da2  FSTP ST1
00489da4  FLD float ptr [ESP + 0x21c]
00489dab  FADD float ptr [ESP + 0x138]
00489db2  FLD float ptr [ESP + 0x220]
00489db9  FADD float ptr [ESP + 0x13c]
00489dc0  FSTP float ptr [ESP + 0x2b0]
00489dc7  FLD float ptr [ESP + 0xc4]
00489dce  FADD ST0,ST2
00489dd0  FSTP float ptr [ESP + 0xc4]
00489dd7  FLD float ptr [ESP + 0xc8]
00489dde  FADD ST0,ST1
00489de0  FSTP float ptr [ESP + 0xc8]
00489de7  FSTP ST0
00489de9  FSTP ST0
00489deb  FLD float ptr [ESP + 0xcc]
00489df2  FADD float ptr [ESP + 0x2b0]
00489df9  FSTP float ptr [ESP + 0xcc]
00489e00  FLD float ptr [ESP + 0x6c]
00489e04  FADD ST0,ST1
00489e06  FSTP float ptr [ESP + 0x6c]
00489e0a  FLD float ptr [ESP + 0x18]
00489e0e  FADD float ptr [ESP + 0x70]
00489e12  FSTP float ptr [ESP + 0x70]
00489e16  FLD float ptr [ESP + 0x1c]
00489e1a  FADD float ptr [ESP + 0x74]
00489e1e  FSTP float ptr [ESP + 0x74]
00489e22  FLD float ptr [EDI + 0x10c]
00489e28  FLD float ptr [ESP + 0xd4]
00489e2f  FMUL ST1
00489e31  FLD float ptr [ESP + 0xd8]
00489e38  FMUL ST2
00489e3a  FSTP float ptr [ESP + 0x234]
00489e41  FLD float ptr [ESP + 0xdc]
00489e48  FMUL ST2
00489e4a  FSTP float ptr [ESP + 0x238]
00489e51  FADDP ST2,ST0
00489e53  FSTP ST0
00489e55  FLD float ptr [ESP + 0x234]
00489e5c  FADD float ptr [ESP + 0x18]
00489e60  FLD float ptr [ESP + 0x238]
00489e67  FADD float ptr [ESP + 0x1c]
00489e6b  FSTP float ptr [ESP + 0x1bc]
00489e72  FLD float ptr [ESP + 0x94]
00489e79  FADD ST0,ST2
00489e7b  FSTP float ptr [ESP + 0x94]
00489e82  FLD float ptr [ESP + 0x98]
00489e89  FADD ST0,ST1
00489e8b  FSTP float ptr [ESP + 0x98]
00489e92  FSTP ST0
00489e94  FSTP ST0
00489e96  FLD float ptr [ESP + 0x9c]
00489e9d  FADD float ptr [ESP + 0x1bc]
00489ea4  FSTP float ptr [ESP + 0x9c]
00489eab  JMP 0x0048984b
00489eb0  FLD float ptr [ESP + 0x20]
00489eb4  ADD ESI,0xf0
00489eba  FMUL float ptr [ESP + 0x3c]
00489ebe  ADD EDI,0xf0
00489ec4  FLD float ptr [ESP + 0x24]
00489ec8  FMUL float ptr [ESP + 0x3c]
00489ecc  FLD float ptr [ESP + 0x28]
00489ed0  FMUL float ptr [ESP + 0x3c]
00489ed4  FSTP float ptr [ESP + 0x1bc]
00489edb  MOV EAX,dword ptr [ESP + 0x1bc]
00489ee2  FXCH
00489ee4  MOV dword ptr [ESP + 0x1c],EAX
00489ee8  FSTP float ptr [ESP + 0x14]
00489eec  MOV EAX,dword ptr [ESP + 0x14]
00489ef0  MOV dword ptr [ESI],EAX
00489ef2  FSTP float ptr [ESP + 0x18]
00489ef6  MOV EAX,dword ptr [ESP + 0x18]
00489efa  FLD float ptr [ESP + 0x3c]
00489efe  MOV dword ptr [ESI + 0x4],EAX
00489f01  FCHS
00489f03  MOV EAX,dword ptr [ESP + 0x1c]
00489f07  FLD float ptr [ESP + 0x20]
00489f0b  MOV dword ptr [ESI + 0x8],EAX
00489f0e  FMUL ST1
00489f10  FLD float ptr [ESP + 0x24]
00489f14  FMUL ST2
00489f16  FLD float ptr [ESP + 0x28]
00489f1a  FMUL ST3
00489f1c  FSTP float ptr [ESP + 0x1bc]
00489f23  MOV EAX,dword ptr [ESP + 0x1bc]
00489f2a  MOV dword ptr [ESP + 0x1c],EAX
00489f2e  FXCH
00489f30  FSTP float ptr [ESP + 0x14]
00489f34  MOV EAX,dword ptr [ESP + 0x14]
00489f38  MOV dword ptr [EDI],EAX
00489f3a  FSTP float ptr [ESP + 0x18]
00489f3e  MOV EAX,dword ptr [ESP + 0x18]
00489f42  MOV dword ptr [EDI + 0x4],EAX
00489f45  FSTP ST0
00489f47  MOV EAX,dword ptr [ESP + 0x1c]
00489f4b  FLD float ptr [ESP + 0xb8]
00489f52  MOV dword ptr [EDI + 0x8],EAX
00489f55  FADD float ptr [ECX]
00489f57  MOV EAX,dword ptr [ESP + 0x1f0]
00489f5e  POP EDI
00489f5f  POP ESI
00489f60  FSTP float ptr [ECX]
00489f62  FLD float ptr [ESP + 0xb4]
00489f69  FADD float ptr [ECX + 0x4]
00489f6c  FSTP float ptr [ECX + 0x4]
00489f6f  FLD float ptr [ESP + 0xb8]
00489f76  FADD float ptr [ECX + 0x8]
00489f79  FSTP float ptr [ECX + 0x8]
00489f7c  FLD float ptr [ESP + 0x98]
00489f83  FADD float ptr [EBP]
00489f86  FSTP float ptr [EBP]
00489f89  FLD float ptr [ESP + 0x9c]
00489f90  FADD float ptr [EBP + 0x4]
00489f93  FSTP float ptr [EBP + 0x4]
00489f96  FLD float ptr [ESP + 0xa0]
00489f9d  FADD float ptr [EBP + 0x8]
00489fa0  FSTP float ptr [EBP + 0x8]
00489fa3  FLD float ptr [ESP + 0xbc]
00489faa  FADD float ptr [EAX]
00489fac  FSTP float ptr [EAX]
00489fae  FLD float ptr [ESP + 0xc0]
00489fb5  FADD float ptr [EAX + 0x4]
00489fb8  FSTP float ptr [EAX + 0x4]
00489fbb  FLD float ptr [ESP + 0xc4]
00489fc2  FADD float ptr [EAX + 0x8]
00489fc5  FSTP float ptr [EAX + 0x8]
00489fc8  MOV AL,0x1
00489fca  FLD float ptr [ESP + 0x8c]
00489fd1  FADD float ptr [EDX]
00489fd3  FSTP float ptr [EDX]
00489fd5  FLD float ptr [ESP + 0x90]
00489fdc  FADD float ptr [EDX + 0x4]
00489fdf  FSTP float ptr [EDX + 0x4]
00489fe2  FLD float ptr [ESP + 0x94]
00489fe9  FADD float ptr [EDX + 0x8]
00489fec  FSTP float ptr [EDX + 0x8]
00489fef  POP EBP
00489ff0  POP EBX
00489ff1  ADD ESP,0x354
00489ff7  RET 0xc
