/* speed.exe 005ace40 FUN_005ace40; analysis pseudocode, not buildable source.
 * calls 00628cc0 FUN_00628cc0
 * calls 00634370 FUN_00634370
 * calls 005acb70 FUN_005acb70
 * calls 004655f0 FUN_004655f0
 */

void __fastcall FUN_005ace40(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x128) != 0) {
    FUN_00634370();
    iVar1 = FUN_00628cc0();
    FUN_005acb70(*(undefined4 *)(param_1 + 0x128),iVar1 * 0x13 + 0xf4b8,1,0);
    if (*(int *)(param_1 + 0x128) != 0) {
      FUN_004655f0(*(int *)(param_1 + 0x128));
      *(undefined4 *)(param_1 + 0x128) = 0;
    }
  }
  return;
}

