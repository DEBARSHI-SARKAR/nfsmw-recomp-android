/* speed.exe 0044e530 FUN_0044e530; analysis pseudocode, not buildable source.
 * calls 0044ac70 FUN_0044ac70
 * calls 0044e4d0 FUN_0044e4d0
 */

undefined4 FUN_0044e530(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*param_1 != -0x7ffc8fe0) {
    return 0;
  }
  iVar2 = param_1[1];
  iVar5 = 0;
  for (piVar1 = param_1 + 2; piVar1 != (int *)(iVar2 + 8 + (int)param_1);
      piVar1 = (int *)((int)piVar1 + piVar1[1] + 8)) {
    iVar3 = *piVar1;
    if (iVar3 != 0) {
      if (iVar3 == 0x37030) {
        iVar5 = FUN_0044e4d0(param_1,piVar1);
      }
      else if ((iVar3 == 0x37040) && (iVar5 != 0)) {
        uVar4 = (int)piVar1 + 0x17U & 0xfffffff0;
        FUN_0044ac70(uVar4,(piVar1[1] - uVar4) + 8 + (int)piVar1);
      }
    }
  }
  return 1;
}

