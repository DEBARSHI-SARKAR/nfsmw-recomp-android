/* speed.exe 004fcea0 FUN_004fcea0; analysis pseudocode, not buildable source.
 * calls 006dadf0 FUN_006dadf0
 * calls 00585d10 FUN_00585d10
 * calls 00506ef0 FUN_00506ef0
 * calls 0073ad20 FUN_0073ad20
 */

void __thiscall FUN_004fcea0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = 0;
  local_4 = 0;
  local_8 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x74) + 4 + local_8 * 8);
      if (iVar1 != 0) {
        bVar3 = false;
        if (((*(int *)(iVar1 + 0x38) != 0) && (param_2 <= *(int *)(iVar1 + 0x30))) &&
           (*(int *)(iVar1 + 0x30) < param_3 + param_2)) {
          bVar3 = true;
          *(undefined4 *)(iVar1 + 0x70) = 0;
        }
        if (((*(int *)(iVar1 + 0x3c) != 0) && (param_2 <= *(int *)(iVar1 + 0x34))) &&
           (*(int *)(iVar1 + 0x34) < param_3 + param_2)) {
          bVar3 = true;
          *(undefined4 *)(iVar1 + 0x74) = 0;
        }
        if ((*(int *)(iVar1 + 0x70) == 0) && (bVar3)) {
          FUN_006dadf0();
          *(undefined4 *)(&DAT_00915198 + (*(uint *)(iVar1 + 0x24) & 0xff) * 4) = 0;
          iVar2 = *(int *)(iVar1 + 0x24);
          if ((iVar2 == 0x530b82b0) ||
             (((iVar2 == 0x530b82b1 || (iVar2 == 0x530b82b2)) || (iVar2 == 0x530b82b3)))) {
            FUN_0073ad20(iVar2);
          }
          local_c = local_c + 1;
          local_4 = iVar1;
        }
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x18));
    if (local_c == 1) goto LAB_004fcf95;
  }
  local_4 = 0;
LAB_004fcf95:
  FUN_00506ef0(param_1,local_4,0);
  FUN_00585d10(param_1,0);
  DAT_00915fe4 = 1;
  return;
}

