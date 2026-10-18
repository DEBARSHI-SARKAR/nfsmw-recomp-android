/* speed.exe 007f7677 FUN_007f7677; analysis pseudocode, not buildable source.
 * calls 007f3fa4 FUN_007f3fa4
 * calls 007f75dd FUN_007f75dd
 * calls 007f7654 FUN_007f7654
 */

undefined4 * FUN_007f7677(undefined4 *param_1)

{
  int iVar1;
  
  FUN_007f3fa4(*param_1);
  if (DAT_009bdd58 == (undefined4 *)0x0) {
    iVar1 = FUN_007f75dd(0x84);
    if (iVar1 == 0) {
      DAT_009bdd58 = (undefined4 *)0x0;
    }
    else {
      DAT_009bdd58 = (undefined4 *)FUN_007f7654(param_1);
    }
  }
  else {
    (**(code **)*DAT_009bdd58)();
  }
  return DAT_009bdd58;
}

