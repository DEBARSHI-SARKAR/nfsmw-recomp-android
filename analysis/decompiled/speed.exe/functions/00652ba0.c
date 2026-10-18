/* speed.exe 00652ba0 FUN_00652ba0; analysis pseudocode, not buildable source.
 * calls 00652ba0 FUN_00652ba0
 */

float * __thiscall FUN_00652ba0(undefined4 *param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  
  switch(*param_1) {
  case 0:
    *(undefined1 *)param_2 = *(undefined1 *)param_1[1];
    *(undefined1 *)param_1[1] = *(undefined1 *)(param_1 + 2);
    return param_2 + 1;
  case 1:
    *(undefined2 *)param_2 = *(undefined2 *)param_1[1];
    *(undefined2 *)param_1[1] = *(undefined2 *)(param_1 + 2);
    return param_2 + 1;
  case 2:
  case 3:
    *param_2 = *(float *)param_1[1];
    *(undefined4 *)param_1[1] = param_1[2];
    return param_2 + 1;
  case 4:
    fVar3 = (float)(*(code *)param_1[1])(1,param_1[2]);
    *param_2 = fVar3;
    return param_2 + 1;
  case 5:
    fVar5 = (float10)(*(code *)param_1[1])(1,param_1[2]);
    *param_2 = (float)fVar5;
    return param_2 + 1;
  case 6:
    piVar4 = (int *)param_1[1];
    iVar2 = *piVar4;
    break;
  default:
    return param_2;
  }
  while (iVar2 != 7) {
    param_2 = (float *)FUN_00652ba0(param_2);
    piVar1 = piVar4 + 3;
    piVar4 = piVar4 + 3;
    iVar2 = *piVar1;
  }
  return param_2;
}

