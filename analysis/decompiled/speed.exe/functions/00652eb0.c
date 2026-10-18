/* speed.exe 00652eb0 FUN_00652eb0; analysis pseudocode, not buildable source.
 * calls 00652d70 FUN_00652d70
 */

void FUN_00652eb0(void)

{
  undefined4 *puVar1;
  
  if (DAT_00925950 != 0) {
    puVar1 = (undefined4 *)(DAT_00925950 + 8);
    if ((0 < *(int *)(DAT_00925950 + 8)) && (*(int *)(DAT_00925950 + 8) < 7)) {
      FUN_00652d70(*(undefined4 *)(DAT_00925950 + 4));
    }
    *puVar1 = 0;
  }
  return;
}

