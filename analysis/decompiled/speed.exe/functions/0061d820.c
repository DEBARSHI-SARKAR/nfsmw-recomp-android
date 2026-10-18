/* speed.exe 0061d820 FUN_0061d820; analysis pseudocode, not buildable source.
 * calls 0061d420 FUN_0061d420
 * calls 00460d20 FUN_00460d20
 * calls 004574d0 FUN_004574d0
 * calls 00451780 FUN_00451780
 */

void __fastcall FUN_0061d820(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined **ppuVar6;
  uint local_c;
  undefined4 local_8;
  int local_4;
  
  local_c = 0;
  iVar1 = FUN_00451780();
  if (iVar1 != 0) {
    local_4 = param_1 + 4;
    do {
      puVar2 = (undefined4 *)FUN_004574d0(local_c);
      local_8 = *puVar2;
      puVar3 = (undefined4 *)FUN_0061d420(&local_8);
      iVar1 = 0;
      *puVar3 = 0;
      puVar3[1] = 0;
      ppuVar6 = &PTR_s_EA_Reflection_Float_008f5dc0;
      do {
        iVar4 = FUN_00460d20(*ppuVar6,puVar2[1]);
        if (iVar4 == 0) {
          *puVar3 = (&PTR_FUN_008f5dc4)[iVar1 * 3];
          puVar3[1] = (&DAT_008f5dc8)[iVar1 * 3];
          break;
        }
        ppuVar6 = ppuVar6 + 3;
        iVar1 = iVar1 + 1;
      } while ((int)ppuVar6 < 0x8f5e80);
      local_c = local_c + 1;
      uVar5 = FUN_00451780();
    } while (local_c < uVar5);
  }
  return;
}

