/* speed.exe 00729b20 FUN_00729b20; analysis pseudocode, not buildable source.
 * calls 007244f0 FUN_007244f0
 * calls 0045f9f0 FUN_0045f9f0
 * calls 007247e0 FUN_007247e0
 */

int * __thiscall FUN_00729b20(int *param_1,undefined4 param_2,float *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  float10 fVar5;
  float local_4;
  
  piVar1 = (int *)*param_1;
  piVar4 = (int *)0x0;
  local_4 = 9999999.0;
  do {
    if (piVar1 == param_1) {
LAB_00729bd7:
      if (param_3 != (float *)0x0) {
        *param_3 = local_4;
      }
      return piVar4;
    }
    iVar3 = FUN_0045f9f0(piVar1 + 3,piVar1 + 5,param_2,0);
    if ((iVar3 != 0) && (cVar2 = FUN_007244f0(piVar1 + 9), cVar2 != '\0')) {
      iVar3 = *piVar1;
      piVar4 = (int *)piVar1[1];
      *piVar4 = iVar3;
      *(int **)(iVar3 + 4) = piVar4;
      iVar3 = *param_1;
      *param_1 = (int)piVar1;
      *(int **)(iVar3 + 4) = piVar1;
      local_4 = 0.0;
      piVar1[1] = (int)param_1;
      *piVar1 = iVar3;
      piVar4 = piVar1;
      goto LAB_00729bd7;
    }
    fVar5 = (float10)FUN_007247e0(param_2,local_4);
    if (((piVar4 == (int *)0x0) || (fVar5 < (float10)local_4)) ||
       ((fVar5 == (float10)local_4 && ((short)piVar1[2] < (short)piVar4[2])))) {
      local_4 = (float)fVar5;
      piVar4 = piVar1;
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}

