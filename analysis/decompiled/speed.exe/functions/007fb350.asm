007fb350  MOV EBX,dword ptr [ESI + 0x14]
007fb353  MOV EAX,dword ptr [ESI + 0xc]
007fb356  MOV EDI,dword ptr [ESI + 0x8]
007fb359  MOV EBP,dword ptr [ESI + 0x18]
007fb35c  OR EDI,EBX
007fb35e  OR EBP,EAX
007fb360  OR EDI,EBP
007fb362  MOV ECX,dword ptr [ESI + 0x10]
007fb365  OR EDI,ECX
007fb367  MOV ECX,dword ptr [ESI + 0x4]
007fb36a  OR EDI,ECX
007fb36c  MOV EDX,dword ptr [ESI + 0x1c]
007fb36f  OR EDI,EDX
007fb371  JZ 0x007fb481
007fb377  LEA EDI,[EAX + EBX*0x1]
007fb37a  SUB EBX,EAX
007fb37c  LEA EAX,[EDX + ECX*0x1]
007fb37f  SUB ECX,EDX
007fb381  MOV dword ptr [0x00909e88],EBX
007fb387  MOV dword ptr [0x00909e8c],ECX
007fb38d  LEA EBP,[EDI + EAX*0x1]
007fb390  SUB EAX,EDI
007fb392  FILD dword ptr [0x00909e88]
007fb398  FILD dword ptr [0x00909e8c]
007fb39e  FLD ST0
007fb3a0  FMUL float ptr [0x00909ea0]
007fb3a6  FXCH ST2
007fb3a8  FADD ST1,ST0
007fb3aa  FMUL float ptr [0x00909e9c]
007fb3b0  FXCH
007fb3b2  FMUL float ptr [0x00909ea4]
007fb3b8  IMUL dword ptr [0x00909e98]
007fb3be  FADD ST1,ST0
007fb3c0  FSUBP ST2,ST0
007fb3c2  FADD float ptr [0x00909ea8]
007fb3c8  FXCH
007fb3ca  FADD float ptr [0x00909ea8]
007fb3d0  MOV EAX,dword ptr [ESI + 0x8]
007fb3d3  MOV EBX,dword ptr [ESI + 0x18]
007fb3d6  SHL EDX,0x1
007fb3d8  FSTP double ptr [0x00909e90]
007fb3de  FSTP double ptr [0x00909e88]
007fb3e4  MOV ECX,dword ptr [0x00909e88]
007fb3ea  MOV EDI,dword ptr [0x00909e90]
007fb3f0  ADD ECX,EDX
007fb3f2  ADD EDX,EDI
007fb3f4  ADD EDI,EBP
007fb3f6  MOV dword ptr [0x00909e8c],ECX
007fb3fc  MOV dword ptr [0x00909e90],EDX
007fb402  MOV dword ptr [0x00909e94],EDI
007fb408  MOV ECX,dword ptr [ESI]
007fb40a  MOV EDX,dword ptr [ESI + 0x10]
007fb40d  LEA ESI,[EBX + EAX*0x1]
007fb410  SUB EAX,EBX
007fb412  LEA EBX,[EDX + ECX*0x1]
007fb415  SUB ECX,EDX
007fb417  IMUL dword ptr [0x00909e98]
007fb41d  SHL EDX,0x1
007fb41f  MOV EDI,dword ptr [0x00909e84]
007fb425  ADD ESI,EDX
007fb427  MOV EBP,dword ptr [0x00909e8c]
007fb42d  LEA EAX,[EDX + ECX*0x1]
007fb430  SUB ECX,EDX
007fb432  LEA EDX,[ESI + EBX*0x1]
007fb435  SUB EBX,ESI
007fb437  LEA ESI,[ECX + EBP*0x1]
007fb43a  SUB ECX,EBP
007fb43c  MOV EBP,dword ptr [0x00909e88]
007fb442  MOV dword ptr [EDI + 0x48],ESI
007fb445  MOV ESI,dword ptr [0x00909e90]
007fb44b  MOV dword ptr [EDI + 0xb4],ECX
007fb451  LEA ECX,[EBX + EBP*0x1]
007fb454  SUB EBX,EBP
007fb456  MOV EBP,dword ptr [0x00909e94]
007fb45c  MOV dword ptr [EDI + 0x6c],ECX
007fb45f  MOV dword ptr [EDI + 0x90],EBX
007fb465  LEA EBX,[ESI + EAX*0x1]
007fb468  SUB EAX,ESI
007fb46a  LEA ECX,[EDX + EBP*0x1]
007fb46d  SUB EDX,EBP
007fb46f  MOV dword ptr [EDI],ECX
007fb471  MOV dword ptr [EDI + 0x24],EBX
007fb474  MOV dword ptr [EDI + 0xd8],EAX
007fb47a  MOV dword ptr [EDI + 0xfc],EDX
007fb480  RET
007fb481  MOV EAX,dword ptr [ESI]
007fb483  MOV EDI,dword ptr [0x00909e84]
007fb489  MOV dword ptr [EDI],EAX
007fb48b  MOV dword ptr [EDI + 0x24],EAX
007fb48e  MOV dword ptr [EDI + 0x48],EAX
007fb491  MOV dword ptr [EDI + 0x6c],EAX
007fb494  MOV dword ptr [EDI + 0x90],EAX
007fb49a  MOV dword ptr [EDI + 0xb4],EAX
007fb4a0  MOV dword ptr [EDI + 0xd8],EAX
007fb4a6  MOV dword ptr [EDI + 0xfc],EAX
007fb4ac  RET
