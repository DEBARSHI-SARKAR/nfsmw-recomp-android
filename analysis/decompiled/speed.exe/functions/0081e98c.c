/* speed.exe 0081e98c FUN_0081e98c; analysis pseudocode, not buildable source.
 */

void FUN_0081e98c(uint *param_1,uint param_2)

{
  DAT_009c21fc = param_1;
  param_1[2] = param_2;
  DAT_009c21fc[1] = (int)param_1 + (param_2 - 8);
  *DAT_009c21fc = (uint)(param_1 + 6);
  *DAT_009c21fc = *DAT_009c21fc + 0xf;
  *DAT_009c21fc = *DAT_009c21fc & 0xfffffff0;
  DAT_009c21fc[3] = param_2 - 0x2f;
  DAT_009c21fc[4] = param_2 - 0xf;
  return;
}

