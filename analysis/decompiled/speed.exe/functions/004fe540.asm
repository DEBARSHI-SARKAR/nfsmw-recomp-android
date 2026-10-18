004fe540  MOV EAX,dword ptr [ESP + 0x4]
004fe544  MOV ECX,EAX
004fe546  SHR ECX,0x18
004fe549  TEST ECX,ECX
004fe54b  MOV dword ptr [ESP + 0x4],ECX
004fe54f  FILD dword ptr [ESP + 0x4]
004fe553  JGE 0x004fe55b
004fe555  FADD float ptr [0x00891214]
004fe55b  FMUL float ptr [0x00899dd0]
004fe561  MOV ECX,dword ptr [ESP + 0x8]
004fe565  MOV EDX,EAX
004fe567  SHR EDX,0x10
004fe56a  AND EDX,0xff
004fe570  FSTP float ptr [ECX]
004fe572  TEST EDX,EDX
004fe574  MOV dword ptr [ESP + 0x4],EDX
004fe578  FILD dword ptr [ESP + 0x4]
004fe57c  JGE 0x004fe584
004fe57e  FADD float ptr [0x00891214]
004fe584  FMUL float ptr [0x00899dd0]
004fe58a  MOV EDX,EAX
004fe58c  SHR EDX,0x8
004fe58f  AND EDX,0xff
004fe595  TEST EDX,EDX
004fe597  FSTP float ptr [ECX + 0x4]
004fe59a  MOV dword ptr [ESP + 0x4],EDX
004fe59e  FILD dword ptr [ESP + 0x4]
004fe5a2  JGE 0x004fe5aa
004fe5a4  FADD float ptr [0x00891214]
004fe5aa  FMUL float ptr [0x00899dd0]
004fe5b0  AND EAX,0xff
004fe5b5  TEST EAX,EAX
004fe5b7  MOV dword ptr [ESP + 0x4],EAX
004fe5bb  FSTP float ptr [ECX + 0x8]
004fe5be  FILD dword ptr [ESP + 0x4]
004fe5c2  JGE 0x004fe5ca
004fe5c4  FADD float ptr [0x00891214]
004fe5ca  FMUL float ptr [0x00899dd0]
004fe5d0  FSTP float ptr [ECX + 0xc]
004fe5d3  RET
