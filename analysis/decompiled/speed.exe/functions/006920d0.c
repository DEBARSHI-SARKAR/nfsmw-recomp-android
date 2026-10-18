/* speed.exe 006920d0 FUN_006920d0; analysis pseudocode, not buildable source.
 * calls 00452940 FUN_00452940
 * calls 00691bd0 FUN_00691bd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006920d0(int param_1,uint param_2)

{
  uint uVar1;
  float10 fVar2;
  
  uVar1 = FUN_00452940();
  if (((param_2 < uVar1) && (param_2 != *(uint *)(param_1 + 0x84))) && (-1 < (int)param_2)) {
    if ((int)param_2 < (int)*(uint *)(param_1 + 0x84)) {
      fVar2 = (float10)FUN_00691bd0(param_2);
      fVar2 = fVar2 * (float10)_DAT_008910f0;
    }
    else {
      fVar2 = (float10)FUN_00691bd0(param_2);
    }
    *(float *)(param_1 + 0x88) = (float)fVar2;
    *(uint *)(param_1 + 0x84) = param_2;
    if (*(int *)(param_1 + 0x198) == 0) {
      *(undefined4 *)(param_1 + 0x198) = 2;
    }
    return 1;
  }
  return 0;
}

