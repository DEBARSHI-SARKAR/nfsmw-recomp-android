/* speed.exe 005c7e70 FUN_005c7e70; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 004655f0 FUN_004655f0
 */

int __thiscall FUN_005c7e70(int param_1,byte param_2)

{
  if (((*(byte *)(param_1 + 4) & 4) != 0) && (*(int *)(param_1 + 0xc) != 0)) {
    FUN_004655f0(*(int *)(param_1 + 0xc));
  }
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

