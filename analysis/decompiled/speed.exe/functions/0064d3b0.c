/* speed.exe 0064d3b0 FUN_0064d3b0; analysis pseudocode, not buildable source.
 * calls 0064cf20 FUN_0064cf20
 */

int __thiscall FUN_0064d3b0(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0;
  }
  uVar3 = FUN_0064cf20(param_2);
  iVar8 = *(int *)(param_1 + 0x18);
  if ((iVar8 != 0) && (-1 < iVar8)) {
    iVar1 = *(int *)(param_1 + 0x14);
    iVar7 = 0;
    while( true ) {
      iVar4 = iVar7 + iVar8 >> 1;
      uVar2 = *(uint *)(iVar1 + iVar4 * 0x18);
      if ((uVar2 == uVar3) && ((iVar4 == 0 || (*(uint *)(iVar1 + iVar4 * 0x18 + -0x18) != uVar3))))
      break;
      if (uVar2 < uVar3) {
        iVar7 = iVar4 + 1;
      }
      else {
        iVar8 = iVar4 + -1;
      }
      if (iVar8 < iVar7) {
        return 0;
      }
    }
    if (-1 < iVar4) {
      puVar6 = (uint *)(iVar1 + iVar4 * 0x18);
      iVar8 = 0x7fffffff;
      if (*puVar6 == uVar3) {
        iVar7 = iVar4;
        do {
          iVar5 = puVar6[3] - *(int *)(param_1 + 0x814);
          if (iVar5 < 0) {
            iVar5 = -iVar5;
          }
          if (iVar5 < iVar8) {
            iVar4 = iVar7;
            iVar8 = iVar5;
          }
          puVar6 = puVar6 + 6;
          iVar7 = iVar7 + 1;
        } while (*puVar6 == uVar3);
      }
      return iVar1 + iVar4 * 0x18;
    }
  }
  return 0;
}

