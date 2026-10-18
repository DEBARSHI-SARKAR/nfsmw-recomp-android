/* speed.exe 007c5b80 FUN_007c5b80; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007c5af0 ~type_info
 */

type_info * __thiscall FUN_007c5b80(type_info *param_1,uint param_2)

{
  type_info::~type_info(param_1);
  if ((param_2 & 1) != 0) {
    thunk_FUN_007c7250(param_1);
  }
  return param_1;
}

