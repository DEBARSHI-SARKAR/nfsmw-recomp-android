/* speed.exe 00415db0 FUN_00415db0; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_00415db0(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  
  iVar1 = FUN_005d59f0(&LAB_00404060);
  if (iVar1 != 0) {
    DAT_0090d61c = 0;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 8))();
  iVar1 = (**(code **)(*piVar2 + 0x38))();
  if (iVar1 == 2) {
    (**(code **)(*param_1 + 0x9c))();
  }
  if ((undefined4 *)param_1[0x1b] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x1b])(1);
    param_1[0x1b] = 0;
  }
  param_1[0x1e] = DAT_0091ddbc;
  piVar2 = (int *)(**(code **)(*param_1 + 8))();
  (**(code **)(*piVar2 + 0x84))();
  piVar2 = (int *)FUN_005d59f0(&LAB_004038e0);
  if (piVar2 != (int *)0x0) {
    uVar3 = FUN_005cc240(0,extraout_ECX);
    (**(code **)(*piVar2 + 0x84))(uVar3);
  }
  return;
}

