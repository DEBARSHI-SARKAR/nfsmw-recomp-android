/* speed.exe 006a18f0 FUN_006a18f0; analysis pseudocode, not buildable source.
 * calls 00452940 FUN_00452940
 * calls 006a0f60 FUN_006a0f60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_006a18f0(int param_1,uint param_2)

{
  float10 fVar1;
  uint uVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  uVar2 = FUN_00452940();
  if (((param_2 < uVar2) && (param_2 != *(uint *)(param_1 + 0x1c))) && (-1 < (int)param_2)) {
    if ((int)param_2 < (int)*(uint *)(param_1 + 0x1c)) {
      FUN_006a0f60(param_2);
      fVar1 = (float10)_DAT_008910f0;
      *(uint *)(param_1 + 0x1c) = param_2;
      *(float *)(param_1 + 0x24) = (float)(extraout_ST0 * fVar1);
      return 1;
    }
    FUN_006a0f60(param_2);
    *(float *)(param_1 + 0x24) = (float)extraout_ST0_00;
    *(uint *)(param_1 + 0x1c) = param_2;
    return 1;
  }
  return 0;
}

