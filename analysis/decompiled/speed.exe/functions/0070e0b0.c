/* speed.exe 0070e0b0 FUN_0070e0b0; analysis pseudocode, not buildable source.
 * calls 00707200 FUN_00707200
 */

void FUN_0070e0b0(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *puVar4;
  
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar2 = puVar2 + 1, puVar2 != param_2) {
      cVar3 = (*param_3)(*puVar2,*param_1);
      if (cVar3 == '\0') {
        cVar3 = (*param_3)(*puVar2,puVar2[-1]);
        puVar1 = puVar2;
        if (cVar3 != '\0') {
          do {
            puVar4 = puVar1 + -1;
            cVar3 = (*param_3)(*puVar2,puVar1[-2]);
            puVar1 = puVar4;
          } while (cVar3 != '\0');
          if ((puVar4 != puVar2) && (puVar2 != puVar2 + 1)) {
            FUN_00707200(puVar4,puVar2,puVar2 + 1,0,0);
          }
        }
      }
      else if ((param_1 != puVar2) && (puVar2 != puVar2 + 1)) {
        FUN_00707200(param_1,puVar2,puVar2 + 1,0,0);
      }
    }
  }
  return;
}

