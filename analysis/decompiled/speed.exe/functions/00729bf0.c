/* speed.exe 00729bf0 FUN_00729bf0; analysis pseudocode, not buildable source.
 * calls 007244f0 FUN_007244f0
 * calls 00729b20 FUN_00729b20
 * calls 0045f9f0 FUN_0045f9f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_00729bf0(int *param_1,float param_2)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  
  fVar2 = param_2;
  piVar5 = (int *)*param_1;
  while( true ) {
    if (piVar5 == param_1) {
      piVar5 = (int *)FUN_00729b20(fVar2,&param_2);
      if (_DAT_00890cd4 <= param_2) {
        return (int *)0x0;
      }
      return piVar5;
    }
    iVar4 = FUN_0045f9f0(piVar5 + 3,piVar5 + 5,fVar2,0);
    if ((iVar4 != 0) && (cVar3 = FUN_007244f0(piVar5 + 9), cVar3 != '\0')) break;
    piVar5 = (int *)*piVar5;
  }
  iVar4 = *piVar5;
  piVar1 = (int *)piVar5[1];
  *piVar1 = iVar4;
  *(int **)(iVar4 + 4) = piVar1;
  iVar4 = *param_1;
  *param_1 = (int)piVar5;
  *(int **)(iVar4 + 4) = piVar5;
  piVar5[1] = (int)param_1;
  *piVar5 = iVar4;
  return piVar5;
}

