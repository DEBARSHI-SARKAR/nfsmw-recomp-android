/* speed.exe 005edd60 FUN_005edd60; analysis pseudocode, not buildable source.
 * calls 005ebed0 FUN_005ebed0
 * calls 0051fa30 FUN_0051fa30
 */

void __thiscall FUN_005edd60(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 700) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c4) + param_2 * 4);
    if (iVar1 != 0) {
      if (iVar1 == DAT_0091ca4c) {
        FUN_0051fa30();
      }
      if (*(int *)(*(int *)(param_1 + 0x2c4) + param_2 * 4) != 0) {
        FUN_005ebed0(1);
      }
      *(undefined4 *)(*(int *)(param_1 + 0x2c4) + param_2 * 4) = 0;
    }
    if (param_2 + 1 < *(uint *)(param_1 + 700)) {
      iVar1 = *(int *)(param_1 + 0x2c4);
      if (param_2 + 1 < *(uint *)(param_1 + 0x2c0)) {
        *(undefined4 *)(iVar1 + param_2 * 4) =
             *(undefined4 *)(iVar1 + -4 + *(uint *)(param_1 + 0x2c0) * 4);
        if (*(uint *)(param_1 + 0x2c0) < *(uint *)(param_1 + 700)) {
          *(undefined4 *)(*(int *)(param_1 + 0x2c4) + -4 + *(uint *)(param_1 + 0x2c0) * 4) =
               *(undefined4 *)(*(int *)(param_1 + 0x2c4) + -4 + *(uint *)(param_1 + 700) * 4);
        }
      }
      else {
        *(undefined4 *)(iVar1 + param_2 * 4) =
             *(undefined4 *)(iVar1 + -4 + *(uint *)(param_1 + 700) * 4);
      }
    }
    if (param_2 < *(uint *)(param_1 + 0x2c0)) {
      *(uint *)(param_1 + 0x2c0) = *(uint *)(param_1 + 0x2c0) - 1;
    }
    *(int *)(param_1 + 700) = *(int *)(param_1 + 700) + -1;
  }
  return;
}

