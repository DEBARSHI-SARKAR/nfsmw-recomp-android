/* speed.exe 00666d00 FUN_00666d00; analysis pseudocode, not buildable source.
 * calls 006664e0 FUN_006664e0
 * calls 00666240 FUN_00666240
 * calls 006595e0 FUN_006595e0
 * calls 00666470 FUN_00666470
 * calls 0073b9a0 FUN_0073b9a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00666d00(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    while( true ) {
      uVar1 = FUN_00666470(*(undefined4 *)(param_1 + 4),0x6e1da6ac);
      *(undefined4 *)(param_1 + 4) = uVar1;
      if (DAT_00925e84 != '\0') {
        DAT_00925e84 = '\0';
      }
      _DAT_00925e8c = FUN_006664e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 4));
      if (DAT_00925e70 != 0) {
        DAT_00925e70 = 0;
      }
      DAT_00925e84 = '\x01';
      _DAT_00925e88 = "TrackLoader::LoadHandler";
      iVar2 = FUN_00666240(*(undefined4 *)(param_1 + 4),0x6e1da6ac);
      if (iVar2 == 0x6c0f87bf) break;
      DAT_00925e90 = 5;
    }
    iVar2 = FUN_00666240(*(undefined4 *)(param_1 + 4),0xbf068911);
  } while (iVar2 != 0x6c0f87bf);
  iVar2 = FUN_00666240(*(undefined4 *)(param_1 + 4),0x3e058902);
  if (iVar2 != 0x6c0f87bf) {
    FUN_0073b9a0();
    if (DAT_00925e84 != '\0') {
      DAT_00925e84 = '\0';
    }
    FUN_006595e0();
    return;
  }
  return;
}

