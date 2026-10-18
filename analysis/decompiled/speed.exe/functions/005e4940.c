/* speed.exe 005e4940 FUN_005e4940; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 007c5250 _qsort
 */

size_t __thiscall FUN_005e4940(int param_1,int param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  size_t _NumOfElements;
  int *piVar5;
  int aiStack_640 [400];
  
  piVar4 = (int *)0x0;
  if ((param_3 != (int *)0x0) &&
     (piVar4 = (int *)(**(code **)(*param_3 + 4))(), piVar4 != (int *)0x0)) {
    (**(code **)(*piVar4 + 0x60))();
  }
  iVar3 = *(int *)(param_1 + 0x2c0);
  _NumOfElements = 0;
  if (iVar3 != 0) {
    piVar5 = *(int **)(param_1 + 0x2c4);
    do {
      bVar1 = *(byte *)(*piVar5 + 2);
      if (((bVar1 & 1) != 0) && ((bVar1 >> 1 & 1) != 0)) {
        aiStack_640[_NumOfElements * 2] = *piVar5;
        if (piVar4 == (int *)0x0) {
          iVar2 = 0;
        }
        else {
          iVar2 = FUN_007c4b80();
        }
        aiStack_640[_NumOfElements * 2 + 1] = iVar2;
        _NumOfElements = _NumOfElements + 1;
      }
      piVar5 = piVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  if (piVar4 != (int *)0x0) {
    _qsort(aiStack_640,_NumOfElements,8,(_PtFuncCompare *)&LAB_005ddb20);
  }
  iVar3 = 0;
  if (0 < (int)_NumOfElements) {
    do {
      *(int *)(param_2 + iVar3 * 4) = aiStack_640[iVar3 * 2];
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)_NumOfElements);
  }
  return _NumOfElements;
}

