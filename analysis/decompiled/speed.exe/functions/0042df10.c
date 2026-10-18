/* speed.exe 0042df10 FUN_0042df10; analysis pseudocode, not buildable source.
 * calls 0040fd20 FUN_0040fd20
 */

void FUN_0042df10(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  if ((param_1 != param_2) && (puVar4 = param_1 + 1, puVar4 != param_2)) {
    puVar3 = param_1 + 2;
    do {
      cVar2 = (*param_3)(*puVar4,*param_1);
      if (cVar2 == '\0') {
        cVar2 = (*param_3)(*puVar4,puVar3[-2]);
        puVar1 = puVar3 + -2;
        if (cVar2 != '\0') {
          do {
            puVar5 = puVar1;
            cVar2 = (*param_3)(*puVar4,puVar5[-1]);
            puVar1 = puVar5 + -1;
          } while (cVar2 != '\0');
          if ((puVar5 != puVar4) && (puVar4 != puVar3)) {
            FUN_0040fd20(puVar5,puVar4,puVar3,0,0);
          }
        }
      }
      else if ((param_1 != puVar4) && (puVar4 != puVar3)) {
        FUN_0040fd20(param_1,puVar4,puVar3,0,0);
      }
      puVar4 = puVar4 + 1;
      puVar3 = puVar3 + 1;
    } while (puVar4 != param_2);
  }
  return;
}

