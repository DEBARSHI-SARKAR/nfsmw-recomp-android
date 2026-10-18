/* speed.exe 004507c0 FUN_004507c0; analysis pseudocode, not buildable source.
 * calls 00446260 FUN_00446260
 * calls 0044ff50 FUN_0044ff50
 */

void __thiscall FUN_004507c0(int *param_1,int param_2)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  char cVar4;
  undefined4 uVar5;
  float10 fVar6;
  float10 fVar7;
  undefined1 *puVar8;
  undefined1 auStack_10 [16];
  
  cVar4 = (**(code **)(*param_1 + 0x1c))();
  if (cVar4 == '\0') {
    if (param_1[7] == 1) {
      FUN_0044ff50(0);
      return;
    }
  }
  else {
    if (DAT_0090da70 != 0) {
      puVar8 = auStack_10;
      uVar5 = (**(code **)*param_1)(puVar8);
      FUN_00446260(uVar5,puVar8);
    }
    for (piVar2 = (int *)param_1[6]; piVar2 != param_1 + 5; piVar2 = (int *)piVar2[1]) {
      (**(code **)(*(int *)piVar2[2] + 0x18))(param_1[9]);
    }
    iVar3 = *(int *)(*(int *)(param_1[4] + 0x10) + 0x18);
    if (iVar3 == 0) {
      fVar6 = (float10)(**(code **)(*param_1 + 0x28))();
      fVar7 = (float10)(**(code **)(*param_1 + 0x24))();
      if ((fVar7 < (float10)(float)fVar6) && (cVar4 = (**(code **)(*param_1 + 8))(), cVar4 != '\0'))
      {
        *(undefined1 *)(param_1 + 0x10) = 0;
      }
    }
    else if ((iVar3 == 2) || (iVar3 == 4)) {
      fVar6 = (float10)(**(code **)(*param_1 + 0x28))();
      fVar7 = (float10)(**(code **)(*param_1 + 0x24))();
      if (fVar7 < (float10)(float)fVar6) {
        (**(code **)(*param_1 + 8))();
      }
    }
    fVar1 = (float)param_1[9];
    param_1[9] = param_2;
    param_1[8] = (int)((float)param_1[8] + fVar1);
  }
  return;
}

