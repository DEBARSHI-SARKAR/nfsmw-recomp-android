/* speed.exe 004a2200 FUN_004a2200; analysis pseudocode, not buildable source.
 * calls 00491dd0 FUN_00491dd0
 * calls 00491350 FUN_00491350
 * calls 00492440 FUN_00492440
 * calls 004a20b0 FUN_004a20b0
 * calls 007c9470 _strncmp
 */

/* WARNING: Removing unreachable block (ram,0x004a24ad) */

void __fastcall FUN_004a2200(int *param_1)

{
  char *_Str2;
  byte bVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  uint *puVar9;
  short sVar10;
  char *pcVar11;
  undefined4 *puVar12;
  int *piVar13;
  bool bVar14;
  char cStack_c0;
  char local_bf;
  char cStack_be;
  char cStack_bd;
  int local_bc;
  char local_b6;
  char cStack_b5;
  int local_b4;
  int *local_b0;
  int local_ac;
  int *local_a8;
  undefined4 *local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int *local_94;
  int local_90;
  uint uStack_8c;
  int local_88;
  char *pcStack_84;
  int aiStack_80 [32];
  
  puVar12 = (undefined4 *)*param_1;
  if ((puVar12 != (undefined4 *)0x0) && (*(char *)(puVar12 + 3) == '\0')) {
    local_b4 = puVar12[6];
    iVar6 = puVar12[7];
    *(undefined1 *)(puVar12 + 3) = 1;
    local_bf = '\0';
    local_ac = 0;
    local_9c = 0;
    local_b0 = param_1;
    local_a4 = puVar12;
    local_a0 = iVar6;
    if (*(short *)(iVar6 + 0x30) != 0) {
      local_a8 = (int *)(local_b4 + 0x14);
LAB_004a2260:
      if (local_a8[-4] == 9) {
        local_94 = (int *)local_a8[-1];
        local_88 = local_a8[2];
        iVar4 = (int)(*local_a8 + (*local_a8 >> 0x1f & 7U)) >> 3;
        local_90 = local_a8[1];
        if (iVar4 != 0) {
LAB_004a2296:
          local_98 = iVar4;
          piVar13 = (int *)(((uint)local_94[1] >> 8) * 0x10 + local_90);
          bVar1 = *(byte *)(piVar13 + 3);
          local_bc = 0;
          while ((bVar1 & 0xf) < 4) {
            uVar5 = (uint)*(ushort *)((int)piVar13 + 0xe);
            puVar2 = DAT_009117e4;
            if ((uVar5 != 0) && (uVar5 < *(ushort *)(local_a0 + 0x30))) {
              local_bc = *(int *)(local_b4 + 0x10 + uVar5 * 0x28);
              goto LAB_004a2500;
            }
            for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
              if ((puVar2 != puVar12) && (iVar6 = FUN_00491dd0(puVar12[2] + *piVar13), iVar6 != 0))
              {
                *(undefined2 *)((int)piVar13 + 0xe) = 1;
                piVar13[1] = iVar6 - *(int *)(local_b4 + 0x38);
                *(undefined1 *)((int)piVar13 + 0xd) = 2;
                goto LAB_004a249f;
              }
            }
            if (((code *)puVar12[0x10b] == (code *)0x0) ||
               (iVar6 = (*(code *)puVar12[0x10b])(puVar12[2] + *piVar13,&local_b6), local_b6 == '\0'
               )) {
              iVar6 = FUN_00492440(*piVar13 + puVar12[2],&cStack_b5);
              if (cStack_b5 == '\0') {
                _Str2 = (char *)(*piVar13 + puVar12[2]);
                pcVar3 = _Str2;
                do {
                  pcVar11 = pcVar3;
                  pcVar3 = pcVar11 + 1;
                } while (*pcVar11 != '\0');
                if (pcVar11[1] == '\x7f') {
                  pcVar11 = pcVar11 + 2;
                }
                iVar6 = _strncmp("RUNTIME_ALLOC::",_Str2,0xf);
                if (iVar6 == 0) {
                  pcStack_84 = _Str2 + 0xf;
                  pcVar7 = (code *)FUN_00492440(pcVar11,&cStack_be);
                  puVar12 = local_a4;
                  if ((cStack_be != '\0') && (pcVar7 != (code *)0x0)) {
                    uVar5 = FUN_00492440(pcVar11,&cStack_bd);
                    bVar14 = cStack_bd != '\0';
                    cStack_c0 = '\0';
                    uVar8 = (*pcVar7)(pcStack_84,local_b0,&uStack_8c,&cStack_c0,_Str2);
                    if ((cStack_c0 != '\0') && (uVar8 != 0)) {
                      puVar9 = (uint *)(*(code *)PTR_FUN_008ee4d0)(0x10,0);
                      if (puVar9 == (uint *)0x0) {
                        puVar9 = (uint *)0x0;
                      }
                      else {
                        *puVar9 = -(uint)bVar14 & uVar5;
                        puVar9[1] = uVar8;
                        puVar9[2] = uStack_8c;
                        puVar9[3] = 0;
                      }
                      puVar9[3] = local_b0[3];
                      local_b0[3] = (int)puVar9;
                    }
                    *(undefined2 *)((int)piVar13 + 0xe) = 1;
                    piVar13[1] = uVar8 - *(int *)(local_b4 + 0x38);
                    *(undefined1 *)((int)piVar13 + 0xd) = 5;
                    puVar12 = local_a4;
                    goto LAB_004a249f;
                  }
                }
                if (local_bf == '\0') {
                  local_bf = '\x01';
                }
                if (0x1f < local_ac) goto LAB_004a2500;
                iVar6 = 0;
                if (local_ac < 1) goto LAB_004a24f2;
                goto LAB_004a24e7;
              }
              *(undefined2 *)((int)piVar13 + 0xe) = 1;
              piVar13[1] = iVar6 - *(int *)(local_b4 + 0x38);
              *(undefined1 *)((int)piVar13 + 0xd) = 4;
            }
            else {
              *(undefined2 *)((int)piVar13 + 0xe) = 1;
              piVar13[1] = iVar6 - *(int *)(local_b4 + 0x38);
              *(undefined1 *)((int)piVar13 + 0xd) = 3;
            }
LAB_004a249f:
            bVar1 = *(byte *)(piVar13 + 3);
          }
          goto LAB_004a250d;
        }
      }
      goto LAB_004a258c;
    }
LAB_004a25a9:
    FUN_004a20b0();
    *(undefined1 *)(param_1 + 0xb) = 1;
  }
  return;
  while (iVar6 = iVar6 + 1, iVar6 < local_ac) {
LAB_004a24e7:
    if (puVar12[2] + *piVar13 == aiStack_80[iVar6]) goto LAB_004a2500;
  }
LAB_004a24f2:
  aiStack_80[local_ac] = puVar12[2] + *piVar13;
  local_ac = local_ac + 1;
LAB_004a2500:
  local_bc = local_bc + piVar13[1];
LAB_004a250d:
  uVar5 = *(uint *)(*local_94 + local_88);
  puVar9 = (uint *)(*local_94 + local_88);
  switch((char)local_94[1]) {
  case '\x02':
    *puVar9 = uVar5 + local_bc;
    break;
  case '\x04':
    *puVar9 = (local_bc + (uVar5 & 0x3ffffff) * 4 >> 2 ^ uVar5) & 0x3ffffff ^ uVar5;
    break;
  case '\x05':
    sVar10 = (short)((uint)local_bc >> 0x10);
    goto LAB_004a2567;
  case '\x06':
    sVar10 = (short)local_bc;
LAB_004a2567:
    *(short *)puVar9 = (short)*puVar9 + sVar10;
  }
  local_94 = local_94 + 2;
  iVar4 = local_98 + -1;
  if (local_98 + -1 == 0) goto code_r0x004a2580;
  goto LAB_004a2296;
code_r0x004a2580:
  local_98 = 0;
  param_1 = local_b0;
  iVar6 = local_a0;
LAB_004a258c:
  local_9c = local_9c + 1;
  local_a8 = local_a8 + 10;
  if ((int)(uint)*(ushort *)(iVar6 + 0x30) <= local_9c) goto LAB_004a25a9;
  goto LAB_004a2260;
}

