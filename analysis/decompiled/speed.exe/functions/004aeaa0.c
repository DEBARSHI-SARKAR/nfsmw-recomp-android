/* speed.exe 004aeaa0 FUN_004aeaa0; analysis pseudocode, not buildable source.
 * calls 004d92a0 FUN_004d92a0
 * calls 004d9680 FUN_004d9680
 */

undefined4 FUN_004aeaa0(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = 0;
  if ((&DAT_00911f60)[param_1 >> 0x10 & 0xff] != 0) {
    uVar4 = (int)param_1 >> 0xb & 0x1f;
    iVar1 = FUN_004d9680(uVar4);
    if (iVar1 == 0) {
      return 0;
    }
    if ((param_1 & 0xe0000000) == 0x40000000) {
      uVar3 = (int)param_1 >> 4 & 0x7f;
      FUN_004d9680(uVar4);
      uVar2 = FUN_004d92a0(uVar3);
    }
  }
  return uVar2;
}

