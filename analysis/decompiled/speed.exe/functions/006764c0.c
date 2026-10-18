/* speed.exe 006764c0 FUN_006764c0; analysis pseudocode, not buildable source.
 */

void FUN_006764c0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar3 = param_2 - (int)param_3;
    do {
      puVar1 = (undefined4 *)(param_2 + -8);
      param_2 = param_2 + -8;
      puVar2 = param_3 + -2;
      *puVar2 = *puVar1;
      param_3[-1] = *(undefined4 *)(iVar3 + 4 + (int)puVar2);
      param_3 = puVar2;
    } while (param_2 != param_1);
  }
  return;
}

