/* speed.exe 00480b10 FUN_00480b10; analysis pseudocode, not buildable source.
 * calls 0047be50 FUN_0047be50
 * calls 00478db0 FUN_00478db0
 */

void __thiscall FUN_00480b10(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = (int)param_3 - (int)param_2 >> 2;
  if (param_2 == (undefined4 *)param_1[1]) {
    FUN_0047be50(uVar6);
    return;
  }
  if ((uint)param_1[2] < uVar6) {
    uVar2 = (int)param_2 - param_1[1] >> 2;
    if ((((int)uVar2 < 0) || ((uint)param_1[2] <= uVar2)) &&
       (iVar3 = param_1[3], iVar7 = iVar3, 0 < iVar3)) {
      do {
        iVar7 = iVar7 + -1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      param_1[3] = iVar7;
    }
    FUN_00478db0(uVar6);
  }
  puVar4 = (undefined4 *)param_1[1];
  if (puVar4 != puVar4 + param_1[3]) {
    do {
      if (param_2 == param_3) break;
      *puVar4 = *param_2;
      puVar4 = puVar4 + 1;
      param_2 = param_2 + 1;
    } while (puVar4 != (undefined4 *)(param_1[1] + param_1[3] * 4));
  }
  puVar1 = (undefined4 *)(param_1[1] + param_1[3] * 4);
  while (puVar1 != puVar4) {
    iVar3 = param_1[3];
    param_1[3] = iVar3 + -1;
    puVar1 = (undefined4 *)(param_1[1] + (iVar3 + -1) * 4);
  }
  while (param_2 != param_3) {
    if ((uint)param_1[2] <= (uint)param_1[3]) {
      uVar5 = (**(code **)(*param_1 + 0xc))(param_1[3] + 1);
      FUN_00478db0(uVar5);
    }
    puVar4 = (undefined4 *)(param_1[1] + param_1[3] * 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *param_2;
    }
    param_1[3] = param_1[3] + 1;
    param_2 = param_2 + 1;
  }
  return;
}

