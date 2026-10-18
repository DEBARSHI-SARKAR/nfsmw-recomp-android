/* speed.exe 0085cd80 FUN_0085cd80; analysis pseudocode, not buildable source.
 * calls 0085c120 FUN_0085c120
 */

void FUN_0085cd80(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x18c) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 400)) {
      do {
        if (iVar1 != *(int *)(param_1 + 0xd4)) {
          FUN_0085c120(param_1);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 400));
    }
    *(undefined4 *)(param_1 + 400) = 0;
    puVar2 = (undefined4 *)(param_1 + 0x198);
    for (iVar1 = 0x2c; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined4 *)(param_1 + 0x188) = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  return;
}

