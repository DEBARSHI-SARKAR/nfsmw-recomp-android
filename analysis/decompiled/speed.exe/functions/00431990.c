/* speed.exe 00431990 FUN_00431990; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 0041ead0 FUN_0041ead0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00431990(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008684fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00891990;
  piVar3 = *(int **)param_1[3];
  local_4 = 0;
  if (piVar3 != (int *)param_1[3]) {
    do {
      iVar1 = piVar3[2];
      for (piVar2 = (int *)**(int **)(iVar1 + 0xc);
          (piVar2 != *(int **)(iVar1 + 0xc) && ((undefined4 *)piVar2[2] != param_1));
          piVar2 = (int *)*piVar2) {
      }
      if (piVar2 != *(int **)(iVar1 + 0xc)) {
        *(int *)piVar2[1] = *piVar2;
        *(int *)(*piVar2 + 4) = piVar2[1];
        FUN_005d0370(piVar2,0xc,0);
        *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)param_1[3]);
  }
  piVar3 = (int *)*DAT_0090d740;
  do {
    if (piVar3 == DAT_0090d740) {
LAB_00431a48:
      iVar1 = param_1[1];
      if (iVar1 != 0) {
        FUN_0041ead0();
        FUN_0041ead0();
        FUN_005d0370(iVar1,0x6c,0);
      }
      piVar3 = (int *)param_1[3];
      piVar2 = (int *)*piVar3;
      *piVar3 = (int)piVar3;
      *(undefined4 *)(param_1[3] + 4) = param_1[3];
      local_4 = 0xffffffff;
      param_1[4] = 0;
      if (piVar2 != (int *)param_1[3]) {
        do {
          piVar3 = (int *)*piVar2;
          FUN_005d0370(piVar2,0xc,0);
          piVar2 = piVar3;
        } while (piVar3 != (int *)param_1[3]);
      }
      if (param_1[3] != 0) {
        FUN_005d0370(param_1[3],0xc,0);
      }
      param_1[3] = 0;
      ExceptionList = local_c;
      return;
    }
    if ((undefined4 *)piVar3[2] == param_1) {
      if (piVar3 != DAT_0090d740) {
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        FUN_005d0370(piVar3,0xc,0);
        _DAT_0090d744 = _DAT_0090d744 + -1;
      }
      goto LAB_00431a48;
    }
    piVar3 = (int *)*piVar3;
  } while( true );
}

