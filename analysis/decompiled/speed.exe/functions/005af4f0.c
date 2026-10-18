/* speed.exe 005af4f0 FUN_005af4f0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_005af4f0(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x88) + 1;
  *(uint *)(param_1 + 0x88) = uVar1;
  if (*(uint *)(param_1 + 0x60) <= uVar1) {
    uVar1 = *(int *)(param_1 + 0x8c) + 1;
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(uint *)(param_1 + 0x8c) = uVar1;
    if (*(uint *)(param_1 + 100) <= uVar1) {
      *(undefined4 *)(param_1 + 0x8c) = 0;
    }
  }
  return;
}

