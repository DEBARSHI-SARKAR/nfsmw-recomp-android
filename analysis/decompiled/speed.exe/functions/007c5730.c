/* speed.exe 007c5730 FUN_007c5730; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007c5880 ~exception
 */

exception * __thiscall FUN_007c5730(exception *param_1,uint param_2)

{
  exception::~exception(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

