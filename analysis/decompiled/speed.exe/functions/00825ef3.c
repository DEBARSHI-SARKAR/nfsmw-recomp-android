/* speed.exe 00825ef3 FUN_00825ef3; analysis pseudocode, not buildable source.
 */

int FUN_00825ef3(uint param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  short sVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint local_8;
  
  puVar8 = param_4;
  puVar9 = param_3;
  iVar3 = param_1;
  param_3 = (undefined4 *)param_2;
  if (*(int *)(param_1 + 0x1c) == 0x10000) {
    iVar6 = (int)*(short *)(param_1 + 0x2a);
    if (*(short *)(param_1 + 0x28) == 0) {
      iVar4 = (param_2 - iVar6) + 4;
    }
    else {
      param_4 = (undefined4 *)0x0;
      iVar4 = param_2;
      if (iVar6 != 4 && -1 < 4 - iVar6) {
        do {
          *puVar8 = *(undefined4 *)
                     (param_1 + 0x2c + ((int)*(short *)(param_1 + 0x2a) + (int)param_4) * 4);
          puVar8 = puVar8 + 1;
          param_4 = (undefined4 *)((int)param_4 + 1);
        } while ((int)param_4 < 4 - *(short *)(param_1 + 0x2a));
      }
    }
    puVar2 = *(undefined4 **)(param_1 + 8);
    if (puVar2 != (undefined4 *)0x0) {
      param_3 = (undefined4 *)
                (*(code *)*puVar2)(puVar2,iVar4,puVar9,puVar8,*(undefined1 *)(param_1 + 0x1a));
    }
    if ((int)param_3 < 1) {
      sVar1 = *(short *)(iVar3 + 0x28);
      iVar6 = (int)param_3;
LAB_0082602d:
      if (sVar1 == 0) {
        *(undefined2 *)(iVar3 + 0x28) = 1;
      }
      *(undefined4 *)(iVar3 + 0x2c) = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
      *(undefined4 *)(iVar3 + 0x34) = 0;
      *(undefined4 *)(iVar3 + 0x38) = 0;
      return iVar6;
    }
    if (*(short *)(iVar3 + 0x28) == 0) {
      iVar6 = param_2 - *(short *)(iVar3 + 0x2a);
      *(undefined2 *)(iVar3 + 0x28) = 1;
    }
    else {
      iVar6 = param_2 + -4;
    }
    puVar8 = puVar8 + iVar6;
    *(undefined4 *)(iVar3 + 0x2c) = *puVar8;
    *(undefined4 *)(iVar3 + 0x30) = puVar8[1];
    *(undefined4 *)(iVar3 + 0x34) = puVar8[2];
    uVar5 = puVar8[3];
  }
  else {
    uVar7 = (uint)(*(int *)(param_1 + 0x1c) * param_2 + *(int *)(param_1 + 0x20)) >> 0x10;
    if (*(short *)(param_1 + 0x28) == 0) {
      uVar7 = uVar7 + (4 - *(short *)(param_1 + 0x2a));
      iVar6 = 0;
      if (0 < *(short *)(param_1 + 0x2a)) {
        do {
          *puVar9 = 0;
          puVar9 = puVar9 + 1;
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(short *)(param_1 + 0x2a));
      }
    }
    else {
      *puVar9 = *(undefined4 *)(param_1 + 0x2c);
      puVar9[1] = *(undefined4 *)(param_1 + 0x30);
      puVar9[2] = *(undefined4 *)(param_1 + 0x34);
      puVar9[3] = *(undefined4 *)(param_1 + 0x38);
      puVar9 = puVar9 + 4;
    }
    if (((0 < (int)uVar7) && (puVar8 = *(undefined4 **)(param_1 + 8), puVar8 != (undefined4 *)0x0))
       && (iVar6 = (*(code *)*puVar8)(puVar8,uVar7,param_4,puVar9,*(undefined1 *)(param_1 + 0x1a)),
          iVar6 < 1)) {
      sVar1 = *(short *)(iVar3 + 0x28);
      goto LAB_0082602d;
    }
    if (*(short *)(iVar3 + 0x28) == 0) {
      *(undefined2 *)(iVar3 + 0x28) = 1;
    }
    else {
      puVar9 = puVar9 + *(short *)(iVar3 + 0x2a) + -4;
    }
    local_8 = *(int *)(iVar3 + 0x20) << 0x10;
    param_1 = 0;
    (**(code **)(iVar3 + 0x24))
              (param_2,puVar9,param_4,&param_1,&local_8,*(uint *)(iVar3 + 0x1c) >> 0x10,
               *(uint *)(iVar3 + 0x1c) << 0x10);
    *(uint *)(iVar3 + 0x20) = param_1 << 0x10 | local_8 >> 0x10;
    puVar9 = puVar9 + ((param_1 & 0xffff) - (int)*(short *)(iVar3 + 0x2a));
    *(undefined4 *)(iVar3 + 0x2c) = *puVar9;
    *(undefined4 *)(iVar3 + 0x30) = puVar9[1];
    *(undefined4 *)(iVar3 + 0x34) = puVar9[2];
    uVar5 = puVar9[3];
    *(undefined2 *)(iVar3 + 0x22) = 0;
  }
  *(undefined4 *)(iVar3 + 0x38) = uVar5;
  return param_2;
}

