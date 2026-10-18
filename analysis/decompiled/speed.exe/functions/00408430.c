/* speed.exe 00408430 FUN_00408430; analysis pseudocode, not buildable source.
 * calls 00401d10 FUN_00401d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00408430(int param_1)

{
  bool bVar1;
  char cVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  float fVar8;
  
  if ((*(byte *)(param_1 + 0xcc) & 2) == 0) {
    return;
  }
  if (*(int **)(param_1 + 0xe0) == (int *)0x0) {
    return;
  }
  (**(code **)(**(int **)(param_1 + 0xe0) + 0x18))(0);
  (**(code **)(**(int **)(param_1 + 0xe0) + 0x1c))(0);
  (**(code **)(**(int **)(param_1 + 0xe0) + 0x24))();
  (**(code **)(**(int **)(param_1 + 0xe0) + 0x2c))(0);
  if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0xd4) + 0x14))();
    bVar1 = true;
    if (cVar2 != '\0') goto LAB_0040849e;
  }
  bVar1 = false;
LAB_0040849e:
  if (*(int *)(param_1 + 0xd4) != 0) {
    piVar4 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
    iVar5 = (**(code **)(*piVar4 + 0x58))();
    if (iVar5 == 1) {
      piVar4 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
      cVar2 = (**(code **)(*piVar4 + 0x78))();
      iVar5 = (**(code **)(**(int **)(param_1 + 0xd4) + 4))();
      if ((char)('\x01' - (iVar5 != 1)) != cVar2) {
        if (cVar2 == '\0') {
          bVar3 = bVar1 - 1U & 2;
        }
        else {
          bVar3 = 1;
        }
        (**(code **)(**(int **)(param_1 + 0xd4) + 0xc))(bVar3);
      }
      if (cVar2 != '\0') {
        return;
      }
    }
  }
  piVar4 = (int *)(**(code **)(*(int *)(param_1 + 0x4c) + 8))();
  fVar6 = (float10)(**(code **)(*piVar4 + 0x90))();
  fVar7 = (float)fVar6;
  fVar8 = *(float *)(param_1 + 0x84);
  if ((*(char *)(param_1 + 0xa7) == '\0') && (*(char *)(param_1 + 0xa8) != '\0')) {
    (**(code **)(**(int **)(param_1 + 0xe0) + 0x18))(0x3f800000);
                    /* WARNING: Could not recover jumptable at 0x00408570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xe0) + 0x24))(0x3f800000);
    return;
  }
  (**(code **)(**(int **)(param_1 + 0xe0) + 8))();
  if (fVar8 < _DAT_00890634) {
                    /* WARNING: Could not recover jumptable at 0x004085a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xe0) + 0x1c))(0x3f800000);
    return;
  }
  if (!bVar1) {
    if (fVar7 < _DAT_00890da8) {
                    /* WARNING: Could not recover jumptable at 0x0040860a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0xe0) + 0x1c))(0x3f800000);
      return;
    }
    if (fVar8 < fVar7) {
      fVar6 = (float10)FUN_00401d10(fVar8 - fVar7);
      if ((fVar6 <= (float10)_DAT_00890d34) && (_DAT_00890da4 <= fVar8)) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x00408663. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0xe0) + 0x1c))(0x3f800000);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0040867b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xe0) + 0x18))(0x3f800000);
    return;
  }
  if (_DAT_0089096c < fVar7) {
                    /* WARNING: Could not recover jumptable at 0x004085d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0xe0) + 0x1c))(0x3f800000);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004085e5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xe0) + 0x18))(0x3f800000);
  return;
}

