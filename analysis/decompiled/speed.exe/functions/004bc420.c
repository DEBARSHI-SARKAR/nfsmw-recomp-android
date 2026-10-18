/* speed.exe 004bc420 FUN_004bc420; analysis pseudocode, not buildable source.
 * calls 0065faf0 FUN_0065faf0
 * calls 004b3ed0 FUN_004b3ed0
 * calls 005cc240 FUN_005cc240
 * calls 0045f490 FUN_0045f490
 * calls 004b3f90 FUN_004b3f90
 * calls 00469b90 FUN_00469b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004bc420(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  
  *(uint *)(param_1[3] + 8) = (uint)*(ushort *)(*(int *)(param_1[6] + 0xd8) + 0xa0);
  (**(code **)(*(int *)param_1[0xd] + 0x3c))(*(int *)(param_1[5] + 0x34) + 0x10);
  iVar2 = *(int *)(param_1[5] + 0x34);
  iVar5 = *(int *)(iVar2 + 0x44);
  iVar1 = *(int *)(iVar2 + 0x48);
  param_1[0x10] = *(int *)(iVar2 + 0x40);
  param_1[0x11] = iVar5;
  param_1[0x12] = iVar1;
  iVar5 = *(int *)(param_1[5] + 0x34);
  fStack_80 = *(float *)(iVar5 + 0x14);
  fStack_84 = *(float *)(iVar5 + 0x10);
  fStack_7c = *(float *)(iVar5 + 0x18);
  FUN_0045f490(&fStack_74,&fStack_84);
  if (*(int *)(param_1[6] + 0xc4) == 1) {
    fStack_84 = fStack_74 + fStack_74;
    fStack_80 = fStack_70 + fStack_70;
    fStack_7c = fStack_6c + fStack_6c;
  }
  else {
    fStack_84 = fStack_74 * _DAT_00895074;
    fStack_80 = fStack_70 * _DAT_00895074;
    fStack_7c = fStack_6c * _DAT_00895074;
  }
  fStack_6c = fStack_7c + (float)param_1[0x12];
  param_1[0x12] = (int)fStack_6c;
  param_1[0x10] = (int)(fStack_84 + (float)param_1[0x10]);
  param_1[0x11] = (int)(fStack_80 + (float)param_1[0x11]);
  if (*(int *)(*(int *)(param_1[5] + 0x34) + 0x228) == 0) {
    if (*(int *)(param_1[0xb] + 0x84) == 0) {
      fVar7 = (float10)(**(code **)(*param_1 + 0x44))();
      if (fVar7 <= (float10)_DAT_00896440) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(param_1 + 0x4e) = uVar3;
  (**(code **)(*param_1 + 0x54))(param_2);
  FUN_004b3f90(param_2);
  uVar4 = param_2;
  (**(code **)(*param_1 + 0x34))(param_2);
  (**(code **)(*param_1 + 0x38))(param_2);
  (**(code **)(*param_1 + 0x3c))(param_2);
  FUN_004b3ed0();
  (**(code **)(*param_1 + 0x40))(param_2);
  *(undefined4 *)(*(int *)(param_1[5] + 0x34) + 0x248) = *(undefined4 *)(param_1[6] + 0x74);
  iVar5 = *(int *)(*(int *)(param_1[5] + 0x34) + 0x1e8);
  if (((iVar5 == 1) || (iVar5 == 2)) && ((char)param_1[0x4c] == '\0')) {
    *(undefined1 *)(param_1 + 0x4c) = 1;
    iVar5 = *(int *)(*(int *)(param_1[5] + 0x34) + 0x1e8);
    uVar6 = 0xbc2dfa2f;
    if (iVar5 != 1) {
      uVar6 = uVar4;
    }
    if (iVar5 == 2) {
      uVar6 = 0xbae41d1b;
    }
    uVar4 = FUN_005cc240("MomentStrm");
    iVar5 = FUN_00469b90(DAT_008a2fc0,DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,
                         DAT_008a2fc4,DAT_008a2fc8,DAT_008a2fcc,DAT_008a2fc0,DAT_008a2fc4,
                         DAT_008a2fc8,DAT_008a2fcc,0,uVar6);
    *(undefined4 *)(iVar5 + 4) = uVar4;
    FUN_0065faf0();
  }
  return;
}

