/* speed.exe 00737830 FUN_00737830; analysis pseudocode, not buildable source.
 * calls 004662e0 FUN_004662e0
 * calls 00460bf0 FUN_00460bf0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00737830(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  DAT_009b0950 = FUN_004662e0(0x14,500,"CarEmitterPositionSlotPool",0);
  puVar2 = &DAT_009033f4;
  do {
    uVar1 = FUN_00460bf0(puVar2[-1]);
    *puVar2 = uVar1;
    puVar2 = puVar2 + 2;
  } while ((int)puVar2 < 0x9034dc);
  _DAT_009b34b0 = 0x3f800000;
  _DAT_009b34b4 = 0;
  _DAT_009b34b8 = 0;
  _DAT_009b34bc = 0;
  _DAT_009b34c0 = 0;
  _DAT_009b34c4 = 0x3f800000;
  _DAT_009b34c8 = 0;
  _DAT_009b34cc = 0;
  _DAT_009b34d0 = 0;
  _DAT_009b34d4 = 0;
  _DAT_009b34d8 = 0x3f800000;
  _DAT_009b34dc = 0;
  _DAT_009b34e0 = 0;
  _DAT_009b34e4 = 0;
  _DAT_009b34e8 = 0;
  _DAT_009b34ec = 0x3f800000;
  _DAT_009b2a18 = 0;
  _DAT_009b2a1c = 0;
  _DAT_009b2a20 = 0;
  _DAT_009b2a24 = 0x3f800000;
  _DAT_009b2a30 = 0;
  _DAT_009b2a34 = 0;
  _DAT_009b2a28 = 0x3f800000;
  _DAT_009b2a2c = 0x3f800000;
  _DAT_009b2a40 = 0x3f800000;
  _DAT_009b2a44 = 0;
  _DAT_009b2a38 = 0x80808080;
  return;
}

