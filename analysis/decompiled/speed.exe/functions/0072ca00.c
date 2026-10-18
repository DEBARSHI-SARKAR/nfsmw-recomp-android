/* speed.exe 0072ca00 FUN_0072ca00; analysis pseudocode, not buildable source.
 * calls 007244f0 FUN_007244f0
 * calls 00729b20 FUN_00729b20
 * calls 0045f9f0 FUN_0045f9f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_0072ca00(int param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  
  fVar3 = param_2;
  piVar1 = (int *)(param_1 + 0x10);
  piVar7 = (int *)*piVar1;
  while( true ) {
    if (piVar7 == piVar1) {
      iVar6 = FUN_00729b20(fVar3,&param_2);
      if ((param_2 < _DAT_00890cd4) && (piVar7 = (int *)*piVar1, piVar7 != piVar1)) {
        do {
          if ((short)piVar7[3] == *(short *)(iVar6 + 8)) {
            return piVar7;
          }
          piVar7 = (int *)*piVar7;
        } while (piVar7 != piVar1);
      }
      return (int *)0x0;
    }
    iVar6 = piVar7[2];
    iVar5 = FUN_0045f9f0(iVar6 + 0xc,iVar6 + 0x14,fVar3,0);
    if ((iVar5 != 0) && (cVar4 = FUN_007244f0(iVar6 + 0x24), cVar4 != '\0')) break;
    piVar7 = (int *)*piVar7;
  }
  iVar6 = *piVar7;
  piVar2 = (int *)piVar7[1];
  *piVar2 = iVar6;
  *(int **)(iVar6 + 4) = piVar2;
  iVar6 = *piVar1;
  *piVar1 = (int)piVar7;
  *(int **)(iVar6 + 4) = piVar7;
  *piVar7 = iVar6;
  piVar7[1] = (int)piVar1;
  return piVar7;
}

