/* speed.exe 005eb9e0 FUN_005eb9e0; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 */

void FUN_005eb9e0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((DAT_0092d884 == 0) || ((int *)*DAT_0092d87c == (int *)0x0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)*DAT_0092d87c + 4))();
  }
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_005d59f0(&LAB_00403700);
    if (piVar2 != (int *)0x0) {
      uVar3 = (**(code **)(*piVar2 + 0xa0))();
      goto LAB_005eba23;
    }
  }
  uVar3 = 0;
LAB_005eba23:
  *param_1 = uVar3;
  if (iVar1 != 0) {
    uVar3 = FUN_005d59f0(&LAB_004037e0);
    *param_2 = uVar3;
    return;
  }
  *param_2 = 0;
  return;
}

