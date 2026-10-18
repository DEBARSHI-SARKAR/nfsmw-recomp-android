/* speed.exe 0081b9e8 FUN_0081b9e8; analysis pseudocode, not buildable source.
 * calls 0081e639 FUN_0081e639
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0081b9e8(int param_1,float *param_2)

{
  undefined4 uVar1;
  undefined1 local_d0 [67];
  byte local_8d;
  
  *param_2 = 0.0;
  if (param_1 == 0) {
    FUN_0081e639(local_d0);
    uVar1 = 0;
    *param_2 = (float)local_8d * _DAT_00890dc4;
  }
  else {
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

