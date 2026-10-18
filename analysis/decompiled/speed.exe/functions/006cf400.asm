006cf400  SUB ESP,0xc
006cf403  PUSH EBX
006cf404  PUSH EBP
006cf405  PUSH ESI
006cf406  PUSH EDI
006cf407  MOV EDI,dword ptr [ESP + 0x20]
006cf40b  MOV dword ptr [0x008f9210],0xb80bcf65
006cf415  MOV EBP,dword ptr [EDI + 0x40]
006cf418  XOR EBX,EBX
006cf41a  CMP EBP,EBX
006cf41c  MOV ESI,ECX
006cf41e  JNZ 0x006cf48e
006cf420  MOV dword ptr [ESI + 0x4],EBX
006cf423  MOV dword ptr [ESI + 0x8],EBX
006cf426  MOV dword ptr [ESI + 0xc],EBX
006cf429  MOV dword ptr [ESI + 0x10],EBX
006cf42c  MOV dword ptr [ESI + 0x18],EBX
006cf42f  MOV dword ptr [ESI + 0x1c],EBX
006cf432  MOV dword ptr [ESI + 0x20],EBX
006cf435  MOV dword ptr [ESI + 0x24],EBX
006cf438  MOV dword ptr [ESI + 0x2c],EBX
006cf43b  MOV dword ptr [ESI + 0x30],EBX
006cf43e  MOV dword ptr [ESI + 0x34],EBX
006cf441  MOV dword ptr [ESI + 0x38],EBX
006cf444  MOV EAX,0x3f800000
006cf449  MOV dword ptr [ESI],EAX
006cf44b  MOV dword ptr [ESI + 0x14],EAX
006cf44e  MOV dword ptr [ESI + 0x28],EAX
006cf451  MOV dword ptr [ESI + 0x3c],EAX
006cf454  POP EDI
006cf455  MOV dword ptr [ESI + 0x44],EBX
006cf458  MOV dword ptr [ESI + 0x48],EBX
006cf45b  MOV dword ptr [ESI + 0x4c],EBX
006cf45e  MOV dword ptr [ESI + 0x50],EBX
006cf461  MOV dword ptr [ESI + 0x58],EBX
006cf464  MOV dword ptr [ESI + 0x5c],EBX
006cf467  MOV dword ptr [ESI + 0x60],EBX
006cf46a  MOV dword ptr [ESI + 0x64],EBX
006cf46d  MOV dword ptr [ESI + 0x6c],EBX
006cf470  MOV dword ptr [ESI + 0x70],EBX
006cf473  MOV dword ptr [ESI + 0x74],EBX
006cf476  MOV dword ptr [ESI + 0x78],EBX
006cf479  MOV dword ptr [ESI + 0x40],EAX
006cf47c  MOV dword ptr [ESI + 0x54],EAX
006cf47f  MOV dword ptr [ESI + 0x68],EAX
006cf482  MOV dword ptr [ESI + 0x7c],EAX
006cf485  POP ESI
006cf486  POP EBP
006cf487  POP EBX
006cf488  ADD ESP,0xc
006cf48b  RET 0x14
006cf48e  PUSH EBP
006cf48f  PUSH ESI
006cf490  CALL 0x00444fe0
006cf495  MOV ECX,dword ptr [EDI + 0x4]
006cf498  MOV EAX,dword ptr [EBP + 0xbc]
006cf49e  ADD ESP,0x8
006cf4a1  CMP ECX,0x1
006cf4a4  MOV dword ptr [ESP + 0x14],EAX
006cf4a8  JZ 0x006cf4b4
006cf4aa  MOV EDX,dword ptr [EBP + 0xc0]
006cf4b0  MOV dword ptr [ESP + 0x10],EDX
006cf4b4  FLD float ptr [ESP + 0x24]
006cf4b8  FLD double ptr [0x008942e0]
006cf4be  FUCOMPP
006cf4c0  FNSTSW AX
006cf4c2  TEST AH,0x44
006cf4c5  JNP 0x006cf4cf
006cf4c7  MOV EAX,dword ptr [ESP + 0x24]
006cf4cb  MOV dword ptr [ESP + 0x14],EAX
006cf4cf  FLD float ptr [ESP + 0x28]
006cf4d3  FLD double ptr [0x008942e0]
006cf4d9  FUCOMPP
006cf4db  FNSTSW AX
006cf4dd  TEST AH,0x44
006cf4e0  JNP 0x006cf4ea
006cf4e2  MOV EDX,dword ptr [ESP + 0x28]
006cf4e6  MOV dword ptr [ESP + 0x10],EDX
006cf4ea  CMP ECX,0x1
006cf4ed  MOV EAX,dword ptr [EDI + 0x60]
006cf4f0  FILD dword ptr [EAX + 0x18]
006cf4f3  FIDIV dword ptr [EAX + 0x14]
006cf4f6  FSTP float ptr [ESP + 0x24]
006cf4fa  JZ 0x006cf50b
006cf4fc  CMP ECX,0x4
006cf4ff  JZ 0x006cf50b
006cf501  CMP ECX,0x2
006cf504  JZ 0x006cf50b
006cf506  CMP ECX,0x5
006cf509  JNZ 0x006cf519
006cf50b  FLD float ptr [ESP + 0x24]
006cf50f  FMUL float ptr [0x008af994]
006cf515  FSTP float ptr [ESP + 0x24]
006cf519  CMP ECX,0x8
006cf51c  JZ 0x006cf523
006cf51e  CMP ECX,0x9
006cf521  JNZ 0x006cf52b
006cf523  MOV dword ptr [ESP + 0x24],0x3f19a956
006cf52b  MOVZX EAX,word ptr [EBP + 0xc4]
006cf532  MOV dword ptr [ESP + 0x28],EAX
006cf536  FILD dword ptr [ESP + 0x28]
006cf53a  FMUL float ptr [0x008933d4]
006cf540  CALL 0x007c4b80
006cf545  MOV EDI,EAX
006cf547  PUSH EDI
006cf548  CALL 0x0045db30
006cf54d  FSTP float ptr [ESP + 0x2c]
006cf551  PUSH EDI
006cf552  CALL 0x0045dbf0
006cf557  FDIVR float ptr [ESP + 0x30]
006cf55b  MOVZX ECX,word ptr [EBP + 0xc4]
006cf562  MOV dword ptr [ESP + 0x30],ECX
006cf566  FDIVR float ptr [0x0089096c]
006cf56c  FSTP float ptr [ESP + 0x20]
006cf570  FILD dword ptr [ESP + 0x30]
006cf574  FMUL float ptr [ESP + 0x2c]
006cf578  FMUL float ptr [0x008933d4]
006cf57e  CALL 0x007c4b80
006cf583  MOV EDI,EAX
006cf585  PUSH EDI
006cf586  CALL 0x0045db30
006cf58b  FSTP float ptr [ESP + 0x30]
006cf58f  PUSH EDI
006cf590  CALL 0x0045dbf0
006cf595  FDIVR float ptr [ESP + 0x34]
006cf599  MOV EDX,dword ptr [ESP + 0x28]
006cf59d  LEA EDI,[ESI + 0x40]
006cf5a0  MOV EAX,0x3f800000
006cf5a5  MOV dword ptr [EDI],EAX
006cf5a7  MOV dword ptr [EDI + 0x4],EBX
006cf5aa  MOV dword ptr [EDI + 0x8],EBX
006cf5ad  MOV dword ptr [EDI + 0xc],EBX
006cf5b0  MOV dword ptr [EDI + 0x10],EBX
006cf5b3  MOV dword ptr [EDI + 0x14],EAX
006cf5b6  MOV dword ptr [EDI + 0x18],EBX
006cf5b9  MOV dword ptr [EDI + 0x1c],EBX
006cf5bc  MOV dword ptr [EDI + 0x20],EBX
006cf5bf  MOV dword ptr [EDI + 0x24],EBX
006cf5c2  MOV dword ptr [EDI + 0x28],EAX
006cf5c5  MOV dword ptr [EDI + 0x2c],EBX
006cf5c8  MOV dword ptr [EDI + 0x30],EBX
006cf5cb  MOV dword ptr [EDI + 0x34],EBX
006cf5ce  MOV dword ptr [EDI + 0x38],EBX
006cf5d1  MOV dword ptr [EDI + 0x3c],EAX
006cf5d4  MOV dword ptr [EDI],EDX
006cf5d6  MOV dword ptr [ESI + 0x6c],EAX
006cf5d9  MOV dword ptr [ESI + 0x7c],EBX
006cf5dc  FDIVR float ptr [0x0089096c]
006cf5e2  FLD float ptr [ESP + 0x20]
006cf5e6  FSUB float ptr [ESP + 0x24]
006cf5ea  FDIVR float ptr [ESP + 0x20]
006cf5ee  FXCH
006cf5f0  FCHS
006cf5f2  FSTP float ptr [ESI + 0x54]
006cf5f5  FST float ptr [ESI + 0x68]
006cf5f8  FMUL float ptr [ESP + 0x24]
006cf5fc  FCHS
006cf5fe  FSTP float ptr [ESI + 0x78]
006cf601  MOVZX EBP,word ptr [EBP + 0xc4]
006cf608  PUSH EBP
006cf609  CALL 0x006be9f0
006cf60e  MOV EAX,dword ptr [ESP + 0x34]
006cf612  ADD ESP,0x14
006cf615  PUSH EDI
006cf616  FSTP float ptr [EAX + 0xc]
006cf619  PUSH ESI
006cf61a  LEA EBP,[ESI + 0x80]
006cf620  PUSH EBP
006cf621  MOV dword ptr [ESI + 0xc],EBX
006cf624  MOV dword ptr [ESI + 0x1c],EBX
006cf627  MOV dword ptr [ESI + 0x2c],EBX
006cf62a  CALL 0x007e7d5e
006cf62f  CMP byte ptr [ESP + 0x30],BL
006cf633  JZ 0x006cf88d
006cf639  CMP EBX,0x5
006cf63c  JA 0x006cf7ee
006cf642  JMP dword ptr [EBX*0x4 + 0x6cf898]
006cf649  FLD float ptr [ESI + 0x8c]
006cf64f  FADD float ptr [EBP]
006cf652  FSTP float ptr [ESI + 0x140]
006cf658  FLD float ptr [ESI + 0x9c]
006cf65e  FADD float ptr [ESI + 0x90]
006cf664  FSTP float ptr [ESI + 0x144]
006cf66a  FLD float ptr [ESI + 0xac]
006cf670  FADD float ptr [ESI + 0xa0]
006cf676  FSTP float ptr [ESI + 0x148]
006cf67c  FLD float ptr [ESI + 0xbc]
006cf682  FADD float ptr [ESI + 0xb0]
006cf688  FSTP float ptr [ESI + 0x14c]
006cf68e  JMP 0x006cf7ee
006cf693  FLD float ptr [ESI + 0x8c]
006cf699  FSUB float ptr [EBP]
006cf69c  FSTP float ptr [ESI + 0x150]
006cf6a2  FLD float ptr [ESI + 0x9c]
006cf6a8  FSUB float ptr [ESI + 0x90]
006cf6ae  FSTP float ptr [ESI + 0x154]
006cf6b4  FLD float ptr [ESI + 0xac]
006cf6ba  FSUB float ptr [ESI + 0xa0]
006cf6c0  FSTP float ptr [ESI + 0x158]
006cf6c6  FLD float ptr [ESI + 0xbc]
006cf6cc  FSUB float ptr [ESI + 0xb0]
006cf6d2  FSTP float ptr [ESI + 0x15c]
006cf6d8  JMP 0x006cf7ee
006cf6dd  FLD float ptr [ESI + 0x8c]
006cf6e3  FADD float ptr [ESI + 0x84]
006cf6e9  FSTP float ptr [ESI + 0x160]
006cf6ef  FLD float ptr [ESI + 0x9c]
006cf6f5  FADD float ptr [ESI + 0x94]
006cf6fb  FSTP float ptr [ESI + 0x164]
006cf701  FLD float ptr [ESI + 0xac]
006cf707  FADD float ptr [ESI + 0xa4]
006cf70d  FSTP float ptr [ESI + 0x168]
006cf713  FLD float ptr [ESI + 0xbc]
006cf719  FADD float ptr [ESI + 0xb4]
006cf71f  FSTP float ptr [ESI + 0x16c]
006cf725  JMP 0x006cf7ee
006cf72a  FLD float ptr [ESI + 0x8c]
006cf730  FSUB float ptr [ESI + 0x84]
006cf736  FSTP float ptr [ESI + 0x170]
006cf73c  FLD float ptr [ESI + 0x9c]
006cf742  FSUB float ptr [ESI + 0x94]
006cf748  FSTP float ptr [ESI + 0x174]
006cf74e  FLD float ptr [ESI + 0xac]
006cf754  FSUB float ptr [ESI + 0xa4]
006cf75a  FSTP float ptr [ESI + 0x178]
006cf760  FLD float ptr [ESI + 0xbc]
006cf766  FSUB float ptr [ESI + 0xb4]
006cf76c  FSTP float ptr [ESI + 0x17c]
006cf772  JMP 0x006cf7ee
006cf774  MOV ECX,dword ptr [ESI + 0x88]
006cf77a  MOV dword ptr [ESI + 0x180],ECX
006cf780  MOV EDX,dword ptr [ESI + 0x98]
006cf786  MOV dword ptr [EDI + 0x144],EDX
006cf78c  MOV EAX,dword ptr [ESI + 0xa8]
006cf792  MOV dword ptr [EDI + 0x148],EAX
006cf798  MOV ECX,dword ptr [ESI + 0xb8]
006cf79e  MOV dword ptr [EDI + 0x14c],ECX
006cf7a4  JMP 0x006cf7ee
006cf7a6  FLD float ptr [ESI + 0x8c]
006cf7ac  FSUB float ptr [ESI + 0x88]
006cf7b2  FSTP float ptr [ESI + 0x190]
006cf7b8  FLD float ptr [ESI + 0x9c]
006cf7be  FSUB float ptr [ESI + 0x98]
006cf7c4  FSTP float ptr [ESI + 0x194]
006cf7ca  FLD float ptr [ESI + 0xac]
006cf7d0  FSUB float ptr [ESI + 0xa8]
006cf7d6  FSTP float ptr [ESI + 0x198]
006cf7dc  FLD float ptr [ESI + 0xbc]
006cf7e2  FSUB float ptr [ESI + 0xb8]
006cf7e8  FSTP float ptr [ESI + 0x19c]
006cf7ee  LEA EDX,[EBX + 0x14]
006cf7f1  SHL EDX,0x4
006cf7f4  FLD float ptr [EDX + ESI*0x1 + 0x8]
006cf7f8  LEA EAX,[EDX + ESI*0x1]
006cf7fb  FLD float ptr [EAX + 0x4]
006cf7fe  FLD float ptr [EAX]
006cf800  FLD ST0
006cf802  FMUL ST1
006cf804  FLD ST2
006cf806  FMUL ST3
006cf808  FADDP
006cf80a  FLD ST3
006cf80c  FMUL ST4
006cf80e  FADDP
006cf810  FSQRT
006cf812  FSTP ST3
006cf814  FSTP ST0
006cf816  FSTP ST0
006cf818  FDIVR float ptr [0x0089096c]
006cf81e  FLD ST0
006cf820  FMUL float ptr [EAX]
006cf822  FSTP float ptr [EAX]
006cf824  MOV EAX,EBX
006cf826  SHL EAX,0x4
006cf829  ADD EAX,ESI
006cf82b  FLD ST0
006cf82d  FMUL float ptr [EAX + 0x144]
006cf833  INC EBX
006cf834  CMP EBX,0x5
006cf837  FSTP float ptr [EAX + 0x144]
006cf83d  FLD ST0
006cf83f  FMUL float ptr [EAX + 0x148]
006cf845  FSTP float ptr [EAX + 0x148]
006cf84b  FMUL float ptr [EAX + 0x14c]
006cf851  FSTP float ptr [EAX + 0x14c]
006cf857  JLE 0x006cf63c
006cf85d  LEA EBX,[ESI + 0xc0]
006cf863  PUSH EDI
006cf864  PUSH EBX
006cf865  CALL 0x00444fe0
006cf86a  FLD float ptr [0x008f9210]
006cf870  FADD float ptr [ESI + 0xe8]
006cf876  ADD ESP,0x8
006cf879  PUSH EBX
006cf87a  PUSH ESI
006cf87b  FSTP float ptr [ESI + 0xe8]
006cf881  ADD ESI,0x100
006cf887  PUSH ESI
006cf888  CALL 0x007e7d5e
006cf88d  POP EDI
006cf88e  POP ESI
006cf88f  POP EBP
006cf890  POP EBX
006cf891  ADD ESP,0xc
006cf894  RET 0x14
