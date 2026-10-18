/* speed.exe 0046f4a0 FUN_0046f4a0; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00653530 FUN_00653530
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046f4a0(int *param_1,undefined4 *param_2,float param_3)

{
  int iVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  
  iVar1 = *param_1;
  fVar3 = (param_3 - (float)param_1[1]) * (float)param_1[3];
  iVar5 = FUN_007c4b80();
  if (iVar5 < 0) {
    puVar2 = (undefined4 *)param_1[4];
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    return;
  }
  if (iVar1 + -1 <= iVar5) {
    iVar5 = param_1[4];
    *param_2 = *(undefined4 *)(iVar5 + -8 + iVar1 * 8);
    param_2[1] = *(undefined4 *)(iVar5 + -4 + iVar1 * 8);
    return;
  }
  fVar4 = (float)iVar5;
  if (fVar3 < fVar4) {
    fVar4 = fVar4 - _DAT_0089096c;
  }
  iVar1 = param_1[4] + iVar5 * 8;
  FUN_00653530(param_2,iVar1 + 8,iVar1,fVar3 - fVar4);
  return;
}

