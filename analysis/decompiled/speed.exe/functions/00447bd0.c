/* speed.exe 00447bd0 FUN_00447bd0; analysis pseudocode, not buildable source.
 * calls 00491e90 FUN_00491e90
 * calls 00460bf0 FUN_00460bf0
 */

void __fastcall FUN_00447bd0(int param_1)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 local_14;
  undefined4 local_10 [2];
  int local_8;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    local_10[0] = 0;
    local_8 = 0;
    local_14 = 0;
    cVar2 = FUN_00491e90("Skeleton",&local_14,local_10);
    iVar1 = local_8;
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x10) = local_10[0];
      uVar3 = FUN_00460bf0(local_10[0]);
      *(undefined4 *)(param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 0x24) = iVar1;
      *(uint *)(param_1 + 8) = (uint)(iVar1 != 0);
      return;
    }
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}

