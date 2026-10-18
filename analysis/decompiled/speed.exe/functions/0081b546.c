/* speed.exe 0081b546 FUN_0081b546; analysis pseudocode, not buildable source.
 * calls 0081e639 FUN_0081e639
 * calls 0081e6ae FUN_0081e6ae
 */

undefined4 FUN_0081b546(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined1 local_d0 [38];
  undefined2 local_aa;
  
  FUN_0081e639(local_d0);
  if (0xffff < param_2) {
    param_2 = 0xffff;
  }
  if (param_1 == 0) {
    local_aa = (undefined2)param_2;
    if (DAT_009c2188 == '\0') {
      FUN_0081e6ae(local_d0);
    }
    else {
      DAT_009c1b34 = 1;
      DAT_009c1b30 = local_aa;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

