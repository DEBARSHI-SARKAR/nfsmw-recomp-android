/* speed.exe 0047be50 FUN_0047be50; analysis pseudocode, not buildable source.
 * calls 00478db0 FUN_00478db0
 */

void __thiscall FUN_0047be50(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar2 = param_1[3];
  if (param_2 < uVar2) {
    do {
      uVar2 = uVar2 - 1;
    } while (param_2 < uVar2);
    param_1[3] = uVar2;
    return;
  }
  if (uVar2 < param_2) {
    FUN_00478db0(param_2);
    uVar2 = param_1[3];
    while (uVar2 < param_2) {
      if ((uint)param_1[2] <= (uint)param_1[3]) {
        uVar3 = (**(code **)(*param_1 + 0xc))(param_1[3] + 1);
        FUN_00478db0(uVar3);
      }
      puVar1 = (undefined4 *)(param_1[1] + param_1[3] * 4);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = 0;
      }
      uVar2 = param_1[3] + 1;
      param_1[3] = uVar2;
    }
  }
  return;
}

