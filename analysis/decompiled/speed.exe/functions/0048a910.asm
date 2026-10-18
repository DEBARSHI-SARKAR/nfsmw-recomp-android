0048a910  SUB ESP,0x100
0048a916  PUSH EBX
0048a917  PUSH EBP
0048a918  PUSH ESI
0048a919  PUSH EDI
0048a91a  MOV ESI,ECX
0048a91c  MOV ECX,dword ptr [ESP + 0x114]
0048a923  LEA EAX,[ESP + 0x1c]
0048a927  PUSH EAX
0048a928  XOR EDI,EDI
0048a92a  PUSH ECX
0048a92b  MOV ECX,ESI
0048a92d  MOV dword ptr [ESP + 0x24],EDI
0048a931  MOV dword ptr [ESP + 0x28],EDI
0048a935  MOV dword ptr [ESP + 0x2c],EDI
0048a939  CALL 0x00486e30
0048a93e  LEA EDX,[ESP + 0xd0]
0048a945  PUSH EDX
0048a946  LEA EAX,[ESP + 0x20]
0048a94a  PUSH EAX
0048a94b  MOV ECX,ESI
0048a94d  CALL 0x00486ec0
0048a952  LEA EBP,[ESI + 0xa4]
0048a958  MOV ECX,EBP
0048a95a  MOV EDX,dword ptr [ECX]
0048a95c  MOV EAX,dword ptr [ECX + 0x4]
0048a95f  MOV ECX,dword ptr [ECX + 0x8]
0048a962  MOV dword ptr [ESP + 0x14],EAX
0048a966  LEA EAX,[ESI + 0x98]
0048a96c  MOV dword ptr [ESP + 0xb4],EAX
0048a973  MOV dword ptr [ESP + 0x10],EDX
0048a977  MOV EDX,dword ptr [EAX]
0048a979  MOV dword ptr [ESP + 0x18],ECX
0048a97d  MOV ECX,dword ptr [EAX + 0x4]
0048a980  MOV dword ptr [ESP + 0x28],EDX
0048a984  MOV EDX,dword ptr [EAX + 0x8]
0048a987  MOV EAX,dword ptr [ESI + 0xd0]
0048a98d  MOV dword ptr [ESP + 0x4c],EAX
0048a991  MOV EAX,dword ptr [ESP + 0x118]
0048a998  XOR EBX,EBX
0048a99a  CMP EAX,EDI
0048a99c  MOV dword ptr [ESP + 0x2c],ECX
0048a9a0  MOV dword ptr [ESP + 0x30],EDX
0048a9a4  MOV dword ptr [ESP + 0x40],EDI
0048a9a8  MOV dword ptr [ESP + 0x44],EDI
0048a9ac  MOV dword ptr [ESP + 0x48],EDI
0048a9b0  MOV dword ptr [ESP + 0x50],EDI
0048a9b4  MOV dword ptr [ESP + 0x54],EDI
0048a9b8  MOV dword ptr [ESP + 0x58],EDI
0048a9bc  MOV dword ptr [ESP + 0x80],EBX
0048a9c3  JLE 0x0048acdf
0048a9c9  LEA ESP,[ESP]
0048a9d0  FLD float ptr [ESP + 0x24]
0048a9d4  FMUL float ptr [ESP + 0x14]
0048a9d8  FLD float ptr [ESP + 0x20]
0048a9dc  FMUL float ptr [ESP + 0x18]
0048a9e0  FSUBP
0048a9e2  FSTP float ptr [ESP + 0x90]
0048a9e9  MOV ECX,dword ptr [ESP + 0x90]
0048a9f0  FLD float ptr [ESP + 0x18]
0048a9f4  MOV dword ptr [ESP + 0xa8],ECX
0048a9fb  FMUL float ptr [ESP + 0x1c]
0048a9ff  PUSH ECX
0048aa00  FLD float ptr [ESP + 0x28]
0048aa04  FMUL float ptr [ESP + 0x14]
0048aa08  FSUBP
0048aa0a  FSTP float ptr [ESP + 0x98]
0048aa11  MOV EDX,dword ptr [ESP + 0x98]
0048aa18  FLD float ptr [ESP + 0x24]
0048aa1c  MOV dword ptr [ESP + 0xb0],EDX
0048aa23  FMUL float ptr [ESP + 0x14]
0048aa27  FLD float ptr [ESP + 0x18]
0048aa2b  FMUL float ptr [ESP + 0x20]
0048aa2f  FSUBP
0048aa31  FSTP float ptr [ESP + 0x9c]
0048aa38  MOV EAX,dword ptr [ESP + 0x9c]
0048aa3f  FLD float ptr [ESP + 0xac]
0048aa46  MOV dword ptr [ESP + 0xb4],EAX
0048aa4d  FADD float ptr [ESP + 0x2c]
0048aa51  FSTP float ptr [ESP + 0x88]
0048aa58  FLD float ptr [ESP + 0xb0]
0048aa5f  FADD float ptr [ESP + 0x30]
0048aa63  FSTP float ptr [ESP + 0x8c]
0048aa6a  FLD float ptr [ESP + 0xb4]
0048aa71  FADD float ptr [ESP + 0x34]
0048aa75  FSTP float ptr [ESP + 0x90]
0048aa7c  FLD float ptr [ESP + 0x88]
0048aa83  FMUL float ptr [ESP + 0x50]
0048aa87  FSTP float ptr [ESP + 0x38]
0048aa8b  FLD float ptr [ESP + 0x8c]
0048aa92  FMUL float ptr [ESP + 0x50]
0048aa96  FSTP float ptr [ESP + 0x3c]
0048aa9a  FLD float ptr [ESP + 0x90]
0048aaa1  FMUL float ptr [ESP + 0x50]
0048aaa5  FST float ptr [ESP + 0x40]
0048aaa9  FMUL float ptr [ESP + 0x40]
0048aaad  FLD float ptr [ESP + 0x3c]
0048aab1  FMUL float ptr [ESP + 0x3c]
0048aab5  FADDP
0048aab7  FLD float ptr [ESP + 0x38]
0048aabb  FMUL float ptr [ESP + 0x38]
0048aabf  FADDP
0048aac1  FSTP float ptr [ESP]
0048aac4  CALL 0x005c5e80
0048aac9  FLD float ptr [0x00890968]
0048aacf  FUCOMPP
0048aad1  ADD ESP,0x4
0048aad4  FNSTSW AX
0048aad6  TEST AH,0x44
0048aad9  JNP 0x0048acdb
0048aadf  CMP EBX,EDI
0048aae1  FLD float ptr [ESP + 0x34]
0048aae5  FMUL float ptr [0x00890da8]
0048aaeb  FLD float ptr [ESP + 0x38]
0048aaef  FMUL float ptr [0x00890da8]
0048aaf5  FST float ptr [ESP + 0xbc]
0048aafc  FLD float ptr [ESP + 0x3c]
0048ab00  FMUL float ptr [0x00890da8]
0048ab06  FSTP float ptr [ESP + 0xc0]
0048ab0d  MOV ECX,dword ptr [ESP + 0xc0]
0048ab14  FLD ST1
0048ab16  MOV dword ptr [ESP + 0x64],ECX
0048ab1a  FSTP float ptr [ESP + 0x5c]
0048ab1e  FSTP float ptr [ESP + 0x60]
0048ab22  JNZ 0x0048abb8
0048ab28  MOV EAX,dword ptr [ESP + 0x5c]
0048ab2c  FSTP ST0
0048ab2e  FLD float ptr [ESP + 0x84]
0048ab35  MOV ECX,dword ptr [ESP + 0x60]
0048ab39  FMUL float ptr [0x00890da8]
0048ab3f  LEA EDX,[ESI + 0xf0]
0048ab45  FLD float ptr [ESP + 0x88]
0048ab4c  MOV dword ptr [EDX],EAX
0048ab4e  FMUL float ptr [0x00890da8]
0048ab54  MOV EAX,dword ptr [ESP + 0x64]
0048ab58  FLD float ptr [ESP + 0x8c]
0048ab5f  MOV dword ptr [EDX + 0x4],ECX
0048ab62  FMUL float ptr [0x00890da8]
0048ab68  MOV dword ptr [EDX + 0x8],EAX
0048ab6b  LEA EDX,[ESI + 0xd8]
0048ab71  FSTP float ptr [ESP + 0xcc]
0048ab78  MOV ECX,dword ptr [ESP + 0xcc]
0048ab7f  FXCH
0048ab81  MOV dword ptr [ESP + 0xa4],ECX
0048ab88  FSTP float ptr [ESP + 0x9c]
0048ab8f  MOV EAX,dword ptr [ESP + 0x9c]
0048ab96  MOV dword ptr [EDX],EAX
0048ab98  MOV EAX,dword ptr [ESP + 0xa4]
0048ab9f  FSTP float ptr [ESP + 0xa0]
0048aba6  MOV ECX,dword ptr [ESP + 0xa0]
0048abad  MOV dword ptr [EDX + 0x4],ECX
0048abb0  MOV dword ptr [EDX + 0x8],EAX
0048abb3  JMP 0x0048acc4
0048abb8  FILD dword ptr [ESP + 0x80]
0048abbf  LEA ECX,[ESP + 0x68]
0048abc3  PUSH ECX
0048abc4  LEA EDX,[ESP + 0x78]
0048abc8  FIDIV dword ptr [ESP + 0x11c]
0048abcf  PUSH EDX
0048abd0  LEA EAX,[ESP + 0xd8]
0048abd7  PUSH EAX
0048abd8  LEA ECX,[ESP + 0x28]
0048abdc  PUSH ECX
0048abdd  LEA EDX,[ESP + 0x6c]
0048abe1  PUSH EDX
0048abe2  MOV ECX,ESI
0048abe4  MOV dword ptr [ESP + 0x88],EDI
0048abeb  MOV dword ptr [ESP + 0x8c],EDI
0048abf2  MOV dword ptr [ESP + 0x90],EDI
0048abf9  MOV dword ptr [ESP + 0x7c],EDI
0048abfd  MOV dword ptr [ESP + 0x80],EDI
0048ac04  MOV dword ptr [ESP + 0x84],EDI
0048ac0b  FXCH
0048ac0d  FMUL ST1
0048ac0f  FSTP float ptr [ESP + 0x70]
0048ac13  FLD float ptr [ESP + 0xd0]
0048ac1a  FMUL ST1
0048ac1c  FSTP float ptr [ESP + 0x74]
0048ac20  FLD float ptr [ESP + 0xd4]
0048ac27  FMUL ST1
0048ac29  FSTP float ptr [ESP + 0x78]
0048ac2d  FSTP ST0
0048ac2f  CALL 0x00486da0
0048ac34  FLD float ptr [ESP + 0x74]
0048ac38  FADD float ptr [ESP + 0x28]
0048ac3c  FSTP float ptr [ESP + 0x28]
0048ac40  FLD float ptr [ESP + 0x78]
0048ac44  FADD float ptr [ESP + 0x2c]
0048ac48  FSTP float ptr [ESP + 0x2c]
0048ac4c  FLD float ptr [ESP + 0x7c]
0048ac50  FADD float ptr [ESP + 0x30]
0048ac54  FSTP float ptr [ESP + 0x30]
0048ac58  FLD float ptr [ESP + 0x68]
0048ac5c  FADD float ptr [ESP + 0x10]
0048ac60  FSTP float ptr [ESP + 0x10]
0048ac64  FLD float ptr [ESP + 0x6c]
0048ac68  FADD float ptr [ESP + 0x14]
0048ac6c  FSTP float ptr [ESP + 0x14]
0048ac70  FLD float ptr [ESP + 0x70]
0048ac74  FADD float ptr [ESP + 0x18]
0048ac78  FSTP float ptr [ESP + 0x18]
0048ac7c  FLD float ptr [ESP + 0x40]
0048ac80  FADD float ptr [ESP + 0x74]
0048ac84  FSTP float ptr [ESP + 0x40]
0048ac88  FLD float ptr [ESP + 0x44]
0048ac8c  FADD float ptr [ESP + 0x78]
0048ac90  FSTP float ptr [ESP + 0x44]
0048ac94  FLD float ptr [ESP + 0x48]
0048ac98  FADD float ptr [ESP + 0x7c]
0048ac9c  FSTP float ptr [ESP + 0x48]
0048aca0  FLD float ptr [ESP + 0x50]
0048aca4  FADD float ptr [ESP + 0x68]
0048aca8  FSTP float ptr [ESP + 0x50]
0048acac  FLD float ptr [ESP + 0x54]
0048acb0  FADD float ptr [ESP + 0x6c]
0048acb4  FSTP float ptr [ESP + 0x54]
0048acb8  FLD float ptr [ESP + 0x58]
0048acbc  FADD float ptr [ESP + 0x70]
0048acc0  FSTP float ptr [ESP + 0x58]
0048acc4  MOV EAX,dword ptr [ESP + 0x118]
0048accb  INC EBX
0048accc  CMP EBX,EAX
0048acce  MOV dword ptr [ESP + 0x80],EBX
0048acd5  JL 0x0048a9d0
0048acdb  CMP EBX,EDI
0048acdd  JNZ 0x0048acee
0048acdf  POP EDI
0048ace0  POP ESI
0048ace1  POP EBP
0048ace2  XOR AL,AL
0048ace4  POP EBX
0048ace5  ADD ESP,0x100
0048aceb  RET 0x8
0048acee  MOV EAX,dword ptr [ESP + 0xb4]
0048acf5  FLD float ptr [ESP + 0x40]
0048acf9  FADD float ptr [EAX]
0048acfb  POP EDI
0048acfc  POP ESI
0048acfd  FSTP float ptr [EAX]
0048acff  FLD float ptr [ESP + 0x3c]
0048ad03  FADD float ptr [EAX + 0x4]
0048ad06  FSTP float ptr [EAX + 0x4]
0048ad09  FLD float ptr [ESP + 0x40]
0048ad0d  FADD float ptr [EAX + 0x8]
0048ad10  FSTP float ptr [EAX + 0x8]
0048ad13  MOV AL,0x1
0048ad15  FLD float ptr [ESP + 0x48]
0048ad19  FADD float ptr [EBP]
0048ad1c  FSTP float ptr [EBP]
0048ad1f  FLD float ptr [ESP + 0x4c]
0048ad23  FADD float ptr [EBP + 0x4]
0048ad26  FSTP float ptr [EBP + 0x4]
0048ad29  FLD float ptr [ESP + 0x50]
0048ad2d  FADD float ptr [EBP + 0x8]
0048ad30  FSTP float ptr [EBP + 0x8]
0048ad33  POP EBP
0048ad34  POP EBX
0048ad35  ADD ESP,0x100
0048ad3b  RET 0x8
