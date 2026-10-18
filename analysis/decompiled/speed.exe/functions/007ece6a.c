/* speed.exe 007ece6a FUN_007ece6a; analysis pseudocode, not buildable source.
 * calls 007ed9a6 FUN_007ed9a6
 * calls 007edbba FUN_007edbba
 * calls 007edab2 FUN_007edab2
 */

void FUN_007ece6a(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_007edbba(param_1,param_2,param_2 >> 0x1f,param_3,param_4,param_4 >> 0x1f,param_5,0);
  FUN_007ed9a6(uVar1);
  FUN_007edab2(uVar1);
  return;
}

