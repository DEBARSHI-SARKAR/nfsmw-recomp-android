/* speed.exe 0081b701 FUN_0081b701; analysis pseudocode, not buildable source.
 * calls 0081e639 FUN_0081e639
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081b701(int param_1,float *param_2)

{
  undefined1 local_d0 [56];
  byte local_98;
  
  FUN_0081e639(local_d0);
  if (param_1 != 0) {
    return 0xfffffffb;
  }
  *param_2 = (float)local_98 * _DAT_00890dc4;
  return 0;
}

