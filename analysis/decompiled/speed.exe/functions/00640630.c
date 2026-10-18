/* speed.exe 00640630 FUN_00640630; analysis pseudocode, not buildable source.
 * calls 00637f20 FUN_00637f20
 */

int __thiscall FUN_00640630(int param_1,byte param_2)

{
  FUN_00637f20();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

