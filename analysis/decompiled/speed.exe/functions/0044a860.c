/* speed.exe 0044a860 FUN_0044a860; analysis pseudocode, not buildable source.
 */

char __fastcall FUN_0044a860(int *param_1)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  int *piVar4;
  
  cVar3 = '\0';
  if (param_1[1] == 0) goto LAB_0044a874;
  piVar4 = (int *)(param_1[1] + -4);
  while( true ) {
    piVar2 = param_1;
    if (param_1 == (int *)0xfffffffc) {
      piVar2 = (int *)0x0;
    }
    if (piVar4 == piVar2) break;
    cVar1 = (**(code **)(*piVar4 + 0x18))();
    if (cVar3 == '\0') {
      cVar3 = cVar1;
    }
    if (piVar4[1] == 0) {
LAB_0044a874:
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(piVar4[1] + -4);
    }
  }
  return cVar3;
}

