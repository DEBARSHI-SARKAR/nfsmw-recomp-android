/* speed.exe 004c1ad0 FUN_004c1ad0; analysis pseudocode, not buildable source.
 */

void FUN_004c1ad0(uint *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  uVar1 = *param_3;
  if (uVar1 < *param_2) {
    uVar2 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    *param_2 = uVar1;
    param_2[1] = uVar2;
  }
  uVar1 = *param_2;
  if (uVar1 < *param_1) {
    uVar2 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    *param_1 = uVar1;
    param_1[1] = uVar2;
  }
  return;
}

