/* speed.exe 0081b611 FUN_0081b611; analysis pseudocode, not buildable source.
 * calls 0081e639 FUN_0081e639
 * calls 0081e6ae FUN_0081e6ae
 */

undefined4 FUN_0081b611(int param_1,undefined1 param_2)

{
  undefined4 uVar1;
  undefined1 local_d0 [42];
  undefined1 local_a6;
  
  FUN_0081e639(local_d0);
  if (param_1 == 0) {
    if (DAT_009c2188 == '\0') {
      local_a6 = param_2;
      FUN_0081e6ae(local_d0);
    }
    else {
      DAT_009c1b0c = 1;
      DAT_009c1b08 = param_2;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

