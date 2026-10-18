/* speed.exe 0079bca0 FUN_0079bca0; analysis pseudocode, not buildable source.
 * calls EXTERNAL:0000000f InterlockedIncrement
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00460dd0 FUN_00460dd0
 * calls 0079bac0 FUN_0079bac0
 * calls 0078be70 FUN_0078be70
 * calls 007ec1bd FUN_007ec1bd
 * calls EXTERNAL:00000010 InterlockedDecrement
 */

uint __thiscall FUN_0079bca0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_0079bac0(param_1);
  uVar2 = iVar1 + 0x1c;
  if ((*(int *)(iVar1 + 0x1c) == -1) || (uVar2 == 0)) {
    return uVar2 & 0xffffff00;
  }
  iVar4 = 0;
  if (0 < *(int *)(iVar1 + 0x40)) {
    do {
      FUN_007ec1bd();
      InterlockedIncrement(&DAT_009b4438);
      iVar3 = FUN_0078be70(iVar4);
      InterlockedDecrement(&DAT_009b4438);
      FUN_007ec1c8();
      if (((iVar3 != 0) && (iVar3 + 4 != 0)) &&
         (iVar3 = FUN_00460dd0(iVar3 + 4,param_2), iVar3 == 0)) {
        return 1;
      }
      uVar2 = *(uint *)(iVar1 + 0x40);
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return uVar2 & 0xffffff00;
}

