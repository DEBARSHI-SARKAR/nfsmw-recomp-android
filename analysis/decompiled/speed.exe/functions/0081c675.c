/* speed.exe 0081c675 FUN_0081c675; analysis pseudocode, not buildable source.
 * calls 00862b92 FUN_00862b92
 * calls 0081deee FUN_0081deee
 */

void FUN_0081c675(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 local_34 [4];
  uint local_30;
  int local_28 [6];
  int local_10;
  int local_c;
  undefined4 *local_8;
  
  puVar4 = param_2;
  param_2 = (undefined4 *)param_2[2];
  iVar1 = param_1[0x4e];
  if (*(char *)(iVar1 + 0x25) != '\0') {
    uVar3 = (uint)param_2 >> 8;
    uVar5 = SUB41(param_2,0);
    param_2._0_2_ = CONCAT11((char)((uint)param_2 >> 0x10),(char)((uint)param_2 >> 0x18));
    param_2 = (undefined4 *)CONCAT22(CONCAT11(uVar5,(char)uVar3),param_2._0_2_);
  }
  local_30 = local_30 ^ (local_30 ^ (uint)param_2) & 0x7fffffff;
  local_8 = puVar4 + *(byte *)((int)param_1 + 0x16) + 3;
  iVar6 = 0;
  if (*(byte *)((int)param_1 + 0x16) != 0) {
    local_c = (int)puVar4 + (0xc - (int)local_28);
    do {
      iVar2 = *(int *)((int)local_28 + local_c + iVar6 * 4);
      if (*(char *)(iVar1 + 0x25) == '\0') {
        local_28[iVar6] = iVar2 + (int)local_8;
      }
      else {
        local_10 = iVar2;
        param_2._0_2_ = CONCAT11((char)((uint)iVar2 >> 0x10),(char)((uint)iVar2 >> 0x18));
        param_2 = (undefined4 *)
                  CONCAT13((char)iVar2,CONCAT12((char)((uint)iVar2 >> 8),param_2._0_2_));
        local_28[iVar6] = (int)local_8 + (int)param_2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*(byte *)((int)param_1 + 0x16));
  }
  if ((local_30 & 0x7fffffff) == 0) {
    FUN_00862b92(*param_1,puVar4);
  }
  else {
    *(undefined4 **)(local_28[0] + -4) = puVar4;
    *puVar4 = *(undefined4 *)(iVar1 + 0xc);
    *(uint *)(iVar1 + 0x1c) = (local_30 & 0x7fffffff) + *(int *)(iVar1 + 0x1c);
    local_30 = (uint)*(byte *)(iVar1 + 0x24) << 0x1f | local_30 & 0x7fffffff;
    FUN_0081deee(param_1[2],local_34);
    *(undefined1 *)(iVar1 + 0x24) = 1;
  }
  return;
}

