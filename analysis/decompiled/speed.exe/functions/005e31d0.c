/* speed.exe 005e31d0 FUN_005e31d0; analysis pseudocode, not buildable source.
 * calls 00565f20 FUN_00565f20
 * calls 006e8de0 FUN_006e8de0
 */

bool __thiscall FUN_005e31d0(int param_1,float param_2)

{
  int iVar1;
  ushort uVar2;
  float10 fVar3;
  float10 fVar4;
  
  iVar1 = (int)param_2;
  if (*(char *)(param_1 + 0x21) != '\0') {
    if (*(char *)((int)param_2 + 0x21) != '\0') {
      if (*(char *)(param_1 + 0x154) == '\0') {
        param_2 = *(float *)(param_1 + 0x150);
      }
      else {
        fVar3 = (float10)FUN_006e8de0();
        param_2 = (float)((fVar3 - (float10)*(float *)(param_1 + 0x14c)) +
                         (float10)*(float *)(param_1 + 0x150));
      }
      if (*(char *)(iVar1 + 0x154) == '\0') {
        uVar2 = (ushort)(param_2 < *(float *)(iVar1 + 0x150)) << 8 |
                (ushort)(param_2 == *(float *)(iVar1 + 0x150)) << 0xe;
      }
      else {
        fVar3 = (float10)FUN_006e8de0();
        fVar3 = (fVar3 - (float10)*(float *)(iVar1 + 0x14c)) + (float10)*(float *)(iVar1 + 0x150);
        uVar2 = (ushort)((float10)param_2 < fVar3) << 8 | (ushort)((float10)param_2 == fVar3) << 0xe
        ;
      }
      goto LAB_005e32a9;
    }
    if (*(char *)(param_1 + 0x21) != '\0') {
      return false;
    }
  }
  if (*(char *)((int)param_2 + 0x21) != '\0') {
    return true;
  }
  if ((*(char *)(param_1 + 0x1c) == '\0') || (*(char *)((int)param_2 + 0x1c) == '\0')) {
    if ((*(char *)(param_1 + 0x1e) == '\0') || (*(char *)((int)param_2 + 0x1e) == '\0')) {
      if ((*(char *)(param_1 + 0x1d) == '\0') || (*(char *)((int)param_2 + 0x1d) == '\0')) {
        if ((*(char *)(param_1 + 400) == '\0') || (*(char *)((int)param_2 + 400) == '\0')) {
          if (((*(char *)(param_1 + 0x1c) != '\0') || (*(char *)(param_1 + 0x1e) != '\0')) ||
             (*(char *)(param_1 + 0x1d) != '\0')) {
            return true;
          }
          if (((*(char *)((int)param_2 + 0x1c) != '\0') || (*(char *)((int)param_2 + 0x1e) != '\0'))
             || (*(char *)((int)param_2 + 0x1d) != '\0')) {
            return false;
          }
          if (*(int *)(param_1 + 0x28) != *(int *)((int)param_2 + 0x28)) {
            return *(int *)(param_1 + 0x28) < *(int *)((int)param_2 + 0x28);
          }
          if (*(float *)(param_1 + 0x18) < *(float *)((int)param_2 + 0x18)) {
            return true;
          }
        }
        else if (*(float *)((int)param_2 + 0x18) < *(float *)(param_1 + 0x18)) {
          return true;
        }
      }
      else {
        fVar3 = (float10)FUN_00565f20();
        fVar4 = (float10)FUN_00565f20();
        if ((float10)(float)fVar3 < fVar4) {
          return true;
        }
      }
      return false;
    }
    fVar3 = (float10)FUN_00565f20();
    fVar4 = (float10)FUN_00565f20();
    uVar2 = (ushort)(fVar4 < (float10)(float)fVar3) << 8 |
            (ushort)(fVar4 == (float10)(float)fVar3) << 0xe;
  }
  else {
    fVar3 = (float10)FUN_00565f20();
    fVar4 = (float10)FUN_00565f20();
    uVar2 = (ushort)(fVar4 < (float10)(float)fVar3) << 8 |
            (ushort)(fVar4 == (float10)(float)fVar3) << 0xe;
  }
LAB_005e32a9:
  if (uVar2 != 0) {
    return false;
  }
  return true;
}

