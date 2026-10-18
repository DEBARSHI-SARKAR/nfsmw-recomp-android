/* speed.exe 0058c810 FUN_0058c810; analysis pseudocode, not buildable source.
 * calls 0058c760 FUN_0058c760
 * calls 00460bf0 FUN_00460bf0
 * calls 00747ac0 FUN_00747ac0
 */

uint FUN_0058c810(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  
  if (param_1 != 1) {
    return 0;
  }
  iVar3 = FUN_0058c760(1,param_2);
  if (iVar3 != 0) {
    uVar6 = 0;
    uVar4 = FUN_00460bf0(&PTR_DAT_008a15d0,0);
    bVar1 = FUN_00747ac0(uVar4,uVar6);
    uVar6 = 0;
    uVar4 = FUN_00460bf0("GREEN",0);
    bVar2 = FUN_00747ac0(uVar4,uVar6);
    uVar6 = 0;
    uVar4 = FUN_00460bf0(&DAT_008a15c0,0);
    uVar5 = FUN_00747ac0(uVar4,uVar6);
    return uVar5 & 0xff | ((bVar1 | 0xffffff00) << 8 | (uint)bVar2) << 8;
  }
  return 0;
}

