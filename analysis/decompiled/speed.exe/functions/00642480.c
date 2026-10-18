/* speed.exe 00642480 FUN_00642480; analysis pseudocode, not buildable source.
 * calls 0063bcc0 FUN_0063bcc0
 */

int __thiscall FUN_00642480(int param_1,byte param_2)

{
  FUN_0063bcc0();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

