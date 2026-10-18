/* speed.exe 004d9c60 FUN_004d9c60; analysis pseudocode, not buildable source.
 * calls 004ae8b0 FUN_004ae8b0
 * calls 0045f340 FUN_0045f340
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __thiscall FUN_004d9c60(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  float10 fVar5;
  
  cVar3 = FUN_004ae8b0();
  if (cVar3 != '\0') {
    return (int *)0x0;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  do {
    if (iVar1 == 0) {
      piVar4 = *(int **)(param_1 + 0x10);
      for (piVar2 = piVar4; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
        if ((char)piVar2[0xe] == '\0') {
          return piVar2;
        }
      }
      if (piVar4 != (int *)0x0) {
        do {
          if (piVar4[0x14] <= *param_2) {
            (**(code **)(*piVar4 + 0x1c))();
            return piVar4;
          }
          piVar4 = (int *)piVar4[1];
        } while (piVar4 != (int *)0x0);
      }
      return (int *)0x0;
    }
    if (*(char *)(iVar1 + 0x38) != '\0') {
      fVar5 = (float10)FUN_0045f340(iVar1 + 0x60,param_2 + 4);
      if (fVar5 < (float10)_DAT_008933d4) {
        return (int *)0x0;
      }
      if (((param_2[8] != 0) && (param_2[8] == *(int *)(iVar1 + 0x70))) &&
         (*param_2 == *(int *)(iVar1 + 0x50))) {
        return (int *)0x0;
      }
    }
    iVar1 = *(int *)(iVar1 + 4);
  } while( true );
}

