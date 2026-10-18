/* speed.exe 006c1010 FUN_006c1010; analysis pseudocode, not buildable source.
 * calls 006c6810 FUN_006c6810
 */

void __fastcall FUN_006c1010(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = DAT_00982bdc;
  (**(code **)(*DAT_00982bdc + 400))(DAT_00982bdc,0,*param_1,0,0x18);
  (**(code **)(*piVar3 + 0x1a0))(piVar3,param_1[1]);
  (**(code **)(*piVar3 + 0xe4))(piVar3,0x1b,1);
  if (*(char *)(param_1 + 7) != '\0') {
    FUN_006c6810(1,5,2);
  }
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xa8,7);
  uVar1 = param_1[6];
  uVar2 = param_1[5];
  if (uVar2 >> 1 != 0) {
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x100))(*(int **)(DAT_00982c80 + 0x48),0);
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x104))(*(int **)(DAT_00982c80 + 0x48));
    (**(code **)(*piVar3 + 0x148))(piVar3,4,0,param_1[6],param_1[5],(uVar1 >> 2) * 6,uVar2 >> 1);
    (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x108))(*(int **)(DAT_00982c80 + 0x48));
  }
  param_1[5] = 0;
  return;
}

