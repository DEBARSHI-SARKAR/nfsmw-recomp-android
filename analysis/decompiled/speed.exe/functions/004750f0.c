/* speed.exe 004750f0 FUN_004750f0; analysis pseudocode, not buildable source.
 * calls 00470a10 FUN_00470a10
 */

void __fastcall FUN_004750f0(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_LAB_00894d60;
  DAT_00911092 = 0;
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

