/* speed.exe 00474440 FUN_00474440; analysis pseudocode, not buildable source.
 * calls 00470a10 FUN_00470a10
 */

void __fastcall FUN_00474440(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_LAB_00894d10;
  *(undefined4 *)(param_1[7] + 0xcc) = 0x3f800000;
  if ((DAT_00911020 == 0) && (*(undefined4 *)(param_1[7] + 0xb4) = 0, DAT_00911020 == 0)) {
    *(undefined4 *)(param_1[7] + 0xb8) = 0;
  }
  iVar1 = param_1[7];
  *(undefined1 *)(iVar1 + 0x2a0) = 1;
  *(undefined4 *)(iVar1 + 0x2ac) = DAT_008f82f4;
  FUN_00470a10();
  return;
}

