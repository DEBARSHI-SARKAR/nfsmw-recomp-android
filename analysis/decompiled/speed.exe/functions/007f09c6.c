/* speed.exe 007f09c6 FUN_007f09c6; analysis pseudocode, not buildable source.
 * calls 007f08ff FUN_007f08ff
 */

undefined4 FUN_007f09c6(undefined1 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (CONCAT11(*param_1,param_1[1]) == -0x3f05) {
    uVar3 = 1;
  }
  else {
    iVar1 = FUN_007f08ff(param_1,4);
    if (iVar1 == 0x42494746) {
      uVar3 = 2;
    }
    else {
      uVar2 = FUN_007f08ff(param_1,4);
      if ((uVar2 & 0xffffff00) == 0x42494700) {
        uVar3 = 3;
      }
      else {
        uVar2 = FUN_007f08ff(param_1,4);
        if ((uVar2 & 0xffffff00) == 0x53687000) {
          uVar3 = 2;
        }
      }
    }
  }
  return uVar3;
}

