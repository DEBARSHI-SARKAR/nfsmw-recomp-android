/* speed.exe 00819dc6 FUN_00819dc6; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00819dc6(ushort *param_1)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar2 = *param_1;
  piVar1 = (undefined4 *)((uint)uVar2 + (int)param_1) + 1;
  if (*piVar1 != *(int *)(param_1 + 4)) {
    *(int *)(param_1 + 4) = *piVar1;
    if (*piVar1 < 0) {
      *piVar1 = 0;
    }
    iVar5 = (int)ROUND((float)*piVar1 / _DAT_009c1b54);
    if ((int)(uint)param_1[1] <= iVar5) {
      iVar5 = param_1[1] - 1;
    }
    param_1[2] = param_1[3] + (short)iVar5;
  }
  uVar3 = param_1[1];
  if (uVar3 <= param_1[2]) {
    param_1[2] = param_1[2] - uVar3;
  }
  if (uVar3 <= param_1[3]) {
    param_1[3] = 0;
  }
  *(undefined4 *)(param_1 + (uint)param_1[2] * 2 + 6) = *(undefined4 *)((uint)uVar2 + (int)param_1);
  uVar4 = *(undefined4 *)(param_1 + (uint)param_1[3] * 2 + 6);
  param_1[2] = param_1[2] + 1;
  param_1[3] = param_1[3] + 1;
  return uVar4;
}

