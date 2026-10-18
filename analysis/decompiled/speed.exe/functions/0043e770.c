/* speed.exe 0043e770 FUN_0043e770; analysis pseudocode, not buildable source.
 * calls 0041f130 FUN_0041f130
 * calls 00405a40 FUN_00405a40
 * calls 004023c0 FUN_004023c0
 * calls 00405b20 FUN_00405b20
 * calls 0065faf0 FUN_0065faf0
 * calls 0041f480 FUN_0041f480
 * calls 0041f650 FUN_0041f650
 * calls 0043dd30 FUN_0043dd30
 * calls 0041f2e0 FUN_0041f2e0
 */

void FUN_0043e770(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  piVar2 = (int *)(**(code **)(*param_1 + 0x44))();
  if (piVar2 == (int *)0x0) {
    return;
  }
  if (piVar2[0x1e] != 1) {
    return;
  }
  if (*piVar2 == 0) {
    cVar1 = FUN_0041f480(piVar2);
    if (cVar1 != '\x01') {
      return;
    }
    cVar1 = FUN_0041f650(param_1,piVar2);
    if (cVar1 != '\x01') {
      FUN_004023c0("ReqDenied");
      iVar3 = FUN_00405b20(0x40);
      *(int **)(iVar3 + 4) = param_1;
      FUN_0065faf0();
      return;
    }
    FUN_004023c0("Request");
    uVar4 = 0x40;
  }
  else {
    cVar1 = FUN_0041f130(piVar2);
    if (cVar1 != '\x01') {
      return;
    }
    if (*(int *)*piVar2 == 4) {
      iVar3 = (**(code **)(*param_1 + 0x3c))();
      if (iVar3 != 0) {
        return;
      }
      cVar1 = FUN_0043dd30(param_1,4,0,piVar2 + 2);
      if (cVar1 == '\0') {
        FUN_004023c0("Created");
        iVar3 = FUN_00405a40(0);
        *(int **)(iVar3 + 4) = param_1;
        FUN_0065faf0();
        return;
      }
      piVar2[0x1e] = 2;
      piVar2[0x1d] = *(int *)(*piVar2 + 8);
      FUN_004023c0("Created");
      iVar3 = FUN_00405a40(1);
      goto LAB_0043e8ac;
    }
    cVar1 = FUN_0041f2e0(param_1,piVar2);
    if (cVar1 == '\x01') {
      return;
    }
    FUN_004023c0("ReqDenied");
    uVar4 = 0x10;
  }
  iVar3 = FUN_00405b20(uVar4);
LAB_0043e8ac:
  *(int **)(iVar3 + 4) = param_1;
  FUN_0065faf0();
  return;
}

