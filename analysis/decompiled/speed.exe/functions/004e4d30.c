/* speed.exe 004e4d30 FUN_004e4d30; analysis pseudocode, not buildable source.
 */

void FUN_004e4d30(int param_1,int param_2,int param_3,undefined4 param_4,code *param_5)

{
  char cVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(undefined4 *)(param_1 + param_2 * 4) = param_4;
    return;
  }
  do {
    iVar2 = (param_2 + -1) / 2;
    cVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar2 * 4),param_4);
    if (cVar1 == '\0') break;
    *(undefined4 *)(param_1 + param_2 * 4) = *(undefined4 *)(param_1 + iVar2 * 4);
    param_2 = iVar2;
  } while (param_3 < iVar2);
  *(undefined4 *)(param_1 + param_2 * 4) = param_4;
  return;
}

