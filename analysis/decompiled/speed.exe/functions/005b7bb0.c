/* speed.exe 005b7bb0 FUN_005b7bb0; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_005b7bb0(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x4144);
  if (iVar2 == 0x10) {
    return 0;
  }
  *(int *)(param_1 + 0x4144) = iVar2 + 1;
  iVar2 = (iVar2 * 0x100 + 0x4148 + param_1) - (int)param_2;
  do {
    cVar1 = *param_2;
    param_2[iVar2] = cVar1;
    param_2 = param_2 + 1;
  } while (cVar1 != '\0');
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}

