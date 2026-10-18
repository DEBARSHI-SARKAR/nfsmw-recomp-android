004fa510  SUB ESP,0x10
004fa513  MOV EAX,dword ptr [ESP + 0x14]
004fa517  MOV ECX,dword ptr [EAX]
004fa519  MOV EDX,dword ptr [EAX + 0x4]
004fa51c  MOV dword ptr [ESP],ECX
004fa51f  MOV ECX,dword ptr [EAX + 0x8]
004fa522  MOV dword ptr [ESP + 0x4],EDX
004fa526  MOV EDX,dword ptr [EAX + 0xc]
004fa529  MOV EAX,dword ptr [ESP + 0x18]
004fa52d  MOV dword ptr [ESP + 0xc],EDX
004fa531  FLD float ptr [ESP + 0xc]
004fa535  FMUL float ptr [EAX + 0x30]
004fa538  MOV dword ptr [ESP + 0x8],ECX
004fa53c  FLD float ptr [ESP + 0x8]
004fa540  MOV ECX,dword ptr [ESP + 0x1c]
004fa544  FMUL float ptr [EAX + 0x20]
004fa547  FADDP
004fa549  FLD float ptr [ESP + 0x4]
004fa54d  FMUL float ptr [EAX + 0x10]
004fa550  FADDP
004fa552  FLD float ptr [ESP]
004fa555  FMUL float ptr [EAX]
004fa557  FADDP
004fa559  FSTP float ptr [ECX]
004fa55b  FLD float ptr [ESP + 0xc]
004fa55f  FMUL float ptr [EAX + 0x34]
004fa562  FLD float ptr [ESP + 0x8]
004fa566  FMUL float ptr [EAX + 0x24]
004fa569  FADDP
004fa56b  FLD float ptr [ESP + 0x4]
004fa56f  FMUL float ptr [EAX + 0x14]
004fa572  FADDP
004fa574  FLD float ptr [ESP]
004fa577  FMUL float ptr [EAX + 0x4]
004fa57a  FADDP
004fa57c  FSTP float ptr [ECX + 0x4]
004fa57f  FLD float ptr [ESP + 0xc]
004fa583  FMUL float ptr [EAX + 0x38]
004fa586  FLD float ptr [ESP + 0x8]
004fa58a  FMUL float ptr [EAX + 0x28]
004fa58d  FADDP
004fa58f  FLD float ptr [ESP + 0x4]
004fa593  FMUL float ptr [EAX + 0x18]
004fa596  FADDP
004fa598  FLD float ptr [ESP]
004fa59b  FMUL float ptr [EAX + 0x8]
004fa59e  FADDP
004fa5a0  FSTP float ptr [ECX + 0x8]
004fa5a3  FLD float ptr [ESP + 0xc]
004fa5a7  FMUL float ptr [EAX + 0x3c]
004fa5aa  FLD float ptr [ESP + 0x8]
004fa5ae  FMUL float ptr [EAX + 0x2c]
004fa5b1  FADDP
004fa5b3  FLD float ptr [ESP + 0x4]
004fa5b7  FMUL float ptr [EAX + 0x1c]
004fa5ba  FADDP
004fa5bc  FLD float ptr [ESP]
004fa5bf  FMUL float ptr [EAX + 0xc]
004fa5c2  FADDP
004fa5c4  FSTP float ptr [ECX + 0xc]
004fa5c7  ADD ESP,0x10
004fa5ca  RET
