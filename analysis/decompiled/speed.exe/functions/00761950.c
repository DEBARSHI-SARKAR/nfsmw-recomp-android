/* speed.exe 00761950 FUN_00761950; analysis pseudocode, not buildable source.
 * calls 00761700 FUN_00761700
 * calls 0078f9b0 FUN_0078f9b0
 * calls 0078a3a0 FUN_0078a3a0
 * calls 00735b60 FUN_00735b60
 */

void __thiscall FUN_00761950(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  uint local_4;
  
  iVar1 = DAT_0091cf90;
  local_4 = 0;
  FUN_0078a3a0(&local_4,8);
  *(uint *)(iVar1 + 0x168) = local_4 & 0xff;
  param_4 = 0;
  FUN_0078a3a0(&param_4,1);
  *(bool *)(iVar1 + 0x143) = param_4 == 1;
  param_4 = 0;
  FUN_0078a3a0(&param_4,1);
  *(bool *)(iVar1 + 0x15f) = param_4 == 1;
  param_4 = 0;
  FUN_0078a3a0(&param_4,1);
  *(bool *)(iVar1 + 0x142) = param_4 == 1;
  param_4 = 0;
  FUN_0078a3a0(&param_4,8);
  *(undefined1 *)(iVar1 + 0x191) = (undefined1)param_4;
  param_4 = 0;
  FUN_0078a3a0(&param_4,0x10);
  *(undefined1 *)(iVar1 + 400) = (undefined1)param_4;
  param_4 = 0;
  FUN_0078a3a0(&param_4,8);
  *(undefined1 *)(iVar1 + 0x192) = (undefined1)param_4;
  fVar2 = (float10)FUN_0078f9b0();
  *(float *)(iVar1 + 0x194) = (float)fVar2;
  FUN_00735b60();
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 8 + param_2 * 4) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = 0;
  }
  iVar1 = *(int *)(param_1 + 8 + param_2 * 4);
  *(int *)(param_1 + 4) = iVar1;
  *(char *)(iVar1 + 0x1148) = (char)param_2;
  FUN_00761700(param_3,0,1,0);
  param_4 = 0;
  FUN_0078a3a0(&param_4,8);
  return;
}

