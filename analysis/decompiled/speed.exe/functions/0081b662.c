/* speed.exe 0081b662 FUN_0081b662; analysis pseudocode, not buildable source.
 * calls 0081e639 FUN_0081e639
 */

undefined4 FUN_0081b662(int param_1,uint *param_2)

{
  undefined1 local_d0 [42];
  byte local_a6;
  
  FUN_0081e639(local_d0);
  if (param_1 != 0) {
    return 0xfffffffb;
  }
  *param_2 = (uint)local_a6;
  return 0;
}

