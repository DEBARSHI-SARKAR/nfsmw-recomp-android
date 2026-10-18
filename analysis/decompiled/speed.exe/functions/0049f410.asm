0049f410  SUB ESP,0x14
0049f413  PUSH EBX
0049f414  PUSH EBP
0049f415  PUSH ESI
0049f416  MOV EAX,ECX
0049f418  MOV ECX,dword ptr [ESP + 0x2c]
0049f41c  PUSH EDI
0049f41d  MOV EDI,dword ptr [ESP + 0x34]
0049f421  CMP ECX,EDI
0049f423  MOV dword ptr [ESP + 0x10],EAX
0049f427  JNZ 0x0049f759
0049f42d  MOV ECX,dword ptr [ESP + 0x2c]
0049f431  MOV ESI,dword ptr [ESP + 0x28]
0049f435  MOV EDX,ECX
0049f437  SUB EDX,ESI
0049f439  INC EDX
0049f43a  CMP EDX,0x4
0049f43d  JL 0x0049f6a6
0049f443  MOV ECX,ESI
0049f445  IMUL ECX,ECX,0x70
0049f448  LEA EDX,[ESI + ESI*0x2]
0049f44b  SHL EDX,0x4
0049f44e  LEA EBX,[ECX + EAX*0x1 + 0xac]
0049f455  LEA EBP,[ESI + 0x2]
0049f458  LEA EAX,[EDX + EDI*0x1 + 0x4c]
0049f45c  LEA ESP,[ESP]
0049f460  MOV EDX,dword ptr [EBX + -0x70]
0049f463  CMP EDX,ESI
0049f465  JLE 0x0049f4cd
0049f467  LEA EDX,[EDX + EDX*0x2]
0049f46a  SHL EDX,0x4
0049f46d  FLD float ptr [EDX + EDI*0x1 + 0x10]
0049f471  ADD EDX,EDI
0049f473  FLD float ptr [EAX + -0x3c]
0049f476  FCHS
0049f478  FSTP float ptr [EDX + 0x10]
0049f47b  FCHS
0049f47d  FSTP float ptr [EAX + -0x3c]
0049f480  FLD float ptr [EDX + 0x14]
0049f483  FLD float ptr [EAX + -0x38]
0049f486  FCHS
0049f488  FSTP float ptr [EDX + 0x14]
0049f48b  MOV ECX,dword ptr [EAX + -0x34]
0049f48e  FCHS
0049f490  FSTP float ptr [EAX + -0x38]
0049f493  FLD float ptr [EDX + 0x18]
0049f496  MOV dword ptr [EDX + 0x18],ECX
0049f499  MOV ECX,dword ptr [EAX + -0x30]
0049f49c  FSTP float ptr [EAX + -0x34]
0049f49f  FLD float ptr [EDX + 0x1c]
0049f4a2  MOV dword ptr [EDX + 0x1c],ECX
0049f4a5  MOV ECX,dword ptr [EAX + -0x2c]
0049f4a8  FSTP float ptr [EAX + -0x30]
0049f4ab  FLD float ptr [EDX + 0x20]
0049f4ae  MOV dword ptr [EDX + 0x20],ECX
0049f4b1  MOV ECX,dword ptr [EAX + -0x28]
0049f4b4  FSTP float ptr [EAX + -0x2c]
0049f4b7  FLD float ptr [EDX + 0x24]
0049f4ba  MOV dword ptr [EDX + 0x24],ECX
0049f4bd  FSTP float ptr [EAX + -0x28]
0049f4c0  FLD float ptr [EDX + 0x28]
0049f4c3  FLD float ptr [EAX + -0x24]
0049f4c6  FCHS
0049f4c8  FSTP float ptr [EDX + 0x28]
0049f4cb  JMP 0x0049f4e2
0049f4cd  JNZ 0x0049f4e7
0049f4cf  FLD float ptr [EAX + -0x3c]
0049f4d2  FCHS
0049f4d4  FSTP float ptr [EAX + -0x3c]
0049f4d7  FLD float ptr [EAX + -0x38]
0049f4da  FCHS
0049f4dc  FSTP float ptr [EAX + -0x38]
0049f4df  FLD float ptr [EAX + -0x24]
0049f4e2  FCHS
0049f4e4  FSTP float ptr [EAX + -0x24]
0049f4e7  MOV EDX,dword ptr [EBX]
0049f4e9  LEA ECX,[EBP + -0x1]
0049f4ec  CMP EDX,ECX
0049f4ee  JLE 0x0049f554
0049f4f0  LEA EDX,[EDX + EDX*0x2]
0049f4f3  SHL EDX,0x4
0049f4f6  FLD float ptr [EDX + EDI*0x1 + 0x10]
0049f4fa  ADD EDX,EDI
0049f4fc  FLD float ptr [EAX + -0xc]
0049f4ff  FCHS
0049f501  FSTP float ptr [EDX + 0x10]
0049f504  FCHS
0049f506  FSTP float ptr [EAX + -0xc]
0049f509  FLD float ptr [EDX + 0x14]
0049f50c  FLD float ptr [EAX + -0x8]
0049f50f  FCHS
0049f511  FSTP float ptr [EDX + 0x14]
0049f514  MOV ECX,dword ptr [EAX + -0x4]
0049f517  FCHS
0049f519  FSTP float ptr [EAX + -0x8]
0049f51c  FLD float ptr [EDX + 0x18]
0049f51f  MOV dword ptr [EDX + 0x18],ECX
0049f522  MOV ECX,dword ptr [EAX]
0049f524  FSTP float ptr [EAX + -0x4]
0049f527  FLD float ptr [EDX + 0x1c]
0049f52a  MOV dword ptr [EDX + 0x1c],ECX
0049f52d  MOV ECX,dword ptr [EAX + 0x4]
0049f530  FSTP float ptr [EAX]
0049f532  FLD float ptr [EDX + 0x20]
0049f535  MOV dword ptr [EDX + 0x20],ECX
0049f538  MOV ECX,dword ptr [EAX + 0x8]
0049f53b  FSTP float ptr [EAX + 0x4]
0049f53e  FLD float ptr [EDX + 0x24]
0049f541  MOV dword ptr [EDX + 0x24],ECX
0049f544  FSTP float ptr [EAX + 0x8]
0049f547  FLD float ptr [EDX + 0x28]
0049f54a  FLD float ptr [EAX + 0xc]
0049f54d  FCHS
0049f54f  FSTP float ptr [EDX + 0x28]
0049f552  JMP 0x0049f569
0049f554  JNZ 0x0049f56e
0049f556  FLD float ptr [EAX + -0xc]
0049f559  FCHS
0049f55b  FSTP float ptr [EAX + -0xc]
0049f55e  FLD float ptr [EAX + -0x8]
0049f561  FCHS
0049f563  FSTP float ptr [EAX + -0x8]
0049f566  FLD float ptr [EAX + 0xc]
0049f569  FCHS
0049f56b  FSTP float ptr [EAX + 0xc]
0049f56e  MOV EDX,dword ptr [EBX + 0x70]
0049f571  CMP EDX,EBP
0049f573  JLE 0x0049f5db
0049f575  LEA EDX,[EDX + EDX*0x2]
0049f578  SHL EDX,0x4
0049f57b  FLD float ptr [EDX + EDI*0x1 + 0x10]
0049f57f  ADD EDX,EDI
0049f581  FLD float ptr [EAX + 0x24]
0049f584  FCHS
0049f586  FSTP float ptr [EDX + 0x10]
0049f589  FCHS
0049f58b  FSTP float ptr [EAX + 0x24]
0049f58e  FLD float ptr [EDX + 0x14]
0049f591  FLD float ptr [EAX + 0x28]
0049f594  FCHS
0049f596  FSTP float ptr [EDX + 0x14]
0049f599  MOV ECX,dword ptr [EAX + 0x2c]
0049f59c  FCHS
0049f59e  FSTP float ptr [EAX + 0x28]
0049f5a1  FLD float ptr [EDX + 0x18]
0049f5a4  MOV dword ptr [EDX + 0x18],ECX
0049f5a7  MOV ECX,dword ptr [EAX + 0x30]
0049f5aa  FSTP float ptr [EAX + 0x2c]
0049f5ad  FLD float ptr [EDX + 0x1c]
0049f5b0  MOV dword ptr [EDX + 0x1c],ECX
0049f5b3  MOV ECX,dword ptr [EAX + 0x34]
0049f5b6  FSTP float ptr [EAX + 0x30]
0049f5b9  FLD float ptr [EDX + 0x20]
0049f5bc  MOV dword ptr [EDX + 0x20],ECX
0049f5bf  MOV ECX,dword ptr [EAX + 0x38]
0049f5c2  FSTP float ptr [EAX + 0x34]
0049f5c5  FLD float ptr [EDX + 0x24]
0049f5c8  MOV dword ptr [EDX + 0x24],ECX
0049f5cb  FSTP float ptr [EAX + 0x38]
0049f5ce  FLD float ptr [EDX + 0x28]
0049f5d1  FLD float ptr [EAX + 0x3c]
0049f5d4  FCHS
0049f5d6  FSTP float ptr [EDX + 0x28]
0049f5d9  JMP 0x0049f5f0
0049f5db  JNZ 0x0049f5f5
0049f5dd  FLD float ptr [EAX + 0x24]
0049f5e0  FCHS
0049f5e2  FSTP float ptr [EAX + 0x24]
0049f5e5  FLD float ptr [EAX + 0x28]
0049f5e8  FCHS
0049f5ea  FSTP float ptr [EAX + 0x28]
0049f5ed  FLD float ptr [EAX + 0x3c]
0049f5f0  FCHS
0049f5f2  FSTP float ptr [EAX + 0x3c]
0049f5f5  MOV EDX,dword ptr [EBX + 0xe0]
0049f5fb  LEA ECX,[EBP + 0x1]
0049f5fe  CMP EDX,ECX
0049f600  JLE 0x0049f668
0049f602  LEA EDX,[EDX + EDX*0x2]
0049f605  SHL EDX,0x4
0049f608  FLD float ptr [EDX + EDI*0x1 + 0x10]
0049f60c  ADD EDX,EDI
0049f60e  FLD float ptr [EAX + 0x54]
0049f611  FCHS
0049f613  FSTP float ptr [EDX + 0x10]
0049f616  FCHS
0049f618  FSTP float ptr [EAX + 0x54]
0049f61b  FLD float ptr [EDX + 0x14]
0049f61e  FLD float ptr [EAX + 0x58]
0049f621  FCHS
0049f623  FSTP float ptr [EDX + 0x14]
0049f626  MOV ECX,dword ptr [EAX + 0x5c]
0049f629  FCHS
0049f62b  FSTP float ptr [EAX + 0x58]
0049f62e  FLD float ptr [EDX + 0x18]
0049f631  MOV dword ptr [EDX + 0x18],ECX
0049f634  MOV ECX,dword ptr [EAX + 0x60]
0049f637  FSTP float ptr [EAX + 0x5c]
0049f63a  FLD float ptr [EDX + 0x1c]
0049f63d  MOV dword ptr [EDX + 0x1c],ECX
0049f640  MOV ECX,dword ptr [EAX + 0x64]
0049f643  FSTP float ptr [EAX + 0x60]
0049f646  FLD float ptr [EDX + 0x20]
0049f649  MOV dword ptr [EDX + 0x20],ECX
0049f64c  MOV ECX,dword ptr [EAX + 0x68]
0049f64f  FSTP float ptr [EAX + 0x64]
0049f652  FLD float ptr [EDX + 0x24]
0049f655  MOV dword ptr [EDX + 0x24],ECX
0049f658  FSTP float ptr [EAX + 0x68]
0049f65b  FLD float ptr [EDX + 0x28]
0049f65e  FLD float ptr [EAX + 0x6c]
0049f661  FCHS
0049f663  FSTP float ptr [EDX + 0x28]
0049f666  JMP 0x0049f67d
0049f668  JNZ 0x0049f682
0049f66a  FLD float ptr [EAX + 0x54]
0049f66d  FCHS
0049f66f  FSTP float ptr [EAX + 0x54]
0049f672  FLD float ptr [EAX + 0x58]
0049f675  FCHS
0049f677  FSTP float ptr [EAX + 0x58]
0049f67a  FLD float ptr [EAX + 0x6c]
0049f67d  FCHS
0049f67f  FSTP float ptr [EAX + 0x6c]
0049f682  MOV ECX,dword ptr [ESP + 0x2c]
0049f686  ADD ESI,0x4
0049f689  LEA EDX,[ECX + -0x3]
0049f68c  ADD EAX,0xc0
0049f691  ADD EBP,0x4
0049f694  ADD EBX,0x1c0
0049f69a  CMP ESI,EDX
0049f69c  JLE 0x0049f460
0049f6a2  MOV EAX,dword ptr [ESP + 0x10]
0049f6a6  CMP ESI,ECX
0049f6a8  JG 0x0049f95b
0049f6ae  LEA EDX,[ESI + ESI*0x2]
0049f6b1  SHL EDX,0x4
0049f6b4  MOV EBX,ESI
0049f6b6  IMUL EBX,EBX,0x70
0049f6b9  LEA EDX,[EDX + EDI*0x1 + 0x1c]
0049f6bd  LEA EBX,[EBX + EAX*0x1 + 0x3c]
0049f6c1  MOV EAX,dword ptr [EBX]
0049f6c3  CMP EAX,ESI
0049f6c5  JLE 0x0049f72b
0049f6c7  LEA EAX,[EAX + EAX*0x2]
0049f6ca  SHL EAX,0x4
0049f6cd  FLD float ptr [EAX + EDI*0x1 + 0x10]
0049f6d1  ADD EAX,EDI
0049f6d3  FLD float ptr [EDX + -0xc]
0049f6d6  FCHS
0049f6d8  FSTP float ptr [EAX + 0x10]
0049f6db  FCHS
0049f6dd  FSTP float ptr [EDX + -0xc]
0049f6e0  FLD float ptr [EAX + 0x14]
0049f6e3  FLD float ptr [EDX + -0x8]
0049f6e6  FCHS
0049f6e8  FSTP float ptr [EAX + 0x14]
0049f6eb  MOV EBP,dword ptr [EDX + -0x4]
0049f6ee  FCHS
0049f6f0  FSTP float ptr [EDX + -0x8]
0049f6f3  FLD float ptr [EAX + 0x18]
0049f6f6  MOV dword ptr [EAX + 0x18],EBP
0049f6f9  MOV EBP,dword ptr [EDX]
0049f6fb  FSTP float ptr [EDX + -0x4]
0049f6fe  FLD float ptr [EAX + 0x1c]
0049f701  MOV dword ptr [EAX + 0x1c],EBP
0049f704  MOV EBP,dword ptr [EDX + 0x4]
0049f707  FSTP float ptr [EDX]
0049f709  FLD float ptr [EAX + 0x20]
0049f70c  MOV dword ptr [EAX + 0x20],EBP
0049f70f  MOV EBP,dword ptr [EDX + 0x8]
0049f712  FSTP float ptr [EDX + 0x4]
0049f715  FLD float ptr [EAX + 0x24]
0049f718  MOV dword ptr [EAX + 0x24],EBP
0049f71b  FSTP float ptr [EDX + 0x8]
0049f71e  FLD float ptr [EAX + 0x28]
0049f721  FLD float ptr [EDX + 0xc]
0049f724  FCHS
0049f726  FSTP float ptr [EAX + 0x28]
0049f729  JMP 0x0049f740
0049f72b  JNZ 0x0049f745
0049f72d  FLD float ptr [EDX + -0xc]
0049f730  FCHS
0049f732  FSTP float ptr [EDX + -0xc]
0049f735  FLD float ptr [EDX + -0x8]
0049f738  FCHS
0049f73a  FSTP float ptr [EDX + -0x8]
0049f73d  FLD float ptr [EDX + 0xc]
0049f740  FCHS
0049f742  FSTP float ptr [EDX + 0xc]
0049f745  INC ESI
0049f746  ADD EBX,0x70
0049f749  ADD EDX,0x30
0049f74c  CMP ESI,ECX
0049f74e  JLE 0x0049f6c1
0049f754  JMP 0x0049f95b
0049f759  MOV EBX,dword ptr [ESP + 0x2c]
0049f75d  MOV EDX,dword ptr [ESP + 0x28]
0049f761  MOV ESI,EBX
0049f763  SUB ESI,EDX
0049f765  INC ESI
0049f766  CMP ESI,0x4
0049f769  MOV EBP,EDX
0049f76b  JL 0x0049f8e7
0049f771  MOV ESI,EDX
0049f773  IMUL ESI,ESI,0x70
0049f776  SUB EBX,EDX
0049f778  LEA ESI,[ESI + EAX*0x1 + 0xac]
0049f77f  SUB EBX,0x3
0049f782  LEA EAX,[EDX + EDX*0x2]
0049f785  SHL EAX,0x4
0049f788  SHR EBX,0x2
0049f78b  INC EBX
0049f78c  LEA EAX,[EAX + ECX*0x1 + 0x38]
0049f790  LEA EBP,[EDX + EBX*0x4]
0049f793  MOV EDX,dword ptr [ESI + -0x70]
0049f796  MOV ECX,dword ptr [EAX + -0x38]
0049f799  LEA EDX,[EDX + EDX*0x2]
0049f79c  SHL EDX,0x4
0049f79f  MOV dword ptr [EDX + EDI*0x1],ECX
0049f7a2  MOV ECX,dword ptr [EAX + -0x34]
0049f7a5  MOV dword ptr [EDX + EDI*0x1 + 0x4],ECX
0049f7a9  MOV ECX,dword ptr [EAX + -0x30]
0049f7ac  MOV dword ptr [EDX + EDI*0x1 + 0x8],ECX
0049f7b0  FLD float ptr [EAX + -0x28]
0049f7b3  ADD EDX,EDI
0049f7b5  FCHS
0049f7b7  FSTP float ptr [EDX + 0x10]
0049f7ba  FLD float ptr [EAX + -0x24]
0049f7bd  FCHS
0049f7bf  FSTP float ptr [EDX + 0x14]
0049f7c2  MOV ECX,dword ptr [EAX + -0x20]
0049f7c5  MOV dword ptr [EDX + 0x18],ECX
0049f7c8  MOV ECX,dword ptr [EAX + -0x1c]
0049f7cb  MOV dword ptr [EDX + 0x1c],ECX
0049f7ce  MOV ECX,dword ptr [EAX + -0x18]
0049f7d1  MOV dword ptr [EDX + 0x20],ECX
0049f7d4  MOV ECX,dword ptr [EAX + -0x14]
0049f7d7  MOV dword ptr [EDX + 0x24],ECX
0049f7da  FLD float ptr [EAX + -0x10]
0049f7dd  FCHS
0049f7df  FSTP float ptr [EDX + 0x28]
0049f7e2  MOV EDX,dword ptr [ESI]
0049f7e4  MOV ECX,dword ptr [EAX + -0x8]
0049f7e7  LEA EDX,[EDX + EDX*0x2]
0049f7ea  SHL EDX,0x4
0049f7ed  MOV dword ptr [EDX + EDI*0x1],ECX
0049f7f0  MOV ECX,dword ptr [EAX + -0x4]
0049f7f3  MOV dword ptr [EDX + EDI*0x1 + 0x4],ECX
0049f7f7  MOV ECX,dword ptr [EAX]
0049f7f9  ADD EDX,EDI
0049f7fb  MOV dword ptr [EDX + 0x8],ECX
0049f7fe  FLD float ptr [EAX + 0x8]
0049f801  FCHS
0049f803  FSTP float ptr [EDX + 0x10]
0049f806  FLD float ptr [EAX + 0xc]
0049f809  FCHS
0049f80b  FSTP float ptr [EDX + 0x14]
0049f80e  MOV ECX,dword ptr [EAX + 0x10]
0049f811  MOV dword ptr [EDX + 0x18],ECX
0049f814  MOV ECX,dword ptr [EAX + 0x14]
0049f817  MOV dword ptr [EDX + 0x1c],ECX
0049f81a  MOV ECX,dword ptr [EAX + 0x18]
0049f81d  MOV dword ptr [EDX + 0x20],ECX
0049f820  MOV ECX,dword ptr [EAX + 0x1c]
0049f823  MOV dword ptr [EDX + 0x24],ECX
0049f826  FLD float ptr [EAX + 0x20]
0049f829  FCHS
0049f82b  FSTP float ptr [EDX + 0x28]
0049f82e  MOV EDX,dword ptr [ESI + 0x70]
0049f831  MOV ECX,dword ptr [EAX + 0x28]
0049f834  LEA EDX,[EDX + EDX*0x2]
0049f837  SHL EDX,0x4
0049f83a  ADD EDX,EDI
0049f83c  MOV dword ptr [EDX],ECX
0049f83e  MOV ECX,dword ptr [EAX + 0x2c]
0049f841  MOV dword ptr [EDX + 0x4],ECX
0049f844  MOV ECX,dword ptr [EAX + 0x30]
0049f847  MOV dword ptr [EDX + 0x8],ECX
0049f84a  FLD float ptr [EAX + 0x38]
0049f84d  FCHS
0049f84f  FSTP float ptr [EDX + 0x10]
0049f852  FLD float ptr [EAX + 0x3c]
0049f855  FCHS
0049f857  FSTP float ptr [EDX + 0x14]
0049f85a  MOV ECX,dword ptr [EAX + 0x40]
0049f85d  MOV dword ptr [EDX + 0x18],ECX
0049f860  MOV ECX,dword ptr [EAX + 0x44]
0049f863  MOV dword ptr [EDX + 0x1c],ECX
0049f866  MOV ECX,dword ptr [EAX + 0x48]
0049f869  MOV dword ptr [EDX + 0x20],ECX
0049f86c  MOV ECX,dword ptr [EAX + 0x4c]
0049f86f  MOV dword ptr [EDX + 0x24],ECX
0049f872  FLD float ptr [EAX + 0x50]
0049f875  FCHS
0049f877  FSTP float ptr [EDX + 0x28]
0049f87a  MOV EDX,dword ptr [ESI + 0xe0]
0049f880  MOV ECX,dword ptr [EAX + 0x58]
0049f883  LEA EDX,[EDX + EDX*0x2]
0049f886  SHL EDX,0x4
0049f889  ADD EDX,EDI
0049f88b  MOV dword ptr [EDX],ECX
0049f88d  MOV ECX,dword ptr [EAX + 0x5c]
0049f890  MOV dword ptr [EDX + 0x4],ECX
0049f893  MOV ECX,dword ptr [EAX + 0x60]
0049f896  MOV dword ptr [EDX + 0x8],ECX
0049f899  FLD float ptr [EAX + 0x68]
0049f89c  FCHS
0049f89e  ADD EAX,0xc0
0049f8a3  FSTP float ptr [EDX + 0x10]
0049f8a6  ADD ESI,0x1c0
0049f8ac  DEC EBX
0049f8ad  FLD float ptr [EAX + -0x54]
0049f8b0  FCHS
0049f8b2  FSTP float ptr [EDX + 0x14]
0049f8b5  MOV ECX,dword ptr [EAX + -0x50]
0049f8b8  MOV dword ptr [EDX + 0x18],ECX
0049f8bb  MOV ECX,dword ptr [EAX + -0x4c]
0049f8be  MOV dword ptr [EDX + 0x1c],ECX
0049f8c1  MOV ECX,dword ptr [EAX + -0x48]
0049f8c4  MOV dword ptr [EDX + 0x20],ECX
0049f8c7  MOV ECX,dword ptr [EAX + -0x44]
0049f8ca  MOV dword ptr [EDX + 0x24],ECX
0049f8cd  FLD float ptr [EAX + -0x40]
0049f8d0  FCHS
0049f8d2  FSTP float ptr [EDX + 0x28]
0049f8d5  JNZ 0x0049f793
0049f8db  MOV EBX,dword ptr [ESP + 0x2c]
0049f8df  MOV ECX,dword ptr [ESP + 0x30]
0049f8e3  MOV EAX,dword ptr [ESP + 0x10]
0049f8e7  CMP EBP,EBX
0049f8e9  JG 0x0049f95b
0049f8eb  LEA EDX,[EBP + EBP*0x2]
0049f8ef  SHL EDX,0x4
0049f8f2  LEA EDX,[EDX + ECX*0x1 + 0x8]
0049f8f6  MOV ECX,EBP
0049f8f8  IMUL ECX,ECX,0x70
0049f8fb  LEA ECX,[ECX + EAX*0x1 + 0x3c]
0049f8ff  MOV EAX,dword ptr [ESP + 0x2c]
0049f903  SUB EAX,EBP
0049f905  INC EAX
0049f906  MOV ESI,EAX
0049f908  MOV EAX,dword ptr [ECX]
0049f90a  MOV EBX,dword ptr [EDX + -0x8]
0049f90d  LEA EAX,[EAX + EAX*0x2]
0049f910  SHL EAX,0x4
0049f913  ADD EAX,EDI
0049f915  MOV dword ptr [EAX],EBX
0049f917  MOV EBX,dword ptr [EDX + -0x4]
0049f91a  MOV dword ptr [EAX + 0x4],EBX
0049f91d  MOV EBX,dword ptr [EDX]
0049f91f  MOV dword ptr [EAX + 0x8],EBX
0049f922  FLD float ptr [EDX + 0x8]
0049f925  FCHS
0049f927  ADD EDX,0x30
0049f92a  FSTP float ptr [EAX + 0x10]
0049f92d  ADD ECX,0x70
0049f930  DEC ESI
0049f931  FLD float ptr [EDX + -0x24]
0049f934  FCHS
0049f936  FSTP float ptr [EAX + 0x14]
0049f939  MOV EBX,dword ptr [EDX + -0x20]
0049f93c  MOV dword ptr [EAX + 0x18],EBX
0049f93f  MOV EBX,dword ptr [EDX + -0x1c]
0049f942  MOV dword ptr [EAX + 0x1c],EBX
0049f945  MOV EBX,dword ptr [EDX + -0x18]
0049f948  MOV dword ptr [EAX + 0x20],EBX
0049f94b  MOV EBX,dword ptr [EDX + -0x14]
0049f94e  MOV dword ptr [EAX + 0x24],EBX
0049f951  FLD float ptr [EDX + -0x10]
0049f954  FCHS
0049f956  FSTP float ptr [EAX + 0x28]
0049f959  JNZ 0x0049f908
0049f95b  MOV AL,byte ptr [ESP + 0x38]
0049f95f  TEST AL,AL
0049f961  JNZ 0x0049f9aa
0049f963  LEA EAX,[EDI + 0x10]
0049f966  MOV EDX,EAX
0049f968  MOV ECX,dword ptr [EDX]
0049f96a  MOV dword ptr [ESP + 0x14],ECX
0049f96e  FLD float ptr [ESP + 0x14]
0049f972  MOV ECX,dword ptr [EDX + 0x4]
0049f975  FCHS
0049f977  MOV dword ptr [ESP + 0x18],ECX
0049f97b  MOV ECX,dword ptr [EDX + 0x8]
0049f97e  MOV EDX,dword ptr [EDX + 0xc]
0049f981  FSTP float ptr [EDI + 0x18]
0049f984  FLD float ptr [ESP + 0x18]
0049f988  MOV dword ptr [ESP + 0x1c],ECX
0049f98c  FCHS
0049f98e  MOV dword ptr [ESP + 0x20],EDX
0049f992  FSTP float ptr [EDI + 0x1c]
0049f995  MOV dword ptr [EAX],ECX
0049f997  FLD float ptr [EDI + 0x20]
0049f99a  MOV dword ptr [EDI + 0x14],EDX
0049f99d  FCHS
0049f99f  FSTP float ptr [EDI + 0x20]
0049f9a2  FLD float ptr [EDI + 0x28]
0049f9a5  FCHS
0049f9a7  FSTP float ptr [EDI + 0x28]
0049f9aa  POP EDI
0049f9ab  POP ESI
0049f9ac  POP EBP
0049f9ad  POP EBX
0049f9ae  ADD ESP,0x14
0049f9b1  RET 0x14
