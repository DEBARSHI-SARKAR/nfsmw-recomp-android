/* speed.exe 004e7bc0 FUN_004e7bc0; analysis pseudocode, not buildable source.
 * calls 00829310 FUN_00829310
 * calls 004e7470 FUN_004e7470
 * calls 0082c730 FUN_0082c730
 * calls 004aebb0 FUN_004aebb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004e7bc0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  if (param_1[0x54] == -1) {
    (**(code **)(*param_1 + 0x34))();
    return;
  }
  if ((DAT_008f86fc != 0) &&
     ((iVar1 = *(int *)(param_2 + 0x14), param_1[0x52] != 3 || (iVar1 != -1)))) {
    if (iVar1 == 0) {
      iVar1 = FUN_004e7470();
      param_1[0x52] = iVar1;
      return;
    }
    if (iVar1 == -1) {
      fVar3 = (float10)FUN_004aebb0();
      if ((((fVar3 < (float10)_DAT_00890968 == (fVar3 == (float10)_DAT_00890968)) &&
           ((param_1[0x45] & 0x800U) == 0)) && (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x2c) != 0)
          ) && ((((&DAT_008f2080)[param_1[0x54] * 6] != 0 && (param_1[0x52] == 0)) &&
                ((char)param_1[0x46] == '\0')))) {
        FUN_0082c730(0xf000000);
        FUN_00829310(param_1[param_1[0x4f] * 0x1d + 0x13]);
        return;
      }
    }
    else {
      if (DAT_008f2080 == 0) {
        DAT_008f2080 = -0x80000000;
      }
      FUN_0082c730(0xf000000);
      iVar2 = FUN_004e7470();
      param_1[0x52] = iVar2;
      param_1[0x4a] = iVar1;
      param_1[0x4b] = iVar1;
      (**(code **)(*param_1 + 0x40))(iVar1);
      *(undefined1 *)(param_1 + 0x46) = 1;
      *(undefined1 *)((int)param_1 + 0x119) = 0;
    }
  }
  return;
}

