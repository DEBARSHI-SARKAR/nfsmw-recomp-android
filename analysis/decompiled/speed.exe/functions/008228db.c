/* speed.exe 008228db FUN_008228db; analysis pseudocode, not buildable source.
 * calls 00824f14 FUN_00824f14
 * calls 0081eae9 FUN_0081eae9
 * calls 00824f3a FUN_00824f3a
 * calls 0081e9e7 FUN_0081e9e7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_008228db(float param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  float local_8;
  
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  iVar3 = 0;
  if (DAT_009c2318._1_1_ != 0) {
    do {
      piVar1 = &DAT_009c2460 + iVar3;
      if (_DAT_0089096c <= param_1) {
        if (*piVar1 != 0) {
          FUN_0081eae9(*piVar1);
          *piVar1 = 0;
        }
      }
      else {
        if (*piVar1 == 0) {
          iVar2 = FUN_0081e9e7(0x28);
          *piVar1 = iVar2;
          FUN_00824f14(iVar2);
          *(undefined4 *)(*piVar1 + 8) = 0;
        }
        local_14 = (uint)DAT_009c2046 << 8;
        local_8 = (float)DAT_009c2046 * param_1;
        local_c = (int)ROUND(local_8);
        local_18 = local_c << 7;
        local_10 = 0x100;
        FUN_00824f3a(*piVar1,&local_18);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)(uint)DAT_009c2318._1_1_);
  }
  return;
}

