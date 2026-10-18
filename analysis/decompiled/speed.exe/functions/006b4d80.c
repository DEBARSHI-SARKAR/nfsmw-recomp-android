/* speed.exe 006b4d80 FUN_006b4d80; analysis pseudocode, not buildable source.
 * calls 0041c130 FUN_0041c130
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_006b4d80(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_005d51f0(DAT_00930514,DAT_00930514 + DAT_0093051c * 8,*param_1);
  FUN_0041c130(iVar1,iVar1 + 8);
  return;
}

