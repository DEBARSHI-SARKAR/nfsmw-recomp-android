/* speed.exe 0065e760 FUN_0065e760; analysis pseudocode, not buildable source.
 * calls 007edabb FUN_007edabb
 * calls 007ec1bd FUN_007ec1bd
 * calls 0045ce40 FUN_0045ce40
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007edb85 FUN_007edb85
 * calls 0065aa50 FUN_0065aa50
 * calls 007ee03a FUN_007ee03a
 * calls 0065e610 FUN_0065e610
 * calls 00466340 FUN_00466340
 */

void __thiscall
FUN_0065e760(int param_1,undefined4 *param_2,uint param_3,code *param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  FUN_0045ce40();
  if (*(int *)(param_1 + 0xc) < (int)(*(int *)(param_1 + 0x10) + param_3)) {
    param_3 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x10);
  }
  iVar1 = FUN_0065aa50(*(undefined4 *)(param_1 + 0x24));
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x10) < *(int *)(iVar1 + 0xc)) {
      uVar2 = (*(int *)(param_1 + 0x10) - *(int *)(iVar1 + 0xc)) + param_3;
      if (0 < (int)uVar2) {
        puVar6 = (undefined4 *)((int)param_2 + (param_3 - uVar2));
        for (uVar5 = uVar2 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *puVar6 = 0x21212121;
          puVar6 = puVar6 + 1;
        }
        for (uVar5 = uVar2 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined1 *)puVar6 = 0x21;
          puVar6 = (undefined4 *)((int)puVar6 + 1);
        }
        param_3 = param_3 - uVar2;
      }
      puVar6 = (undefined4 *)(*(int *)(iVar1 + 0x10) + *(int *)(param_1 + 0x10));
      for (uVar2 = param_3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
        *param_2 = *puVar6;
        puVar6 = puVar6 + 1;
        param_2 = param_2 + 1;
      }
      for (uVar2 = param_3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
        *(undefined1 *)param_2 = *(undefined1 *)puVar6;
        puVar6 = (undefined4 *)((int)puVar6 + 1);
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
      *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
      if (param_4 == (code *)0x0) {
        return;
      }
      (*param_4)(param_5);
      return;
    }
  }
  FUN_007ec1bd();
  puVar3 = (undefined4 *)FUN_00466340(DAT_00925914);
  puVar6 = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[4] = *(undefined4 *)(param_1 + 0x10);
    puVar3[8] = 0;
    puVar3[2] = param_1;
    puVar3[3] = param_2;
    puVar3[5] = param_3;
    puVar3[6] = param_4;
    puVar3[7] = param_5;
    puVar6 = puVar3;
  }
  *DAT_009259a0 = puVar6;
  puVar3 = puVar6;
  puVar6[1] = DAT_009259a0;
  DAT_009259a0 = puVar3;
  *puVar6 = &DAT_0092599c;
  DAT_00925928 = DAT_00925928 + 1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  FUN_007ec1c8();
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = *(int *)(param_1 + 8);
    if ((iVar1 != 1) && (iVar1 != 6)) {
      iVar1 = (iVar1 == 2) + 1;
    }
    uVar4 = FUN_007ee03a(*(undefined4 *)(param_1 + 0x24),iVar1,100,puVar6);
    FUN_007edabb(uVar4,&LAB_0065d8c0);
    if (((*(int *)(param_1 + 0x14) != 0) && (*(int *)(param_1 + 0x18) == 0)) &&
       (*(int *)(param_1 + 8) == 1)) {
      iVar1 = FUN_0065e610(*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x14),
                           *(undefined4 *)(param_1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      *(int *)(param_1 + 0x18) = iVar1;
      *(uint *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
      return;
    }
  }
  else {
    uVar4 = FUN_007edb85(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x10),param_2,param_3,
                         100,puVar6);
    FUN_007edabb(uVar4,&LAB_0065ae20);
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + param_3;
  return;
}

