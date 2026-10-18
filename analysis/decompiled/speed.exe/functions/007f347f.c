/* speed.exe 007f347f FUN_007f347f; analysis pseudocode, not buildable source.
 * calls 007f2b7e FUN_007f2b7e
 * calls 007f35c5 FUN_007f35c5
 */

undefined4 * __fastcall FUN_007f347f(undefined4 *param_1)

{
  FUN_007f35c5();
  *param_1 = &PTR_FUN_008c234c;
  FUN_007f2b7e();
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return param_1;
}

