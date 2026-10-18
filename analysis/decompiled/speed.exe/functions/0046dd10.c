/* speed.exe 0046dd10 FUN_0046dd10; analysis pseudocode, not buildable source.
 * calls 0046c230 FUN_0046c230
 * calls 0045f640 FUN_0045f640
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046dd10(int param_1,float *param_2,float param_3)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_18;
  
  if ((*(int *)(param_1 + 0xc4) != 0) && (*(char *)(*(int *)(param_1 + 0xc4) + 2) != '\0')) {
    FUN_0046c230(param_2,param_3);
    return;
  }
  pfVar2 = *(float **)(param_1 + 0x84);
  local_24 = 0;
  fVar1 = pfVar2[0xb];
  local_18 = pfVar2[0x16];
  local_30 = pfVar2[2];
  fVar3 = _DAT_0089096c - param_3;
  local_2c = pfVar2[0xd];
  local_28 = pfVar2[0x18];
  *param_2 = fVar3 * *pfVar2;
  param_2[1] = fVar1 * fVar3;
  param_2[2] = local_18 * fVar3;
  FUN_0045f640(param_2,param_2,&local_30,param_3);
  return;
}

