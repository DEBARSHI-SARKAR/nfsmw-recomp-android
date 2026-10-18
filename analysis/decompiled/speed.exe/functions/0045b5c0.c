/* speed.exe 0045b5c0 FUN_0045b5c0; analysis pseudocode, not buildable source.
 * calls 0045b450 FUN_0045b450
 * calls 007c4840 FID_conflict:_memcpy
 * calls 0045b880 FUN_0045b880
 * calls 005d29d0 FUN_005d29d0
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_0045b5c0(int param_1,undefined4 *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  void *_Dst;
  int iVar2;
  undefined4 *puVar3;
  size_t _Size;
  void *pvVar4;
  uint extraout_ECX;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  void *_Src;
  uint uVar9;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00869f50;
  local_10 = ExceptionList;
  uVar1 = *param_4;
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = *(int *)(param_1 + 0xc) - iVar2 >> 2;
  }
  if (param_3 != 0) {
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar2 >> 2;
    }
    uVar7 = param_3;
    ExceptionList = &local_10;
    if (0x3fffffffU - iVar6 < param_3) {
      ExceptionList = &local_10;
      iVar2 = FUN_0045b450();
      uVar7 = extraout_ECX;
    }
    if (iVar2 == 0) {
      iVar6 = 0;
    }
    else {
      iVar6 = *(int *)(param_1 + 8) - iVar2 >> 2;
    }
    if (uVar9 < iVar6 + uVar7) {
      if (0x3fffffff - (uVar9 >> 1) < uVar9) {
        uVar9 = 0;
      }
      else {
        uVar9 = uVar9 + (uVar9 >> 1);
      }
      if (iVar2 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 8) - iVar2 >> 2;
      }
      if (uVar9 < iVar6 + uVar7) {
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          iVar2 = *(int *)(param_1 + 8) - iVar2 >> 2;
        }
        uVar9 = iVar2 + uVar7;
      }
      iVar2 = FUN_005d29d0(uVar9 * 4,&PTR_LAB_004c5452_1_00890f10);
      local_8 = 0;
      puVar3 = (undefined4 *)
               FUN_0045b880(*(undefined4 *)(param_1 + 4),param_2,iVar2,param_1,param_3);
      puVar8 = puVar3;
      for (uVar7 = param_3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = uVar1;
        puVar8 = puVar8 + 1;
      }
      FUN_0045b880(param_2,*(undefined4 *)(param_1 + 8),puVar3 + param_3,param_1,param_3);
      iVar6 = *(int *)(param_1 + 4);
      local_8 = 0xffffffff;
      if (iVar6 == 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)(param_1 + 8) - iVar6 >> 2;
      }
      if (iVar6 != 0) {
        FUN_005d0370(iVar6,(*(int *)(param_1 + 0xc) - iVar6 >> 2) << 2,&PTR_LAB_004c5452_1_00890f10)
        ;
      }
      *(uint *)(param_1 + 0xc) = iVar2 + uVar9 * 4;
      *(uint *)(param_1 + 8) = iVar2 + (param_3 + iVar5) * 4;
      *(int *)(param_1 + 4) = iVar2;
      ExceptionList = local_10;
      return;
    }
    _Dst = *(void **)(param_1 + 8);
    uVar9 = (int)_Dst - (int)param_2 >> 2;
    if (uVar9 < uVar7) {
      FID_conflict__memcpy(param_2 + uVar7,param_2,uVar9 * 4);
      puVar8 = *(undefined4 **)(param_1 + 8);
      for (iVar2 = param_3 - ((int)puVar8 - (int)param_2 >> 2); iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar8 = uVar1;
        puVar8 = puVar8 + 1;
      }
      iVar2 = *(int *)(param_1 + 8) + uVar7 * 4;
      *(int *)(param_1 + 8) = iVar2;
      puVar8 = (undefined4 *)(iVar2 + uVar7 * -4);
      if (param_2 != puVar8) {
        do {
          *param_2 = uVar1;
          param_2 = param_2 + 1;
        } while (param_2 != puVar8);
        ExceptionList = local_10;
        return;
      }
    }
    else {
      _Src = (void *)((int)_Dst + uVar7 * -4);
      _Size = ((int)_Dst - (int)_Src >> 2) * 4;
      pvVar4 = FID_conflict__memcpy(_Dst,_Src,_Size);
      *(void **)(param_1 + 8) = (void *)((int)pvVar4 + _Size);
      iVar2 = (int)_Src - (int)param_2 >> 2;
      FID_conflict__memcpy((void *)((int)_Dst + iVar2 * -4),param_2,iVar2 * 4);
      puVar8 = param_2 + uVar7;
      for (; param_2 != puVar8; param_2 = param_2 + 1) {
        *param_2 = uVar1;
      }
    }
  }
  ExceptionList = local_10;
  return;
}

