/* speed.exe 00647d10 FUN_00647d10; analysis pseudocode, not buildable source.
 * calls 005d3c50 FUN_005d3c50
 * calls 00647c20 FUN_00647c20
 */

undefined4 FUN_00647d10(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (*param_1 == 0x3b811) {
    uVar2 = FUN_005d3c50(((int)param_1 + 0x17U & 0xfffffff0) + 0x10,0,0);
    FUN_00647c20(uVar2);
    return 1;
  }
  if (*param_1 != -0x7ffc47f0) {
    return 0;
  }
  iVar1 = param_1[1];
  for (piVar3 = param_1 + 2; piVar3 < (int *)(iVar1 + 8 + (int)param_1);
      piVar3 = (int *)((int)piVar3 + piVar3[1] + 8)) {
    uVar2 = FUN_005d3c50(((int)piVar3 + 0x17U & 0xfffffff0) + 0x10,0,0);
    FUN_00647c20(uVar2);
  }
  return 1;
}

