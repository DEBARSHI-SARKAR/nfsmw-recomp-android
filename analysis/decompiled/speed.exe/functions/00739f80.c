/* speed.exe 00739f80 FUN_00739f80; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 */

int FUN_00739f80(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  
  iVar1 = *(int *)(param_1 * 0xd0 + 0x98 + DAT_009b09d8);
  if (param_2 != '\0') {
    iVar1 = FUN_00460bf0("Player");
  }
  ppuVar3 = &PTR_s_Player_00904448;
  do {
    iVar2 = FUN_00460bf0(*ppuVar3);
    if (iVar2 == iVar1) {
      return (int)ppuVar3[4] << 10;
    }
    ppuVar3 = ppuVar3 + 6;
  } while ((int)ppuVar3 < 0x9044d8);
  return 0;
}

