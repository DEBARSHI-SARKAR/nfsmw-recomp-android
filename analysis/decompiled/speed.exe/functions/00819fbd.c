/* speed.exe 00819fbd FUN_00819fbd; analysis pseudocode, not buildable source.
 * calls 0081efb2 FUN_0081efb2
 */

void FUN_00819fbd(int param_1,int param_2)

{
  if (param_2 < 0) {
    param_2 = 0;
  }
  else if (0xffff < param_2) {
    param_2 = 0xffff;
  }
  *(short *)(param_1 * 0x90 + 0x8e + DAT_009c21f4) = (short)param_2;
  FUN_0081efb2(param_1);
  return;
}

