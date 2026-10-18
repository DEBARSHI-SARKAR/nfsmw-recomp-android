/* speed.exe 007a3140 FUN_007a3140; analysis pseudocode, not buildable source.
 * calls 005fba70 FUN_005fba70
 * calls 00460dd0 FUN_00460dd0
 * calls 0056e2b0 FUN_0056e2b0
 */

uint FUN_007a3140(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined **ppuVar4;
  
  iVar1 = FUN_0056e2b0();
  if (iVar1 == 1) {
    ppuVar4 = &PTR_s_15_2_1_00906140;
    do {
      uVar2 = FUN_005fba70(*ppuVar4);
      uVar3 = FUN_00460dd0(uVar2);
      if (uVar3 == 0) {
        return 1;
      }
      ppuVar4 = ppuVar4 + 1;
    } while ((int)ppuVar4 < 0x90616c);
  }
  else {
    uVar3 = FUN_0056e2b0();
    if (uVar3 == 2) {
      ppuVar4 = &PTR_s_16_1_1_r_00906138;
      do {
        uVar2 = FUN_005fba70(*ppuVar4);
        uVar3 = FUN_00460dd0(uVar2);
        if (uVar3 == 0) {
          return 1;
        }
        ppuVar4 = ppuVar4 + 1;
      } while ((int)ppuVar4 < 0x906140);
      return uVar3 & 0xffffff00;
    }
  }
  return uVar3 & 0xffffff00;
}

