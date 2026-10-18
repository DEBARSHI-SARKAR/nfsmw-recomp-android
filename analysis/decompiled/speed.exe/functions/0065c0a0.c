/* speed.exe 0065c0a0 FUN_0065c0a0; analysis pseudocode, not buildable source.
 * calls 007c7250 FUN_007c7250
 */

int __thiscall FUN_0065c0a0(int param_1,byte param_2)

{
  FUN_007c7250(*(undefined4 *)(param_1 + 4));
  if ((param_2 & 1) != 0) {
    FUN_007c7250(param_1);
  }
  return param_1;
}

