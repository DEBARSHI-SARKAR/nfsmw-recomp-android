/* speed.exe 005f9da0 FUN_005f9da0; analysis pseudocode, not buildable source.
 * calls 00609fe0 FUN_00609fe0
 * calls 005dd410 FUN_005dd410
 * calls 005ec5b0 FUN_005ec5b0
 * calls 005dd520 FUN_005dd520
 * calls 005f9d30 FUN_005f9d30
 * calls 00605a60 FUN_00605a60
 */

void __thiscall FUN_005f9da0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uStack_10;
  undefined1 auStack_4 [4];
  
  uVar5 = (**(code **)(*param_2 + 4))();
  uStack_10 = 0;
  bVar3 = false;
  piVar6 = (int *)FUN_005ec5b0(auStack_4,param_1 + 0x28);
  iVar1 = *piVar6;
  piVar6 = *(int **)(iVar1 + 0x14);
  if (piVar6 != *(int **)(iVar1 + 0x18)) {
    do {
      iVar2 = *piVar6;
      if (*(int *)(*(int *)(iVar2 + 0xc) + 4) == param_2[6]) {
        param_2[0xb] = param_1;
        param_2[0xc] = iVar2;
        cVar4 = FUN_005dd410(param_2);
        if (cVar4 != '\0') {
          FUN_00609fe0();
          if (!bVar3) {
            uStack_10 = FUN_005f9d30(uVar5);
            bVar3 = true;
          }
          FUN_005dd520(param_2);
        }
      }
      piVar6 = piVar6 + 1;
    } while (piVar6 != *(int **)(iVar1 + 0x18));
    if (bVar3) {
      FUN_00605a60(uVar5,uStack_10);
    }
  }
  return;
}

