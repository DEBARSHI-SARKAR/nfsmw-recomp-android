/* speed.exe 004dcf90 FUN_004dcf90; analysis pseudocode, not buildable source.
 * calls 00469b90 FUN_00469b90
 * calls 006ff2d0 FUN_006ff2d0
 * calls 006ff7a0 FUN_006ff7a0
 * calls 005cc240 FUN_005cc240
 * calls 0065faf0 FUN_0065faf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004dcf90(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (*(char *)(param_1 + 0x38) != '\x01') {
    FUN_006ff2d0(0);
    cVar1 = FUN_006ff7a0();
    if (cVar1 == '\x01') {
      if ((float)_DAT_008987a8 <= *(float *)(param_1 + 0x28)) {
        uVar2 = FUN_005cc240("MomentStrm");
        uVar4 = 0xd2c5e045;
      }
      else {
        uVar2 = FUN_005cc240("MomentStrm");
        uVar4 = 0x16c4fa1;
      }
      iVar3 = FUN_00469b90(DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,
                           DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,
                           DAT_008a2fc8,DAT_008a2fcc,0,uVar4);
      *(undefined4 *)(iVar3 + 4) = uVar2;
      FUN_0065faf0();
      *(undefined1 *)(param_1 + 0x38) = 1;
    }
  }
  return;
}

