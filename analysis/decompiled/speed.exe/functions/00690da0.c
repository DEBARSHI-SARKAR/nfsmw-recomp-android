/* speed.exe 00690da0 FUN_00690da0; analysis pseudocode, not buildable source.
 * calls 005cb5d0 FUN_005cb5d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00690da0(int param_1,undefined4 param_2,float param_3,float param_4)

{
  bool bVar1;
  float10 fVar2;
  
  bVar1 = _DAT_00890968 <= param_3;
  *(float *)(param_1 + 0xe4) = param_4;
  *(float *)(param_1 + 0xd8) = param_3;
  *(undefined4 *)(param_1 + 0xe0) = param_2;
  if (bVar1) {
    param_4 = param_3;
  }
  else {
    param_4 = -param_3;
  }
  fVar2 = (float10)FUN_005cb5d0(param_2,param_4);
  *(float *)(param_1 + 0xdc) = (float)fVar2;
  if (*(char *)(param_1 + 0xc4) == '\0') {
    *(float *)(param_1 + 0xd0) = (param_3 + *(float *)(param_1 + 200)) / *(float *)(param_1 + 0xcc);
  }
  else {
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  *(float *)(param_1 + 0xd4) = *(float *)(param_1 + 0xcc) * *(float *)(param_1 + 0xd0) - param_3;
  return;
}

