/* speed.exe 0044cfe0 FUN_0044cfe0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 0044ae10 FUN_0044ae10
 */

void FUN_0044cfe0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = FUN_0044ae10();
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x10) != 0)) {
    puVar3 = &DAT_0090dba4;
    do {
      if (-1 < (int)puVar3[2]) {
        (**(code **)(*(int *)*puVar3 + 0x94))(0);
        piVar2 = (int *)FUN_005d59f0(&LAB_004039f0);
        if (piVar2 != (int *)0x0) {
          uStack_c = 0;
          uStack_8 = 0;
          uStack_4 = 0;
          (**(code **)(*piVar2 + 0x60))(&uStack_c);
          (**(code **)(*piVar2 + 100))(&stack0xfffffff0);
        }
        piVar2 = (int *)FUN_005d59f0(&LAB_00403f90);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x24))(0x3f800000);
          (**(code **)(*piVar2 + 0x18))(0);
          (**(code **)(*piVar2 + 0x1c))(0x3f800000);
        }
      }
      puVar3 = puVar3 + 4;
    } while ((int)puVar3 < 0x90dca4);
  }
  return;
}

