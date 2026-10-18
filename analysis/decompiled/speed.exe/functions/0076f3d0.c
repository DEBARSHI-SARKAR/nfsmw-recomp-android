/* speed.exe 0076f3d0 FUN_0076f3d0; analysis pseudocode, not buildable source.
 * calls 005faa20 FUN_005faa20
 * calls 005d59f0 FUN_005d59f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0076f3d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_c [3];
  
  *(undefined4 *)(param_1 + 0x88) = 0x3f800000;
  if (*(int *)(param_1 + 0x84) != 0) {
    piVar1 = (int *)FUN_005d59f0(&LAB_004039d0);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x10))(local_c);
      *(undefined4 *)(param_1 + 0x88) = local_c[0];
    }
    if ((DAT_0091e000 != 0) && (*(int *)(DAT_0091e000 + 0x1968) != 0)) {
      iVar2 = FUN_005faa20();
      if (iVar2 == 2) {
        piVar1 = (int *)FUN_005d59f0(&LAB_004040e0);
        if (piVar1 != (int *)0x0) {
          piVar1 = (int *)(**(code **)(*piVar1 + 0x44))();
          if (DAT_0092c4f0 == *piVar1) {
            *(float *)(param_1 + 0x88) = *(float *)(param_1 + 0x88) + _DAT_00890d3c;
          }
        }
      }
    }
  }
  return;
}

