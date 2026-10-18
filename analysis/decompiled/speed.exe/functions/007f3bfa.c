/* speed.exe 007f3bfa FUN_007f3bfa; analysis pseudocode, not buildable source.
 * calls 007f5d2a FUN_007f5d2a
 */

void FUN_007f3bfa(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5)

{
  if ((param_5 == (int *)0x0) || ((param_5[3] != 1 && (*param_5 != 1)))) {
    param_5 = (int *)0x0;
  }
  FUN_007f5d2a(param_1,param_2,param_3,param_4,param_5);
  return;
}

