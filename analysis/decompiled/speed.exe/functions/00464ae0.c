/* speed.exe 00464ae0 FUN_00464ae0; analysis pseudocode, not buildable source.
 * calls 00464a70 FUN_00464a70
 * calls 00464720 FUN_00464720
 */

int __fastcall FUN_00464ae0(int param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x160);
  if (((iVar3 < *(int *)(param_1 + 0x154)) &&
      (pbVar1 = (byte *)(*(int *)(param_1 + 0x15c) + iVar3 * 0xc), pbVar1 != (byte *)0x0)) &&
     (pbVar1[1] == 0)) {
    *(int *)(param_1 + 0x160) = iVar3 + 1;
    iVar3 = *(int *)((*pbVar1 + 1) * 0x54 + param_1) + *(int *)(pbVar1 + 4);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  uVar2 = FUN_00464a70();
  FUN_00464720(param_1,"Not enough arguments in %s\n",uVar2);
  return 0;
}

