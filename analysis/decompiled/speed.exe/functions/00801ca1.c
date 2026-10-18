/* speed.exe 00801ca1 FUN_00801ca1; analysis pseudocode, not buildable source.
 */

int * FUN_00801ca1(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_c;
  int *local_8;
  
  iVar3 = (int)param_2;
  puVar7 = (undefined4 *)(param_1 + 0x3c);
  param_1 = 0;
  piVar1 = (undefined4 *)*puVar7 + 0x100;
  puVar7 = (undefined4 *)*puVar7;
  for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (0 < (int)param_2) {
    local_c = 0;
    local_8 = piVar1 + (int)param_2;
    iVar4 = -(int)param_2;
    piVar5 = piVar1 + -(int)param_2;
    param_2 = piVar1;
    do {
      *piVar5 = iVar4;
      *param_2 = local_c;
      iVar6 = local_c + iVar3;
      iVar2 = param_1 + 1;
      piVar1[param_1] = param_1;
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + -1;
      local_c = local_c + -1;
      *local_8 = iVar6;
      param_1 = iVar2;
      param_2 = param_2 + -1;
      local_8 = local_8 + 1;
    } while (iVar2 < iVar3);
  }
  return piVar1;
}

