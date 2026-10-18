/* speed.exe 00637d30 FUN_00637d30; analysis pseudocode, not buildable source.
 * calls 006f81c0 FUN_006f81c0
 * calls 00634f00 FUN_00634f00
 * calls 005d51f0 FUN_005d51f0
 */

void __fastcall FUN_00637d30(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  bool bVar8;
  undefined4 local_98 [7];
  byte local_7c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  puStack_10 = &LAB_00878beb;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  *param_1 = &PTR_FUN_008a6974;
  piVar4 = (int *)0x0;
  local_c = 0;
  if (((param_1[0x11] != 0) &&
      (iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[0x11]), iVar1 != 0)
      ) && (piVar3 = *(int **)(iVar1 + 4), piVar3 != (int *)0x0)) {
    if (((((byte)param_1[9] & 7) == 1) && (param_1[0x15] != 0)) &&
       (iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,param_1[0x15]), iVar1 != 0
       )) {
      piVar4 = *(int **)(iVar1 + 4);
    }
    puVar6 = param_1 + 2;
    puVar7 = local_98;
    for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_006f81c0(local_98);
    if (((local_7c & 7) == 1) && (piVar4 != (int *)0x0)) {
      iVar2 = (**(code **)(*piVar3 + 0x88))();
      iVar1 = (**(code **)(*piVar4 + 0x88))();
      if (iVar2 == 0) {
        piVar5 = piVar3;
        if (iVar1 == 0) goto LAB_00637e50;
      }
      else {
        bVar8 = iVar1 != 0;
        iVar1 = iVar2;
        piVar5 = piVar4;
        piVar4 = piVar3;
        if (bVar8) goto LAB_00637e50;
      }
      if (((piVar4 != (int *)0x0) && (piVar5 != (int *)0x0)) &&
         (piVar3 = (int *)FUN_00634f00(iVar1), piVar3 != (int *)0x0)) {
        (**(code **)(*piVar3 + 4))(local_98,piVar4,piVar5);
      }
    }
  }
LAB_00637e50:
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_14;
  return;
}

