/* speed.exe 005adb20 FUN_005adb20; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_005adb20(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 100);
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    return;
  }
  if (uVar1 <= param_2) {
    *(uint *)(param_1 + 0x8c) = uVar1 - 1;
    return;
  }
  *(uint *)(param_1 + 0x8c) = param_2;
  return;
}

