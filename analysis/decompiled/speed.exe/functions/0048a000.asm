0048a000  SUB ESP,0x218
0048a006  PUSH EBX
0048a007  PUSH EBP
0048a008  PUSH ESI
0048a009  MOV ESI,dword ptr [ESP + 0x228]
0048a010  XOR EBX,EBX
0048a012  PUSH EDI
0048a013  MOV EDI,ECX
0048a015  MOV AL,byte ptr [EDI + 0xc8]
0048a01b  CMP AL,BL
0048a01d  MOV dword ptr [ESP + 0x94],EBX
0048a024  MOV dword ptr [ESP + 0x98],EBX
0048a02b  MOV dword ptr [ESP + 0x9c],EBX
0048a032  MOV dword ptr [ESP + 0x58],EBX
0048a036  MOV dword ptr [ESP + 0x5c],EBX
0048a03a  MOV dword ptr [ESP + 0x60],EBX
0048a03e  JZ 0x0048a04c
0048a040  CMP byte ptr [ESI + 0xc8],BL
0048a046  MOV byte ptr [ESP + 0x12],BL
0048a04a  JNZ 0x0048a050
0048a04c  MOV byte ptr [ESP + 0x12],AL
0048a050  CMP AL,BL
0048a052  JZ 0x0048a062
0048a054  CMP byte ptr [ESI + 0xc8],BL
0048a05a  JZ 0x0048a062
0048a05c  MOV byte ptr [ESP + 0x13],BL
0048a060  JMP 0x0048a06c
0048a062  MOV AL,byte ptr [ESI + 0xc8]
0048a068  MOV byte ptr [ESP + 0x13],AL
0048a06c  CMP byte ptr [ESP + 0x12],BL
0048a070  JZ 0x0048a080
0048a072  CMP byte ptr [ESP + 0x13],BL
0048a076  JZ 0x0048a080
0048a078  MOV byte ptr [ESP + 0x12],BL
0048a07c  MOV byte ptr [ESP + 0x13],BL
0048a080  MOV EBP,dword ptr [ESP + 0x230]
0048a087  LEA ECX,[ESP + 0x94]
0048a08e  PUSH ECX
0048a08f  PUSH EBP
0048a090  MOV ECX,EDI
0048a092  CALL 0x00486e30
0048a097  LEA EDX,[ESP + 0x1a8]
0048a09e  PUSH EDX
0048a09f  LEA EAX,[ESP + 0x98]
0048a0a6  PUSH EAX
0048a0a7  MOV ECX,EDI
0048a0a9  CALL 0x00486ec0
0048a0ae  LEA ECX,[ESP + 0x58]
0048a0b2  PUSH ECX
0048a0b3  PUSH EBP
0048a0b4  MOV ECX,ESI
0048a0b6  CALL 0x00486e30
0048a0bb  LEA EDX,[ESP + 0x1e8]
0048a0c2  PUSH EDX
0048a0c3  LEA EAX,[ESP + 0x5c]
0048a0c7  PUSH EAX
0048a0c8  MOV ECX,ESI
0048a0ca  CALL 0x00486ec0
0048a0cf  LEA EBP,[EDI + 0xa4]
0048a0d5  MOV ECX,EBP
0048a0d7  MOV EDX,dword ptr [ECX]
0048a0d9  MOV EAX,dword ptr [ECX + 0x4]
0048a0dc  MOV ECX,dword ptr [ECX + 0x8]
0048a0df  MOV dword ptr [ESP + 0x2c],EAX
0048a0e3  LEA EAX,[EDI + 0x98]
0048a0e9  MOV dword ptr [ESP + 0x134],EAX
0048a0f0  MOV dword ptr [ESP + 0x28],EDX
0048a0f4  MOV EDX,dword ptr [EAX]
0048a0f6  MOV dword ptr [ESP + 0x30],ECX
0048a0fa  MOV ECX,dword ptr [EAX + 0x4]
0048a0fd  MOV dword ptr [ESP + 0x4c],EDX
0048a101  MOV EDX,dword ptr [EAX + 0x8]
0048a104  LEA EAX,[ESI + 0xa4]
0048a10a  MOV dword ptr [ESP + 0x10c],EAX
0048a111  MOV dword ptr [ESP + 0x50],ECX
0048a115  MOV ECX,dword ptr [EAX]
0048a117  MOV dword ptr [ESP + 0x54],EDX
0048a11b  MOV EDX,dword ptr [EAX + 0x4]
0048a11e  MOV EAX,dword ptr [EAX + 0x8]
0048a121  MOV dword ptr [ESP + 0x3c],EAX
0048a125  LEA EAX,[ESI + 0x98]
0048a12b  MOV dword ptr [ESP + 0x150],EAX
0048a132  MOV dword ptr [ESP + 0x34],ECX
0048a136  MOV ECX,dword ptr [EAX]
0048a138  MOV dword ptr [ESP + 0x38],EDX
0048a13c  MOV EDX,dword ptr [EAX + 0x4]
0048a13f  MOV EAX,dword ptr [EAX + 0x8]
0048a142  MOV dword ptr [ESP + 0x78],EAX
0048a146  CMP byte ptr [ESP + 0x12],BL
0048a14a  MOV dword ptr [ESP + 0x70],ECX
0048a14e  MOV dword ptr [ESP + 0x74],EDX
0048a152  JZ 0x0048a160
0048a154  MOV ECX,dword ptr [ESI + 0xd0]
0048a15a  MOV dword ptr [ESP + 0x18],ECX
0048a15e  JMP 0x0048a190
0048a160  CMP byte ptr [ESP + 0x13],BL
0048a164  JZ 0x0048a172
0048a166  MOV EDX,dword ptr [EDI + 0xd0]
0048a16c  MOV dword ptr [ESP + 0x18],EDX
0048a170  JMP 0x0048a190
0048a172  FLD float ptr [EDI + 0xd0]
0048a178  FMUL float ptr [ESI + 0xd0]
0048a17e  FLD float ptr [EDI + 0xd0]
0048a184  FADD float ptr [ESI + 0xd0]
0048a18a  FDIVP
0048a18c  FSTP float ptr [ESP + 0x18]
0048a190  CMP dword ptr [ESP + 0x234],EBX
0048a197  MOV dword ptr [ESP + 0x88],EBX
0048a19e  MOV dword ptr [ESP + 0x8c],EBX
0048a1a5  MOV dword ptr [ESP + 0x90],EBX
0048a1ac  MOV dword ptr [ESP + 0x7c],EBX
0048a1b0  MOV dword ptr [ESP + 0x80],EBX
0048a1b7  MOV dword ptr [ESP + 0x84],EBX
0048a1be  MOV dword ptr [ESP + 0xa0],EBX
0048a1c5  MOV dword ptr [ESP + 0xa4],EBX
0048a1cc  MOV dword ptr [ESP + 0xa8],EBX
0048a1d3  MOV dword ptr [ESP + 0x40],EBX
0048a1d7  MOV dword ptr [ESP + 0x44],EBX
0048a1db  MOV dword ptr [ESP + 0x48],EBX
0048a1df  MOV dword ptr [ESP + 0x14],EBX
0048a1e3  JLE 0x0048a853
0048a1e9  LEA ESP,[ESP]
0048a1f0  FLD float ptr [ESP + 0x9c]
0048a1f7  FMUL float ptr [ESP + 0x2c]
0048a1fb  FLD float ptr [ESP + 0x98]
0048a202  FMUL float ptr [ESP + 0x30]
0048a206  FSUBP
0048a208  FSTP float ptr [ESP + 0x11c]
0048a20f  MOV EAX,dword ptr [ESP + 0x11c]
0048a216  FLD float ptr [ESP + 0x30]
0048a21a  MOV dword ptr [ESP + 0x144],EAX
0048a221  FMUL float ptr [ESP + 0x94]
0048a228  FLD float ptr [ESP + 0x9c]
0048a22f  FMUL float ptr [ESP + 0x28]
0048a233  FSUBP
0048a235  FSTP float ptr [ESP + 0x120]
0048a23c  MOV ECX,dword ptr [ESP + 0x120]
0048a243  FLD float ptr [ESP + 0x98]
0048a24a  MOV dword ptr [ESP + 0x148],ECX
0048a251  FMUL float ptr [ESP + 0x28]
0048a255  FLD float ptr [ESP + 0x2c]
0048a259  FMUL float ptr [ESP + 0x94]
0048a260  FSUBP
0048a262  FSTP float ptr [ESP + 0x124]
0048a269  MOV EDX,dword ptr [ESP + 0x124]
0048a270  FLD float ptr [ESP + 0x144]
0048a277  MOV dword ptr [ESP + 0x14c],EDX
0048a27e  FADD float ptr [ESP + 0x4c]
0048a282  FLD float ptr [ESP + 0x148]
0048a289  FADD float ptr [ESP + 0x50]
0048a28d  FLD float ptr [ESP + 0x14c]
0048a294  FADD float ptr [ESP + 0x54]
0048a298  FSTP float ptr [ESP + 0x198]
0048a29f  FLD float ptr [ESP + 0x60]
0048a2a3  FMUL float ptr [ESP + 0x38]
0048a2a7  FLD float ptr [ESP + 0x5c]
0048a2ab  FMUL float ptr [ESP + 0x3c]
0048a2af  FSUBP
0048a2b1  FSTP float ptr [ESP + 0xf4]
0048a2b8  MOV EAX,dword ptr [ESP + 0xf4]
0048a2bf  FLD float ptr [ESP + 0x3c]
0048a2c3  MOV dword ptr [ESP + 0x110],EAX
0048a2ca  FMUL float ptr [ESP + 0x58]
0048a2ce  FLD float ptr [ESP + 0x60]
0048a2d2  FMUL float ptr [ESP + 0x34]
0048a2d6  FSUBP
0048a2d8  FSTP float ptr [ESP + 0xf8]
0048a2df  MOV ECX,dword ptr [ESP + 0xf8]
0048a2e6  FLD float ptr [ESP + 0x5c]
0048a2ea  MOV dword ptr [ESP + 0x114],ECX
0048a2f1  FMUL float ptr [ESP + 0x34]
0048a2f5  FLD float ptr [ESP + 0x38]
0048a2f9  FMUL float ptr [ESP + 0x58]
0048a2fd  FSUBP
0048a2ff  FSTP float ptr [ESP + 0xfc]
0048a306  MOV EDX,dword ptr [ESP + 0xfc]
0048a30d  FLD float ptr [ESP + 0x110]
0048a314  MOV dword ptr [ESP + 0x118],EDX
0048a31b  FADD float ptr [ESP + 0x70]
0048a31f  FLD float ptr [ESP + 0x114]
0048a326  FADD float ptr [ESP + 0x74]
0048a32a  FSTP float ptr [ESP + 0x158]
0048a331  FLD float ptr [ESP + 0x118]
0048a338  FADD float ptr [ESP + 0x78]
0048a33c  FSTP float ptr [ESP + 0x15c]
0048a343  FXCH ST2
0048a345  FSUBRP ST2,ST0
0048a347  FXCH
0048a349  FST float ptr [ESP + 0xe4]
0048a350  FXCH
0048a352  FXCH
0048a354  FSTP float ptr [ESP + 0x19c]
0048a35b  PUSH ECX
0048a35c  FSUB float ptr [ESP + 0x15c]
0048a363  FST float ptr [ESP + 0xe4]
0048a36a  FLD float ptr [ESP + 0x19c]
0048a371  FSUB float ptr [ESP + 0x160]
0048a378  FST float ptr [ESP + 0xe0]
0048a37f  FLD float ptr [ESP + 0x1a0]
0048a386  FMUL float ptr [ESP + 0x1c]
0048a38a  FSTP float ptr [ESP + 0x68]
0048a38e  FXCH
0048a390  FMUL float ptr [ESP + 0x1c]
0048a394  FSTP float ptr [ESP + 0x6c]
0048a398  FMUL float ptr [ESP + 0x1c]
0048a39c  FSTP float ptr [ESP + 0x70]
0048a3a0  FLD float ptr [ESP + 0x68]
0048a3a4  FMUL float ptr [ESP + 0x68]
0048a3a8  FLD float ptr [ESP + 0x70]
0048a3ac  FMUL float ptr [ESP + 0x70]
0048a3b0  FADDP
0048a3b2  FLD float ptr [ESP + 0x6c]
0048a3b6  FMUL float ptr [ESP + 0x6c]
0048a3ba  FADDP
0048a3bc  FSTP float ptr [ESP]
0048a3bf  CALL 0x005c5e80
0048a3c4  FLD float ptr [0x00890968]
0048a3ca  FUCOMPP
0048a3cc  ADD ESP,0x4
0048a3cf  FNSTSW AX
0048a3d1  TEST AH,0x44
0048a3d4  JNP 0x0048a84d
0048a3da  FLD float ptr [ESP + 0x64]
0048a3de  FMUL float ptr [0x00890da8]
0048a3e4  FLD float ptr [ESP + 0x68]
0048a3e8  FMUL float ptr [0x00890da8]
0048a3ee  FST float ptr [ESP + 0xec]
0048a3f5  FLD float ptr [ESP + 0x6c]
0048a3f9  FMUL float ptr [0x00890da8]
0048a3ff  FSTP float ptr [ESP + 0xf0]
0048a406  MOV EAX,dword ptr [ESP + 0xf0]
0048a40d  FLD ST1
0048a40f  MOV dword ptr [ESP + 0x24],EAX
0048a413  MOV EAX,dword ptr [ESP + 0x14]
0048a417  FSTP float ptr [ESP + 0x1c]
0048a41b  CMP EAX,EBX
0048a41d  FSTP float ptr [ESP + 0x20]
0048a421  JNZ 0x0048a591
0048a427  FLD float ptr [ESP + 0xe4]
0048a42e  MOV EDX,dword ptr [ESP + 0x1c]
0048a432  FLD float ptr [ESP + 0xe0]
0048a439  MOV EAX,dword ptr [ESP + 0x20]
0048a43d  FXCH
0048a43f  LEA ECX,[EDI + 0xf0]
0048a445  FSTP float ptr [ESP + 0x128]
0048a44c  MOV dword ptr [ECX],EDX
0048a44e  MOV EDX,dword ptr [ESP + 0x24]
0048a452  FSTP float ptr [ESP + 0x12c]
0048a459  MOV dword ptr [ECX + 0x4],EAX
0048a45c  MOV EAX,dword ptr [ESP + 0xdc]
0048a463  FMUL float ptr [0x00890da8]
0048a469  MOV dword ptr [ECX + 0x8],EDX
0048a46c  FLD float ptr [ESP + 0xec]
0048a473  MOV ECX,EAX
0048a475  FMUL float ptr [0x00890da8]
0048a47b  MOV dword ptr [ESP + 0x174],EAX
0048a482  FLD float ptr [ESP + 0xf0]
0048a489  MOV EAX,dword ptr [ESP + 0x128]
0048a490  FMUL float ptr [0x00890da8]
0048a496  MOV dword ptr [ESP + 0x130],ECX
0048a49d  MOV ECX,dword ptr [ESP + 0x12c]
0048a4a4  LEA EDX,[EDI + 0xd8]
0048a4aa  MOV dword ptr [EDX],EAX
0048a4ac  FSTP float ptr [ESP + 0x180]
0048a4b3  MOV EAX,dword ptr [ESP + 0x130]
0048a4ba  FXCH
0048a4bc  MOV dword ptr [EDX + 0x4],ECX
0048a4bf  FSTP float ptr [ESP + 0x138]
0048a4c6  MOV ECX,dword ptr [ESP + 0x180]
0048a4cd  MOV dword ptr [EDX + 0x8],EAX
0048a4d0  FSTP float ptr [ESP + 0x13c]
0048a4d7  MOV EAX,dword ptr [ESP + 0x138]
0048a4de  FLD float ptr [ESP + 0xe4]
0048a4e5  FMUL float ptr [0x00890da8]
0048a4eb  MOV dword ptr [ESP + 0x140],ECX
0048a4f2  MOV ECX,dword ptr [ESP + 0x13c]
0048a4f9  LEA EDX,[ESI + 0xf0]
0048a4ff  MOV dword ptr [EDX],EAX
0048a501  MOV EAX,dword ptr [ESP + 0x140]
0048a508  MOV dword ptr [EDX + 0x4],ECX
0048a50b  MOV ECX,dword ptr [ESP + 0xe0]
0048a512  MOV dword ptr [EDX + 0x8],EAX
0048a515  MOV EDX,dword ptr [ESP + 0xdc]
0048a51c  MOV dword ptr [ESP + 0x164],ECX
0048a523  FLD float ptr [ESP + 0x164]
0048a52a  FMUL float ptr [0x00890da8]
0048a530  MOV dword ptr [ESP + 0x168],EDX
0048a537  FLD float ptr [ESP + 0x168]
0048a53e  LEA ECX,[ESI + 0xd8]
0048a544  FMUL float ptr [0x00890da8]
0048a54a  FSTP float ptr [ESP + 0x18c]
0048a551  MOV EAX,dword ptr [ESP + 0x18c]
0048a558  FXCH
0048a55a  MOV dword ptr [ESP + 0x108],EAX
0048a561  FSTP float ptr [ESP + 0x100]
0048a568  MOV EDX,dword ptr [ESP + 0x100]
0048a56f  MOV dword ptr [ECX],EDX
0048a571  MOV EDX,dword ptr [ESP + 0x108]
0048a578  FSTP float ptr [ESP + 0x104]
0048a57f  MOV EAX,dword ptr [ESP + 0x104]
0048a586  MOV dword ptr [ECX + 0x4],EAX
0048a589  MOV dword ptr [ECX + 0x8],EDX
0048a58c  JMP 0x0048a835
0048a591  FILD dword ptr [ESP + 0x14]
0048a595  MOV AL,byte ptr [ESP + 0x12]
0048a599  CMP AL,BL
0048a59b  FIDIV dword ptr [ESP + 0x234]
0048a5a2  FXCH
0048a5a4  FMUL ST1
0048a5a6  FSTP float ptr [ESP + 0x1c]
0048a5aa  FLD float ptr [ESP + 0xec]
0048a5b1  FMUL ST1
0048a5b3  FSTP float ptr [ESP + 0x20]
0048a5b7  FLD float ptr [ESP + 0xf0]
0048a5be  FMUL ST1
0048a5c0  FSTP float ptr [ESP + 0x24]
0048a5c4  FSTP ST0
0048a5c6  JNZ 0x0048a6fa
0048a5cc  LEA EAX,[ESP + 0xd0]
0048a5d3  PUSH EAX
0048a5d4  LEA ECX,[ESP + 0xbc]
0048a5db  PUSH ECX
0048a5dc  LEA EDX,[ESP + 0x1b0]
0048a5e3  PUSH EDX
0048a5e4  LEA EAX,[ESP + 0xa0]
0048a5eb  PUSH EAX
0048a5ec  LEA ECX,[ESP + 0x2c]
0048a5f0  PUSH ECX
0048a5f1  MOV ECX,EDI
0048a5f3  MOV dword ptr [ESP + 0xcc],EBX
0048a5fa  MOV dword ptr [ESP + 0xd0],EBX
0048a601  MOV dword ptr [ESP + 0xd4],EBX
0048a608  MOV dword ptr [ESP + 0xe4],EBX
0048a60f  MOV dword ptr [ESP + 0xe8],EBX
0048a616  MOV dword ptr [ESP + 0xec],EBX
0048a61d  CALL 0x00486da0
0048a622  FLD float ptr [ESP + 0xb8]
0048a629  FADD float ptr [ESP + 0x4c]
0048a62d  FSTP float ptr [ESP + 0x4c]
0048a631  FLD float ptr [ESP + 0xbc]
0048a638  FADD float ptr [ESP + 0x50]
0048a63c  FSTP float ptr [ESP + 0x50]
0048a640  FLD float ptr [ESP + 0xc0]
0048a647  FADD float ptr [ESP + 0x54]
0048a64b  FSTP float ptr [ESP + 0x54]
0048a64f  FLD float ptr [ESP + 0xd0]
0048a656  FADD float ptr [ESP + 0x28]
0048a65a  FSTP float ptr [ESP + 0x28]
0048a65e  FLD float ptr [ESP + 0xd4]
0048a665  FADD float ptr [ESP + 0x2c]
0048a669  FSTP float ptr [ESP + 0x2c]
0048a66d  FLD float ptr [ESP + 0xd8]
0048a674  FADD float ptr [ESP + 0x30]
0048a678  FSTP float ptr [ESP + 0x30]
0048a67c  FLD float ptr [ESP + 0x88]
0048a683  FADD float ptr [ESP + 0xb8]
0048a68a  FSTP float ptr [ESP + 0x88]
0048a691  FLD float ptr [ESP + 0x8c]
0048a698  FADD float ptr [ESP + 0xbc]
0048a69f  FSTP float ptr [ESP + 0x8c]
0048a6a6  FLD float ptr [ESP + 0x90]
0048a6ad  FADD float ptr [ESP + 0xc0]
0048a6b4  FSTP float ptr [ESP + 0x90]
0048a6bb  FLD float ptr [ESP + 0xa0]
0048a6c2  FADD float ptr [ESP + 0xd0]
0048a6c9  FSTP float ptr [ESP + 0xa0]
0048a6d0  FLD float ptr [ESP + 0xa4]
0048a6d7  FADD float ptr [ESP + 0xd4]
0048a6de  FSTP float ptr [ESP + 0xa4]
0048a6e5  FLD float ptr [ESP + 0xa8]
0048a6ec  FADD float ptr [ESP + 0xd8]
0048a6f3  FSTP float ptr [ESP + 0xa8]
0048a6fa  CMP byte ptr [ESP + 0x13],BL
0048a6fe  JNZ 0x0048a835
0048a704  FLD float ptr [ESP + 0x1c]
0048a708  LEA EDX,[ESP + 0xac]
0048a70f  FCHS
0048a711  PUSH EDX
0048a712  FSTP float ptr [ESP + 0x20]
0048a716  LEA EAX,[ESP + 0xc8]
0048a71d  FLD float ptr [ESP + 0x24]
0048a721  PUSH EAX
0048a722  FCHS
0048a724  LEA ECX,[ESP + 0x1f0]
0048a72b  FSTP float ptr [ESP + 0x28]
0048a72f  PUSH ECX
0048a730  FLD float ptr [ESP + 0x30]
0048a734  LEA EDX,[ESP + 0x64]
0048a738  PUSH EDX
0048a739  FCHS
0048a73b  LEA EAX,[ESP + 0x2c]
0048a73f  FSTP float ptr [ESP + 0x34]
0048a743  PUSH EAX
0048a744  MOV ECX,ESI
0048a746  MOV dword ptr [ESP + 0xd8],EBX
0048a74d  MOV dword ptr [ESP + 0xdc],EBX
0048a754  MOV dword ptr [ESP + 0xe0],EBX
0048a75b  MOV dword ptr [ESP + 0xc0],EBX
0048a762  MOV dword ptr [ESP + 0xc4],EBX
0048a769  MOV dword ptr [ESP + 0xc8],EBX
0048a770  CALL 0x00486da0
0048a775  FLD float ptr [ESP + 0xc4]
0048a77c  FADD float ptr [ESP + 0x70]
0048a780  FSTP float ptr [ESP + 0x70]
0048a784  FLD float ptr [ESP + 0xc8]
0048a78b  FADD float ptr [ESP + 0x74]
0048a78f  FSTP float ptr [ESP + 0x74]
0048a793  FLD float ptr [ESP + 0xcc]
0048a79a  FADD float ptr [ESP + 0x78]
0048a79e  FSTP float ptr [ESP + 0x78]
0048a7a2  FLD float ptr [ESP + 0xac]
0048a7a9  FADD float ptr [ESP + 0x34]
0048a7ad  FSTP float ptr [ESP + 0x34]
0048a7b1  FLD float ptr [ESP + 0xb0]
0048a7b8  FADD float ptr [ESP + 0x38]
0048a7bc  FSTP float ptr [ESP + 0x38]
0048a7c0  FLD float ptr [ESP + 0xb4]
0048a7c7  FADD float ptr [ESP + 0x3c]
0048a7cb  FSTP float ptr [ESP + 0x3c]
0048a7cf  FLD float ptr [ESP + 0x7c]
0048a7d3  FADD float ptr [ESP + 0xc4]
0048a7da  FSTP float ptr [ESP + 0x7c]
0048a7de  FLD float ptr [ESP + 0x80]
0048a7e5  FADD float ptr [ESP + 0xc8]
0048a7ec  FSTP float ptr [ESP + 0x80]
0048a7f3  FLD float ptr [ESP + 0x84]
0048a7fa  FADD float ptr [ESP + 0xcc]
0048a801  FSTP float ptr [ESP + 0x84]
0048a808  FLD float ptr [ESP + 0x40]
0048a80c  FADD float ptr [ESP + 0xac]
0048a813  FSTP float ptr [ESP + 0x40]
0048a817  FLD float ptr [ESP + 0x44]
0048a81b  FADD float ptr [ESP + 0xb0]
0048a822  FSTP float ptr [ESP + 0x44]
0048a826  FLD float ptr [ESP + 0x48]
0048a82a  FADD float ptr [ESP + 0xb4]
0048a831  FSTP float ptr [ESP + 0x48]
0048a835  MOV EAX,dword ptr [ESP + 0x14]
0048a839  MOV ECX,dword ptr [ESP + 0x234]
0048a840  INC EAX
0048a841  CMP EAX,ECX
0048a843  MOV dword ptr [ESP + 0x14],EAX
0048a847  JL 0x0048a1f0
0048a84d  CMP dword ptr [ESP + 0x14],EBX
0048a851  JNZ 0x0048a862
0048a853  POP EDI
0048a854  POP ESI
0048a855  POP EBP
0048a856  XOR AL,AL
0048a858  POP EBX
0048a859  ADD ESP,0x218
0048a85f  RET 0xc
0048a862  MOV EAX,dword ptr [ESP + 0x134]
0048a869  FLD float ptr [ESP + 0x88]
0048a870  FADD float ptr [EAX]
0048a872  POP EDI
0048a873  POP ESI
0048a874  FSTP float ptr [EAX]
0048a876  FLD float ptr [ESP + 0x84]
0048a87d  FADD float ptr [EAX + 0x4]
0048a880  FSTP float ptr [EAX + 0x4]
0048a883  FLD float ptr [ESP + 0x88]
0048a88a  FADD float ptr [EAX + 0x8]
0048a88d  FSTP float ptr [EAX + 0x8]
0048a890  MOV EAX,dword ptr [ESP + 0x148]
0048a897  FLD float ptr [ESP + 0x98]
0048a89e  FADD float ptr [EBP]
0048a8a1  FSTP float ptr [EBP]
0048a8a4  FLD float ptr [ESP + 0x9c]
0048a8ab  FADD float ptr [EBP + 0x4]
0048a8ae  FSTP float ptr [EBP + 0x4]
0048a8b1  FLD float ptr [ESP + 0xa0]
0048a8b8  FADD float ptr [EBP + 0x8]
0048a8bb  FSTP float ptr [EBP + 0x8]
0048a8be  POP EBP
0048a8bf  FLD float ptr [ESP + 0x70]
0048a8c3  POP EBX
0048a8c4  FADD float ptr [EAX]
0048a8c6  FSTP float ptr [EAX]
0048a8c8  FLD float ptr [ESP + 0x70]
0048a8cc  FADD float ptr [EAX + 0x4]
0048a8cf  FSTP float ptr [EAX + 0x4]
0048a8d2  FLD float ptr [ESP + 0x74]
0048a8d6  FADD float ptr [EAX + 0x8]
0048a8d9  FSTP float ptr [EAX + 0x8]
0048a8dc  MOV EAX,dword ptr [ESP + 0xfc]
0048a8e3  FLD float ptr [ESP + 0x30]
0048a8e7  FADD float ptr [EAX]
0048a8e9  FSTP float ptr [EAX]
0048a8eb  FLD float ptr [ESP + 0x34]
0048a8ef  FADD float ptr [EAX + 0x4]
0048a8f2  FSTP float ptr [EAX + 0x4]
0048a8f5  FLD float ptr [ESP + 0x38]
0048a8f9  FADD float ptr [EAX + 0x8]
0048a8fc  FSTP float ptr [EAX + 0x8]
0048a8ff  MOV AL,0x1
0048a901  ADD ESP,0x218
0048a907  RET 0xc
