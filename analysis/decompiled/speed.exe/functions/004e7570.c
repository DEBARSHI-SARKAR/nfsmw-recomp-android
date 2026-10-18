/* speed.exe 004e7570 FUN_004e7570; analysis pseudocode, not buildable source.
 * calls 00829310 FUN_00829310
 * calls 004df6d0 FUN_004df6d0
 * calls 00701070 FUN_00701070
 * calls 00829640 FUN_00829640
 * calls 004aebb0 FUN_004aebb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004e7570(int *param_1)

{
  char cVar1;
  uint uVar2;
  float10 fVar3;
  
  if ((param_1[0x45] & 0x800U) != 0) {
    return 0;
  }
  FUN_004df6d0(0x3dcccccd);
  if (param_1[0x52] == 1) {
    if ((((DAT_00993cc8 != 0) && (cVar1 = FUN_00701070(), cVar1 != '\0')) &&
        (fVar3 = (float10)FUN_004aebb0(), (float10)_DAT_00890968 < fVar3)) &&
       (0 < *(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x28))) {
      return 0;
    }
  }
  else {
    if (param_1[0x52] != 0) {
      return 0;
    }
    if (*(int *)(DAT_00911fa8 + 0x70) == 1) {
      fVar3 = (float10)FUN_004aebb0();
      if (((((float10)_DAT_00890968 == fVar3) ||
           (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x2c) == 0)) ||
          (((&DAT_008f2080)[param_1[0x54] * 6] == 0 ||
           ((fVar3 = (float10)FUN_004aebb0(), (float10)_DAT_00890968 == fVar3 ||
            (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x2c) == 0)))))) ||
         ((&DAT_008f2080)[param_1[0x54] * 6] == 0)) {
        FUN_00829310(param_1[param_1[0x4f] * 0x1d + 0x13]);
        FUN_004df6d0(0x3dcccccd);
        (**(code **)(*param_1 + 0x38))(*(undefined4 *)(&DAT_008efd20 + param_1[0x47] * 4));
        return 1;
      }
      if ((*(uint *)(DAT_0091cf90 + 300) >> 9 & 1) == 0) {
        return 0;
      }
      uVar2 = param_1[0x51] + 1U & 3;
      if (uVar2 == 3) {
        uVar2 = 2;
      }
      FUN_00829640(param_1[0x13],"rapsheet",uVar2 + 1);
    }
    else {
      fVar3 = (float10)FUN_004aebb0();
      if ((((float10)_DAT_00890968 != fVar3) &&
          (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x2c) != 0)) &&
         ((&DAT_008f2080)[param_1[0x54] * 6] != 0)) {
        return 0;
      }
      FUN_00829310(param_1[param_1[0x4f] * 0x1d + 0x13]);
    }
  }
  FUN_004df6d0(0x3dcccccd);
  (**(code **)(*param_1 + 0x38))(*(undefined4 *)(&DAT_008efd20 + param_1[0x47] * 4));
  return 1;
}

