/* speed.exe 0080617b FUN_0080617b; analysis pseudocode, not buildable source.
 */

void FUN_0080617b(undefined4 param_1,byte *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_8;
  
  local_8 = 8;
  do {
    uVar2 = (uint)param_2[2];
    iVar3 = uVar2 - param_2[1];
    if (iVar3 != 0) {
      iVar4 = (uint)param_2[1] - (uint)*param_2;
      iVar1 = param_2[3] - uVar2;
      iVar3 = *(int *)(param_4 + (((iVar3 * 2 + 4) - iVar4) + iVar1 >> 3) * 4);
      iVar1 = (uint)(iVar1 == 0 && iVar4 == 0) * (iVar3 >> 1);
      param_2[1] = (&DAT_009c6c00)[iVar3 + (uint)param_2[1]];
      param_2[2] = (&DAT_009c6c00)[uVar2 - iVar3];
      *param_2 = (&DAT_009c6c00)[iVar1 + (uint)*param_2];
      param_2[3] = (&DAT_009c6c00)[(uint)param_2[3] - iVar1];
      param_2 = param_2 + param_3;
    }
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return;
}

