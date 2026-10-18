/* speed.exe 006466b0 FUN_006466b0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 00635210 FUN_00635210
 * calls 0063ffd0 FUN_0063ffd0
 */

void __fastcall FUN_006466b0(int param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879e18;
  local_c = ExceptionList;
  iVar1 = *(int *)(param_1 + 0x270);
  local_4 = 0;
  ExceptionList = &local_c;
  if (iVar1 != 0) {
    ExceptionList = &local_c;
    FUN_00635210();
    if (*(int *)(iVar1 + 4) != 0) {
      FUN_005d0370(*(int *)(iVar1 + 4),0x24,0);
    }
    *(undefined4 *)(iVar1 + 4) = 0;
    FUN_005d0370(iVar1,0xc,0);
  }
  FUN_0063ffd0();
  ExceptionList = local_c;
  return;
}

