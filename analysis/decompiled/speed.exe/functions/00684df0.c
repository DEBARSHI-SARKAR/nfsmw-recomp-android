/* speed.exe 00684df0 FUN_00684df0; analysis pseudocode, not buildable source.
 * calls 00620b40 FUN_00620b40
 * calls 0066a6a0 FUN_0066a6a0
 * calls 0067b520 FUN_0067b520
 * calls 005d59f0 FUN_005d59f0
 * calls 00684ae0 FUN_00684ae0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00684df0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_c [8];
  undefined4 uStack_4;
  
  FUN_0067b520(param_2);
  if (*param_2 == DAT_0092c5e0) {
    iVar1 = FUN_005d59f0(&LAB_004039c0);
    *(int *)(param_1 + 0x114) = iVar1;
    if (iVar1 != 0) {
      param_2 = *(int **)(*(int *)(param_1 + 0xd8) + 0x18);
      if ((*(char *)(param_1 + 0x100) != '\0') && ((float)param_2 != _DAT_00890968)) {
        if ((float)param_2 <= _DAT_00890968) {
          param_2 = (int *)0x0;
        }
        (**(code **)(**(int **)(param_1 + 0x114) + 0x60))(1,param_2);
      }
      iVar1 = FUN_0066a6a0(*(undefined4 *)(param_1 + 0x108),0x28b0bb8d);
      if (iVar1 == 0) {
        (**(code **)(**(int **)(param_1 + 0x114) + 0x50))();
      }
      else {
        FUN_00620b40(auStack_c);
        (**(code **)(**(int **)(param_1 + 0x114) + 0x38))(auStack_c);
      }
    }
    piVar2 = (int *)FUN_005d59f0(&LAB_00668400);
    *(int **)(param_1 + 0x118) = piVar2;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(0,0x20b);
      uStack_4 = DAT_0092c5d0;
      FUN_00684ae0(&uStack_4);
    }
  }
  return;
}

