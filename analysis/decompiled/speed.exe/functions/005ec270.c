/* speed.exe 005ec270 FUN_005ec270; analysis pseudocode, not buildable source.
 * calls 005de610 FUN_005de610
 * calls 005ea0f0 FUN_005ea0f0
 * calls 005de690 FUN_005de690
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_005ec270(ushort *param_1)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  
  iVar1 = (uint)*param_1 * 0xc;
  if (*param_1 == 0xb) {
    FUN_005ea0f0();
  }
  if ((*(int *)(param_1 + 4) == 0) && (*(int *)(&DAT_008f5a5c + iVar1) != 0)) {
    uVar3 = FUN_005de690(*(int *)(&DAT_008f5a5c + iVar1));
    *(undefined4 *)(param_1 + 4) = uVar3;
  }
  if ((*(int *)(param_1 + 6) == 0) && (*(int *)(&DAT_008f5a60 + iVar1) != 0)) {
    uVar3 = FUN_005de610(*(int *)(&DAT_008f5a60 + iVar1));
    *(undefined4 *)(param_1 + 6) = uVar3;
  }
  uVar2 = param_1[1];
  if ((~((byte)uVar2 >> 2) & 1) != 0) {
    _DAT_0091e018 = _DAT_0091e018 + 1;
  }
  param_1[1] = uVar2 | 4;
  if (((byte)(uVar2 | 4) >> 6 & 1) != 0) {
    param_1[1] = uVar2 & 0xffbf | 5;
  }
  return;
}

