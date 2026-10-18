/* speed.exe 00824e72 FUN_00824e72; analysis pseudocode, not buildable source.
 * calls 0082644a FUN_0082644a
 */

undefined4 FUN_00824e72(undefined4 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  param_1[1] = 0;
  *param_1 = FUN_00824e2f;
  FUN_0082644a(param_1 + 7);
  return 0;
}

