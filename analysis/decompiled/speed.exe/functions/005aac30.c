/* speed.exe 005aac30 FUN_005aac30; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 004ccf20 FUN_004ccf20
 * calls 0059c500 FUN_0059c500
 * calls 0058b880 FUN_0058b880
 * calls 004b7280 FUN_004b7280
 * calls 00579170 FUN_00579170
 * calls 00594880 FUN_00594880
 * calls 005d29d0 FUN_005d29d0
 */

void __thiscall FUN_005aac30(int param_1,void *param_2,uint param_3,undefined4 *param_4)

{
  size_t _Size;
  int iVar1;
  uint uVar2;
  void *_Dst;
  void *pvVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  iVar5 = *(int *)(param_1 + 4);
  param_4 = (undefined4 *)*param_4;
  if (iVar5 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc) - iVar5 >> 2;
  }
  uVar7 = CONCAT44(iVar5,iVar1);
  if (param_3 != 0) {
    if (iVar5 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(param_1 + 8) - iVar5 >> 2;
    }
    if (0x3fffffffU - iVar5 < param_3) {
      uVar7 = FUN_004ccf20();
    }
    iVar5 = (int)((ulonglong)uVar7 >> 0x20);
    uVar2 = (uint)uVar7;
    if (iVar5 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_1 + 8) - iVar5 >> 2;
    }
    if (uVar2 < iVar1 + param_3) {
      if (0x3fffffff - (uVar2 >> 1) < uVar2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar2 + (uVar2 >> 1);
      }
      if (iVar5 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 8) - iVar5 >> 2;
      }
      if (uVar2 < iVar1 + param_3) {
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = *(int *)(param_1 + 8) - iVar5 >> 2;
        }
        uVar2 = iVar5 + param_3;
      }
      _Dst = (void *)FUN_005d29d0(uVar2 * 4,&PTR_LAB_004c5452_1_00890f10);
      _Size = ((int)param_2 - (int)*(void **)(param_1 + 4) >> 2) * 4;
      pvVar3 = FID_conflict__memcpy(_Dst,*(void **)(param_1 + 4),_Size);
      pvVar3 = (void *)FUN_0059c500((void *)((int)pvVar3 + _Size),param_3,&param_4);
      FID_conflict__memcpy(pvVar3,param_2,(*(int *)(param_1 + 8) - (int)param_2 >> 2) << 2);
      iVar5 = *(int *)(param_1 + 4);
      if (iVar5 == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(param_1 + 8) - iVar5 >> 2;
      }
      if (iVar5 != 0) {
        FUN_004b7280(iVar5,*(int *)(param_1 + 0xc) - iVar5 >> 2);
      }
      *(void **)(param_1 + 0xc) = (void *)(uVar2 * 4 + (int)_Dst);
      *(void **)(param_1 + 8) = (void *)((int)_Dst + (param_3 + iVar1) * 4);
      *(void **)(param_1 + 4) = _Dst;
      return;
    }
    iVar1 = *(int *)(param_1 + 8);
    iVar5 = param_3 * 4;
    if ((uint)(iVar1 - (int)param_2 >> 2) < param_3) {
      FUN_00594880(param_2,iVar1,(void *)(iVar5 + (int)param_2));
      FUN_0059c500(*(int *)(param_1 + 8),param_3 - (*(int *)(param_1 + 8) - (int)param_2 >> 2),
                   &param_4);
      iVar5 = *(int *)(param_1 + 8) + iVar5;
      *(int *)(param_1 + 8) = iVar5;
      FUN_00579170(param_2,iVar5 + param_3 * -4,&param_4);
      return;
    }
    iVar6 = iVar1 + param_3 * -4;
    uVar4 = FUN_00594880(iVar6,iVar1,iVar1);
    *(undefined4 *)(param_1 + 8) = uVar4;
    FUN_0058b880(param_2,iVar6,iVar1);
    FUN_00579170(param_2,(void *)(iVar5 + (int)param_2),&param_4);
  }
  return;
}

