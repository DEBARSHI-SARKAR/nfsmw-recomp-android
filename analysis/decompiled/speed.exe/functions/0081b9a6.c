/* speed.exe 0081b9a6 FUN_0081b9a6; analysis pseudocode, not buildable source.
 * calls 0081e639 FUN_0081e639
 * calls 0081e6ae FUN_0081e6ae
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 FUN_0081b9a6(int param_1)

{
  undefined4 uVar1;
  undefined1 local_d0 [67];
  undefined1 local_8d;
  
  if (param_1 == 0) {
    FUN_0081e639(local_d0);
    local_8d = FUN_007c4b80();
    FUN_0081e6ae(local_d0);
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

