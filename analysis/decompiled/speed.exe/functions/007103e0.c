/* speed.exe 007103e0 FUN_007103e0; analysis pseudocode, not buildable source.
 * calls 007c4840 FID_conflict:_memcpy
 * calls 0070fab0 FUN_0070fab0
 * calls 005d29d0 FUN_005d29d0
 * calls 005d0370 FUN_005d0370
 */

void __thiscall FUN_007103e0(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 *_Dst;
  size_t sVar2;
  void *pvVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (0xfffffff - uVar1 < param_2) {
    uVar1 = FUN_0070fab0();
  }
  uVar4 = uVar1 >> 1;
  if (uVar4 < 8) {
    uVar4 = 8;
  }
  if ((param_2 < uVar4) && (uVar1 <= 0xfffffff - uVar4)) {
    param_2 = uVar4;
  }
  uVar4 = *(uint *)(param_1 + 0xc) >> 2;
  _Dst = (undefined4 *)FUN_005d29d0((uVar1 + param_2) * 4,&PTR_LAB_004c5452_1_00890f10);
  iVar6 = uVar4 * 4;
  pvVar3 = (void *)(iVar6 + *(int *)(param_1 + 4));
  sVar2 = ((*(int *)(param_1 + 8) * 4 - (int)pvVar3) + *(int *)(param_1 + 4) >> 2) * 4;
  pvVar3 = FID_conflict__memcpy(_Dst + uVar4,pvVar3,sVar2);
  pvVar3 = (void *)((int)pvVar3 + sVar2);
  if (param_2 < uVar4) {
    FID_conflict__memcpy(pvVar3,*(void **)(param_1 + 4),((int)(param_2 * 4) >> 2) << 2);
    pvVar3 = (void *)(*(int *)(param_1 + 4) + param_2 * 4);
    sVar2 = ((iVar6 - (int)pvVar3) + *(int *)(param_1 + 4) >> 2) * 4;
    pvVar3 = FID_conflict__memcpy(_Dst,pvVar3,sVar2);
    puVar7 = (undefined4 *)((int)pvVar3 + sVar2);
    uVar4 = param_2;
  }
  else {
    sVar2 = (iVar6 >> 2) * 4;
    iVar6 = param_2 - uVar4;
    pvVar3 = FID_conflict__memcpy(pvVar3,*(void **)(param_1 + 4),sVar2);
    puVar5 = (undefined4 *)((int)pvVar3 + sVar2);
    puVar7 = _Dst;
    if (iVar6 != 0) {
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
    }
  }
  if (uVar4 != 0) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
  }
  if (*(int *)(param_1 + 4) != 0) {
    FUN_005d0370(*(int *)(param_1 + 4),*(int *)(param_1 + 8) << 2,&PTR_LAB_004c5452_1_00890f10);
  }
  *(undefined4 **)(param_1 + 4) = _Dst;
  *(uint *)(param_1 + 8) = *(int *)(param_1 + 8) + param_2;
  return;
}

