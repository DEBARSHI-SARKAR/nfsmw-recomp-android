/* speed.exe 007f076a FUN_007f076a; analysis pseudocode, not buildable source.
 * calls 007ece42 FUN_007ece42
 * calls 007ececc FUN_007ececc
 * calls 007ece9e FUN_007ece9e
 */

bool FUN_007f076a(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = FUN_007ece42(*param_2,6,param_1);
  if (iVar1 == 0) {
    bVar3 = false;
  }
  else {
    iVar2 = FUN_007ece9e(iVar1,0,param_2[1],param_2[2],param_1 + -1);
    FUN_007ececc(iVar1,param_1 + -1);
    bVar3 = iVar2 == param_2[2];
  }
  return bVar3;
}

