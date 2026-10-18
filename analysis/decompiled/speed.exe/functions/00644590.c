/* speed.exe 00644590 FUN_00644590; analysis pseudocode, not buildable source.
 * calls 00635060 FUN_00635060
 */

int __fastcall FUN_00644590(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00635060();
  *(undefined4 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}

