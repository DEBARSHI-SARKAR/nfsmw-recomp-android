/* speed.exe 007f01b5 FUN_007f01b5; analysis pseudocode, not buildable source.
 * calls 007ece42 FUN_007ece42
 * calls 007ececc FUN_007ececc
 * calls 007ecef7 FUN_007ecef7
 */

undefined4 FUN_007f01b5(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007ece42(*param_2,1,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007ecef7(iVar1,param_1 + -1);
    FUN_007ececc(iVar1,param_1 + -1);
  }
  return uVar2;
}

