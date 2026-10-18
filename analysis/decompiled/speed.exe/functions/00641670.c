/* speed.exe 00641670 FUN_00641670; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_00641670(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  bool bVar6;
  float10 fVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879838;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x10;
  bVar5 = param_2 != 0;
  param_1[2] = param_2;
  bVar6 = bVar5 != (bool)DAT_00920e34;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7da0;
  iVar2 = DAT_00911fa8;
  if (bVar6) {
    DAT_00920e34 = bVar5;
    if (bVar5) {
      DAT_008f7dcc = *(undefined4 *)(DAT_00911fa8 + 0x70);
      *(undefined4 *)(DAT_00911fa8 + 0x74) = DAT_008f7dcc;
      *(undefined4 *)(iVar2 + 0x70) = 10;
    }
    else {
      puVar1 = (undefined4 *)(DAT_00911fa8 + 0x70);
      *(undefined4 *)(DAT_00911fa8 + 0x74) = *(undefined4 *)(DAT_00911fa8 + 0x70);
      *puVar1 = DAT_008f7dcc;
    }
    if ((DAT_0092d884 != 0) && (piVar4 = (int *)*DAT_0092d87c, piVar4 != (int *)0x0)) {
      piVar3 = (int *)(**(code **)(*piVar4 + 0x20))();
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 0x10))(!bVar5);
      }
      piVar4 = (int *)(**(code **)(*piVar4 + 4))();
      if ((piVar4 != (int *)0x0) &&
         (piVar3 = (int *)FUN_005d59f0(&LAB_004039e0), piVar3 != (int *)0x0)) {
        if (bVar5) {
          piVar4 = (int *)(**(code **)(*piVar4 + 0x54))();
          iVar2 = *piVar3;
          fVar7 = (float10)(**(code **)(*piVar4 + 0x18))();
          (**(code **)(iVar2 + 4))((float)(fVar7 * (float10)_DAT_00901aec));
        }
        else {
          (**(code **)(*piVar3 + 4))(0);
        }
      }
    }
  }
  ExceptionList = local_c;
  return param_1;
}

