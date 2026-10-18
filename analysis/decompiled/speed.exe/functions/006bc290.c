/* speed.exe 006bc290 FUN_006bc290; analysis pseudocode, not buildable source.
 * calls 006bc2c0 thunk_FUN_006bbae0
 * calls 005d0370 FUN_005d0370
 */

int __thiscall FUN_006bc290(int param_1,byte param_2)

{
  thunk_FUN_006bbae0();
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    FUN_005d0370(param_1,200,0);
  }
  return param_1;
}

