/* speed.exe 006bf720 FUN_006bf720; analysis pseudocode, not buildable source.
 * calls 00516e90 FUN_00516e90
 * calls 00503400 FUN_00503400
 * calls 00503360 FUN_00503360
 * calls 004647c0 FUN_004647c0
 * calls 00516e20 FUN_00516e20
 * calls 00516e10 FUN_00516e10
 * calls 00460bf0 FUN_00460bf0
 */

void FUN_006bf720(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined **ppuVar3;
  undefined4 local_44;
  undefined1 local_40 [64];
  
  ppuVar3 = &PTR_DAT_008f9314;
  do {
    iVar1 = FUN_00516e10();
    if (*(int *)(iVar1 + 0x1c) != 0) {
      iVar1 = FUN_00516e10();
      uVar2 = *(undefined4 *)(iVar1 + 0x1c);
      FUN_00516e10(uVar2,*ppuVar3);
      uVar2 = FUN_00516e90(uVar2);
      FUN_004647c0(local_40,"%s_%s",uVar2);
      uVar2 = FUN_00460bf0(local_40);
      iVar1 = FUN_00503400(uVar2,0,0);
      if (iVar1 != 0) {
        local_44 = uVar2;
        FUN_00503360(&local_44,1);
      }
    }
    FUN_00516e10();
    iVar1 = FUN_00516e20();
    if (iVar1 != 0) {
      FUN_00516e10(*ppuVar3);
      uVar2 = FUN_00516e20();
      FUN_00516e10(uVar2);
      uVar2 = FUN_00516e90(uVar2);
      FUN_004647c0(local_40,"%s_%s",uVar2);
      uVar2 = FUN_00460bf0(local_40);
      iVar1 = FUN_00503400(uVar2,0,0);
      if (iVar1 != 0) {
        local_44 = uVar2;
        FUN_00503360(&local_44,1);
      }
    }
    ppuVar3 = ppuVar3 + 1;
  } while ((int)ppuVar3 < 0x8f932c);
  return;
}

