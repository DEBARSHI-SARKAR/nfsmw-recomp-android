/* speed.exe 00598dd0 FUN_00598dd0; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 00598ae0 FUN_00598ae0
 * calls 00460ca0 FUN_00460ca0
 */

void FUN_00598dd0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined1 local_200 [512];
  
  iVar1 = FUN_0056bb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0056bb80();
  }
  FUN_00460ca0(local_200,iVar1,0x200);
  FUN_00598ae0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,0,0,param_8,local_200,
               &stack0x00000028);
  return;
}

