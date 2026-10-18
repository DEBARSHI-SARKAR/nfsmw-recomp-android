/* speed.exe 00648210 FUN_00648210; analysis pseudocode, not buildable source.
 * calls 005d3c50 FUN_005d3c50
 * calls 005d7ad0 FUN_005d7ad0
 * calls 0045d760 FUN_0045d760
 * calls 00648190 FUN_00648190
 */

undefined4 FUN_00648210(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  if (*param_1 == 0x3b811) {
    uVar3 = (int)param_1 + 0x17U & 0xfffffff0;
    if ((*(byte *)(uVar3 + 8) & 1) == 0) {
      FUN_0045d760();
    }
    uVar2 = FUN_005d3c50(uVar3 + 0x10,1,0);
    FUN_005d7ad0(uVar2,0);
    FUN_00648190(uVar2);
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) | 1;
    return 1;
  }
  if (*param_1 != -0x7ffc47f0) {
    return 0;
  }
  iVar1 = param_1[1];
  for (piVar4 = param_1 + 2; piVar4 < (int *)(iVar1 + 8 + (int)param_1);
      piVar4 = (int *)((int)piVar4 + piVar4[1] + 8)) {
    uVar3 = (int)piVar4 + 0x17U & 0xfffffff0;
    if ((*(byte *)(uVar3 + 8) & 1) == 0) {
      FUN_0045d760();
    }
    uVar2 = FUN_005d3c50(uVar3 + 0x10,1,0);
    FUN_005d7ad0(uVar2,0);
    FUN_00648190(uVar2);
    *(uint *)(uVar3 + 8) = *(uint *)(uVar3 + 8) | 1;
  }
  return 1;
}

