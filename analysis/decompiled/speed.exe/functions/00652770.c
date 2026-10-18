/* speed.exe 00652770 FUN_00652770; analysis pseudocode, not buildable source.
 * calls 006526b0 FUN_006526b0
 * calls 004624a0 FUN_004624a0
 * calls 00652650 FUN_00652650
 */

void __fastcall FUN_00652770(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  uVar4 = *(uint *)(param_1 + 8) & 0xfffffff8;
  iVar6 = *(int *)(param_1 + 0xc) * 8;
  for (iVar1 = iVar6; iVar1 < (int)uVar4; iVar1 = iVar1 + iVar5 * 8) {
    iVar5 = (int)((uVar4 - iVar1) + ((int)(uVar4 - iVar1) >> 0x1f & 7U)) >> 3;
    if (0x7e0 < iVar5) {
      iVar5 = 0x7e0;
    }
    FUN_004624a0("CODEINE",0x41,((int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3) + param_1,iVar5);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    puVar3 = (undefined4 *)(param_1 + 0x40);
    do {
      *puVar3 = 0;
      iVar1 = iVar1 + 1;
      puVar3 = puVar3 + 9;
    } while (iVar1 < *(int *)(param_1 + 0x18));
  }
  iVar1 = *(int *)(param_1 + 8) - uVar4;
  if (iVar1 != 0) {
    iVar5 = iVar1;
    uVar2 = FUN_006526b0(*(int *)(param_1 + 8) - iVar1,iVar1);
    FUN_00652650(iVar6,uVar2,iVar5);
  }
  *(int *)(param_1 + 8) = iVar1 + iVar6;
  return;
}

