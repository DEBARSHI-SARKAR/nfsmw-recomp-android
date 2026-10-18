/* speed.exe 004b6600 FUN_004b6600; analysis pseudocode, not buildable source.
 * calls 008298d0 FUN_008298d0
 * calls 0082c730 FUN_0082c730
 */

void FUN_004b6600(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_008298d0(*(undefined4 *)((&DAT_009121d8)[*param_1] + 0x24));
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x8c))
              (*(undefined4 *)(*(int *)(DAT_009120e4 + 0x18) + 0x18),
               *(undefined4 *)(*(int *)(DAT_009120e4 + 0x18) + 0x10));
  }
  *(undefined1 *)(param_1 + 1) = 1;
  FUN_0082c730(0xf000000);
  return;
}

