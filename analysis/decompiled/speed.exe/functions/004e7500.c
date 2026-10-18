/* speed.exe 004e7500 FUN_004e7500; analysis pseudocode, not buildable source.
 * calls 004aebb0 FUN_004aebb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004e7500(int *param_1)

{
  float10 fVar1;
  
  if (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x28) != 0) {
    fVar1 = (float10)FUN_004aebb0();
    if (((((float10)_DAT_00890968 != fVar1) && ((param_1[0x45] & 2U) == 0)) &&
        ((param_1[0x45] & 0x800U) == 0)) &&
       ((DAT_00993cc8 != 0 &&
        ((*(int *)(DAT_00993cc8 + 0x1d4) == 0 || (*(int *)(DAT_00993cc8 + 0x1d4) == 1)))))) {
      param_1[0x4a] = 0;
      (**(code **)(*param_1 + 0x3c))(0x16e7282);
      return 1;
    }
  }
  return 0;
}

