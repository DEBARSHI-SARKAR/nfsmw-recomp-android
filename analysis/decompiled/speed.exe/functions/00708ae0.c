/* speed.exe 00708ae0 FUN_00708ae0; analysis pseudocode, not buildable source.
 * calls 00705d50 FUN_00705d50
 */

uint __thiscall FUN_00708ae0(int *param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  
  if ((param_2 < (uint)param_1[1]) &&
     (puVar3 = (uint *)(*param_1 + param_2 * 0x10), (uint *)puVar3[2] != puVar3)) {
    puVar1 = (uint *)puVar3[2];
    if (puVar1 == puVar3) {
      uVar2 = 0;
    }
    else {
      uVar2 = *puVar3;
    }
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = (uint)puVar3;
    param_1[2] = param_1[2] + -1;
    uVar2 = FUN_00705d50(uVar2 % (uint)param_1[1],param_2);
    if (uVar2 < (uint)param_1[1]) {
      do {
        uVar2 = FUN_00705d50(uVar2,uVar2);
      } while (uVar2 < (uint)param_1[1]);
    }
    return (puVar1 == puVar3) - 1 & (uint)puVar1;
  }
  return 0;
}

