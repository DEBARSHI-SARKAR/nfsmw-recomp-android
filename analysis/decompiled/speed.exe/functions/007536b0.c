/* speed.exe 007536b0 FUN_007536b0; analysis pseudocode, not buildable source.
 * calls 00502860 FUN_00502860
 * calls 0045ecf0 FUN_0045ecf0
 * calls 00444fe0 FUN_00444fe0
 * calls 00749be0 FUN_00749be0
 * calls 007477f0 FUN_007477f0
 * calls 0073b9c0 FUN_0073b9c0
 * calls 004fcac0 FUN_004fcac0
 */

void __thiscall FUN_007536b0(int param_1,int param_2,uint param_3)

{
  char cVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_58;
  undefined1 local_50 [48];
  undefined1 local_20 [28];
  
  if (*(int *)(param_1 + 0x20) != DAT_00982b78) {
    *(undefined4 *)(param_1 + 0x24) = 0x497423f0;
    *(int *)(param_1 + 0x20) = DAT_00982b78;
  }
  iVar8 = *(int *)(param_2 + 0x44);
  if ((((iVar8 != param_2 + 0x44) && (iVar8 != 0)) && (iVar8 != 4)) &&
     (((iVar7 = *(int *)(param_2 + 4), iVar7 == 1 || (iVar7 == 2)) || (iVar7 == 3)))) {
    iVar7 = *(int *)(param_1 + 0x30) + 0x60;
    if (*(int *)(param_1 + 0x30) == 0) {
      iVar7 = param_1 + 0x40;
    }
    iVar8 = *(int *)(iVar8 + 0x18);
    fVar2 = *(float *)(iVar8 + 0x40) - *(float *)(iVar7 + 0x30);
    fVar4 = *(float *)(iVar8 + 0x44) - *(float *)(iVar7 + 0x34);
    fVar3 = *(float *)(iVar8 + 0x48) - *(float *)(iVar7 + 0x38);
    fVar2 = SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3);
    if (*(float *)(param_1 + 0x24) < fVar2) {
      fVar2 = *(float *)(param_1 + 0x24);
    }
    *(float *)(param_1 + 0x24) = fVar2;
  }
  local_58 = *(int *)(param_1 + 8);
  iVar8 = 0;
  if (local_58 == 0) {
    if (*(int *)(param_1 + 0x10) == 0) {
      local_58 = 0;
    }
    else {
      local_58 = *(int *)((*(int *)(param_1 + 0x14) + 1) * 0x10 + *(int *)(param_1 + 0x10));
    }
  }
  if (((param_3 & 0x800) != 0) && (local_58 = *(int *)(param_1 + 0xc), local_58 == 0)) {
    return;
  }
  if (local_58 == 0) {
    return;
  }
  if (*(int *)(local_58 + 0xc) == 0) {
    return;
  }
  if ((param_3 & 0x200000) != 0) {
    if (*(char *)(param_1 + 0x2d) == '\0') {
      return;
    }
    cVar1 = *(char *)(*(int *)(local_58 + 0xc) + 0x18);
    if ((param_3 & 0x2000) == 0) {
      if (cVar1 == '\0') {
        return;
      }
    }
    else if (cVar1 != '\0') {
      return;
    }
  }
  iVar7 = *(int *)(param_1 + 0x30);
  if (iVar7 == 0) {
    iVar7 = param_1 + 0x40;
  }
  else {
    if (*(int *)(iVar7 + 0xf4) != 0) {
      FUN_007477f0();
    }
    iVar8 = *(int *)(*(int *)(param_1 + 0x30) + 0xf8);
    iVar7 = iVar7 + 0x20;
    if (DAT_009017d0 == 0) {
      if (iVar8 != 0) {
        return;
      }
    }
    else if (iVar8 != 0) {
      FUN_0045ecf0(local_50,iVar7,iVar8 + 0x40);
      goto LAB_00753844;
    }
  }
  FUN_00444fe0(local_50,iVar7);
LAB_00753844:
  iVar6 = *(int *)(param_2 + 0x24);
  iVar5 = FUN_004fcac0(local_20,0x420c0000);
  if ((iVar6 <= iVar5) && (iVar6 = FUN_00502860(local_58,local_50), iVar6 != 0)) {
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_00749be0(*(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),param_2,param_3,iVar8,
                   iVar7);
      *(int *)(param_1 + 0x1c) = DAT_00982b78;
      return;
    }
    FUN_0073b9c0(local_58,param_2,param_3,iVar8,iVar7);
    *(int *)(param_1 + 0x1c) = DAT_00982b78;
  }
  return;
}

