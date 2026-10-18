/* speed.exe 007c5970 FUN_007c5970; analysis pseudocode, not buildable source.
 * calls 007c5880 ~exception
 */

void __fastcall FUN_007c5970(exception *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_008b80f0;
  exception::~exception(param_1);
  return;
}

