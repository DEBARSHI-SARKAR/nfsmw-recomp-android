/* speed.exe 0062af60 FUN_0062af60; analysis pseudocode, not buildable source.
 * calls 00620df0 FUN_00620df0
 */

int __thiscall FUN_0062af60(int param_1,byte param_2)

{
  FUN_00620df0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

