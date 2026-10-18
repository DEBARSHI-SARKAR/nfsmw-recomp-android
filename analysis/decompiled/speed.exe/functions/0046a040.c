/* speed.exe 0046a040 FUN_0046a040; analysis pseudocode, not buildable source.
 * calls 0045f7c0 FUN_0045f7c0
 * calls 0045f3c0 FUN_0045f3c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046a040(int *param_1,float *param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  fVar1 = _DAT_0089096c;
  param_2[1] = 0.0;
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  param_2[4] = 0.0;
  param_2[6] = 0.0;
  param_2[7] = 0.0;
  param_2[8] = 0.0;
  param_2[9] = 0.0;
  param_2[0xb] = 0.0;
  param_2[0xc] = 0.0;
  param_2[0xd] = 0.0;
  param_2[0xe] = 0.0;
  *param_2 = 1.0;
  param_2[5] = 1.0;
  param_2[10] = 1.0;
  param_2[0xf] = 1.0;
  iVar2 = *param_1;
  fVar1 = ABS(fVar1 - *(float *)(iVar2 + 0x58));
  if (fVar1 < _DAT_00890d60 == (fVar1 == _DAT_00890d60)) {
    *param_2 = *(float *)(iVar2 + 0x50);
    param_2[1] = *(float *)(iVar2 + 0x54);
  }
  else {
    *param_2 = -*(float *)(iVar2 + 0x70);
    param_2[1] = -*(float *)(iVar2 + 0x74);
  }
  FUN_0045f3c0(param_2,param_2);
  FUN_0045f7c0(param_2 + 4,param_2 + 8,param_2);
  fVar1 = *(float *)(iVar2 + 0x28);
  fVar3 = *(float *)(iVar2 + 0x20);
  param_2[0xd] = *(float *)(iVar2 + 0x24);
  param_2[0xc] = fVar3;
  param_2[0xe] = fVar1;
  param_2[0xf] = 1.0;
  return;
}

