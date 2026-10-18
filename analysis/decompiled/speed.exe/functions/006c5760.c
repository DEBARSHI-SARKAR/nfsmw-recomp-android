/* speed.exe 006c5760 FUN_006c5760; analysis pseudocode, not buildable source.
 * calls 004519d0 FUN_004519d0
 * calls 004522f0 FUN_004522f0
 */

int FUN_006c5760(longlong *param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  longlong lVar3;
  int local_14;
  
  local_14 = 0;
  ppuVar2 = &PTR_s_WorldShader_008f9b60;
  do {
    puVar1 = *ppuVar2;
    lVar3 = FUN_004522f0(puVar1);
    FUN_004519d0(puVar1);
    if (lVar3 == *param_1) {
      return local_14;
    }
    local_14 = local_14 + 1;
    ppuVar2 = ppuVar2 + 0x24;
  } while ((int)ppuVar2 < 0x8facd0);
  return -1;
}

