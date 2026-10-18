/* speed.exe 0082be30 FUN_0082be30; analysis pseudocode, not buildable source.
 * calls 008294a0 FUN_008294a0
 * calls 0082bf00 FUN_0082bf00
 * calls 007ec567 FUN_007ec567
 */

undefined4 * __thiscall FUN_0082be30(undefined4 *param_1,byte param_2)

{
  *param_1 = &PTR_FUN_008c5fd8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_007ec567(&LAB_0082b9b0);
  FUN_0082bf00();
  if ((param_2 & 1) != 0) {
    FUN_008294a0(param_1);
  }
  return param_1;
}

