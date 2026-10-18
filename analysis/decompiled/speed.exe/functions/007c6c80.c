/* speed.exe 007c6c80 realloc_help; analysis pseudocode, not buildable source.
 * calls 007c7290 __free_dbg
 * calls 007d4d80 FUN_007d4d80
 * calls 007d4aa0 _memset
 * calls 007d4c60 FUN_007d4c60
 * calls 007c79c0 _CheckBytes
 * calls 007c6700 __malloc_dbg
 * calls 007d2670 __CrtDbgReport
 * calls 007d4c50 FUN_007d4c50
 * calls 007c7a10 __CrtCheckMemory
 * calls 007c7f30 __CrtIsValidHeapPointer
 */

/* Library Function - Single Match
    _realloc_help
   
   Library: Visual Studio 2003 Debug */

int * __cdecl
realloc_help(uint param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  code *pcVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  int *local_10;
  
  if (param_1 == 0) {
    piVar2 = (int *)__malloc_dbg(param_2,param_3,param_4,param_5);
  }
  else if ((param_6 == 0) || (param_2 != 0)) {
    if (DAT_009baa14 != 0) {
      if (DAT_009baa04 == DAT_009baa14 + -1) {
        iVar3 = __CrtCheckMemory();
        if ((iVar3 == 0) &&
           (iVar3 = __CrtDbgReport(2,"dbgheap.c",0x264,0,"_CrtCheckMemory()"), iVar3 == 1)) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
        DAT_009baa04 = 0;
      }
      else {
        DAT_009baa04 = DAT_009baa04 + 1;
      }
    }
    iVar3 = DAT_00906304;
    if ((DAT_00906308 != -1) && (DAT_00906304 == DAT_00906308)) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
    uVar8 = (*(code *)PTR_FUN_00906cc0)(2,param_1,param_2,param_3,DAT_00906304,param_4,param_5);
    uVar6 = (uint)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0) {
      if (param_4 == 0) {
        iVar3 = __CrtDbgReport(0,0,0,0,&DAT_008941f8,"Client hook re-allocation failure.\n");
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        iVar3 = __CrtDbgReport(0,0,0,0,"Client hook re-allocation failure at file %hs line %d.\n",
                               param_4,param_5);
        if (iVar3 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      piVar2 = (int *)0x0;
    }
    else if (param_2 < 0xffffffdc) {
      if (((param_3 == 1) || (uVar6 = param_3 & 0xffff, uVar6 == 4)) || ((param_3 & 0xffff) == 2)) {
        iVar5 = _CheckBytes((param_1 & 0xfffffffc) - 4,CONCAT31((int3)(uVar6 >> 8),DAT_0090630f),4);
        if (iVar5 != 0) {
          iVar3 = __CrtDbgReport(1,0,0,0,
                                 "The Block at 0x%p was allocated by aligned routines, use _aligned_realloc()"
                                 ,param_1);
          if (iVar3 != 1) {
            return (int *)0x0;
          }
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      else {
        iVar5 = __CrtDbgReport(1,0,0,0,&DAT_008941f8,
                               "Error: memory allocation: bad memory block type.\n");
        if (iVar5 == 1) {
          pcVar1 = (code *)swi(3);
          piVar4 = (int *)(*pcVar1)();
          return piVar4;
        }
      }
      iVar5 = __CrtIsValidHeapPointer(param_1);
      if ((iVar5 == 0) &&
         (iVar5 = __CrtDbgReport(2,"dbgheap.c",0x297,0,"_CrtIsValidHeapPointer(pUserData)"),
         iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar4 = (int *)(param_1 - 0x20);
      bVar7 = *(int *)(param_1 - 0xc) == 3;
      if (((bVar7) && ((*(int *)(param_1 - 0x14) != -0x1234544 || (*(int *)(param_1 - 8) != 0)))) &&
         (iVar5 = __CrtDbgReport(2,"dbgheap.c",0x2a1,0,
                                 "pOldBlock->nLine == IGNORE_LINE && pOldBlock->lRequest == IGNORE_REQ"
                                ), iVar5 == 1)) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      if (param_6 == 0) {
        local_10 = (int *)FUN_007d4c60(piVar4,param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      else {
        local_10 = (int *)FUN_007d4d80(piVar4,param_2 + 0x24);
        if (local_10 == (int *)0x0) {
          return (int *)0x0;
        }
      }
      DAT_00906304 = DAT_00906304 + 1;
      if (!bVar7) {
        DAT_009ba9fc = (DAT_009ba9fc - local_10[4]) + param_2;
        DAT_009baa10 = (DAT_009baa10 - local_10[4]) + param_2;
        if (DAT_009baa08 < DAT_009baa10) {
          DAT_009baa08 = DAT_009baa10;
        }
      }
      piVar2 = local_10 + 8;
      if ((uint)local_10[4] < param_2) {
        _memset((void *)((int)piVar2 + local_10[4]),(uint)DAT_0090630e,param_2 - local_10[4]);
      }
      _memset((void *)((int)piVar2 + param_2),(uint)DAT_0090630c,4);
      if (!bVar7) {
        local_10[2] = param_4;
        local_10[3] = param_5;
        local_10[6] = iVar3;
      }
      local_10[4] = param_2;
      if (((param_6 == 0) && (local_10 != piVar4)) &&
         (iVar3 = __CrtDbgReport(2,"dbgheap.c",0x2eb,0,
                                 "fRealloc || (!fRealloc && pNewBlock == pOldBlock)"), iVar3 == 1))
      {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      if ((local_10 != piVar4) && (!bVar7)) {
        if (*local_10 == 0) {
          if ((DAT_009baa00 != piVar4) &&
             (iVar3 = __CrtDbgReport(2,"dbgheap.c",0x2fc,0,"_pLastBlock == pOldBlock"), iVar3 == 1))
          {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_009baa00 = (int *)local_10[1];
        }
        else {
          *(int *)(*local_10 + 4) = local_10[1];
        }
        if (local_10[1] == 0) {
          if ((DAT_009baa0c != piVar4) &&
             (iVar3 = __CrtDbgReport(2,"dbgheap.c",0x307,0,"_pFirstBlock == pOldBlock"), iVar3 == 1)
             ) {
            pcVar1 = (code *)swi(3);
            piVar4 = (int *)(*pcVar1)();
            return piVar4;
          }
          DAT_009baa0c = (int *)*local_10;
        }
        else {
          *(int *)local_10[1] = *local_10;
        }
        if (DAT_009baa0c == (int *)0x0) {
          DAT_009baa00 = local_10;
        }
        else {
          DAT_009baa0c[1] = (int)local_10;
        }
        *local_10 = (int)DAT_009baa0c;
        local_10[1] = 0;
        DAT_009baa0c = local_10;
      }
    }
    else {
      iVar3 = __CrtDbgReport(1,0,0,0,"Allocation too large or negative: %Iu bytes.\n",param_2);
      if (iVar3 == 1) {
        pcVar1 = (code *)swi(3);
        piVar4 = (int *)(*pcVar1)();
        return piVar4;
      }
      piVar2 = (int *)0x0;
    }
  }
  else {
    __free_dbg(param_1,param_3);
    piVar2 = (int *)0x0;
  }
  return piVar2;
}

