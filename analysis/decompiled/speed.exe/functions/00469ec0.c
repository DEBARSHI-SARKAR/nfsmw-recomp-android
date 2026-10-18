/* speed.exe 00469ec0 FUN_00469ec0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 00469b90 FUN_00469b90
 * calls 00469da0 FUN_00469da0
 * calls 0065faf0 FUN_0065faf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00469ec0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(float *)(param_1 + 0x2b4) < _DAT_00890968 != (*(float *)(param_1 + 0x2b4) == _DAT_00890968))
  {
    uVar1 = FUN_005cc240("MomentStrm");
    iVar2 = FUN_00469b90(DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,
                         DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,
                         DAT_008a2fc8,DAT_008a2fcc,0,0x88bff834);
    *(undefined4 *)(iVar2 + 4) = uVar1;
    FUN_0065faf0();
    uVar1 = FUN_005cc240(&DAT_00894b1c);
    iVar2 = FUN_00469da0(1);
    *(undefined4 *)(iVar2 + 4) = uVar1;
    FUN_0065faf0();
    *(undefined4 *)(param_1 + 0x2b4) = 0x40200000;
    *(undefined4 *)(param_1 + 0x2c0) = 0x3f000000;
  }
  return;
}

