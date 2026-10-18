/* speed.exe 00423990 FUN_00423990; analysis pseudocode, not buildable source.
 * calls 005d59f0 FUN_005d59f0
 * calls 00418a50 FUN_00418a50
 */

void FUN_00423990(float *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  float local_c;
  float local_8;
  float local_4;
  
  iVar1 = FUN_005d59f0(&LAB_004039d0);
  if ((iVar1 != 0) && (piVar4 = (int *)**(int **)(param_3 + 4), piVar4 != *(int **)(param_3 + 4))) {
    do {
      iVar3 = piVar4[2];
      if ((*(int *)(iVar3 + 0x14) != 0) &&
         (((iVar2 = FUN_005d59f0(&LAB_004039d0), iVar2 != 0 && (*(int *)(iVar3 + 0x14) != 0)) &&
          (iVar3 = FUN_005d59f0(&LAB_004040e0), iVar3 != 0)))) {
        local_c = DAT_008a2fb4;
        local_8 = DAT_008a2fb8;
        local_4 = DAT_008a2fbc;
        FUN_00418a50(&local_c,iVar1,iVar2,param_4,param_5);
        *param_1 = local_c + *param_1;
        param_1[1] = local_8 + param_1[1];
        param_1[2] = local_4 + param_1[2];
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != (int *)*(int *)(param_3 + 4));
  }
  return;
}

