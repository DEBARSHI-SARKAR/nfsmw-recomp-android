/* speed.exe 007faaa2 FUN_007faaa2; analysis pseudocode, not buildable source.
 * calls 007fa64e FUN_007fa64e
 */

undefined4 __thiscall FUN_007faaa2(undefined4 param_1,byte param_2)

{
  FUN_007fa64e();
  if ((param_2 & 1) != 0) {
    (*DAT_00909e58)(param_1);
  }
  return param_1;
}

