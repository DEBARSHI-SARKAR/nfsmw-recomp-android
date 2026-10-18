/* speed.exe 00594a90 FUN_00594a90; analysis pseudocode, not buildable source.
 * calls 0056bb80 FUN_0056bb80
 * calls 005d59f0 FUN_005d59f0
 * calls 004647c0 FUN_004647c0
 * calls 00735180 FUN_00735180
 * calls 00734fe0 FUN_00734fe0
 * calls 007c4b80 FUN_007c4b80
 * calls 006547a0 FUN_006547a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00594a90(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  float10 fVar6;
  undefined1 auStack_a8 [32];
  undefined1 uStack_88;
  undefined4 uStack_87;
  
  if (*(int *)(param_1 + 0x34) == 0) {
    if (DAT_0092d884 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)*DAT_0092d87c;
    }
    (**(code **)(*piVar3 + 0x20))();
    uVar2 = FUN_005d59f0(&LAB_005650b0);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  fVar6 = (float10)FUN_00735180();
  if ((float10)_DAT_00890968 <= fVar6) {
    fVar6 = (float10)FUN_00735180();
    uStack_88 = 0;
    puVar5 = &uStack_87;
    for (iVar4 = 0x1f; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(undefined2 *)puVar5 = 0;
    *(undefined1 *)((int)puVar5 + 2) = 0;
    cVar1 = FUN_00734fe0();
    if (cVar1 == '\0') {
      FUN_007c4b80();
      FUN_006547a0(auStack_a8,0);
      iVar4 = FUN_0056bb80();
      if (iVar4 == 0) {
        iVar4 = FUN_0056bb80();
      }
      FUN_004647c0(&uStack_88,"%s!\n%s",iVar4,auStack_a8);
      if (_DAT_00890bf8 < (float)fVar6) {
        (**(code **)(**(int **)(param_1 + 0x34) + 4))(&uStack_88,1,0x821e6378);
        return;
      }
      (**(code **)(**(int **)(param_1 + 0x34) + 4))(&uStack_88,1,0x4f79cba2,0,0,3);
    }
  }
  return;
}

