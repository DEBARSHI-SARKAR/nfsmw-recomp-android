/* speed.exe 004b2e40 FUN_004b2e40; analysis pseudocode, not buildable source.
 * calls 007edb0e FUN_007edb0e
 */

void FUN_004b2e40(int *param_1,int param_2)

{
  if ((((param_1 != (int *)0x0) && (param_1 = (int *)*param_1, *param_1 == 0x4d525453)) &&
      (param_1[0x15] = param_2, param_2 != 0)) && (param_1[0x11] == 1)) {
    FUN_007edb0e();
    return;
  }
  return;
}

