/* speed.exe 00778f80 FUN_00778f80; analysis pseudocode, not buildable source.
 * calls 00767a80 FUN_00767a80
 * calls 0076cc10 FUN_0076cc10
 * calls 0076c9b0 FUN_0076c9b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __thiscall FUN_00778f80(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  char cVar2;
  uint in_EAX;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 local_a6;
  float local_a4;
  float local_a0;
  int *local_9c;
  undefined4 local_98;
  float local_94;
  undefined4 local_90;
  undefined4 local_8c;
  float local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70 [11];
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_40 [64];
  
  param_1[0xc] = param_1[0xc] & 0xfffffffe;
  piVar6 = *(int **)(param_2 + 4);
  uVar3 = in_EAX & 0xffffff00;
  bVar1 = false;
  local_a6 = 0;
  local_a0 = 1e+38;
  if (piVar6 != *(int **)(param_2 + 8)) {
    do {
      iVar5 = *piVar6;
      local_44 = 0;
      local_43 = 0;
      local_9c = piVar6;
      if ((*(byte *)(iVar5 + 0x12) & 3) == 0) {
        local_80 = 0;
        local_7c = 3;
        cVar2 = FUN_0076c9b0(param_3,iVar5,local_70,&local_a4);
        if ((cVar2 != '\0') && (local_a6 = 1, local_a4 < local_a0)) {
          param_1[0xc] = param_1[0xc] | 1;
          puVar7 = local_70;
          puVar8 = param_1;
          for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          iVar4 = *(int *)(iVar5 + 0x1c);
          iVar5 = (uint)*(ushort *)(iVar4 + 6) + iVar4 + 0x10 + (uint)*(byte *)(param_1 + 0xb) * 4;
LAB_0077912f:
          local_a6 = 1;
          param_1[0xe] = *(undefined4 *)((uint)*(ushort *)(iVar4 + 2) + iVar5);
          local_a0 = local_a4;
          piVar6 = local_9c;
        }
      }
      else {
        if (!bVar1) {
          local_8c = *param_3;
          local_84 = param_3[2];
          local_88 = (float)param_3[1] + (float)param_1[0xd];
          local_98 = *param_3;
          local_90 = param_3[2];
          local_94 = (float)param_3[1] - _DAT_008b5c98;
          FUN_00767a80(&local_8c,&local_98,local_40);
          bVar1 = true;
        }
        local_78 = 0;
        local_74 = 3;
        cVar2 = FUN_0076cc10(local_40,&local_98,*piVar6,local_70,&local_a4);
        if (cVar2 != '\0') {
          local_a6 = 1;
          local_a4 = local_a4 - (float)param_1[0xd];
          if (local_a4 < local_a0) {
            iVar5 = *piVar6;
            param_1[0xc] = param_1[0xc] | 1;
            puVar7 = local_70;
            puVar8 = param_1;
            for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar8 = *puVar7;
              puVar7 = puVar7 + 1;
              puVar8 = puVar8 + 1;
            }
            iVar4 = *(int *)(iVar5 + 0x1c);
            iVar5 = (uint)*(ushort *)(iVar4 + 6) + iVar4 + 0x10 + (uint)*(byte *)(param_1 + 0xb) * 4
            ;
            goto LAB_0077912f;
          }
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(param_2 + 8));
    uVar3 = CONCAT31((int3)((uint)*(int **)(param_2 + 8) >> 8),local_a6);
  }
  return uVar3;
}

