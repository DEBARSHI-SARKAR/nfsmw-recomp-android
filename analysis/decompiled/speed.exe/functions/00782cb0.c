/* speed.exe 00782cb0 FUN_00782cb0; analysis pseudocode, not buildable source.
 * calls 00782b30 FUN_00782b30
 * calls 007736e0 FUN_007736e0
 * calls 0077a680 FUN_0077a680
 * calls 0042cbf0 FUN_0042cbf0
 * calls 0077ae20 FUN_0077ae20
 */

void FUN_00782cb0(int param_1,float *param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined **local_3c;
  int local_38;
  float local_34;
  int local_30;
  float local_2c;
  undefined4 local_28;
  float local_24;
  undefined **local_1c;
  int local_18;
  undefined4 local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882040;
  local_c = ExceptionList;
  iVar6 = 0;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    local_38 = 0;
    local_34 = 0.0;
    local_30 = 0;
    local_3c = &PTR_FUN_00891594;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_0077ae20(param_1,*(undefined4 *)(param_1 + 0xc),&local_3c);
    iVar7 = DAT_009b38a8;
    if (0 < local_30) {
      do {
        uVar5 = *(uint *)(local_38 + iVar6 * 4);
        uVar1 = *(uint *)(iVar7 + 0x1c);
        uVar3 = uVar5 / uVar1;
        uVar5 = uVar5 - uVar1 * uVar3;
        if (uVar1 <= uVar5) {
          if (uVar5 < 0x7fffffff) {
            uVar5 = *(int *)(iVar7 + 0x1c) - 1;
          }
          else {
            uVar5 = 0;
          }
        }
        if (*(uint *)(iVar7 + 0x18) <= uVar3) {
          if (uVar3 < 0x7fffffff) {
            uVar3 = *(uint *)(iVar7 + 0x18) - 1;
          }
          else {
            uVar3 = 0;
          }
        }
        if (*(int *)(*(int *)(iVar7 + 0x20) + (*(int *)(iVar7 + 0x1c) * uVar3 + uVar5) * 4) != 0) {
          FUN_0077a680(param_4,param_3);
          iVar7 = DAT_009b38a8;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_30);
    }
    local_4 = 0xffffffff;
    FUN_0042cbf0();
  }
  iVar6 = 0;
  if (param_2 != (float *)0x0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_1c = &PTR_FUN_00891594;
    local_24 = param_2[3];
    local_3c = (undefined **)(*param_2 - local_24);
    local_4 = 1;
    local_28 = 0;
    local_38 = 0;
    local_34 = param_2[2] - local_24;
    local_2c = local_24 + *param_2;
    local_24 = local_24 + param_2[2];
    FUN_007736e0(&local_3c,&local_1c);
    iVar7 = DAT_009b38a8;
    if (0 < local_10) {
      do {
        uVar5 = *(uint *)(local_18 + iVar6 * 4);
        uVar1 = *(uint *)(iVar7 + 0x1c);
        uVar3 = uVar5 / uVar1;
        uVar5 = uVar5 - uVar1 * uVar3;
        if (uVar1 <= uVar5) {
          if (uVar5 < 0x7fffffff) {
            uVar5 = *(int *)(iVar7 + 0x1c) - 1;
          }
          else {
            uVar5 = 0;
          }
        }
        if (*(uint *)(iVar7 + 0x18) <= uVar3) {
          if (uVar3 < 0x7fffffff) {
            uVar3 = *(uint *)(iVar7 + 0x18) - 1;
          }
          else {
            uVar3 = 0;
          }
        }
        iVar2 = *(int *)(*(int *)(iVar7 + 0x20) + (*(int *)(iVar7 + 0x1c) * uVar3 + uVar5) * 4);
        if (iVar2 != 0) {
          uVar3 = (uint)*(byte *)(iVar2 + 8 + param_3);
          iVar4 = 0;
          if (uVar3 != 0) {
            do {
              if (*(int *)(*(ushort *)(iVar2 + 0xc + param_3 * 2) + 0x14 + iVar2 + iVar4 * 4) ==
                  param_4) goto LAB_00782eaf;
              iVar4 = iVar4 + 1;
            } while (iVar4 < (int)uVar3);
          }
          FUN_00782b30(param_4,param_3);
          iVar7 = DAT_009b38a8;
        }
LAB_00782eaf:
        iVar6 = iVar6 + 1;
      } while (iVar6 < local_10);
    }
    local_4 = 0xffffffff;
    FUN_0042cbf0();
  }
  ExceptionList = local_c;
  return;
}

