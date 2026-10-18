/* speed.exe 00517c30 FUN_00517c30; analysis pseudocode, not buildable source.
 * calls 007f3eef FUN_007f3eef
 */

undefined4 * __fastcall FUN_00517c30(undefined4 *param_1)

{
  FUN_007f3eef();
  *param_1 = param_1 + 1;
  param_1[1] = 1;
  param_1[2] = 0;
  return param_1;
}

