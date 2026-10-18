007fb4ad  MOV EBX,dword ptr [ESI + 0x14]
007fb4b0  MOV EAX,dword ptr [ESI + 0xc]
007fb4b3  MOV ECX,dword ptr [ESI + 0x4]
007fb4b6  MOV EDX,dword ptr [ESI + 0x1c]
007fb4b9  LEA EDI,[EAX + EBX*0x1]
007fb4bc  SUB EBX,EAX
007fb4be  LEA EAX,[EDX + ECX*0x1]
007fb4c1  SUB ECX,EDX
007fb4c3  MOV dword ptr [0x00909e88],EBX
007fb4c9  MOV dword ptr [0x00909e8c],ECX
007fb4cf  LEA EBP,[EDI + EAX*0x1]
007fb4d2  SUB EAX,EDI
007fb4d4  FILD dword ptr [0x00909e88]
007fb4da  FILD dword ptr [0x00909e8c]
007fb4e0  FLD ST0
007fb4e2  FMUL float ptr [0x00909ea0]
007fb4e8  FXCH ST2
007fb4ea  FADD ST1,ST0
007fb4ec  FMUL float ptr [0x00909e9c]
007fb4f2  FXCH
007fb4f4  FMUL float ptr [0x00909ea4]
007fb4fa  IMUL dword ptr [0x00909e98]
007fb500  FADD ST1,ST0
007fb502  FSUBP ST2,ST0
007fb504  FADD float ptr [0x00909ea8]
007fb50a  FXCH
007fb50c  FADD float ptr [0x00909ea8]
007fb512  MOV EAX,dword ptr [ESI + 0x8]
007fb515  MOV EBX,dword ptr [ESI + 0x18]
007fb518  SHL EDX,0x1
007fb51a  FSTP double ptr [0x00909e90]
007fb520  FSTP double ptr [0x00909e88]
007fb526  MOV ECX,dword ptr [0x00909e88]
007fb52c  MOV EDI,dword ptr [0x00909e90]
007fb532  ADD ECX,EDX
007fb534  ADD EDX,EDI
007fb536  ADD EDI,EBP
007fb538  MOV dword ptr [0x00909e8c],ECX
007fb53e  MOV dword ptr [0x00909e90],EDX
007fb544  MOV dword ptr [0x00909e94],EDI
007fb54a  MOV ECX,dword ptr [ESI]
007fb54c  MOV EDX,dword ptr [ESI + 0x10]
007fb54f  LEA ESI,[EBX + EAX*0x1]
007fb552  SUB EAX,EBX
007fb554  LEA EBX,[EDX + ECX*0x1]
007fb557  SUB ECX,EDX
007fb559  IMUL dword ptr [0x00909e98]
007fb55f  SHL EDX,0x1
007fb561  MOV EDI,dword ptr [0x00909e84]
007fb567  ADD ESI,EDX
007fb569  MOV EBP,dword ptr [0x00909e8c]
007fb56f  LEA EAX,[EDX + ECX*0x1]
007fb572  SUB ECX,EDX
007fb574  LEA EDX,[ESI + EBX*0x1]
007fb577  SUB EBX,ESI
007fb579  LEA ESI,[ECX + EBP*0x1]
007fb57c  SUB ECX,EBP
007fb57e  MOV EBP,dword ptr [0x00909e88]
007fb584  MOV dword ptr [EDI + 0x8],ESI
007fb587  MOV ESI,dword ptr [0x00909e90]
007fb58d  MOV dword ptr [EDI + 0x14],ECX
007fb590  LEA ECX,[EBX + EBP*0x1]
007fb593  SUB EBX,EBP
007fb595  MOV EBP,dword ptr [0x00909e94]
007fb59b  MOV dword ptr [EDI + 0xc],ECX
007fb59e  MOV dword ptr [EDI + 0x10],EBX
007fb5a1  LEA EBX,[ESI + EAX*0x1]
007fb5a4  SUB EAX,ESI
007fb5a6  LEA ECX,[EDX + EBP*0x1]
007fb5a9  SUB EDX,EBP
007fb5ab  MOV dword ptr [EDI],ECX
007fb5ad  MOV dword ptr [EDI + 0x4],EBX
007fb5b0  MOV dword ptr [EDI + 0x18],EAX
007fb5b3  MOV dword ptr [EDI + 0x1c],EDX
007fb5b6  RET
