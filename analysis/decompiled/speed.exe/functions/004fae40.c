/* speed.exe 004fae40 FUN_004fae40; analysis pseudocode, not buildable source.
 * calls 006bfd00 FUN_006bfd00
 * calls 006bf530 FUN_006bf530
 */

void FUN_004fae40(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_006bf530();
  iVar1 = *(int *)(param_1 + 4);
  uVar3 = param_3 | 0x10;
  if ((iVar1 == 1) || (iVar1 == 2)) {
    uVar3 = param_3 | 0x12;
  }
  if ((iVar2 == 4) || (iVar2 == 3)) {
    uVar3 = uVar3 | 1;
  }
  if ((0x11 < iVar1) && (iVar1 < 0x18)) {
    uVar3 = uVar3 | 0x100;
  }
  if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1960) == 1)) {
    uVar3 = uVar3 | 4;
  }
  if ((uVar3 & 0x1800) != 0) {
    uVar3 = uVar3 | 0x8000040;
  }
  if ((uVar3 & 0x1000) != 0) {
    uVar3 = uVar3 | 2;
  }
  if (iVar1 == 3) {
    uVar3 = uVar3 | 0x20;
  }
  FUN_006bfd00(param_1,param_2);
  *(uint *)(param_2 + 0x84) = uVar3;
  return;
}

