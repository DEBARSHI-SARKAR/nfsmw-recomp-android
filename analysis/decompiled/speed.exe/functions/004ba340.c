/* speed.exe 004ba340 FUN_004ba340; analysis pseudocode, not buildable source.
 * calls 004b0320 FUN_004b0320
 */

void __thiscall FUN_004ba340(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0xc) = param_3;
  FUN_004b0320(param_2);
  if (*(char *)(param_1 + 0x18) != '\0') {
    *(undefined4 *)(param_1 + 0x14) = param_3;
  }
  return;
}

