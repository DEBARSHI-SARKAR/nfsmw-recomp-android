/* speed.exe 00827790 FUN_00827790; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 __fastcall
FUN_00827790(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,float *param_5,
            int *param_6,uint *param_7,int param_8,uint param_9)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined4 in_EAX;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  uVar5 = *param_7;
  iVar7 = *param_6;
  _DAT_0090c8c0 = uVar5;
  for (; 1 < (int)param_3; param_3 = param_3 - 2) {
    lVar3 = CONCAT44(uRam0090c8c4,_DAT_0090c8c0);
    uVar4 = uVar5 + param_9;
    iVar6 = iVar7 + param_8 + (uint)CARRY4(uVar5,param_9);
    _DAT_0090c8c0 = uVar4;
    *param_5 = (float)lVar3 *
               (*(float *)(param_4 + 4 + iVar7 * 4) - *(float *)(param_4 + iVar7 * 4)) *
               _DAT_0090c8c8 + *(float *)(param_4 + iVar7 * 4);
    lVar3 = CONCAT44(uRam0090c8c4,_DAT_0090c8c0);
    uVar5 = uVar4 + param_9;
    iVar7 = iVar6 + param_8 + (uint)CARRY4(uVar4,param_9);
    _DAT_0090c8c0 = uVar5;
    param_5[1] = (float)lVar3 *
                 (*(float *)(param_4 + 4 + iVar6 * 4) - *(float *)(param_4 + iVar6 * 4)) *
                 _DAT_0090c8c8 + *(float *)(param_4 + iVar6 * 4);
    param_5 = param_5 + 2;
  }
  for (; (param_3 & 1) != 0; param_3 = param_3 - 1) {
    iVar2 = iVar7 * 4;
    iVar6 = iVar7 * 4;
    lVar3 = CONCAT44(uRam0090c8c4,_DAT_0090c8c0);
    bVar8 = CARRY4(uVar5,param_9);
    uVar5 = uVar5 + param_9;
    iVar1 = iVar7 * 4;
    iVar7 = iVar7 + param_8 + (uint)bVar8;
    _DAT_0090c8c0 = uVar5;
    *param_5 = (float)lVar3 * (*(float *)(param_4 + 4 + iVar2) - *(float *)(param_4 + iVar6)) *
               _DAT_0090c8c8 + *(float *)(param_4 + iVar1);
    param_5 = param_5 + 1;
  }
  *param_7 = uVar5;
  *param_6 = iVar7;
  return CONCAT44(param_2,in_EAX);
}

