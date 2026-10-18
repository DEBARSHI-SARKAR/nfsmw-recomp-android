/* speed.exe 0082bc00 FUN_0082bc00; analysis pseudocode, not buildable source.
 * calls 007ec4d2 FUN_007ec4d2
 * calls 0082bee0 FUN_0082bee0
 */

undefined4 * __fastcall FUN_0082bc00(undefined4 *param_1)

{
  FUN_0082bee0();
  *param_1 = &PTR_FUN_008c5fd8;
  param_1[1] = FUN_00862d36;
  param_1[2] = _printf;
  param_1[3] = 0;
  FUN_007ec4d2(&LAB_0082b9b0,5,100,0);
  *param_1 = &PTR_FUN_008c600c;
  return param_1;
}

