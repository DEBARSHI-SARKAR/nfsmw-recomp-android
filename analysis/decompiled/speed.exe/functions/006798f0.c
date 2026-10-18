/* speed.exe 006798f0 FUN_006798f0; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006798f0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1[1];
  iVar2 = param_1[3];
  param_1[1] = iVar1 + 1;
  uVar3 = 0;
  if (iVar2 + -1 < iVar1 + 1) {
    param_1[1] = 0;
  }
  iVar1 = *param_1;
  *param_1 = iVar1 + 1;
  if (iVar2 < iVar1 + 1) {
    iVar1 = param_1[2];
    param_1[2] = iVar1 + 1;
    if (iVar2 + -1 < iVar1 + 1) {
      param_1[2] = 0;
    }
    *param_1 = iVar2;
  }
  param_1 = param_1 + param_1[1] * 0x42 + 4;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2 = param_2 + 2;
  do {
    param_1[uVar3 + 2] = *param_2;
    uVar3 = uVar3 + 1;
    param_2 = param_2 + 1;
  } while (uVar3 < 0x40);
  return;
}

