/* speed.exe 005178b0 FUN_005178b0; analysis pseudocode, not buildable source.
 * calls 00460e30 FUN_00460e30
 * calls 00460c50 FUN_00460c50
 */

undefined * __fastcall FUN_005178b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  
  puVar4 = (undefined *)0x7f;
  ppuVar3 = &PTR_s_MOVIES_attract_movie_008f3818;
  do {
    uVar1 = FUN_00460c50(*ppuVar3);
    iVar2 = FUN_00460e30(*ppuVar3,param_1 + 0x18,uVar1);
    if ((iVar2 == 0) && (puVar4 = ppuVar3[1], DAT_009260b8 != '\0')) {
      uVar1 = FUN_00460c50(*ppuVar3);
      iVar2 = FUN_00460e30(*ppuVar3,"MOVIES\\psa",uVar1);
      if (iVar2 == 0) {
        puVar4 = (undefined *)0x0;
      }
    }
    ppuVar3 = ppuVar3 + 2;
  } while ((int)ppuVar3 < 0x8f3948);
  return puVar4;
}

