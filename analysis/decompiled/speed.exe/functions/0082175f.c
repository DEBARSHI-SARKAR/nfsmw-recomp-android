/* speed.exe 0082175f FUN_0082175f; analysis pseudocode, not buildable source.
 * calls 0081eae9 FUN_0081eae9
 * calls 0082102a FUN_0082102a
 */

undefined4 FUN_0082175f(int param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  bVar1 = false;
  FUN_0082102a(param_1,param_2);
  param_1 = param_1 * 4;
  piVar2 = *(int **)(param_1 + DAT_009c22fc);
  piVar3 = (int *)*piVar2;
  if ((int *)*piVar2 == (int *)0x0) {
    if (piVar2 != param_2) goto LAB_008217cc;
    *(int *)(param_1 + DAT_009c22fc) = 0;
  }
  else {
    do {
      if (bVar1) goto LAB_008217c5;
      if (piVar2 == param_2) {
        piVar4 = *(int **)(DAT_009c22fc + param_1);
        if (piVar4 != (int *)0x0) {
          *(int *)(DAT_009c22fc + param_1) = *piVar4;
        }
LAB_008217aa:
        bVar1 = true;
        piVar4 = piVar3;
      }
      else {
        if (piVar3 == param_2) {
          *piVar2 = *piVar3;
          goto LAB_008217aa;
        }
        piVar4 = (int *)*piVar3;
        piVar2 = piVar3;
      }
      piVar3 = piVar4;
    } while (piVar4 != (int *)0x0);
    if (!bVar1) goto LAB_008217cc;
  }
LAB_008217c5:
  FUN_0081eae9(param_2);
LAB_008217cc:
  if (*(int *)(param_1 + DAT_009c22fc) == 0) {
    *(undefined4 *)(param_1 + DAT_009c2324) = 0;
    if (*(int *)(param_1 + DAT_009c22f4) != 0) {
      FUN_0081eae9(*(int *)(param_1 + DAT_009c22f4));
      *(undefined4 *)(param_1 + DAT_009c22f4) = 0;
    }
  }
  return 0;
}

