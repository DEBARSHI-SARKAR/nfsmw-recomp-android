/* speed.exe 004561a0 FUN_004561a0; analysis pseudocode, not buildable source.
 * calls 00454f50 FUN_00454f50
 */

uint __thiscall FUN_004561a0(int *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  
  if ((param_2 < (uint)param_1[1]) &&
     (puVar1 = (uint *)(*param_1 + param_2 * 0xc), (uint *)puVar1[1] != puVar1)) {
    puVar2 = (uint *)puVar1[1];
    if (puVar2 == puVar1) {
      uVar3 = 0;
    }
    else {
      uVar3 = *puVar1;
    }
    *puVar1 = 0;
    puVar1[1] = (uint)puVar1;
    param_1[2] = param_1[2] + -1;
    uVar3 = FUN_00454f50(uVar3 % (uint)param_1[1],param_2);
    if (uVar3 < (uint)param_1[1]) {
      do {
        uVar3 = FUN_00454f50(uVar3,uVar3);
      } while (uVar3 < (uint)param_1[1]);
    }
    return (puVar2 == puVar1) - 1 & (uint)puVar2;
  }
  return 0;
}

