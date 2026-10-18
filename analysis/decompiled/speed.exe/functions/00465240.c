/* speed.exe 00465240 FUN_00465240; analysis pseudocode, not buildable source.
 * calls 00464d80 FUN_00464d80
 */

void FUN_00465240(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  (&DAT_0090de49)[param_1 * 0xc] = 0;
  *(undefined4 *)(&DAT_0090de4c + param_1 * 0xc) = 0xffffffff;
  (&DAT_0090df10)[param_1] = &DAT_0090dff0 + param_1 * 100;
  FUN_00464d80(param_2,param_3,param_4);
  return;
}

