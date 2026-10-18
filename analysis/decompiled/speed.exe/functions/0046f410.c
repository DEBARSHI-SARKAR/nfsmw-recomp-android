/* speed.exe 0046f410 FUN_0046f410; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00653620 FUN_00653620
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046f410(int *param_1,undefined4 *param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  iVar1 = *param_1;
  fVar2 = (param_3 - (float)param_1[1]) * (float)param_1[3];
  iVar4 = FUN_007c4b80();
  if (iVar4 < 0) {
    *param_2 = *(undefined4 *)param_1[4];
    return;
  }
  if (iVar1 + -1 <= iVar4) {
    *param_2 = *(undefined4 *)(param_1[4] + -4 + iVar1 * 4);
    return;
  }
  fVar3 = (float)iVar4;
  if (fVar2 < fVar3) {
    fVar3 = fVar3 - _DAT_0089096c;
  }
  iVar1 = param_1[4] + iVar4 * 4;
  FUN_00653620(param_2,iVar1 + 4,iVar1,fVar2 - fVar3);
  return;
}

