/* speed.exe 007fc779 FUN_007fc779; analysis pseudocode, not buildable source.
 * calls 007fc603 FUN_007fc603
 */

void FUN_007fc779(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xb8);
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  *(int *)(param_1 + 0xb8) = 0;
  iVar1 = *(int *)(param_1 + 0xa0);
  *(undefined4 *)(param_1 + 0xbc) = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  *(int *)(param_1 + 0xa0) = 0;
  iVar1 = *(int *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  *(int *)(param_1 + 0xa4) = 0;
  iVar1 = *(int *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  *(int *)(param_1 + 0xa8) = 0;
  iVar1 = *(int *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  *(int *)(param_1 + 0xac) = 0;
  iVar1 = *(int *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (iVar1 != 0) {
    FUN_007fc603(iVar1);
  }
  *(int *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

