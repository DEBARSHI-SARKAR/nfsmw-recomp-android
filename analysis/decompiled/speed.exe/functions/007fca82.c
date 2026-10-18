/* speed.exe 007fca82 FUN_007fca82; analysis pseudocode, not buildable source.
 */

void FUN_007fca82(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = 0;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x8c) != 0) {
    do {
      if ((*(byte *)(param_1 + 0x20) &
          *(byte *)(*(int *)(param_1 + 0x1c) * uVar2 + *(int *)(param_1 + 0x18))) != 0) {
        *(undefined4 *)(*(int *)(param_1 + 0x24) + uVar2 * 4) = uVar1;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x8c));
  }
  return;
}

