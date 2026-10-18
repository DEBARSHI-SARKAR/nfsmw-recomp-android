/* speed.exe 00426850 FUN_00426850; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00426850(int param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_10;
  undefined1 auStack_c [4];
  int *piStack_8;
  
  (**(code **)(*param_3 + 0x80))();
  if (DAT_0092d884 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)*DAT_0092d87c;
  }
  piVar1 = (int *)(**(code **)(*piVar1 + 4))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))();
  iVar2 = (**(code **)(*piVar1 + 0x20))();
  uStack_10 = *(undefined4 *)(iVar2 + 8);
  if (DAT_0092d884 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)*DAT_0092d87c;
  }
  piVar1 = (int *)(**(code **)(*piVar1 + 4))();
  piVar1 = (int *)(**(code **)(*piVar1 + 0x54))();
  (**(code **)(*piVar1 + 0x34))(auStack_c);
  (**(code **)(*param_3 + 0x68))(&stack0xffffffe4,&uStack_10);
  piVar1 = (int *)(**(code **)(*param_3 + 0xac))();
  (**(code **)(*piVar1 + 0x88))();
  if (piStack_8 == (int *)0x0) {
    piVar1 = (int *)FUN_005d59f0(&LAB_004038e0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
  }
  else {
    (**(code **)(*piStack_8 + 0x78))(param_3);
  }
  *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
  return;
}

