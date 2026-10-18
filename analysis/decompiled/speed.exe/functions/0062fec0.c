/* speed.exe 0062fec0 FUN_0062fec0; analysis pseudocode, not buildable source.
 * calls 00623f80 FUN_00623f80
 */

int __thiscall FUN_0062fec0(int param_1,byte param_2)

{
  FUN_00623f80();
  if ((param_2 & 1) != 0) {
    DAT_00920394 = DAT_00920394 + *(int *)(param_1 + 4);
  }
  return param_1;
}

