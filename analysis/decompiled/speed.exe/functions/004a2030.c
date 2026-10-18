/* speed.exe 004a2030 FUN_004a2030; analysis pseudocode, not buildable source.
 * calls 00491360 FUN_00491360
 */

void __fastcall FUN_004a2030(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    if ((int *)piVar1[1] == (int *)0x0) {
      DAT_009117e4 = *piVar1;
    }
    else {
      *(int *)piVar1[1] = *piVar1;
    }
    if (*piVar1 != 0) {
      *(int *)(*piVar1 + 4) = piVar1[1];
    }
    if (piVar1[0x108] != 0) {
      (*(code *)PTR_FUN_008ee4d4)(piVar1[0x108],piVar1[4] << 2);
    }
    if (piVar1[0x109] != 0) {
      (*(code *)PTR_FUN_008ee4d4)(piVar1[0x109],piVar1[4]);
    }
    (*(code *)PTR_FUN_008ee4d4)(piVar1,0x430);
    *param_1 = 0;
  }
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}

