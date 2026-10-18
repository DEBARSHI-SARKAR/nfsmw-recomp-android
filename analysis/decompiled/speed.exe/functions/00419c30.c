/* speed.exe 00419c30 FUN_00419c30; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00419c30(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int *piVar5;
  float10 fVar6;
  
  iVar1 = *(int *)(param_1 + 0xbc);
  if (*(char *)(iVar1 + 0x2c) != '\0') {
    param_2 = param_2 * _DAT_00890cd4;
    *(float *)(param_1 + 0x26c) =
         (*(float *)(iVar1 + 0x10) - *(float *)(param_1 + 0x26c)) * param_2 +
         *(float *)(param_1 + 0x26c);
    *(float *)(param_1 + 0x270) =
         (*(float *)(iVar1 + 0x14) - *(float *)(param_1 + 0x270)) * param_2 +
         *(float *)(param_1 + 0x270);
    *(float *)(param_1 + 0x274) =
         (*(float *)(iVar1 + 0x18) - *(float *)(param_1 + 0x274)) * param_2 +
         *(float *)(param_1 + 0x274);
    fVar2 = *(float *)(iVar1 + 0x10) - *(float *)(param_1 + 0x26c);
    fVar3 = *(float *)(iVar1 + 0x14) - *(float *)(param_1 + 0x270);
    fVar4 = *(float *)(iVar1 + 0x18) - *(float *)(param_1 + 0x274);
    fVar6 = (float10)FUN_005c5e80(fVar3 * fVar3 + fVar2 * fVar2 + fVar4 * fVar4);
    *(float *)(param_1 + 0x278) =
         (float)((fVar6 - (float10)*(float *)(param_1 + 0x278)) * (float10)param_2 +
                (float10)*(float *)(param_1 + 0x278));
    piVar5 = *(int **)(*(int *)(param_1 + 0xbc) + 0x1c);
    if (piVar5 == (int *)0x0) {
      fVar6 = (float10)_DAT_00890968;
    }
    else {
      piVar5 = (int *)(**(code **)(*piVar5 + 0x54))();
      fVar6 = (float10)(**(code **)(*piVar5 + 0x30))();
    }
    fVar6 = (fVar6 - (float10)*(float *)(param_1 + 0x27c)) * (float10)param_2 *
            (float10)_DAT_00890634 + (float10)*(float *)(param_1 + 0x27c);
    *(float *)(param_1 + 0x27c) = (float)fVar6;
    if (*(float *)(param_1 + 0x278) <= _DAT_00890dc4) {
      fVar6 = (float10)_DAT_00890968;
    }
    else {
      fVar6 = (fVar6 / (float10)*(float *)(param_1 + 0x278)) * (float10)_DAT_00890bf8;
    }
    if (*(char *)(param_1 + 0x280) == '\0') {
      if ((float10)_DAT_00890604 <= fVar6) {
        *(undefined1 *)(param_1 + 0x280) = 1;
      }
    }
    else if (fVar6 < (float10)_DAT_008908a8 != (fVar6 == (float10)_DAT_008908a8)) {
      *(undefined1 *)(param_1 + 0x280) = 0;
      return;
    }
  }
  return;
}

