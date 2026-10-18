/* speed.exe 00598a60 FUN_00598a60; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 00460ca0 FUN_00460ca0
 * calls 005988b0 FUN_005988b0
 */

void FUN_00598a60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined1 local_200 [512];
  
  iVar1 = FUN_0056bb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0056bb80();
  }
  FUN_00460ca0(local_200,iVar1,0x200);
  FUN_005988b0(param_1,param_2,param_3,param_4,param_5,param_5,1,local_200,&stack0x0000001c);
  return;
}

