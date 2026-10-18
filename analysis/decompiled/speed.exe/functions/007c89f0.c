/* speed.exe 007c89f0 __aligned_offset_malloc_dbg; analysis pseudocode, not buildable source.
 * calls 007d4aa0 _memset
 * calls 007cb270 FUN_007cb270
 * calls 007d2670 __CrtDbgReport
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    __aligned_offset_malloc_dbg
   
   Library: Visual Studio 2003 Debug */

int __aligned_offset_malloc_dbg
              (uint param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint local_18;
  
  if ((param_2 - 1 & param_2) == 0) {
    if ((param_3 < param_1) || (param_3 == 0)) {
      if (param_2 < 5) {
        local_18 = 4;
      }
      else {
        local_18 = param_2;
      }
      local_18 = local_18 - 1;
      uVar5 = -param_3 & 3;
      iVar2 = __malloc_dbg(uVar5 + param_1 + 8 + local_18,1,param_4,param_5);
      if (iVar2 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = (iVar2 + local_18 + uVar5 + 8 + param_3 & ~local_18) - param_3;
        _memset((void *)((iVar4 - uVar5) + -4),(uint)DAT_0090630f,4);
        *(int *)((iVar4 - uVar5) + -8) = iVar2;
      }
    }
    else {
      iVar2 = __CrtDbgReport(2,"dbgheap.c",0x9a6,0,"(\"offset must be within size\", 0)");
      if (iVar2 == 1) {
        pcVar1 = (code *)swi(3);
        iVar2 = (*pcVar1)();
        return iVar2;
      }
      puVar3 = (undefined4 *)FUN_007cb270();
      *puVar3 = 0x16;
      iVar4 = 0;
    }
  }
  else {
    iVar2 = __CrtDbgReport(2,"dbgheap.c",0x99f,0,"(\"alignment must be a power of 2\",0)");
    if (iVar2 == 1) {
      pcVar1 = (code *)swi(3);
      iVar2 = (*pcVar1)();
      return iVar2;
    }
    puVar3 = (undefined4 *)FUN_007cb270();
    *puVar3 = 0x16;
    iVar4 = 0;
  }
  return iVar4;
}

