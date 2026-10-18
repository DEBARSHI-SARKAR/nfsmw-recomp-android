/* speed.exe 00577590 FUN_00577590; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 */

undefined4 FUN_00577590(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined **ppuVar2;
  int iVar3;
  
  iVar3 = 0;
  ppuVar2 = &PTR_s_brakes_008f5484;
  do {
    iVar1 = FUN_00460dd0(param_1,ppuVar2[-1]);
    if (iVar1 == 0) {
      if (*ppuVar2 == (undefined *)0x0) {
        return (&DAT_008f5488)[iVar3 * 3];
      }
      iVar1 = FUN_00460dd0(param_2,*ppuVar2);
      if (iVar1 == 0) {
        return (&DAT_008f5488)[iVar3 * 3];
      }
    }
    ppuVar2 = ppuVar2 + 3;
    iVar3 = iVar3 + 1;
    if (0x8f557f < (int)ppuVar2) {
      return 0;
    }
  } while( true );
}

