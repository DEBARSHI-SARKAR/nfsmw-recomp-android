/* speed.exe 004fcdb0 FUN_004fcdb0; analysis pseudocode, not buildable source.
 * calls 00585d10 FUN_00585d10
 * calls 00506ef0 FUN_00506ef0
 * calls 006ddd90 FUN_006ddd90
 */

void __thiscall FUN_004fcdb0(int param_1,int param_2,int param_3,int param_4)

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
        if (((*(int *)(iVar1 + 0x38) != 0) && (iVar2 = *(int *)(iVar1 + 0x30), param_3 <= iVar2)) &&
           (iVar2 < param_4 + param_3)) {
          *(int *)(iVar1 + 0x70) = (iVar2 - param_3) + param_2;
          bVar3 = true;
        }
        if (((*(int *)(iVar1 + 0x3c) == 0) || (iVar2 = *(int *)(iVar1 + 0x34), iVar2 < param_3)) ||
           (param_4 + param_3 <= iVar2)) {
          if (!bVar3) goto LAB_004fce4c;
        }
        else {
          *(int *)(iVar1 + 0x74) = (iVar2 - param_3) + param_2;
        }
        if (*(int *)(iVar1 + 0x70) != 0) {
          FUN_006ddd90();
          local_c = local_c + 1;
          local_4 = iVar1;
        }
      }
LAB_004fce4c:
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(param_1 + 0x18));
    if (local_c == 1) goto LAB_004fce6e;
  }
  local_4 = 0;
LAB_004fce6e:
  FUN_00506ef0(param_1,local_4,1);
  FUN_00585d10(param_1,1);
  DAT_00915fe4 = 1;
  return;
}

