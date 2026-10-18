/* speed.exe 0046f540 FUN_0046f540; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00653570 FUN_00653570
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046f540(int *param_1,undefined4 *param_2,float param_3)

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
    param_2[2] = puVar2[2];
    param_2[3] = puVar2[3];
    return;
  }
  if (iVar1 + -1 <= iVar5) {
    puVar2 = (undefined4 *)(iVar1 * 0x10 + -0x10 + param_1[4]);
    *param_2 = *puVar2;
    param_2[1] = puVar2[1];
    param_2[2] = puVar2[2];
    param_2[3] = puVar2[3];
    return;
  }
  fVar4 = (float)iVar5;
  if (fVar3 < fVar4) {
    fVar4 = fVar4 - _DAT_0089096c;
  }
  iVar1 = iVar5 * 0x10 + param_1[4];
  FUN_00653570(param_2,iVar1 + 0x10,iVar1,fVar3 - fVar4);
  return;
}

