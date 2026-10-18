/* speed.exe 0073a7d0 FUN_0073a7d0; analysis pseudocode, not buildable source.
 * calls 004655f0 FUN_004655f0
 * calls 00464a50 FUN_00464a50
 * calls 00460af0 FUN_00460af0
 * calls 00465a70 FUN_00465a70
 * calls 0045cd20 __break
 * calls 0064a970 thunk_FUN_0045ed50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0073a7d0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_00460af0(param_1);
  if (iVar2 <= DAT_009ae40c) {
    bVar1 = param_1 - DAT_009ae454 < iVar2 + 0x480;
    iVar4 = param_1;
    if (bVar1) {
      iVar4 = 0;
      if (0 < iVar2) {
        piVar3 = &DAT_009ae3cc;
        do {
          iVar5 = iVar2 - iVar4;
          if (*piVar3 < iVar2 - iVar4) {
            iVar5 = *piVar3;
          }
          thunk_FUN_0045ed50(piVar3[8],param_1 + iVar4,iVar5);
          iVar4 = iVar4 + iVar5;
          piVar3 = piVar3 + 1;
        } while (iVar4 < iVar2);
      }
      FUN_004655f0(param_1);
      _DAT_009ae450 = 0;
      iVar4 = 0;
    }
    param_1 = FUN_00465a70(iVar2,DAT_00904a00 & 0xf | 0x2000);
    if (param_1 != DAT_009ae454) {
      FUN_00464a50(DAT_00904a00,0,0x7fffffff);
                    /* WARNING: Subroutine does not return */
      __break();
    }
    if (bVar1) {
      iVar4 = 0;
      if (0 < iVar2) {
        piVar3 = &DAT_009ae3cc;
        do {
          iVar5 = iVar2 - iVar4;
          if (*piVar3 < iVar2 - iVar4) {
            iVar5 = *piVar3;
          }
          thunk_FUN_0045ed50(iVar4 + param_1,piVar3[8],iVar5);
          iVar4 = iVar4 + iVar5;
          piVar3 = piVar3 + 1;
        } while (iVar4 < iVar2);
        return param_1;
      }
    }
    else {
      thunk_FUN_0045ed50(param_1,iVar4,iVar2);
      FUN_004655f0(iVar4);
      _DAT_009ae450 = 0;
    }
  }
  return param_1;
}

