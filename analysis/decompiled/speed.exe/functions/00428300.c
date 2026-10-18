/* speed.exe 00428300 FUN_00428300; analysis pseudocode, not buildable source.
 * calls 0041a2c0 FUN_0041a2c0
 * calls 00425200 FUN_00425200
 * calls 0041a180 FUN_0041a180
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined2 __fastcall FUN_00428300(int param_1)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  if (((*(int *)(param_1 + 0x50) != 0) && (*(int *)(param_1 + 0x48) != 0)) &&
     (*(int **)(param_1 + 0x4c) != (int *)0x0)) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x4c) + 4))();
    if (iVar2 != 0) {
      if (*(char *)(param_1 + 0x60) != '\0') {
        *(undefined1 *)(param_1 + 0x60) = 0;
        return 1;
      }
      fVar1 = _DAT_008eb1fc * _DAT_00890958;
      fVar8 = (float10)(**(code **)(**(int **)(param_1 + 0x48) + 0x90))();
      if ((float10)fVar1 <= fVar8) {
        piVar3 = (int *)FUN_00425200(1);
        piVar3 = (int *)(**(code **)(*piVar3 + 4))();
        piVar3 = (int *)(**(code **)(*piVar3 + 0x54))();
        piVar4 = (int *)(**(code **)(**(int **)(param_1 + 0x48) + 4))();
        piVar4 = (int *)(**(code **)(*piVar4 + 0x54))();
        uVar5 = (**(code **)(*piVar3 + 0x20))();
        uStack_10 = (**(code **)(*piVar4 + 0x20))();
        (**(code **)(*piVar4 + 0x34))(auStack_c);
        uVar6 = (**(code **)(*piVar3 + 0x24))();
        uVar7 = (**(code **)(*piVar4 + 0x24))();
        fVar8 = (float10)(**(code **)(*piVar3 + 0x14))();
        fVar8 = (float10)(**(code **)(*piVar4 + 0x14))(uVar5,uVar6,(float)fVar8);
        fVar8 = (float10)FUN_0041a2c0(uStack_14,uVar7,(float)fVar8);
        if (fVar8 <= (float10)_DAT_0089163c) {
          if (fVar8 < (float10)_DAT_00890968 == (fVar8 == (float10)_DAT_00890968)) {
            fVar8 = (float10)FUN_0041a180(uStack_14,&uStack_10,uVar5);
            if (fVar8 <= (float10)_DAT_00891638) {
              *(undefined4 *)(param_1 + 0x5c) = 0x3f000000;
              return 1;
            }
          }
        }
        return 0;
      }
    }
  }
  return 0;
}

