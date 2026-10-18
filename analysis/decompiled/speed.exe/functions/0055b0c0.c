/* speed.exe 0055b0c0 FUN_0055b0c0; analysis pseudocode, not buildable source.
 * calls 005487a0 FUN_005487a0
 * calls 0051fac0 FUN_0051fac0
 * calls 005b1360 FUN_005b1360
 * calls 00552da0 FUN_00552da0
 * calls 0041ad00 FUN_0041ad00
 * calls 00516b90 FUN_00516b90
 * calls 0051fa50 FUN_0051fa50
 * calls 00515140 FUN_00515140
 * calls 00598a60 FUN_00598a60
 * calls 005a96c0 FUN_005a96c0
 * calls 00571eb0 FUN_00571eb0
 * calls 00425200 FUN_00425200
 * calls 00511b80 FUN_00511b80
 * calls 00552cb0 FUN_00552cb0
 * calls 005488b0 FUN_005488b0
 * calls 00510ce0 FUN_00510ce0
 * calls 0041ace0 FUN_0041ace0
 * calls 00627400 FUN_00627400
 * calls 00625a40 FUN_00625a40
 * calls 00510ca0 FUN_00510ca0
 * calls 00530f40 FUN_00530f40
 * calls 00510c70 FUN_00510c70
 * calls 0051fa10 FUN_0051fa10
 * calls 00524ee0 FUN_00524ee0
 * calls 005b8400 FUN_005b8400
 * calls 005a5ea0 FUN_005a5ea0
 * calls 00598c00 FUN_00598c00
 * calls 00516be0 FUN_00516be0
 * calls 00548770 FUN_00548770
 * calls 005305b0 FUN_005305b0
 * calls 0051fa30 FUN_0051fa30
 * calls 0042c830 FUN_0042c830
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0055b0c0(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fStack_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  undefined4 local_20;
  void *local_1c;
  void *pvStack_18;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_00870e7f;
  local_14 = ExceptionList;
  if (((*(char *)(param_1 + 0x170) != '\0') ||
      ((ExceptionList = &local_14, param_2 != 0x72619778 &&
       (ExceptionList = &local_14, param_2 != 0x911c0a4b)))) &&
     (ExceptionList = &local_14, param_2 != 0xc407210)) {
    if ((*(char *)(param_1 + 0x170) == '\0') && (ExceptionList = &local_14, param_2 == 0x9803f6e2))
    goto LAB_0055b35e;
    ExceptionList = &local_14;
    FUN_005a96c0(param_2,param_3,param_4,param_5);
  }
  if (param_2 < 0x9803f6e3) {
    if (param_2 == 0x9803f6e2) {
LAB_0055b35e:
      if ((float)DAT_00987f6c <= _DAT_00890968) {
        if ((float)DAT_00987f6c < _DAT_00890968) {
          FUN_00552cb0(1);
        }
        FUN_00511b80();
        ExceptionList = local_14;
        return;
      }
      FUN_00552cb0(0xffffffff);
      FUN_00511b80();
      ExceptionList = local_14;
      return;
    }
    if (param_2 < 0x72619779) {
      if (param_2 != 0x72619778) {
        if (param_2 == 0xc407210) {
          if (*(char *)(param_1 + 0x170) != '\0') {
            if (*(int **)(param_1 + 0x34) == (int *)0x0) {
              ExceptionList = local_14;
              return;
            }
            (**(code **)(**(int **)(param_1 + 0x34) + 4))(*(undefined4 *)(param_1 + 0x10),0xc407210)
            ;
            FUN_0051fa50(*(undefined4 *)(*(int *)(param_1 + 0x34) + 0x38),
                         *(undefined1 *)(*(int *)(param_1 + 0x34) + 0x48));
            FUN_005488b0();
            ExceptionList = local_1c;
            return;
          }
          piVar2 = (int *)FUN_00425200(1);
          if (piVar2 == (int *)0x0) {
            ExceptionList = local_14;
            return;
          }
          iVar3 = (**(code **)(*piVar2 + 4))();
          if (iVar3 == 0) {
            ExceptionList = local_14;
            return;
          }
          if (DAT_0091cfb9 != '\0') {
            DAT_0091cfb9 = '\0';
          }
          if ((*(int *)(param_1 + 0x15c) == 0) || (*(int *)(*(int *)(param_1 + 0x15c) + 0x30) == 0))
          {
            if (DAT_0091ca4c == 0) {
              ExceptionList = local_14;
              return;
            }
            uVar6 = *(undefined4 *)(param_1 + 0x10);
            uVar9 = 0xa6be2ebb;
            uVar8 = 0x1a294dad;
            uVar7 = 0x417b2601;
          }
          else {
            uVar6 = *(undefined4 *)(param_1 + 0x10);
            uVar9 = 0x96ac0a32;
            uVar8 = 0x417b25e4;
            uVar7 = 0x70e01038;
          }
          FUN_00598c00(uVar6,"InGameDialog.fng",3,uVar7,uVar8,0xa16ca7bd,0xb4edeb6d,0xb4edeb6d,1,
                       uVar9);
          ExceptionList = local_14;
          return;
        }
        if (param_2 == 0x35f8620b) {
          if (*(int **)(param_1 + 0x34) == (int *)0x0) {
            ExceptionList = local_14;
            return;
          }
          (**(code **)(**(int **)(param_1 + 0x34) + 0x28))();
          ExceptionList = local_14;
          return;
        }
        if (param_2 != 0x5073ef13) {
          ExceptionList = local_14;
          return;
        }
        if (*(char *)(param_1 + 0x170) != '\0') {
          ExceptionList = local_14;
          return;
        }
        FUN_00552cb0(0xffffffff);
        ExceptionList = local_14;
        return;
      }
LAB_0055b651:
      FUN_005488b0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0x911ab364) goto LAB_0055b40c;
    if (param_2 == 0x911c0a4b) goto LAB_0055b651;
    if (param_2 != 0x9120409e) {
      ExceptionList = local_14;
      return;
    }
  }
  else {
    if (0xc519bfc3 < param_2) {
      if (param_2 == 0xc98356ba) {
        cVar1 = FUN_00516b90(*(undefined4 *)(param_1 + 0x10));
        if (cVar1 == '\0') {
          ExceptionList = local_14;
          return;
        }
        FUN_00510c70();
        FUN_00552da0();
        fVar5 = (float10)FUN_00510ca0();
        local_60 = (float)fVar5;
        local_4c = 0.0;
        local_48 = 0.0;
        FUN_00510ce0(&local_4c);
        FUN_00524ee0(*(undefined4 *)(param_1 + 0x140),&local_54,&local_50);
        FUN_00515140(*(undefined4 *)(param_1 + 0x140),&local_2c,&local_28);
        iVar3 = *(int *)(param_1 + 0x154);
        while( true ) {
          if (iVar3 == 0) {
            piVar2 = (int *)0x0;
          }
          else {
            piVar2 = (int *)(iVar3 + -4);
          }
          if (param_1 == -0x154) {
            piVar4 = (int *)0x0;
          }
          else {
            piVar4 = (int *)(param_1 + 0x150);
          }
          if (piVar2 == piVar4) break;
          local_44 = (float)piVar2[4] - local_54;
          local_3c = local_4c;
          local_38 = local_48;
          local_40 = ((float)piVar2[5] - local_50) * local_60;
          local_34 = local_4c * *(float *)(param_1 + 0x14c) * local_60;
          local_30 = local_48 * *(float *)(param_1 + 0x150) * local_60;
          local_5c = (local_44 * local_60 + local_54) - local_34;
          local_58 = (local_50 + local_40) - local_30;
          local_2c = local_34;
          local_28 = local_30;
          (**(code **)(*piVar2 + 4))(&local_5c);
          (**(code **)(*piVar2 + 8))
                    ((fStack_64 - _DAT_0089096c) * _DAT_008910f0 * _DAT_008933d4 + _DAT_0089096c);
          FUN_00524ee0(piVar2[3],&fStack_64,&local_60);
          cVar1 = FUN_0051fac0(&fStack_64,&local_60);
          if (cVar1 == '\0') {
            if ((char)piVar2[0xd] == '\0') {
              (**(code **)(*piVar2 + 0x10))();
            }
            (**(code **)(*piVar2 + 0xc))();
            iVar3 = piVar2[1];
          }
          else {
            (**(code **)(*piVar2 + 0x14))();
            (**(code **)(*piVar2 + 0xc))();
            iVar3 = piVar2[1];
          }
        }
        ExceptionList = local_14;
        return;
      }
      if (param_2 == 0xd9feec59) {
        if (*(char *)(param_1 + 0x170) != '\0') {
          ExceptionList = local_14;
          return;
        }
        FUN_00552cb0(1);
        ExceptionList = local_14;
        return;
      }
      if (param_2 != 0xe1fde1d1) {
        ExceptionList = local_14;
        return;
      }
      local_60 = (float)FUN_00627400(8);
      local_c = 0;
      if (local_60 == 0.0) {
        ExceptionList = local_14;
        return;
      }
      FUN_00625a40();
      ExceptionList = local_14;
      return;
    }
    if (param_2 == 0xc519bfc3) {
      if (*(char *)(param_1 + 0x170) == '\0') {
        *(undefined1 *)(param_1 + 0x170) = 1;
        FUN_00516be0(0x5c28136d,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
        if (*(int **)(param_1 + 0x34) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x34) + 0x24))(*(undefined4 *)(param_1 + 0x10));
          FUN_005488b0();
          ExceptionList = pvStack_18;
          return;
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x170) = 0;
        FUN_00516be0(0x947e6205,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
        if (*(int **)(param_1 + 0x34) != (int *)0x0) {
          (**(code **)(**(int **)(param_1 + 0x34) + 0x28))();
        }
      }
      goto LAB_0055b651;
    }
    if (param_2 == 0xa16ca7bd) {
      if (*(char *)(param_1 + 0x171) == '\0') {
        DAT_0091cfb9 = '\x01';
      }
      cVar1 = FUN_0041ad00();
      if (cVar1 != '\0') {
        FUN_0041ace0();
        FUN_0051fa30();
      }
      if ((*(int *)(param_1 + 0x15c) != 0) &&
         (iVar3 = *(int *)(*(int *)(param_1 + 0x15c) + 0x30), iVar3 != 0)) {
        local_20 = *(undefined4 *)(iVar3 + 0x18);
        local_1c = *(void **)(iVar3 + 0x10);
        local_24 = -*(float *)(iVar3 + 0x14);
        cVar1 = FUN_0042c830(&local_24,0);
        if (cVar1 == '\0') {
          FUN_00598a60(*(undefined4 *)(param_1 + 0x10),&DAT_00890978,1,0x417b2601,0x34dc1bec,
                       0x7afdf4cc);
          FUN_005488b0();
          ExceptionList = local_14;
          return;
        }
        FUN_0051fa10(*(undefined4 *)(*(int *)(param_1 + 0x15c) + 0x30));
        FUN_00571eb0(*(undefined4 *)(param_1 + 0x10),0);
        FUN_00516be0(0x911ab364,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
      }
      FUN_005488b0();
      ExceptionList = local_14;
      return;
    }
    if (param_2 != 0xb5971bf1) {
      if (param_2 != 0xb5af2461) {
        ExceptionList = local_14;
        return;
      }
      FUN_00571eb0(*(undefined4 *)(param_1 + 0x10),0);
LAB_0055b40c:
      if (*(char *)(param_1 + 0x170) == '\0') {
        FUN_00516be0(0x587c018b,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
        ExceptionList = local_14;
        return;
      }
      *(undefined1 *)(param_1 + 0x170) = 0;
      FUN_00516be0(0x947e6205,*(undefined4 *)(param_1 + 0x10),0xfffffffc,0xff);
      if (*(int **)(param_1 + 0x34) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0x34) + 0x28))();
      }
      FUN_005488b0();
      ExceptionList = local_14;
      return;
    }
  }
  if ((*(char *)(param_1 + 0x170) != '\0') || (*(int *)(param_1 + 0x164) == 3)) {
    ExceptionList = local_14;
    return;
  }
  if ((*(int *)(param_1 + 0x124) != 0) && (iVar3 = FUN_005b1360(0x7efe8ff4), iVar3 != 0)) {
    FUN_005b8400(iVar3,0);
    *(undefined4 *)(iVar3 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x15c) = 0;
  FUN_005305b0();
  FUN_00530f40();
  if (*(int *)(param_1 + 0x164) == 0) {
    *(undefined4 *)(param_1 + 0x164) = 1;
    FUN_005487a0();
  }
  else {
    if (*(int *)(param_1 + 0x164) != 1) goto LAB_0055b4a1;
    *(undefined4 *)(param_1 + 0x164) = 0;
    FUN_00548770();
  }
  FUN_005a5ea0(0);
LAB_0055b4a1:
  *(undefined1 *)(*(int *)(DAT_0091cf90 + 0x10) + 0x46) = *(undefined1 *)(param_1 + 0x164);
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x28))();
  }
  FUN_005488b0();
  ExceptionList = local_14;
  return;
}

