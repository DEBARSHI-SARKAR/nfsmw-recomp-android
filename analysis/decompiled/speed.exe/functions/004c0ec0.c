/* speed.exe 004c0ec0 FUN_004c0ec0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_004c0ec0(int *param_1,int param_2,int param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int local_8;
  uint local_4;
  
  iVar2 = param_1[1];
  local_4 = param_1[2];
  local_8 = param_1[3];
  uVar7 = local_8 + param_3;
  iVar8 = iVar2;
  if (local_4 < uVar7) {
    (**(code **)(*param_1 + 0x14))(uVar7);
    iVar8 = param_1[1];
    local_8 = param_1[3];
    local_4 = param_1[2];
    uVar7 = local_8 + param_3;
    if (local_4 < uVar7) {
      iVar3 = (**(code **)(*param_1 + 4))(uVar7,0x10);
      param_1[1] = iVar3;
      param_1[2] = uVar7;
    }
  }
  uVar6 = param_2 - iVar8 >> 3;
  param_1[3] = uVar7;
  if ((iVar2 != param_1[1]) && (uVar5 = 0, uVar6 != 0)) {
    do {
      iVar8 = uVar5 * 8;
      puVar4 = (undefined4 *)(param_1[1] + iVar8);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *(undefined4 *)(iVar8 + iVar2);
        puVar4[1] = *(undefined4 *)(iVar8 + 4 + iVar2);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar6);
  }
  param_2 = local_8 - uVar6;
  if (param_2 != 0) {
    iVar8 = uVar7 << 3;
    puVar4 = (undefined4 *)(iVar2 + -8 + local_8 * 8);
    do {
      puVar1 = (undefined4 *)(iVar8 + -8 + param_1[1]);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *puVar4;
        puVar1[1] = puVar4[1];
      }
      iVar8 = iVar8 + -8;
      puVar4 = puVar4 + -2;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  if (param_3 != 0) {
    iVar8 = uVar6 << 3;
    do {
      puVar4 = (undefined4 *)(param_1[1] + iVar8);
      if (puVar4 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*param_4;
        *puVar4 = *puVar1;
        puVar4[1] = puVar1[1];
      }
      iVar8 = iVar8 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  if ((iVar2 != 0) && (iVar2 != param_1[1])) {
    (**(code **)(*param_1 + 8))(iVar2,local_4);
  }
  return;
}

