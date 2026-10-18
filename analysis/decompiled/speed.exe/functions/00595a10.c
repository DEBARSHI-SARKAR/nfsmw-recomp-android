/* speed.exe 00595a10 FUN_00595a10; analysis pseudocode, not buildable source.
 * calls 00595a30 FUN_00595a30
 * calls 00652b00 thunk_FUN_007c7250
 */

undefined4 __thiscall FUN_00595a10(undefined4 param_1,byte param_2)

{
  FUN_00595a30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

