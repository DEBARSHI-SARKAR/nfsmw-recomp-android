/* speed.exe 00715b00 FUN_00715b00; analysis pseudocode, not buildable source.
 * calls 00713670 FUN_00713670
 * calls 0045da30 FUN_0045da30
 */

void FUN_00715b00(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar2 = param_3;
  iVar4 = param_1;
  iVar1 = param_2;
  if ((*(int *)(param_1 + 4) == 0) || (*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2 == 0)) {
    for (; param_1 = iVar1, iVar1 <= iVar2; iVar1 = iVar1 * 2) {
      FUN_00713670(&param_1);
    }
    for (uVar7 = 0;
        (*(int *)(iVar4 + 4) != 0 &&
        (uVar5 = *(int *)(iVar4 + 8) - *(int *)(iVar4 + 4) >> 2, uVar7 < uVar5)); uVar7 = uVar7 + 1)
    {
      iVar6 = FUN_0045da30(uVar5);
      iVar1 = *(int *)(iVar4 + 4);
      iVar2 = *(int *)(iVar1 + uVar7 * 4);
      iVar3 = *(int *)(iVar6 * 4 + iVar1);
      if (iVar3 != iVar2) {
        *(int *)(iVar1 + uVar7 * 4) = iVar3;
        *(int *)(*(int *)(iVar4 + 4) + iVar6 * 4) = iVar2;
      }
    }
  }
  return;
}

