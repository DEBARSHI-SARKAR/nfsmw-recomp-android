/* speed.exe 0067e540 FUN_0067e540; analysis pseudocode, not buildable source.
 * calls 0067b210 FUN_0067b210
 */

void FUN_0067e540(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar6 = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                     1);
  FUN_0067b210(param_2,puVar6,param_3 + -1,param_4);
  puVar7 = puVar6;
  while (((param_2 < puVar7 && (cVar4 = (*param_4)(puVar7[-1],*puVar7), cVar4 == '\0')) &&
         (cVar4 = (*param_4)(*puVar7,puVar7[-1]), cVar4 == '\0'))) {
    puVar7 = puVar7 + -1;
  }
  do {
    puVar6 = puVar6 + 1;
    puVar3 = puVar6;
    puVar5 = puVar7;
    if ((param_3 <= puVar6) || (cVar4 = (*param_4)(*puVar6,*puVar7), cVar4 != '\0')) break;
    cVar4 = (*param_4)(*puVar7,*puVar6);
  } while (cVar4 == '\0');
joined_r0x0067e5d4:
  do {
    if (param_3 <= puVar3) {
joined_r0x0067e614:
      for (; param_2 < puVar5; puVar5 = puVar5 + -1) {
        cVar4 = (*param_4)(puVar5[-1],*puVar7);
        if (cVar4 == '\0') {
          cVar4 = (*param_4)(*puVar7,puVar5[-1]);
          if (cVar4 != '\0') break;
          uVar2 = puVar7[-1];
          puVar7 = puVar7 + -1;
          *puVar7 = puVar5[-1];
          puVar5[-1] = uVar2;
        }
      }
      if (puVar5 == param_2) {
        if (puVar3 == param_3) {
          *param_1 = puVar7;
          param_1[1] = puVar6;
          return;
        }
        if (puVar6 != puVar3) {
          uVar2 = *puVar7;
          *puVar7 = *puVar6;
          *puVar6 = uVar2;
        }
        uVar2 = *puVar7;
        *puVar7 = *puVar3;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
        *puVar3 = uVar2;
        puVar3 = puVar3 + 1;
      }
      else {
        puVar5 = puVar5 + -1;
        if (puVar3 == param_3) {
          puVar7 = puVar7 + -1;
          if (puVar5 != puVar7) {
            uVar2 = *puVar5;
            *puVar5 = *puVar7;
            *puVar7 = uVar2;
          }
          puVar1 = puVar6 + -1;
          uVar2 = *puVar7;
          puVar6 = puVar6 + -1;
          *puVar7 = *puVar1;
          *puVar6 = uVar2;
        }
        else {
          uVar2 = *puVar3;
          *puVar3 = *puVar5;
          *puVar5 = uVar2;
          puVar3 = puVar3 + 1;
        }
      }
      goto joined_r0x0067e5d4;
    }
    cVar4 = (*param_4)(*puVar7,*puVar3);
    if (cVar4 == '\0') {
      cVar4 = (*param_4)(*puVar3,*puVar7);
      if (cVar4 != '\0') goto joined_r0x0067e614;
      uVar2 = *puVar6;
      *puVar6 = *puVar3;
      puVar6 = puVar6 + 1;
      *puVar3 = uVar2;
    }
    puVar3 = puVar3 + 1;
  } while( true );
}

