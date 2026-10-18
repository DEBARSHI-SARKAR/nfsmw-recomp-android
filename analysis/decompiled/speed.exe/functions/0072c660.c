/* speed.exe 0072c660 FUN_0072c660; analysis pseudocode, not buildable source.
 * calls 0072ba30 FUN_0072ba30
 */

void FUN_0072c660(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_009ab24c; (undefined4 **)puVar1 != &DAT_009ab24c; puVar1 = (undefined4 *)*puVar1
      ) {
    if (*(char *)((int)&DAT_00902160 + (int)*(short *)(puVar1 + 3)) != '\0') {
      FUN_0072ba30();
      *(undefined1 *)((int)&DAT_00902160 + (int)*(short *)(puVar1 + 3)) = 0;
    }
  }
  return;
}

