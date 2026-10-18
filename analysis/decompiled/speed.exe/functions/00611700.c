/* speed.exe 00611700 FUN_00611700; analysis pseudocode, not buildable source.
 * calls 005db5e0 FUN_005db5e0
 * calls 005d51f0 FUN_005d51f0
 * calls 005dbed0 FUN_005dbed0
 * calls 005d59f0 FUN_005d59f0
 * calls 00770060 FUN_00770060
 * calls 005fe660 FUN_005fe660
 * calls 00423900 FUN_00423900
 */

void FUN_00611700(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined1 auStack_c [12];
  
  if (param_2 != 0) {
    piVar1 = (int *)FUN_005dbed0(param_1 + -1);
    if (((*piVar1 != 0) &&
        (iVar2 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*piVar1), iVar2 != 0)) &&
       (piVar1 = *(int **)(iVar2 + 4), piVar1 != (int *)0x0)) {
      piVar3 = (int *)FUN_005d59f0(&LAB_00403700);
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 100))();
        FUN_005db5e0(auStack_c);
        uStack_18 = *(undefined4 *)(param_2 + 0x68);
        uStack_14 = *(undefined4 *)(param_2 + 0x6c);
        uStack_10 = *(undefined4 *)(param_2 + 0x70);
        FUN_00423900(auStack_c,&uStack_18);
        (**(code **)(*piVar3 + 0x48))();
        FUN_00770060();
      }
      iVar2 = (**(code **)(*piVar1 + 0x20))();
      if (DAT_0092d884 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *DAT_0092d87c;
      }
      if (iVar2 == iVar4) {
        FUN_005fe660(param_2);
      }
    }
  }
  return;
}

