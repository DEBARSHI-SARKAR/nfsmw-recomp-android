/* speed.exe 005989b0 FUN_005989b0; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 00460ca0 FUN_00460ca0
 * calls 005988b0 FUN_005988b0
 */

void FUN_005989b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 local_200 [512];
  
  iVar1 = FUN_0056bb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0056bb80();
  }
  FUN_00460ca0(local_200,iVar1,0x200);
  FUN_005988b0(param_1,param_2,param_3,param_4,param_5,param_6,1,local_200,&stack0x00000020);
  return;
}

