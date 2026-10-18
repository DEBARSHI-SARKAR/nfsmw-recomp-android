/* speed.exe 00763690 FUN_00763690; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

void __thiscall FUN_00763690(int param_1,undefined4 param_2,uint *param_3,uint *param_4)

{
  uint uVar1;
  
  uVar1 = FUN_007c4b80();
  *param_4 = uVar1;
  uVar1 = FUN_007c4b80();
  *param_3 = uVar1;
  if (*(uint *)(param_1 + 0x1c) <= *param_4) {
    if (*param_4 < 0x7fffffff) {
      *param_4 = *(uint *)(param_1 + 0x1c) - 1;
    }
    else {
      *param_4 = 0;
    }
  }
  if (*(uint *)(param_1 + 0x18) <= *param_3) {
    if (0x7ffffffe < *param_3) {
      *param_3 = 0;
      return;
    }
    *param_3 = *(uint *)(param_1 + 0x18) - 1;
  }
  return;
}

