/* speed.exe 007f3732 FUN_007f3732; analysis pseudocode, not buildable source.
 * calls 007f364c FUN_007f364c
 */

uint FUN_007f3732(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = 0xffffffff;
  iVar4 = 0;
  uVar3 = 0;
  do {
    if ((&PTR_s_print_ch_all_00907fe0)[uVar3 * 2] != (undefined *)0x0) {
      iVar1 = FUN_007f364c();
      if (iVar4 < iVar1) {
        uVar2 = uVar3;
        iVar4 = iVar1;
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x40);
  return uVar2;
}

