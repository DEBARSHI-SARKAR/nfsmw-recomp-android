/* speed.exe 005d70f0 FUN_005d70f0; analysis pseudocode, not buildable source.
 * calls 005d64e0 thunk_FUN_005d5f50
 */

undefined4 * __thiscall FUN_005d70f0(undefined4 *param_1,byte param_2)

{
  thunk_FUN_005d5f50();
  if (((param_2 & 1) != 0) && (param_1 != (undefined4 *)0x0)) {
    *param_1 = DAT_00925b30;
    DAT_00925b30 = param_1;
  }
  return param_1;
}

