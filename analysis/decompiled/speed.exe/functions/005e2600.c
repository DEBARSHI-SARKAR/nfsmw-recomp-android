/* speed.exe 005e2600 FUN_005e2600; analysis pseudocode, not buildable source.
 * calls 00452440 FUN_00452440
 * calls 0045a490 FUN_0045a490
 */

void FUN_005e2600(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00452440();
  FUN_0045a490(0x5cea9d46,param_1,iVar1 + param_2);
  return;
}

