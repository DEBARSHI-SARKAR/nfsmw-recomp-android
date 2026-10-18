/* speed.exe 005b0940 FUN_005b0940; analysis pseudocode, not buildable source.
 * calls 00516c90 FUN_00516c90
 * calls 00524ee0 FUN_00524ee0
 */

void __thiscall
FUN_005b0940(int param_1,undefined4 param_2,int *param_3,float param_4,float param_5)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float local_8;
  float local_4;
  
  iVar1 = *param_3;
  if (((iVar1 != 0) && ((*(uint *)(iVar1 + 0x1c) & 0x10000000) != 0)) &&
     ((*(uint *)(iVar1 + 0x1c) & 0x4000000) != 0)) {
    return;
  }
  FUN_00524ee0(iVar1,&local_8,&local_4);
  cVar2 = (**(code **)(**(int **)(param_1 + 0x108) + 0x48))
                    (param_4 - ((float)param_3[1] - local_8),param_5 - ((float)param_3[2] - local_4)
                     ,iVar1);
  bVar3 = (byte)*(undefined2 *)(param_1 + 0x16);
  bVar6 = (bVar3 & 1) != 1;
  bVar7 = (bVar3 & 2) != 2;
  uVar5 = (uint)param_3[3] >> 1;
  local_4 = (float)(CONCAT31(local_4._1_3_,(char)((uint)param_3[3] >> 2)) & 0xffffff01);
  if (cVar2 == '\0') {
    if ((*(byte *)(param_3 + 3) & 1) != 0) {
      uVar9 = *(undefined4 *)((int)local_8 + 0xc);
      iVar4 = -0x4cf86c3f;
      goto LAB_005b0a1c;
    }
  }
  else {
    uVar9 = *(undefined4 *)((int)local_8 + 0xc);
    iVar4 = (-(uint)((*(byte *)(param_3 + 3) & 1) != 0) & 0x9f18493e) + 0x13f4bd45;
LAB_005b0a1c:
    FUN_00516c90(iVar4,uVar9,iVar1);
  }
  if (bVar6) {
    if (((uVar5 & 1) != 0) && (cVar2 != '\0')) {
      uVar9 = *(undefined4 *)((int)local_8 + 0xc);
      uVar8 = 0x7eabca56;
      goto LAB_005b0a69;
    }
  }
  else {
    if ((uVar5 & 1) == 0) {
      if (cVar2 == '\0') goto LAB_005b0a74;
      uVar9 = *(undefined4 *)((int)local_8 + 0xc);
      uVar8 = 0xf459b307;
    }
    else {
      uVar9 = *(undefined4 *)((int)local_8 + 0xc);
      uVar8 = 0x1e646b2e;
    }
LAB_005b0a69:
    FUN_00516c90(uVar8,uVar9,iVar1);
  }
LAB_005b0a74:
  if (bVar7) {
    if (local_4._0_1_ != '\0') {
      if (cVar2 == '\0') goto LAB_005b0ad5;
      uVar9 = *(undefined4 *)((int)local_8 + 0xc);
      uVar8 = 0x98adf589;
      goto LAB_005b0aba;
    }
LAB_005b0ac5:
    if (cVar2 != '\0') {
      uVar5 = param_3[3] | 1;
      goto LAB_005b0adb;
    }
  }
  else {
    if (local_4._0_1_ != '\0') {
      uVar9 = *(undefined4 *)((int)local_8 + 0xc);
      uVar8 = 0xda2f4e1;
LAB_005b0aba:
      FUN_00516c90(uVar8,uVar9,iVar1);
      goto LAB_005b0ac5;
    }
    if (cVar2 != '\0') {
      uVar9 = *(undefined4 *)((int)local_8 + 0xc);
      uVar8 = 0xce59c3da;
      goto LAB_005b0aba;
    }
  }
LAB_005b0ad5:
  uVar5 = param_3[3] & 0xfffffffe;
LAB_005b0adb:
  param_3[3] = uVar5;
  if (bVar6) {
    uVar5 = uVar5 & 0xfffffffd;
  }
  else {
    uVar5 = uVar5 | 2;
  }
  param_3[3] = uVar5;
  if (bVar7) {
    param_3[3] = param_3[3] & 0xfffffffb;
    return;
  }
  param_3[3] = param_3[3] | 4;
  return;
}

