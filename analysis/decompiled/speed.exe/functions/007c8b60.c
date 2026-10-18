/* speed.exe 007c8b60 __aligned_offset_realloc_dbg; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007c7710 __msize
 * calls 007d4aa0 _memset
 * calls 007d6d30 FID_conflict:_memcpy
 * calls 007c8de0 __aligned_free_dbg
 * calls 007c89f0 __aligned_offset_malloc_dbg
 * calls 007cb270 FUN_007cb270
 * calls 007c79c0 _CheckBytes
 * calls 007d2670 __CrtDbgReport
 * calls 007c6700 __malloc_dbg
 */

/* Library Function - Single Match
    __aligned_offset_realloc_dbg
   
   Library: Visual Studio 2003 Debug */

void * __aligned_offset_realloc_dbg
                 (void *param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  void *pvVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  size_t sVar6;
  uint uVar7;
  uint local_24;
  uint local_20;
  
  if (param_1 == (void *)0x0) {
    pvVar2 = (void *)__aligned_offset_malloc_dbg(param_2,param_3,param_4,param_5,param_6);
  }
  else if (param_2 == 0) {
    __aligned_free_dbg(param_1);
    pvVar2 = (void *)0x0;
  }
  else {
    piVar3 = (int *)(((uint)param_1 & 0xfffffffc) - 8);
    iVar4 = _CheckBytes((int)param_1 + -4,DAT_0090630c,4);
    if (iVar4 == 0) {
      iVar4 = _CheckBytes(((uint)param_1 & 0xfffffffc) - 4,DAT_0090630f,4);
      if ((iVar4 == 0) &&
         (iVar4 = __CrtDbgReport(1,0,0,0,
                                 "Damage before 0x%p which was allocated by aligned routine\n",
                                 param_1), iVar4 == 1)) {
        pcVar1 = (code *)swi(3);
        pvVar2 = (void *)(*pcVar1)();
        return pvVar2;
      }
      if ((param_3 - 1 & param_3) == 0) {
        if ((param_4 < param_2) || (param_4 == 0)) {
          sVar6 = __msize((void *)*piVar3);
          local_24 = sVar6 - ((int)param_1 - *piVar3);
          if (param_3 < 5) {
            local_20 = 4;
          }
          else {
            local_20 = param_3;
          }
          local_20 = local_20 - 1;
          uVar7 = -param_4 & 3;
          iVar4 = __malloc_dbg(uVar7 + param_2 + 8 + local_20,1,param_5,param_6);
          if (iVar4 == 0) {
            pvVar2 = (void *)0x0;
          }
          else {
            pvVar2 = (void *)((iVar4 + local_20 + uVar7 + 8 + param_4 & ~local_20) - param_4);
            _memset((void *)((int)pvVar2 + (-4 - uVar7)),(uint)DAT_0090630f,4);
            *(int *)((int)pvVar2 + (-8 - uVar7)) = iVar4;
            if (param_2 < local_24) {
              local_24 = param_2;
            }
            FID_conflict__memcpy(pvVar2,param_1,local_24);
            __free_dbg(*piVar3,1);
          }
        }
        else {
          iVar4 = __CrtDbgReport(2,"dbgheap.c",0xa28,0,"(\"offset must be within size\", 0)");
          if (iVar4 == 1) {
            pcVar1 = (code *)swi(3);
            pvVar2 = (void *)(*pcVar1)();
            return pvVar2;
          }
          puVar5 = (undefined4 *)FUN_007cb270();
          *puVar5 = 0x16;
          pvVar2 = (void *)0x0;
        }
      }
      else {
        iVar4 = __CrtDbgReport(2,"dbgheap.c",0xa22,0,"(\"alignment must be a power of 2\",0)");
        if (iVar4 == 1) {
          pcVar1 = (code *)swi(3);
          pvVar2 = (void *)(*pcVar1)();
          return pvVar2;
        }
        puVar5 = (undefined4 *)FUN_007cb270();
        *puVar5 = 0x16;
        pvVar2 = (void *)0x0;
      }
    }
    else {
      iVar4 = __CrtDbgReport(1,0,0,0,
                             "The block at 0x%p was not allocated by _aligned routines, use realloc()"
                             ,param_1);
      if (iVar4 == 1) {
        pcVar1 = (code *)swi(3);
        pvVar2 = (void *)(*pcVar1)();
        return pvVar2;
      }
      pvVar2 = (void *)0x0;
    }
  }
  return pvVar2;
}

