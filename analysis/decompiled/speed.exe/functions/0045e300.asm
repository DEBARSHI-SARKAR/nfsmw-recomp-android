0045e300  SUB ESP,0x38
0045e303  MOV EAX,dword ptr [ESP + 0x40]
0045e307  FLD float ptr [EAX]
0045e309  MOV EDX,dword ptr [EAX + 0x14]
0045e30c  FLD float ptr [EAX + 0x4]
0045e30f  MOV ECX,dword ptr [EAX + 0x10]
0045e312  FLD float ptr [EAX + 0x8]
0045e315  MOV dword ptr [ESP + 0x8],EDX
0045e319  FLD float ptr [EAX + 0x18]
0045e31c  MOV EDX,dword ptr [EAX + 0x24]
0045e31f  FLD float ptr [EAX + 0x28]
0045e322  MOV dword ptr [ESP],EDX
0045e325  FLD float ptr [ESP + 0x8]
0045e329  MOV dword ptr [ESP + 0xc],ECX
0045e32d  FMUL ST1
0045e32f  MOV ECX,dword ptr [EAX + 0x20]
0045e332  FLD float ptr [ESP]
0045e335  MOV dword ptr [ESP + 0x4],ECX
0045e339  FMUL ST3
0045e33b  MOV ECX,dword ptr [EAX + 0x30]
0045e33e  MOV EDX,dword ptr [EAX + 0x34]
0045e341  MOV EAX,dword ptr [EAX + 0x38]
0045e344  FSUBP
0045e346  MOV dword ptr [ESP + 0x10],EAX
0045e34a  MOV EAX,dword ptr [ESP + 0x3c]
0045e34e  MOV dword ptr [ESP + 0x18],ECX
0045e352  FLD ST1
0045e354  XOR ECX,ECX
0045e356  FMUL float ptr [ESP + 0xc]
0045e35a  MOV dword ptr [ESP + 0x14],EDX
0045e35e  FLD float ptr [ESP + 0x4]
0045e362  MOV dword ptr [EAX + 0xc],ECX
0045e365  FMUL ST4
0045e367  FSUBP
0045e369  FSTP float ptr [ESP + 0x1c]
0045e36d  FLD float ptr [ESP]
0045e370  FMUL float ptr [ESP + 0xc]
0045e374  FLD float ptr [ESP + 0x4]
0045e378  FMUL float ptr [ESP + 0x8]
0045e37c  FSUBP
0045e37e  FSTP float ptr [ESP + 0x20]
0045e382  FLD ST0
0045e384  FMUL ST6
0045e386  FLD float ptr [ESP + 0x1c]
0045e38a  FMUL ST6
0045e38c  FSUBP
0045e38e  FLD float ptr [ESP + 0x20]
0045e392  FMUL ST5
0045e394  FADDP
0045e396  FDIVR float ptr [0x0089096c]
0045e39c  FSTP float ptr [ESP + 0x40]
0045e3a0  FMUL float ptr [ESP + 0x40]
0045e3a4  FST float ptr [ESP + 0x24]
0045e3a8  FSTP float ptr [EAX]
0045e3aa  FLD ST0
0045e3ac  FMUL ST4
0045e3ae  FLD float ptr [ESP]
0045e3b1  FMUL ST4
0045e3b3  FSUBP
0045e3b5  FMUL float ptr [ESP + 0x40]
0045e3b9  FCHS
0045e3bb  FST float ptr [ESP + 0x2c]
0045e3bf  FSTP float ptr [EAX + 0x4]
0045e3c2  FLD ST1
0045e3c4  FMUL ST4
0045e3c6  FLD float ptr [ESP + 0x8]
0045e3ca  FMUL ST4
0045e3cc  FSUBP
0045e3ce  FMUL float ptr [ESP + 0x40]
0045e3d2  FST float ptr [ESP + 0x34]
0045e3d6  FSTP float ptr [EAX + 0x8]
0045e3d9  FLD float ptr [ESP + 0x1c]
0045e3dd  FMUL float ptr [ESP + 0x40]
0045e3e1  FCHS
0045e3e3  FST float ptr [ESP + 0x1c]
0045e3e7  FSTP float ptr [EAX + 0x10]
0045e3ea  FMUL ST4
0045e3ec  FLD float ptr [ESP + 0x4]
0045e3f0  FMUL ST3
0045e3f2  FSUBP
0045e3f4  MOV dword ptr [EAX + 0x1c],ECX
0045e3f7  MOV dword ptr [EAX + 0x2c],ECX
0045e3fa  MOV dword ptr [EAX + 0x3c],0x3f800000
0045e401  FMUL float ptr [ESP + 0x40]
0045e405  FST float ptr [ESP + 0x28]
0045e409  FSTP float ptr [EAX + 0x14]
0045e40c  FMUL ST3
0045e40e  FLD float ptr [ESP + 0xc]
0045e412  FMUL ST2
0045e414  FSUBP
0045e416  FMUL float ptr [ESP + 0x40]
0045e41a  FCHS
0045e41c  FST float ptr [ESP + 0x30]
0045e420  FSTP ST1
0045e422  FSTP float ptr [EAX + 0x18]
0045e425  FLD float ptr [ESP + 0x20]
0045e429  FMUL float ptr [ESP + 0x40]
0045e42d  FST float ptr [ESP + 0x3c]
0045e431  FSTP float ptr [EAX + 0x20]
0045e434  FLD float ptr [ESP]
0045e437  FMUL ST2
0045e439  FLD float ptr [ESP + 0x4]
0045e43d  FMUL ST2
0045e43f  FSUBP
0045e441  FMUL float ptr [ESP + 0x40]
0045e445  FCHS
0045e447  FST float ptr [ESP + 0x20]
0045e44b  FSTP float ptr [EAX + 0x24]
0045e44e  FLD float ptr [ESP + 0x8]
0045e452  FMULP ST2
0045e454  FLD float ptr [ESP + 0xc]
0045e458  FMUL ST1
0045e45a  FSUBP ST2,ST0
0045e45c  FXCH
0045e45e  FMUL float ptr [ESP + 0x40]
0045e462  FSTP ST1
0045e464  FST float ptr [EAX + 0x28]
0045e467  FLD float ptr [ESP + 0x3c]
0045e46b  FMUL float ptr [ESP + 0x10]
0045e46f  FLD float ptr [ESP + 0x1c]
0045e473  FMUL float ptr [ESP + 0x14]
0045e477  FADDP
0045e479  FLD float ptr [ESP + 0x24]
0045e47d  FMUL float ptr [ESP + 0x18]
0045e481  FADDP
0045e483  FCHS
0045e485  FSTP float ptr [EAX + 0x30]
0045e488  FLD float ptr [ESP + 0x20]
0045e48c  FMUL float ptr [ESP + 0x10]
0045e490  FLD float ptr [ESP + 0x28]
0045e494  FMUL float ptr [ESP + 0x14]
0045e498  FADDP
0045e49a  FLD float ptr [ESP + 0x2c]
0045e49e  FMUL float ptr [ESP + 0x18]
0045e4a2  FADDP
0045e4a4  FCHS
0045e4a6  FSTP float ptr [EAX + 0x34]
0045e4a9  FMUL float ptr [ESP + 0x10]
0045e4ad  FLD float ptr [ESP + 0x30]
0045e4b1  FMUL float ptr [ESP + 0x14]
0045e4b5  FADDP
0045e4b7  FLD float ptr [ESP + 0x34]
0045e4bb  FMUL float ptr [ESP + 0x18]
0045e4bf  FADDP
0045e4c1  FCHS
0045e4c3  FSTP float ptr [EAX + 0x38]
0045e4c6  ADD ESP,0x38
0045e4c9  RET
