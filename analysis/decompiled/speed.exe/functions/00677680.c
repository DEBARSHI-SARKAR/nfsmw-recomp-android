/* speed.exe 00677680 FUN_00677680; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0066fb40 FUN_0066fb40
 */

void __fastcall FUN_00677680(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xd0);
  if (iVar1 != 0) {
    FUN_0066fb40();
    FUN_005d0370(iVar1,8,0);
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  return;
}

