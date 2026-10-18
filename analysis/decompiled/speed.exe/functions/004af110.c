/* speed.exe 004af110 FUN_004af110; analysis pseudocode, not buildable source.
 * calls 004d96b0 FUN_004d96b0
 * calls 004f3200 FUN_004f3200
 */

void FUN_004af110(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (DAT_008f86f8 != 0) {
    iVar2 = DAT_00911f90;
    switch(*(undefined4 *)(param_1 + 0x228)) {
    case 0:
      iVar2 = DAT_00911f68;
      break;
    case 1:
      iVar2 = DAT_00911f6c;
      break;
    case 2:
      iVar2 = DAT_00911f70;
      break;
    case 3:
      iVar2 = DAT_00911f74;
    }
    if ((iVar2 != 0) && (piVar1 = (int *)FUN_004d96b0(param_1), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x1c))();
    }
    FUN_004f3200(param_1);
  }
  return;
}

