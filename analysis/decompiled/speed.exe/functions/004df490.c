/* speed.exe 004df490 FUN_004df490; analysis pseudocode, not buildable source.
 * calls 00829310 FUN_00829310
 * calls 005fbd20 FUN_005fbd20
 * calls 004d6150 FUN_004d6150
 * calls 005e3a00 FUN_005e3a00
 * calls 004aebb0 FUN_004aebb0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_004df490(int *param_1,char param_2)

{
  float fVar1;
  char cVar2;
  float10 fVar3;
  
  if (((char)param_1[0x46] != '\0') || ((param_1[0x45] & 0x800U) != 0)) {
    return 0;
  }
  fVar3 = (float10)FUN_004aebb0();
  if (((fVar3 <= (float10)_DAT_00890968) || (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x2c) != 1))
     || ((&DAT_008f2080)[param_1[0x54] * 6] == 0)) {
    if (param_1[0x52] == 1) {
      fVar3 = (float10)FUN_004aebb0();
      if ((((float10)_DAT_00890968 < fVar3) && (*(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x28) == 0)
          ) && (FUN_00829310(param_1[param_1[0x4f] * 0x1d + 0x13]),
               *(int *)(*(int *)(DAT_00911fa8 + 0x24) + 0x2c) != 0)) {
        param_1[0x4a] = 0;
        (**(code **)(*param_1 + 0x40))(0);
        return 1;
      }
    }
    else if (((*(int *)(DAT_00911fa8 + 0x70) == 1) &&
             ((*(uint *)(DAT_0091cf90 + 300) >> 9 & 1) == 0)) &&
            (fVar3 = (float10)FUN_004aebb0(),
            fVar3 < (float10)_DAT_00890968 == (fVar3 == (float10)_DAT_00890968))) {
      return 0;
    }
  }
  else if (*(int *)(DAT_00911fa8 + 0x70) == 1) {
    if ((*(uint *)(DAT_0091cf90 + 300) >> 9 & 1) == 0) {
      if (param_2 != '\0') {
        FUN_00829310(param_1[param_1[0x4f] * 0x1d + 0x13]);
        (**(code **)(*param_1 + 0x40))(0);
      }
      return 1;
    }
  }
  else if ((((DAT_0091e000 == 0) || (*(int *)(DAT_0091e000 + 0x1968) == 0)) ||
           (cVar2 = FUN_005e3a00(), cVar2 != '\x01')) ||
          ((cVar2 = FUN_005fbd20(), cVar2 == '\0' && (cVar2 = FUN_004d6150(), cVar2 == '\0')))) {
    if (param_1[0x52] != 2) {
      if (param_2 == '\0') {
        return 1;
      }
      (**(code **)(*param_1 + 0x40))(0);
      return 1;
    }
    fVar1 = _DAT_00898864;
    if (0 < param_1[0x5a]) {
      fVar1 = (float)(DAT_00925ae8 - param_1[0x5a]) * _DAT_00890984;
    }
    if ((float)_DAT_008efd04 < fVar1) {
      if (param_2 != '\0') {
        (**(code **)(*param_1 + 0x40))(0);
      }
      param_1[0x5a] = 0;
      return 1;
    }
  }
  return 0;
}

