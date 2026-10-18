/* speed.exe 004dbb30 FUN_004dbb30; analysis pseudocode, not buildable source.
 * calls 004ba590 FUN_004ba590
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004dbb30(int *param_1)

{
  int iVar1;
  float10 fVar2;
  
  if (param_1[0xc] == 0) {
    (**(code **)(*param_1 + 0x34))();
  }
  iVar1 = *(int *)(param_1[6] + 0x34);
  fVar2 = (float10)FUN_004ba590(SQRT(*(float *)(iVar1 + 0x58) * *(float *)(iVar1 + 0x58) +
                                     *(float *)(iVar1 + 0x54) * *(float *)(iVar1 + 0x54) +
                                     *(float *)(iVar1 + 0x50) * *(float *)(iVar1 + 0x50)) *
                                _DAT_008967e0);
  param_1[0xb] = (int)(float)fVar2;
  return;
}

