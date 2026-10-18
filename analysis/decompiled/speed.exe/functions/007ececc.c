/* speed.exe 007ececc FUN_007ececc; analysis pseudocode, not buildable source.
 * calls 007ed9a6 FUN_007ed9a6
 * calls 007edab2 FUN_007edab2
 * calls 007edb59 FUN_007edb59
 */

bool FUN_007ececc(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_007edb59(param_1,param_2,0);
  FUN_007ed9a6(uVar1);
  iVar2 = FUN_007edab2(uVar1);
  return iVar2 != 0;
}

