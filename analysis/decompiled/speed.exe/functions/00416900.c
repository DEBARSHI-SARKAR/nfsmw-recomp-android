/* speed.exe 00416900 FUN_00416900; analysis pseudocode, not buildable source.
 * calls 00770060 FUN_00770060
 * calls 005d59f0 FUN_005d59f0
 * calls 00409e60 FUN_00409e60
 */

void __fastcall FUN_00416900(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)(param_1 + -0x778);
  piVar2 = (int *)(**(code **)(*(int *)(param_1 + -0x778) + 8))();
  (**(code **)(*piVar2 + 0x2c))(0);
  piVar2 = (int *)FUN_005d59f0(&LAB_00403f80);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(0);
  }
  iVar3 = (**(code **)(*piVar1 + 100))();
  if (iVar3 != 0) {
    FUN_00409e60();
  }
  piVar2 = (int *)FUN_005d59f0(&LAB_004039e0);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x10))(0,0);
    (**(code **)(*piVar2 + 0xc))(1);
  }
  iVar3 = (**(code **)(*piVar1 + 0x48))();
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 0x78) = 2;
    *(undefined4 *)(iVar3 + 0x80) = 0;
    *(undefined1 *)(iVar3 + 0x51) = 0;
    FUN_00770060();
    (**(code **)(*piVar1 + 0x50))(2);
  }
  return;
}

