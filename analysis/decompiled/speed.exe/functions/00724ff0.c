/* speed.exe 00724ff0 FUN_00724ff0; analysis pseudocode, not buildable source.
 * calls 00460c50 FUN_00460c50
 * calls 00460e30 FUN_00460e30
 */

undefined ** FUN_00724ff0(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined **ppuVar3;
  
  ppuVar3 = &PTR_s_BARRIER__00903168;
  do {
    uVar1 = FUN_00460c50(*ppuVar3);
    iVar2 = FUN_00460e30(param_1,*ppuVar3,uVar1);
    if (iVar2 == 0) {
      return ppuVar3;
    }
    ppuVar3 = ppuVar3 + 2;
  } while ((int)ppuVar3 < 0x903190);
  return (undefined **)0x0;
}

