/* speed.exe 005985c0 FUN_005985c0; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 00598510 FUN_00598510
 * calls 00460ca0 FUN_00460ca0
 */

void FUN_005985c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 local_200 [512];
  
  iVar1 = FUN_0056bb80();
  if (iVar1 == 0) {
    iVar1 = FUN_0056bb80();
  }
  FUN_00460ca0(local_200,iVar1,0x200);
  FUN_00598510(param_1,param_2,param_3,local_200,&stack0x00000014);
  return;
}

