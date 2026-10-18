/* speed.exe 00640d80 FUN_00640d80; analysis pseudocode, not buildable source.
 * calls 00639c70 FUN_00639c70
 */

int __thiscall FUN_00640d80(int param_1,byte param_2)

{
  FUN_00639c70();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

