/* speed.exe 0081b5a5 FUN_0081b5a5; analysis pseudocode, not buildable source.
 * calls 0081e639 FUN_0081e639
 */

undefined4 FUN_0081b5a5(int param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined1 local_d0 [38];
  ushort local_aa;
  
  *param_2 = 0;
  FUN_0081e639(local_d0);
  if (param_1 == 0) {
    *param_2 = (uint)local_aa;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

