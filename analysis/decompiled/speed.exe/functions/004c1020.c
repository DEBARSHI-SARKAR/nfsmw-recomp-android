/* speed.exe 004c1020 FUN_004c1020; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004c1020(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_8;
  int local_4;
  
  local_8 = param_1[2];
  iVar1 = param_1[1];
  iVar6 = param_1[3];
  iVar7 = (param_2 - iVar1) / 0xc;
  uVar5 = param_3 + iVar6;
  if (local_8 < uVar5) {
    (**(code **)(*param_1 + 0x14))(uVar5);
    iVar6 = param_1[3];
    local_8 = param_1[2];
    iVar7 = (param_2 - param_1[1]) / 0xc;
    uVar5 = param_3 + iVar6;
    if (local_8 < uVar5) {
      iVar2 = (**(code **)(*param_1 + 4))(uVar5,0x10);
      param_1[1] = iVar2;
      param_1[2] = uVar5;
    }
  }
  param_1[3] = uVar5;
  if ((iVar1 != param_1[1]) && (iVar7 != 0)) {
    param_2 = 0;
    local_4 = iVar7;
    do {
      puVar3 = (undefined4 *)(param_1[1] + param_2);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)(param_2 + iVar1);
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
      }
      param_2 = param_2 + 0xc;
      local_4 = local_4 + -1;
    } while (local_4 != 0);
  }
  param_2 = iVar6 - iVar7;
  if (param_2 != 0) {
    iVar2 = uVar5 * 0xc;
    puVar3 = (undefined4 *)(iVar1 + -0xc + iVar6 * 0xc);
    do {
      puVar4 = (undefined4 *)(iVar2 + -0xc + param_1[1]);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar3;
        puVar4[1] = puVar3[1];
        puVar4[2] = puVar3[2];
      }
      iVar2 = iVar2 + -0xc;
      puVar3 = puVar3 + -3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (param_3 != 0) {
    iVar7 = iVar7 * 0xc;
    do {
      puVar3 = (undefined4 *)(param_1[1] + iVar7);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (undefined4 *)*param_4;
        *puVar3 = *puVar4;
        puVar3[1] = puVar4[1];
        puVar3[2] = puVar4[2];
      }
      iVar7 = iVar7 + 0xc;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if ((iVar1 != 0) && (iVar1 != param_1[1])) {
    (**(code **)(*param_1 + 8))(iVar1,local_8);
  }
  return;
}

