/* speed.exe 006bf690 FUN_006bf690; analysis pseudocode, not buildable source.
 * calls 00516e90 FUN_00516e90
 * calls 00508b10 FUN_00508b10
 * calls 00516e20 FUN_00516e20
 * calls 004647c0 FUN_004647c0
 * calls 00516e10 FUN_00516e10
 * calls 00460bf0 FUN_00460bf0
 */

void FUN_006bf690(void)

{
  undefined4 uVar1;
  undefined **ppuVar2;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  if (DAT_008f945b != '\0') {
    DAT_0093e86c = 0;
    ppuVar2 = &PTR_DAT_008f9314;
    do {
      FUN_00516e10(*ppuVar2);
      uVar1 = FUN_00516e20();
      FUN_00516e10(uVar1);
      uVar1 = FUN_00516e90(uVar1);
      FUN_004647c0(local_40,"%s_%s",uVar1);
      local_44 = FUN_00460bf0(local_40);
      FUN_00508b10(&local_44,1,FUN_006bf5a0,0,0);
      ppuVar2 = ppuVar2 + 1;
    } while ((int)ppuVar2 < 0x8f932c);
  }
  return;
}

