/* speed.exe 007c5a20 FUN_007c5a20; analysis pseudocode, not buildable source.
 * calls 007c5880 ~exception
 */

void __fastcall FUN_007c5a20(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_008b80fc;
  exception::~exception(param_1);
  return;
}

