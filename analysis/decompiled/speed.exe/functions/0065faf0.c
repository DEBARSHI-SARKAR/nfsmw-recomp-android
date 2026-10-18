/* speed.exe 0065faf0 FUN_0065faf0; analysis pseudocode, not buildable source.
 * calls 0065dbc0 FUN_0065dbc0
 * calls 0065eab0 FUN_0065eab0
 * calls 00654990 FUN_00654990
 */

void __fastcall FUN_0065faf0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  
  piVar2 = DAT_00925980;
  lVar5 = FUN_00654990(param_1[1],*param_1);
  if (lVar5 != 0) {
    uVar3 = FUN_0065dbc0(lVar5);
    if (uVar3 < (uint)piVar2[1]) {
      iVar4 = *piVar2;
      iVar1 = *(int *)(uVar3 * 0x10 + 8 + iVar4);
      iVar4 = uVar3 * 0x10 + iVar4;
      if (((iVar1 != iVar4) && (iVar1 != iVar4)) && (iVar1 != 0)) {
        FUN_0065eab0(param_1);
      }
    }
  }
  return;
}

