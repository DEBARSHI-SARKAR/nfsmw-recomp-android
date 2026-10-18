/* speed.exe 00580f40 FUN_00580f40; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_00580f40(uint param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_4;
  
  iVar4 = 0;
  local_4 = 0;
  uVar5 = param_1;
  do {
    piVar1 = (int *)((199 < iVar4) - 1 & uVar5);
    if ((((*piVar1 != -1) && ((piVar1[3] & 0xf0000U) != 0)) && ((piVar1[3] & 2U) != 0)) &&
       (((*(byte *)((int)piVar1 + 0x11) < 0x1a &&
         (iVar2 = (uint)*(byte *)((int)piVar1 + 0x11) * 0x38, iVar3 = iVar2 + 0x8728 + param_1,
         *(char *)(iVar2 + 0x8728 + param_1) != -1)) && (iVar3 != 0)))) {
      iVar3 = (**(code **)(*param_2 + 4))(iVar3);
      local_4 = local_4 + iVar3;
    }
    iVar4 = iVar4 + 1;
    uVar5 = uVar5 + 0x14;
  } while (iVar4 < 200);
  return local_4;
}

