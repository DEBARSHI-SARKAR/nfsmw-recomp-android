/* speed.exe 005b7c30 FUN_005b7c30; analysis pseudocode, not buildable source.
 * calls 005b2ea0 FUN_005b2ea0
 * calls 005ad440 FUN_005ad440
 * calls 005ad0f0 FUN_005ad0f0
 */

void __fastcall FUN_005b7c30(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  int local_40;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  local_40 = *(int *)(*(int *)(param_1 + 0x54) + 0x1c);
  if (local_40 != 0) {
    pfVar10 = (float *)(*(int *)(*(int *)(param_1 + 0x54) + 0x20) + 0x18);
    do {
      *(byte *)((int)pfVar10 + -0x15) = *(byte *)((int)pfVar10 + -0x15) & 0x7f;
      if ((*(char *)((int)pfVar10 + -0x16) != '\x03') && (*(char *)((int)pfVar10 + -0x16) != '\x04')
         ) goto switchD_005b7c9f_default;
      pfVar1 = (float *)(*(int *)(param_1 + 0x2c) + *(char *)((int)pfVar10 + -0x11) * 4);
      if (*(char *)(pfVar10 + 5) == '\0') {
        fVar6 = pfVar10[6];
      }
      else {
        fVar6 = (float)FUN_005ad440();
      }
      if (fVar6 == 0.0) goto switchD_005b7c9f_default;
      switch(*(undefined1 *)(pfVar10 + -6)) {
      case 1:
        iVar9 = (int)*pfVar1 - (int)*pfVar10;
        goto LAB_005b7d84;
      case 2:
        *(float *)((int)fVar6 + 0x10) = *pfVar1 - *pfVar10;
        break;
      case 3:
        fVar2 = pfVar1[1];
        fVar3 = pfVar10[1];
        *(float *)((int)fVar6 + 0x10) = *pfVar1 - *pfVar10;
        *(float *)((int)fVar6 + 0x14) = fVar2 - fVar3;
        break;
      case 4:
        fVar2 = *pfVar1;
        fVar3 = *pfVar10;
        fVar4 = pfVar1[1];
        fVar5 = pfVar10[1];
        *(float *)((int)fVar6 + 0x18) = pfVar1[2] - pfVar10[2];
        *(float *)((int)fVar6 + 0x10) = fVar2 - fVar3;
        *(float *)((int)fVar6 + 0x14) = fVar4 - fVar5;
        break;
      case 5:
        local_30 = -*pfVar10;
        local_24 = pfVar10[3];
        local_2c = -pfVar10[1];
        local_28 = -pfVar10[2];
        puVar7 = (undefined4 *)FUN_005ad0f0(local_20,&local_30);
        *(undefined4 *)((int)fVar6 + 0x10) = *puVar7;
        *(undefined4 *)((int)fVar6 + 0x14) = puVar7[1];
        *(undefined4 *)((int)fVar6 + 0x18) = puVar7[2];
        *(undefined4 *)((int)fVar6 + 0x1c) = puVar7[3];
        break;
      case 6:
        piVar8 = (int *)FUN_005b2ea0(local_10,pfVar10);
        *(int *)((int)fVar6 + 0x1c) = piVar8[3];
        *(int *)((int)fVar6 + 0x18) = piVar8[2];
        *(int *)((int)fVar6 + 0x14) = piVar8[1];
        iVar9 = *piVar8;
LAB_005b7d84:
        *(int *)((int)fVar6 + 0x10) = iVar9;
      }
switchD_005b7c9f_default:
      pfVar10 = pfVar10 + 0xe;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  return;
}

