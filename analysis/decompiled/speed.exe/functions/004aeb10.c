/* speed.exe 004aeb10 FUN_004aeb10; analysis pseudocode, not buildable source.
 * calls 004d92d0 FUN_004d92d0
 * calls 004d92a0 FUN_004d92a0
 * calls 004d9680 FUN_004d9680
 */

int FUN_004aeb10(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = 0;
  if ((&DAT_00911f60)[param_1 >> 0x10 & 0xff] != 0) {
    uVar3 = (int)param_1 >> 0xb & 0x1f;
    uVar4 = (int)param_1 >> 4 & 0x7f;
    iVar1 = FUN_004d9680(uVar3);
    if (iVar1 != 0) {
      if ((param_1 & 0xe0000000) == 0x40000000) {
        uVar5 = uVar4;
        FUN_004d9680(uVar3);
        iVar2 = FUN_004d92a0(uVar5);
      }
      if ((param_1 & 0xe0000000) == 0x60000000) {
        FUN_004d9680(uVar3);
        iVar2 = FUN_004d92d0(uVar4);
      }
      if (iVar2 != 0) {
        return iVar2;
      }
    }
  }
  return 0;
}

