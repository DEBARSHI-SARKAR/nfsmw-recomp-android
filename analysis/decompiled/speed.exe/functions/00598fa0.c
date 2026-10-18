/* speed.exe 00598fa0 FUN_00598fa0; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 00598e60 FUN_00598e60
 * calls 00460ca0 FUN_00460ca0
 */

void FUN_00598fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined1 local_200 [512];
  
  iVar1 = FUN_0056bb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0056bb80();
  }
  FUN_00460ca0(local_200,iVar1,0x200);
  FUN_00598e60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,local_200,&stack0x00000034);
  return;
}

