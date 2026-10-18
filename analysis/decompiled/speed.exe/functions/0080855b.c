/* speed.exe 0080855b FUN_0080855b; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0080855b(int param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *param_3;
  iVar4 = iVar3;
  if (iVar3 != -1) {
    do {
      iVar2 = iVar3;
      piVar1 = (int *)(param_2 + iVar2 * 0xc);
      iVar3 = iVar2;
      if (*(int *)(param_2 + 4 + param_1 * 0xc) <= piVar1[1]) break;
      iVar3 = *piVar1;
      iVar4 = iVar2;
    } while (iVar3 != -1);
  }
  if (iVar3 == *param_3) {
    *param_3 = param_1;
  }
  else {
    *(int *)(param_2 + iVar4 * 0xc) = param_1;
  }
  *(int *)(param_2 + param_1 * 0xc) = iVar3;
  return;
}

