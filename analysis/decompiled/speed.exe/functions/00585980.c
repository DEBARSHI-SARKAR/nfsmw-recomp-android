/* speed.exe 00585980 FUN_00585980; analysis pseudocode, not buildable source.
 * calls 00585820 FUN_00585820
 * calls 004655f0 FUN_004655f0
 */

void FUN_00585980(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00585820(*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != 0) {
    if (*(undefined4 **)(iVar1 + 0x1c) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(iVar1 + 0x1c))(1);
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    if (*(int *)(iVar1 + 0x20) != 0) {
      *(undefined4 *)(*(int *)(iVar1 + 0x20) + 0x40) = 0;
    }
    *(undefined4 *)(iVar1 + 0x20) = 0;
    if (**(int **)(iVar1 + 0x18) == 0x30210) {
      FUN_004655f0(*(undefined4 *)(iVar1 + 0x14));
      *(undefined4 *)(iVar1 + 0x14) = 0;
    }
  }
  return;
}

