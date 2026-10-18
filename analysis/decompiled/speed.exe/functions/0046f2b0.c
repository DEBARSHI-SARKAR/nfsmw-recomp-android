/* speed.exe 0046f2b0 FUN_0046f2b0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 0046ab60 FUN_0046ab60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046f2b0(int *param_1,undefined4 *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = *param_1;
  fVar1 = (param_3 - (float)param_1[1]) * (float)param_1[3];
  iVar3 = FUN_007c4b80();
  if (iVar3 < 0) {
    puVar5 = (undefined4 *)param_1[4];
    for (iVar4 = 0x2c; iVar4 != 0; iVar4 = iVar4 + -1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  if (iVar4 + -1 <= iVar3) {
    puVar5 = (undefined4 *)(iVar4 * 0xb0 + -0xb0 + param_1[4]);
    for (iVar3 = 0x2c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_2 = *puVar5;
      puVar5 = puVar5 + 1;
      param_2 = param_2 + 1;
    }
    return;
  }
  fVar2 = (float)iVar3;
  if (fVar1 < fVar2) {
    fVar2 = fVar2 - _DAT_0089096c;
  }
  iVar4 = iVar3 * 0xb0 + param_1[4];
  FUN_0046ab60(param_2,iVar4 + 0xb0,iVar4,fVar1 - fVar2);
  return;
}

