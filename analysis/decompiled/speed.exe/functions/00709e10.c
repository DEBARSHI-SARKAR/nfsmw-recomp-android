/* speed.exe 00709e10 FUN_00709e10; analysis pseudocode, not buildable source.
 * calls 00705980 FUN_00705980
 * calls 006fff90 FUN_006fff90
 */

uint __thiscall FUN_00709e10(int param_1,undefined4 *param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  undefined3 uVar3;
  longlong lVar4;
  
  uVar2 = 0;
  if (DAT_008f8700 != 0) {
    lVar4 = FUN_006fff90(*param_2,param_2[1]);
    uVar2 = (uint)lVar4;
    if (lVar4 != 0) {
      uVar2 = FUN_00705980(lVar4);
      if (uVar2 < *(uint *)(param_1 + 0x20)) {
        uVar1 = *(uint *)(uVar2 * 0x10 + 8 + *(int *)(param_1 + 0x1c));
        uVar2 = uVar2 * 0x10 + *(int *)(param_1 + 0x1c);
        if (((uVar1 != uVar2) && (uVar1 != uVar2)) && (uVar1 != 0)) {
          uVar3 = (undefined3)(uVar2 >> 8);
          if (param_3 != '\0') {
            return CONCAT31(uVar3,*(char *)(uVar1 + 4) != '\0');
          }
          return CONCAT31(uVar3,1);
        }
      }
    }
  }
  return uVar2 & 0xffffff00;
}

