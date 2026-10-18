/* speed.exe 007f03b7 FUN_007f03b7; analysis pseudocode, not buildable source.
 * calls 007ece6a FUN_007ece6a
 * calls 007ece42 FUN_007ece42
 * calls 007ececc FUN_007ececc
 */

undefined4 FUN_007f03b7(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = param_2[2];
  iVar1 = FUN_007ece42(*param_2,1,param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007ece6a(iVar1,0,param_2[1],uVar2,param_1 + -1);
    FUN_007ececc(iVar1,param_1 + -1);
  }
  return uVar2;
}

