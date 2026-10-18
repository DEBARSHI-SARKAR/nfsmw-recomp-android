/* speed.exe 0070aca0 FUN_0070aca0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0070aca0(int *param_1)

{
  int *piVar1;
  float10 fVar2;
  int unaff_retaddr;
  
  (**(code **)(*param_1 + 0xc))(0x14d);
  if (DAT_0092d884 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = (int *)*DAT_0092d87c;
  }
  (**(code **)(*piVar1 + 4))();
  piVar1 = (int *)FUN_005d59f0(&LAB_00403700);
  if (piVar1 == (int *)0x0) {
    param_1[0x11] = 0x43200000;
  }
  else {
    fVar2 = (float10)(**(code **)(*piVar1 + 0x74))();
    param_1[0x11] = (int)(float)(fVar2 * (float10)_DAT_008967e0);
  }
  param_1[6] = DAT_00925ae8;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = *(int *)(unaff_retaddr + 0x10);
  return;
}

