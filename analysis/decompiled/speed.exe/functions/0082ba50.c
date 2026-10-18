/* speed.exe 0082ba50 FUN_0082ba50; analysis pseudocode, not buildable source.
 * calls 007f01f3 FUN_007f01f3
 * calls 007ece6a FUN_007ece6a
 * calls 007ece42 FUN_007ece42
 * calls 00829480 FUN_00829480
 * calls 007ececc FUN_007ececc
 */

int FUN_0082ba50(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_3 == 0) {
    param_3 = FUN_007f01f3(param_1);
    if (param_3 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_00829480(param_3);
  if (iVar1 != 0) {
    uVar2 = FUN_007ece42(param_1,1,0);
    FUN_007ece6a(uVar2,0,iVar1,param_3,0);
    FUN_007ececc(uVar2,0);
  }
  *param_2 = *param_2 + 1;
  return iVar1;
}

